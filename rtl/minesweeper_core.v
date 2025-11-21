module minesweeper_core #(
    parameter BOARD_W    = 8,      // Board width (cells)
    parameter BOARD_H    = 8,      // Board height (cells)
    parameter NUM_MINES  = 10,     // Number of mines
    parameter BOARD_SIZE = BOARD_W * BOARD_H
)(
    input  wire        clk,
    input  wire        reset,

    // Command Interface (driven by Python/PyVerilator)
    input  wire        cmd_valid,  // Command strobe
    input  wire [1:0]  cmd,        // 1=reveal, 2=flag/unflag, 3=chord
    input  wire [2:0]  x,          // X coordinate (0-7)
    input  wire [2:0]  y,          // Y coordinate (0-7)

    // Game State Outputs (64-bit vectors for 8×8 board)
    output reg  [63:0] revealed,   // Bit-vector: 1=revealed, 0=hidden
    output reg  [63:0] flagged,    // Bit-vector: 1=flagged, 0=not flagged
    output reg  [63:0] mines,      // Bit-vector: 1=mine, 0=safe (for debug/endgame)

    output reg         game_over,  // 1=game lost (mine revealed)
    output reg         win         // 1=game won (all safe cells revealed)
);

    // ========================================================================
    //  HELPER FUNCTIONS
    // ========================================================================

    integer i;  // Loop variable for win check

    // Convert (x,y) coordinate to linear index [0..63]
    function integer idx;
        input [2:0] xx;
        input [2:0] yy;
        begin
            idx = yy * BOARD_W + xx;
        end
    endfunction

    // Count mines in the 8 neighbors around (xx, yy)
    function [3:0] count_neighbors;
        input [2:0] xx;
        input [2:0] yy;
        integer dx, dy, nx, ny, cnt;
        begin
            cnt = 0;
            for (dy = -1; dy <= 1; dy = dy + 1) begin
                for (dx = -1; dx <= 1; dx = dx + 1) begin
                    if (!(dx == 0 && dy == 0)) begin
                        nx = xx + dx;
                        ny = yy + dy;
                        // Check bounds
                        if (nx >= 0 && nx < BOARD_W && ny >= 0 && ny < BOARD_H) begin
                            if (mines[idx(nx, ny)])
                                cnt = cnt + 1;
                        end
                    end
                end
            end
            count_neighbors = cnt;
        end
    endfunction

    // ========================================================================
    //  LFSR PSEUDORANDOM NUMBER GENERATOR
    // ========================================================================
    // 32-bit LFSR with taps at positions 31 and 28
    // Generates pseudorandom sequence for mine placement

    reg [31:0] lfsr;

    always @(posedge clk or posedge reset) begin
        if (reset)
            lfsr <= 32'hACE1;  // Seed value (non-zero required)
        else
            lfsr <= {lfsr[30:0], lfsr[31] ^ lfsr[28]};  // Galois LFSR
    end

    // ========================================================================
    //  FIRST-CLICK SAFETY LOGIC
    // ========================================================================
    // The board does NOT place mines until the first reveal command.
    // This ensures the first click is always safe (classic Minesweeper rule).

    reg first_click;

    // Task: Generate mine layout, avoiding position (sx, sy)
    task generate_mines;
        input [2:0] sx;
        input [2:0] sy;
        integer pos, placed;
        begin
            mines  = 0;
            placed = 0;

            // Place NUM_MINES mines at random positions
            while (placed < NUM_MINES) begin
                pos = lfsr[5:0];  // Random index [0..63]

                // Ensure mine is not at first-click position and not duplicate
                if (pos < BOARD_SIZE && pos != idx(sx, sy) && !mines[pos]) begin
                    mines[pos] = 1;
                    placed = placed + 1;
                end

                // Advance LFSR to get next random number
                lfsr = {lfsr[30:0], lfsr[31] ^ lfsr[28]};
            end
        end
    endtask

    // ========================================================================
    //  FLOOD-FILL (ZERO EXPANSION) - BFS QUEUE
    // ========================================================================
    // When a cell with 0 neighbors is revealed, automatically reveal all
    // connected 0-neighbor cells using Breadth-First Search (BFS).
    //
    // Queue-based approach avoids recursion (hardware-friendly).

    reg [5:0] queue [0:63];  // Queue of cell indices to process
    reg [5:0] head, tail;    // Queue head and tail pointers
    reg       flood_active;  // Flood-fill in progress flag

    // ========================================================================
    //  CHORDING (AUTO-REVEAL NEIGHBORS)
    // ========================================================================
    // Classic Minesweeper feature: if a revealed numbered cell has the correct
    // number of flags around it, auto-reveal all non-flagged neighbors.
    //
    // This is typically triggered by middle-click or double-click on a number.

    task chord_neighbors;
        input [2:0] cx;
        input [2:0] cy;
        integer dx, dy, nx, ny, nid, flagcount;
        begin
            flagcount = 0;

            // Count flags in 8 neighbors
            for (dy = -1; dy <= 1; dy = dy + 1) begin
                for (dx = -1; dx <= 1; dx = dx + 1) begin
                    if (!(dx == 0 && dy == 0)) begin
                        nx = cx + dx;
                        ny = cy + dy;
                        if (nx >= 0 && nx < BOARD_W && ny >= 0 && ny < BOARD_H) begin
                            if (flagged[idx(nx, ny)])
                                flagcount = flagcount + 1;
                        end
                    end
                end
            end

            // If flag count matches mine count, reveal all unflagged neighbors
            if (flagcount == count_neighbors(cx, cy)) begin
                for (dy = -1; dy <= 1; dy = dy + 1) begin
                    for (dx = -1; dx <= 1; dx = dx + 1) begin
                        if (!(dx == 0 && dy == 0)) begin
                            nx = cx + dx;
                            ny = cy + dy;
                            if (nx >= 0 && nx < BOARD_W && ny >= 0 && ny < BOARD_H) begin
                                if (!flagged[idx(nx, ny)] && !revealed[idx(nx, ny)])
                                    reveal_cell(nx, ny);
                            end
                        end
                    end
                end
            end
        end
    endtask

    // ========================================================================
    //  REVEAL CELL LOGIC
    // ========================================================================
    // Reveals a single cell at (rx, ry).
    // If the cell is a mine, triggers game over.
    // If the cell has 0 neighbors, initiates flood-fill.
    //
    // Note: Refactored to avoid 'disable' statement (not supported by Verilator)

    task reveal_cell;
        input [2:0] rx;
        input [2:0] ry;
        integer id;
        begin
            id = idx(rx, ry);

            // Only proceed if cell can be revealed
            if (!revealed[id] && !flagged[id] && !game_over) begin
                // Mark cell as revealed
                revealed[id] = 1;

                // Check if mine
                if (mines[id]) begin
                    game_over = 1;
                end
                else begin
                    // If cell has 0 neighboring mines, start flood-fill
                    if (count_neighbors(rx, ry) == 0) begin
                        queue[0] = id;
                        head = 0;
                        tail = 1;
                        flood_active = 1;
                    end
                end
            end
        end
    endtask

    // ========================================================================
    //  MAIN STATE MACHINE
    // ========================================================================

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // Reset all game state
            revealed     <= 0;
            flagged      <= 0;
            mines        <= 0;
            game_over    <= 0;
            win          <= 0;
            head         <= 0;
            tail         <= 0;
            flood_active <= 0;
            first_click  <= 1;
        end
        else begin
            // ================================================================
            //  COMMAND PROCESSING
            // ================================================================
            if (cmd_valid && !game_over && !win) begin

                // COMMAND 1: REVEAL CELL
                if (cmd == 1) begin
                    // If first click, generate mine layout (avoiding this cell)
                    if (first_click) begin
                        generate_mines(x, y);
                        first_click <= 0;
                    end
                    reveal_cell(x, y);
                end

                // COMMAND 2: FLAG / UNFLAG CELL
                if (cmd == 2) begin
                    // Can only flag unrevealed cells
                    if (!revealed[idx(x, y)])
                        flagged[idx(x, y)] <= ~flagged[idx(x, y)];
                end

                // COMMAND 3: CHORD (auto-reveal neighbors)
                if (cmd == 3) begin
                    // Can only chord on revealed cells
                    if (revealed[idx(x, y)])
                        chord_neighbors(x, y);
                end
            end

            // ================================================================
            //  FLOOD-FILL BFS PROCESSING
            // ================================================================
            // Process one cell from queue per clock cycle (or batch if needed)
            if (flood_active) begin
                if (head < tail) begin
                    reg [5:0] id;
                    reg [2:0] cx, cy;
                    integer dx, dy, nx, ny, nid;

                    // Dequeue cell
                    id = queue[head];
                    head = head + 1;

                    // Convert index back to (x, y)
                    cx = id % BOARD_W;
                    cy = id / BOARD_W;

                    // Process all 8 neighbors
                    for (dy = -1; dy <= 1; dy = dy + 1) begin
                        for (dx = -1; dx <= 1; dx = dx + 1) begin
                            if (!(dx == 0 && dy == 0)) begin
                                nx = cx + dx;
                                ny = cy + dy;

                                if (nx >= 0 && nx < BOARD_W && ny >= 0 && ny < BOARD_H) begin
                                    nid = idx(nx, ny);

                                    // Reveal neighbor if not already revealed/flagged/mine
                                    if (!revealed[nid] && !flagged[nid] && !mines[nid]) begin
                                        revealed[nid] = 1;

                                        // If neighbor also has 0 mines, add to queue
                                        if (count_neighbors(nx, ny) == 0) begin
                                            queue[tail] = nid;
                                            tail = tail + 1;
                                        end
                                    end
                                end
                            end
                        end
                    end
                end
                else begin
                    // Queue empty, flood-fill complete
                    flood_active = 0;
                end
            end

            // ================================================================
            //  WIN CONDITION CHECK
            // ================================================================
            // Win if all non-mine cells are revealed
            begin
                integer safe, totalm;
                safe = 0;
                totalm = 0;

                for (i = 0; i < BOARD_SIZE; i = i + 1) begin
                    if (mines[i])
                        totalm = totalm + 1;
                    if (!mines[i] && revealed[i])
                        safe = safe + 1;
                end

                // All safe cells revealed = WIN
                if (safe == (BOARD_SIZE - totalm))
                    win <= 1;
            end
        end
    end

endmodule
