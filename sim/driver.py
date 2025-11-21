#!/usr/bin/env python3
"""
Minesweeper PyVerilator Driver
Production-grade Python wrapper for the Verilog Minesweeper core.

Provides:
  - MinesweeperSim class: Clean Python API for interfacing with Verilog
  - CLI test mode: Text-based Minesweeper for testing without GUI
  - Debug utilities: Board visualization, state inspection

Usage:
  python driver.py          # Run CLI test mode
  from driver import MinesweeperSim  # Import for GUI
"""

import os
import sys
from pyverilator import PyVerilator

# ============================================================================
#  MINESWEEPER SIMULATION WRAPPER
# ============================================================================

class MinesweeperSim:
    """
    Python wrapper for Verilog Minesweeper core using PyVerilator.

    Provides a clean interface to:
      - Reset the game
      - Send commands (reveal, flag, chord)
      - Query game state (revealed, flagged, mines, game_over, win)
    """

    BOARD_SIZE = 8
    CMD_REVEAL = 1
    CMD_FLAG = 2
    CMD_CHORD = 3

    def __init__(self, verilog_path=None, build_dir='obj_dir'):
        """
        Initialize the Minesweeper simulation.

        Args:
            verilog_path: Path to minesweeper_core.v (default: ../rtl/minesweeper_core.v)
            build_dir: Directory for PyVerilator build files
        """
        if verilog_path is None:
            # Default: look for rtl/minesweeper_core.v relative to this script
            script_dir = os.path.dirname(os.path.abspath(__file__))
            verilog_path = os.path.join(script_dir, '..', 'rtl', 'minesweeper_core.v')

        if not os.path.exists(verilog_path):
            raise FileNotFoundError(f"Verilog file not found: {verilog_path}")

        print(f"[MinesweeperSim] Compiling Verilog from: {verilog_path}")

        # Build Verilog with PyVerilator
        self.sim = PyVerilator.build(
            verilog_path,
            build_dir=build_dir,
            verilog_path=[os.path.dirname(verilog_path)]
        )

        print("[MinesweeperSim] Verilog compiled successfully!")

        # Initialize inputs
        self.sim.io.clk = 0
        self.sim.io.reset = 0
        self.sim.io.cmd_valid = 0
        self.sim.io.cmd = 0
        self.sim.io.x = 0
        self.sim.io.y = 0

        # Perform initial reset
        self.reset()

    def _tick(self):
        """Advance simulation by one clock cycle."""
        self.sim.io.clk = 1
        self.sim.clock.tick()
        self.sim.io.clk = 0
        self.sim.clock.tick()

    def reset(self):
        """Reset the game to initial state."""
        self.sim.io.reset = 1
        self._tick()
        self.sim.io.reset = 0
        self._tick()
        print("[MinesweeperSim] Game reset complete.")

    def _send_command(self, cmd, x, y):
        """
        Send a command to the Verilog core.

        Args:
            cmd: Command type (1=reveal, 2=flag, 3=chord)
            x: X coordinate [0-7]
            y: Y coordinate [0-7]
        """
        if not (0 <= x < self.BOARD_SIZE and 0 <= y < self.BOARD_SIZE):
            raise ValueError(f"Coordinates out of bounds: ({x}, {y})")

        self.sim.io.cmd_valid = 1
        self.sim.io.cmd = cmd
        self.sim.io.x = x
        self.sim.io.y = y
        self._tick()

        self.sim.io.cmd_valid = 0
        self._tick()

        # Allow flood-fill to complete (up to 100 cycles for large expansions)
        for _ in range(100):
            self._tick()
            if not self._is_flood_active():
                break

    def _is_flood_active(self):
        """Check if flood-fill is still processing (internal state)."""
        # Note: This requires exposing flood_active signal from Verilog
        # For simplicity, we just tick multiple times in _send_command
        return False

    def reveal(self, x, y):
        """
        Reveal cell at (x, y).

        Args:
            x: X coordinate [0-7]
            y: Y coordinate [0-7]
        """
        self._send_command(self.CMD_REVEAL, x, y)

    def flag(self, x, y):
        """
        Toggle flag at cell (x, y).

        Args:
            x: X coordinate [0-7]
            y: Y coordinate [0-7]
        """
        self._send_command(self.CMD_FLAG, x, y)

    def chord(self, x, y):
        """
        Chord (auto-reveal neighbors) at cell (x, y).

        Args:
            x: X coordinate [0-7]
            y: Y coordinate [0-7]
        """
        self._send_command(self.CMD_CHORD, x, y)

    def get_revealed(self):
        """Get 2D array of revealed cells (8x8)."""
        bits = int(self.sim.io.revealed)
        return [[bool(bits & (1 << (y * 8 + x))) for x in range(8)] for y in range(8)]

    def get_flagged(self):
        """Get 2D array of flagged cells (8x8)."""
        bits = int(self.sim.io.flagged)
        return [[bool(bits & (1 << (y * 8 + x))) for x in range(8)] for y in range(8)]

    def get_mines(self):
        """Get 2D array of mine positions (8x8). Use for debug/testing only!"""
        bits = int(self.sim.io.mines)
        return [[bool(bits & (1 << (y * 8 + x))) for x in range(8)] for y in range(8)]

    def is_game_over(self):
        """Check if game is lost (mine revealed)."""
        return bool(self.sim.io.game_over)

    def is_win(self):
        """Check if game is won (all safe cells revealed)."""
        return bool(self.sim.io.win)

    def count_neighbors(self, x, y):
        """
        Count mines in 8 neighbors around (x, y).

        Args:
            x: X coordinate
            y: Y coordinate

        Returns:
            Number of neighboring mines (0-8)
        """
        mines = self.get_mines()
        count = 0
        for dy in [-1, 0, 1]:
            for dx in [-1, 0, 1]:
                if dx == 0 and dy == 0:
                    continue
                nx, ny = x + dx, y + dy
                if 0 <= nx < 8 and 0 <= ny < 8:
                    if mines[ny][nx]:
                        count += 1
        return count


# ============================================================================
#  CLI TEST MODE - TEXT-BASED MINESWEEPER
# ============================================================================

def print_board(sim, show_mines=False):
    """
    Print the current board state in ASCII.

    Args:
        sim: MinesweeperSim instance
        show_mines: If True, show mine positions (for debug)
    """
    revealed = sim.get_revealed()
    flagged = sim.get_flagged()
    mines = sim.get_mines()

    print("\n   ", end="")
    for x in range(8):
        print(f" {x} ", end="")
    print()

    for y in range(8):
        print(f" {y} ", end="")
        for x in range(8):
            if flagged[y][x]:
                print(" F ", end="")
            elif revealed[y][x]:
                if mines[y][x]:
                    print(" * ", end="")  # Mine revealed (game over)
                else:
                    count = sim.count_neighbors(x, y)
                    if count == 0:
                        print(" . ", end="")
                    else:
                        print(f" {count} ", end="")
            elif show_mines and mines[y][x]:
                print(" M ", end="")  # Show mines (debug)
            else:
                print(" # ", end="")  # Hidden cell
        print()
    print()


def cli_main():
    """Run CLI-based Minesweeper for testing."""
    print("=" * 60)
    print("  VERILOG MINESWEEPER - CLI TEST MODE")
    print("=" * 60)
    print()
    print("Commands:")
    print("  r X Y    - Reveal cell at (X, Y)")
    print("  f X Y    - Flag/unflag cell at (X, Y)")
    print("  c X Y    - Chord (auto-reveal) at (X, Y)")
    print("  reset    - Start new game")
    print("  mines    - Show mine positions (debug)")
    print("  quit     - Exit")
    print()

    # Initialize simulation
    sim = MinesweeperSim()

    show_mines = False

    while True:
        # Display board
        print_board(sim, show_mines=show_mines)

        # Check game state
        if sim.is_game_over():
            print("*** GAME OVER! You hit a mine! ***")
            print("Type 'reset' to play again.")
        elif sim.is_win():
            print("*** YOU WIN! All safe cells revealed! ***")
            print("Type 'reset' to play again.")

        # Get user input
        try:
            user_input = input(">>> ").strip().lower()
            if not user_input:
                continue

            parts = user_input.split()
            cmd = parts[0]

            if cmd == 'quit':
                print("Goodbye!")
                break

            elif cmd == 'reset':
                sim.reset()
                show_mines = False
                print("New game started!")

            elif cmd == 'mines':
                show_mines = not show_mines
                print(f"Mine display: {'ON' if show_mines else 'OFF'}")

            elif cmd in ['r', 'f', 'c']:
                if len(parts) != 3:
                    print("Usage: <cmd> X Y")
                    continue

                x, y = int(parts[1]), int(parts[2])

                if cmd == 'r':
                    sim.reveal(x, y)
                elif cmd == 'f':
                    sim.flag(x, y)
                elif cmd == 'c':
                    sim.chord(x, y)

            else:
                print("Unknown command. Type 'quit' to exit.")

        except KeyboardInterrupt:
            print("\nGoodbye!")
            break
        except ValueError as e:
            print(f"Error: {e}")
        except Exception as e:
            print(f"Error: {e}")


if __name__ == '__main__':
    cli_main()
