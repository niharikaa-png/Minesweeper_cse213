# Verilog Minesweeper Architecture Documentation

This document provides a detailed technical explanation of the Verilog Minesweeper implementation, including block diagrams, signal flows, and design rationale.

---

## Table of Contents

1. [System Overview](#1-system-overview)
2. [Verilog Core Architecture](#2-verilog-core-architecture)
3. [LFSR Random Number Generator](#3-lfsr-random-number-generator)
4. [First-Click Safety Mechanism](#4-first-click-safety-mechanism)
5. [Flood-Fill (BFS Queue)](#5-flood-fill-bfs-queue)
6. [Chording Logic](#6-chording-logic)
7. [Win/Lose Detection](#7-winlose-detection)
8. [PyVerilator Integration](#8-pyverilator-integration)
9. [GUI Event Flow](#9-gui-event-flow)
10. [Viva Notes](#10-viva-notes)

---

## 1. System Overview

### High-Level Architecture

```
┌──────────────────────────────────────────────────────────────────┐
│                         USER INTERFACE                           │
│                    (Tkinter GUI - gui.py)                        │
│                                                                  │
│  • 8×8 grid of interactive cells                                 │
│  • Mouse event handlers (left/right/middle click)                │
│  • Visual rendering (colors, numbers, flags, mines)              │
│  • Timer and mine counter display                                │
└────────────────────────┬─────────────────────────────────────────┘
                         │
                         │ Python function calls
                         │ (reveal, flag, chord)
                         ▼
┌──────────────────────────────────────────────────────────────────┐
│                    PYTHON DRIVER LAYER                           │
│                  (PyVerilator - driver.py)                       │
│                                                                  │
│  • MinesweeperSim class: clean Python API                        │
│  • Compiles Verilog using Verilator                              │
│  • Manages simulation clock (clk)                                │
│  • Translates Python calls to Verilog signals                    │
│  • Reads Verilog outputs and converts to Python data structures  │
└────────────────────────┬─────────────────────────────────────────┘
                         │
                         │ Signal-level interface:
                         │ • Inputs: clk, reset, cmd_valid, cmd, x, y
                         │ • Outputs: revealed, flagged, mines, game_over, win
                         ▼
┌──────────────────────────────────────────────────────────────────┐
│                      VERILOG RTL CORE                            │
│               (minesweeper_core.v - Hardware Logic)              │
│                                                                  │
│  ┌────────────────────────────────────────────────────────────┐ │
│  │  1. LFSR Random Generator (32-bit Galois LFSR)             │ │
│  │     → Generates pseudorandom mine positions                 │ │
│  └────────────────────────────────────────────────────────────┘ │
│                                                                  │
│  ┌────────────────────────────────────────────────────────────┐ │
│  │  2. First-Click Safety Controller                          │ │
│  │     → Defers mine placement until first reveal              │ │
│  └────────────────────────────────────────────────────────────┘ │
│                                                                  │
│  ┌────────────────────────────────────────────────────────────┐ │
│  │  3. Command Decoder                                        │ │
│  │     → Processes cmd_valid, cmd, x, y inputs                 │ │
│  │     → Routes to: reveal_cell, flag logic, or chord_neighbors│ │
│  └────────────────────────────────────────────────────────────┘ │
│                                                                  │
│  ┌────────────────────────────────────────────────────────────┐ │
│  │  4. Flood-Fill BFS Queue                                   │ │
│  │     → 64-entry queue for zero-expansion                     │ │
│  │     → Breadth-first traversal of connected zero cells       │ │
│  └────────────────────────────────────────────────────────────┘ │
│                                                                  │
│  ┌────────────────────────────────────────────────────────────┐ │
│  │  5. Chording Logic                                         │ │
│  │     → Counts flags around cell                              │ │
│  │     → Auto-reveals neighbors if count matches               │ │
│  └────────────────────────────────────────────────────────────┘ │
│                                                                  │
│  ┌────────────────────────────────────────────────────────────┐ │
│  │  6. Win/Lose Checker                                       │ │
│  │     → Continuously monitors revealed vs. safe cells         │ │
│  │     → Detects mine reveal (game_over)                       │ │
│  └────────────────────────────────────────────────────────────┘ │
│                                                                  │
│  State Registers:                                                │
│  • revealed[63:0]  : Bit-vector of revealed cells                │
│  • flagged[63:0]   : Bit-vector of flagged cells                 │
│  • mines[63:0]     : Bit-vector of mine positions                │
│  • game_over       : Game lost flag                              │
│  • win             : Game won flag                               │
└──────────────────────────────────────────────────────────────────┘
```

### Signal Interface

| Signal       | Direction | Width | Description                                    |
|--------------|-----------|-------|------------------------------------------------|
| `clk`        | Input     | 1     | Clock signal                                   |
| `reset`      | Input     | 1     | Synchronous reset (active high)                |
| `cmd_valid`  | Input     | 1     | Command strobe (1 = execute command)           |
| `cmd`        | Input     | 2     | Command type (1=reveal, 2=flag, 3=chord)       |
| `x`          | Input     | 3     | X coordinate [0-7]                             |
| `y`          | Input     | 3     | Y coordinate [0-7]                             |
| `revealed`   | Output    | 64    | Bit-vector: 1=revealed, 0=hidden               |
| `flagged`    | Output    | 64    | Bit-vector: 1=flagged, 0=not flagged           |
| `mines`      | Output    | 64    | Bit-vector: 1=mine, 0=safe                     |
| `game_over`  | Output    | 1     | 1=game lost (mine revealed)                    |
| `win`        | Output    | 1     | 1=game won (all safe cells revealed)           |

**Index Mapping:**
- Cell at (x, y) maps to bit index: `idx = y * 8 + x`
- Example: Cell (3, 2) → index 19 → `revealed[19]`

---

## 2. Verilog Core Architecture

### Module Parameters

```verilog
module minesweeper_core #(
    parameter BOARD_W    = 8,      // Board width
    parameter BOARD_H    = 8,      // Board height
    parameter NUM_MINES  = 10,     // Number of mines
    parameter BOARD_SIZE = BOARD_W * BOARD_H
)
```

**Default Configuration:** 8×8 board with 10 mines (Beginner difficulty)

### State Registers

```verilog
reg [63:0] revealed;      // 1 = cell revealed
reg [63:0] flagged;       // 1 = cell flagged
reg [63:0] mines;         // 1 = mine present
reg        game_over;     // 1 = game lost
reg        win;           // 1 = game won
reg        first_click;   // 1 = waiting for first click
```

### Helper Functions

#### 1. `idx(xx, yy)` - Coordinate to Index Conversion

```verilog
function integer idx(input [2:0] xx, input [2:0] yy);
    idx = yy * BOARD_W + xx;
endfunction
```

**Purpose:** Convert (x, y) coordinate to linear bit index [0..63]

**Example:**
- `idx(0, 0)` → 0 (top-left corner)
- `idx(7, 7)` → 63 (bottom-right corner)
- `idx(3, 2)` → 19 (3rd column, 2nd row)

#### 2. `count_neighbors(xx, yy)` - Mine Counting

```verilog
function [3:0] count_neighbors(input [2:0] xx, input [2:0] yy);
    // Iterates over 8 neighbors (dx, dy ∈ {-1, 0, 1})
    // Counts mines in valid neighbors (bounds-checked)
    // Returns count [0..8]
endfunction
```

**Purpose:** Count mines in the 8 cells surrounding (xx, yy)

**Algorithm:**
1. Loop over offsets: dx, dy ∈ {-1, 0, 1}
2. Skip center cell (dx=0, dy=0)
3. Check bounds: nx ∈ [0, 7], ny ∈ [0, 7]
4. If `mines[idx(nx, ny)]` = 1, increment counter
5. Return total count

---

## 3. LFSR Random Number Generator

### Galois LFSR Implementation

```verilog
reg [31:0] lfsr;

always @(posedge clk or posedge reset) begin
    if (reset)
        lfsr <= 32'hACE1;  // Non-zero seed
    else
        lfsr <= {lfsr[30:0], lfsr[31] ^ lfsr[28]};  // Feedback polynomial
end
```

### Block Diagram

```
        ┌─────────────────────────────────────────────────┐
        │             32-bit LFSR Register                │
        │  [31][30][29]...[28][27]...[2][1][0]            │
        └──┬──────────────────┬───────────────────────┬───┘
           │                  │                       │
           │                  │                       │
           ▼                  ▼                       │
         ┌───┐              ┌───┐                    │
  ┌──────┤XOR◄──────────────┤   │                    │
  │      └───┘              └───┘                    │
  │        ▲                                          │
  │        │                                          │
  │    Taps: bit[31] ⊕ bit[28]                       │
  │                                                   │
  └───────────────────────────────────────────────────┘
         Feedback bit shifted into LSB
```

### Why LFSR?

1. **Pseudorandom Sequence:**
   - Generates deterministic but unpredictable bit patterns
   - Full period: 2³² - 1 (never repeats until 4 billion cycles)

2. **Hardware Efficiency:**
   - Only 2 XOR gates + 32 flip-flops
   - Single-cycle operation
   - No division or modulo operations

3. **Mine Placement:**
   - Extract bits [5:0] → random index [0..63]
   - Use to select mine positions
   - Advance LFSR if position invalid (already mined or first-click cell)

### Seed Value

```verilog
lfsr <= 32'hACE1;  // Hex: 0xACE1 (44257 decimal)
```

**Note:** Seed must be **non-zero** (LFSR with all-zero state gets stuck). Different seeds produce different mine layouts.

---

## 4. First-Click Safety Mechanism

### Problem

In classic Windows Minesweeper, the **first click is always safe**. This requires:
1. Deferring mine placement until after the first reveal
2. Ensuring the first clicked cell is not a mine

### Solution: Lazy Mine Generation

#### State Machine

```
┌───────────────┐
│  RESET STATE  │
│ first_click=1 │
│   mines = 0   │
└───────┬───────┘
        │
        │ User clicks cell (x0, y0)
        │ cmd_valid=1, cmd=1 (reveal)
        ▼
┌────────────────────────────────────┐
│  MINE GENERATION                   │
│  generate_mines(x0, y0)            │
│  • Place NUM_MINES random mines    │
│  • Avoid position idx(x0, y0)      │
│  • first_click ← 0                 │
└────────────────┬───────────────────┘
                 │
                 │ Mines placed
                 ▼
┌────────────────────────────────────┐
│  NORMAL GAMEPLAY                   │
│  • All future reveals use          │
│    existing mine layout            │
│  • first_click remains 0           │
└────────────────────────────────────┘
```

### `generate_mines` Task

```verilog
task generate_mines(input [2:0] sx, input [2:0] sy);
    integer pos, placed;
    begin
        mines  = 0;
        placed = 0;

        while (placed < NUM_MINES) begin
            pos = lfsr[5:0];  // Random index [0..63]

            // Avoid first-click position and duplicates
            if (pos < BOARD_SIZE && pos != idx(sx, sy) && !mines[pos]) begin
                mines[pos] = 1;
                placed = placed + 1;
            end

            // Advance LFSR for next random number
            lfsr = {lfsr[30:0], lfsr[31] ^ lfsr[28]};
        end
    end
endtask
```

### Key Features

1. **Deferred Generation:** Mines array stays at 0 until first reveal
2. **Position Exclusion:** `pos != idx(sx, sy)` ensures safe first click
3. **Duplicate Prevention:** `!mines[pos]` prevents overwriting existing mines
4. **LFSR Advancement:** Manually advance LFSR in loop for fresh random values

---

## 5. Flood-Fill (BFS Queue)

### Problem

When a cell with **zero neighboring mines** is revealed, Minesweeper automatically reveals all connected zero cells. This is called **flood-fill** or **zero expansion**.

**Naive Approach (Recursion):**
```
reveal_cell(x, y):
    if count_neighbors(x, y) == 0:
        for each neighbor (nx, ny):
            reveal_cell(nx, ny)  // Recursive call
```

**Problem:** Recursion is not synthesizable in hardware!

### Solution: BFS Queue

Use a **queue** to track cells to process, implementing **breadth-first search (BFS)**.

#### Data Structures

```verilog
reg [5:0] queue [0:63];  // Queue of cell indices
reg [5:0] head;          // Queue head pointer
reg [5:0] tail;          // Queue tail pointer
reg       flood_active;  // Flood-fill in progress
```

#### Algorithm

```
1. User reveals cell (x, y)
2. If count_neighbors(x, y) == 0:
     queue[0] ← idx(x, y)
     head ← 0
     tail ← 1
     flood_active ← 1

3. While flood_active:
     If head < tail:
         id ← queue[head]
         head ← head + 1

         For each neighbor of id:
             If not revealed, not flagged, not mine:
                 revealed[neighbor] ← 1

                 If neighbor has 0 mine neighbors:
                     queue[tail] ← neighbor
                     tail ← tail + 1
     Else:
         flood_active ← 0  // Queue empty
```

#### Block Diagram

```
┌──────────────────────────────────────────────────────────┐
│                     BFS QUEUE                            │
│  ┌────┬────┬────┬────┬────┬────┬────┬────┬───┬────┐     │
│  │ 12 │ 13 │ 14 │ 20 │ 21 │ 22 │ .. │ .. │..│ .. │     │
│  └────┴────┴────┴────┴────┴────┴────┴────┴───┴────┘     │
│    ▲                                       ▲              │
│    │                                       │              │
│   head (dequeue)                       tail (enqueue)     │
│                                                           │
│  Process one cell per clock cycle:                       │
│  1. Dequeue cell at head                                 │
│  2. Check 8 neighbors                                    │
│  3. Reveal + enqueue if 0 neighbors                      │
│  4. Increment head                                       │
│  5. Repeat until head == tail (queue empty)              │
└──────────────────────────────────────────────────────────┘
```

#### Example Execution

**Scenario:** User reveals cell (3, 3) with 0 neighbors

```
Initial:
  revealed[(3,3)] = 1
  queue[0] = idx(3,3) = 27
  head = 0, tail = 1

Cycle 1:
  Dequeue cell 27 (3, 3)
  Check 8 neighbors: (2,2), (3,2), (4,2), (2,3), (4,3), (2,4), (3,4), (4,4)
  Reveal all safe neighbors
  If any have 0 neighbors, enqueue them
  → Suppose (2,3) and (4,3) are zeros
  queue[1] = idx(2,3) = 26
  queue[2] = idx(4,3) = 28
  head = 1, tail = 3

Cycle 2:
  Dequeue cell 26 (2, 3)
  Check neighbors, reveal, enqueue more zeros
  ...

Continue until head == tail (queue empty)
```

### Why BFS Over DFS?

| Feature              | BFS (Queue)       | DFS (Recursion)     |
|----------------------|-------------------|---------------------|
| Hardware-friendly    | ✅ Yes            | ❌ No (recursion)   |
| Memory usage         | O(board size)     | O(depth)            |
| Synthesizable        | ✅ Yes            | ❌ No               |
| Expansion pattern    | Concentric layers | One branch at a time|

---

## 6. Chording Logic

### What is Chording?

**Chording** (also called **auto-reveal**) is a classic Minesweeper feature:

- If a **revealed numbered cell** has the **correct number of flags** around it
- **Auto-reveal all unflagged neighbors**

**Example:**
```
    # # #
    # 2 #
    # F F

Cell (1,1) shows "2" (2 neighboring mines)
Two neighbors are flagged
→ Chord at (1,1) reveals the 3 unflagged neighbors
```

### Implementation

#### Task: `chord_neighbors(cx, cy)`

```verilog
task chord_neighbors(input [2:0] cx, input [2:0] cy);
    integer dx, dy, nx, ny, nid, flagcount;
    begin
        flagcount = 0;

        // Step 1: Count flags in 8 neighbors
        for (dy = -1; dy <= 1; dy = dy + 1)
        for (dx = -1; dx <= 1; dx = dx + 1)
            if (!(dx == 0 && dy == 0))
                if (in_bounds(cx+dx, cy+dy))
                    if (flagged[idx(nx, ny)])
                        flagcount = flagcount + 1;

        // Step 2: If flags match mine count, reveal all unflagged
        if (flagcount == count_neighbors(cx, cy))
            for (dy = -1; dy <= 1; dy = dy + 1)
            for (dx = -1; dx <= 1; dx = dx + 1)
                if (!(dx == 0 && dy == 0))
                    if (in_bounds(cx+dx, cy+dy))
                        if (!flagged[idx(nx,ny)] && !revealed[idx(nx,ny)])
                            reveal_cell(nx, ny);
    end
endtask
```

### Trigger Condition

```verilog
if (cmd == 3 && revealed[idx(x, y)])
    chord_neighbors(x, y);
```

**Requirements:**
1. Command is chord (cmd=3)
2. Target cell must be **already revealed**
3. Typically triggered by:
   - Middle mouse button
   - Shift + Left-click
   - Double-click (GUI dependent)

### Why Chording?

- **Speed:** Quickly reveal large areas without clicking each cell
- **Safety:** Only works if flags are correct (matches mine count)
- **Classic Feature:** Present in all Windows Minesweeper versions

---

## 7. Win/Lose Detection

### Lose Condition

**Game Over:** User reveals a cell containing a mine

```verilog
task reveal_cell(input [2:0] rx, input [2:0] ry);
    integer id;
    begin
        id = idx(rx, ry);
        revealed[id] = 1;

        if (mines[id]) begin
            game_over = 1;      // Set lose flag
            disable reveal_cell; // Stop further processing
        end
        // ...
    end
endtask
```

**Result:**
- `game_over` output goes high
- Python driver detects this and disables further commands
- GUI reveals all mine positions and shows "Game Over"

### Win Condition

**Win:** All non-mine cells are revealed

```verilog
// Continuously check in always block
integer safe, totalm;
safe = 0;
totalm = 0;

for (i = 0; i < BOARD_SIZE; i = i + 1) begin
    if (mines[i])
        totalm = totalm + 1;          // Count total mines
    if (!mines[i] && revealed[i])
        safe = safe + 1;              // Count revealed safe cells
end

if (safe == (BOARD_SIZE - totalm))
    win <= 1;                          // All safe cells revealed
```

**Calculation:**
- Total cells = 64 (8×8)
- Total mines = 10
- Safe cells = 64 - 10 = 54
- **Win when:** `safe == 54`

**Result:**
- `win` output goes high
- Python driver detects this
- GUI shows "You Win!" dialog

---

## 8. PyVerilator Integration

### Compilation Flow

```
┌────────────────────┐
│  Verilog Source    │
│  (.v files)        │
└─────────┬──────────┘
          │
          ▼
┌────────────────────┐
│   Verilator        │
│  (Verilog → C++)   │
└─────────┬──────────┘
          │
          ▼
┌────────────────────┐
│  C++ Simulation    │
│  Model (.cpp/.h)   │
└─────────┬──────────┘
          │
          ▼
┌────────────────────┐
│   PyVerilator      │
│  (Python wrapper)  │
└─────────┬──────────┘
          │
          ▼
┌────────────────────┐
│  Python Objects    │
│  (sim.io.signal)   │
└────────────────────┘
```

### PyVerilator API

#### Initialization

```python
from pyverilator import PyVerilator

sim = PyVerilator.build(
    'minesweeper_core.v',
    build_dir='obj_dir',
    verilog_path=['rtl/']
)
```

#### Signal Access

**Inputs:**
```python
sim.io.clk = 1
sim.io.reset = 1
sim.io.cmd_valid = 1
sim.io.cmd = 1
sim.io.x = 3
sim.io.y = 4
```

**Outputs:**
```python
revealed_bits = int(sim.io.revealed)  # 64-bit integer
game_over = bool(sim.io.game_over)    # Boolean
```

#### Clock Tick

```python
def tick():
    sim.io.clk = 1
    sim.clock.tick()  # Positive edge
    sim.io.clk = 0
    sim.clock.tick()  # Negative edge
```

### MinesweeperSim Wrapper

**Purpose:** Provide clean Python API that hides PyVerilator details

```python
class MinesweeperSim:
    def reveal(self, x, y):
        self.sim.io.cmd_valid = 1
        self.sim.io.cmd = 1
        self.sim.io.x = x
        self.sim.io.y = y
        self._tick()
        self.sim.io.cmd_valid = 0
        # Process flood-fill (multiple ticks)
        for _ in range(100):
            self._tick()

    def get_revealed(self):
        bits = int(self.sim.io.revealed)
        return [[bool(bits & (1 << (y*8+x))) for x in range(8)] for y in range(8)]
```

**Benefits:**
- GUI code doesn't need to know about signals or clock ticks
- Clean interface: `sim.reveal(3, 4)` instead of signal manipulation
- Abstracts 64-bit vectors into 2D arrays

---

## 9. GUI Event Flow

### Event Loop Architecture

```
┌──────────────────────────────────────────────────────────┐
│                    TKINTER EVENT LOOP                    │
└──────────────────────┬───────────────────────────────────┘
                       │
      ┌────────────────┼────────────────┐
      │                │                │
      ▼                ▼                ▼
┌──────────┐    ┌──────────┐    ┌──────────┐
│Left-Click│    │Right-Click│   │Middle-Clk│
│  Reveal  │    │   Flag    │   │  Chord   │
└────┬─────┘    └────┬──────┘   └────┬─────┘
     │               │               │
     └───────────────┼───────────────┘
                     │
                     ▼
         ┌───────────────────────┐
         │  Event Handler        │
         │  on_left_click(x,y)   │
         │  on_right_click(x,y)  │
         │  on_middle_click(x,y) │
         └───────────┬───────────┘
                     │
                     ▼
         ┌───────────────────────┐
         │  MinesweeperSim API   │
         │  sim.reveal(x, y)     │
         │  sim.flag(x, y)       │
         │  sim.chord(x, y)      │
         └───────────┬───────────┘
                     │
                     ▼
         ┌───────────────────────┐
         │  PyVerilator Layer    │
         │  Signal manipulation  │
         │  Clock ticks          │
         └───────────┬───────────┘
                     │
                     ▼
         ┌───────────────────────┐
         │  Verilog Simulation   │
         │  (Verilator C++ model)│
         └───────────┬───────────┘
                     │
                     ▼
         ┌───────────────────────┐
         │  Read Outputs         │
         │  revealed, flagged,   │
         │  mines, game_over, win│
         └───────────┬───────────┘
                     │
                     ▼
         ┌───────────────────────┐
         │  Update GUI Display   │
         │  - Change cell colors │
         │  - Show numbers       │
         │  - Update counters    │
         └───────────────────────┘
```

### Click Handler Example

```python
def on_left_click(self, x, y):
    if not self.game_active:
        return  # Ignore clicks if game over

    # Start timer on first click
    if self.first_click:
        self.start_time = time.time()
        self.first_click = False

    # Send reveal command
    self.sim.reveal(x, y)

    # Update display
    self._update_display()

    # Check win/lose
    self._check_game_state()
```

### Display Update

```python
def _update_display(self):
    revealed = self.sim.get_revealed()
    flagged = self.sim.get_flagged()

    for y in range(8):
        for x in range(8):
            cell = self.cells[y][x]

            if flagged[y][x]:
                cell.config(text='🚩', bg=CELL_HIDDEN_BG)
            elif revealed[y][x]:
                if mines[y][x]:
                    cell.config(text='💣', bg=CELL_MINE_BG)
                else:
                    count = self.sim.count_neighbors(x, y)
                    cell.config(
                        text=str(count) if count > 0 else '',
                        bg=CELL_REVEALED_BG,
                        fg=NUMBER_COLORS[count]
                    )
            else:
                cell.config(text='', bg=CELL_HIDDEN_BG)
```

---

## 10. Viva Notes

### Explaining to Non-Hardware Audience

#### **What is this project?**

"This is a hardware implementation of the classic Minesweeper game using Verilog, a hardware description language. Instead of writing software code that runs on a CPU, I described the game logic as digital circuits that could theoretically be built in silicon. I then used PyVerilator to simulate this hardware and built a Python GUI to interact with it."

#### **Why implement Minesweeper in Verilog?**

"This project demonstrates:
1. How complex algorithms (random generation, graph traversal) can be expressed in hardware
2. The interface between hardware (Verilog) and software (Python)
3. That game logic doesn't always need a CPU—it can be pure hardware"

#### **What's the advantage of hardware implementation?**

"In theory:
- **Parallelism:** Multiple cells can be processed simultaneously
- **Deterministic timing:** Every operation takes a fixed number of clock cycles
- **Low power:** Custom hardware is more power-efficient than general-purpose CPUs
- **Learning:** Great way to understand both hardware and software design"

### Key Technical Challenges

#### 1. **First-Click Safety**

**Challenge:** Ensuring first click never hits a mine

**Solution:** Defer mine placement until after first reveal
- Mines array stays zero until `first_click` is false
- `generate_mines` task avoids first-click position
- Matches classic Windows Minesweeper behavior

#### 2. **Flood-Fill Without Recursion**

**Challenge:** Hardware can't do recursion

**Solution:** Queue-based BFS
- 64-entry queue holds cell indices to process
- Breadth-first traversal processes one cell per cycle
- Hardware-friendly: fixed memory, no stack

#### 3. **Pseudorandom Mine Placement**

**Challenge:** Need randomness without true random hardware

**Solution:** LFSR (Linear Feedback Shift Register)
- 32-bit Galois LFSR with taps at [31, 28]
- Deterministic but appears random
- Hardware-efficient: 2 XOR gates + register

### Block Diagram Description (For Drawing)

**Main Diagram:**

```
[Python GUI (Tkinter)]
         ↓ (function calls)
[PyVerilator Wrapper]
         ↓ (signals: cmd_valid, cmd, x, y)
[Verilog Core]
    ├─ LFSR (random generator)
    ├─ First-click controller
    ├─ Command decoder
    ├─ BFS flood-fill queue
    ├─ Chording logic
    └─ Win/lose checker
         ↓ (outputs: revealed, flagged, mines, game_over, win)
[PyVerilator Wrapper]
         ↓ (2D arrays)
[Python GUI] → Display update
```

**State Machine Diagram:**

```
[RESET] → first_click=1, mines=0
   ↓
[WAIT FOR FIRST CLICK] → User reveals (x,y)
   ↓
[GENERATE MINES] → Place 10 mines, avoid (x,y)
   ↓
[GAMEPLAY LOOP]
   ├─ Reveal cells
   ├─ Flag cells
   ├─ Chord cells
   ├─ Check win/lose
   └─ [GAME OVER or WIN]
```

---

## Conclusion

This architecture demonstrates a complete hardware-software co-design system:

1. **Verilog core** handles all game logic in hardware
2. **PyVerilator** bridges hardware simulation to Python
3. **Python GUI** provides user-friendly interface

The design is modular, well-documented, and ready for demonstration in university vivas or project showcases.

---

**Questions for Viva Preparation:**

1. **Why use a queue for flood-fill instead of recursion?**
   - Recursion is not synthesizable in hardware. A queue provides the same BFS behavior with fixed memory.

2. **How does the LFSR generate random numbers?**
   - It's a shift register with XOR feedback. On each clock, it shifts left and inserts a new bit computed from taps at positions 31 and 28.

3. **What happens if a user tries to reveal a flagged cell?**
   - The Verilog checks `if (flagged[id])` and exits early—flagged cells cannot be revealed.

4. **Can this design be synthesized for an FPGA?**
   - Almost! The main issue is using blocking assignments in tasks and `while` loops in `generate_mines`. With minor refactoring (multi-cycle state machine), it could be FPGA-ready.

5. **How is the win condition checked?**
   - Every clock cycle, the core counts revealed safe cells. If `safe_count == (total_cells - total_mines)`, the `win` signal goes high.

---

**End of Architecture Documentation**
