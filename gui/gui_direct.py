#!/usr/bin/env python3
"""Minesweeper Tkinter GUI"""

import sys
import os
import tkinter as tk
from tkinter import messagebox
import time

# Add sim directory to path
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'sim'))
from driver_verilator_direct import MinesweeperSim

# Constants and colors
CELL_SIZE = 40
BOARD_SIZE = 8
NUM_MINES = 10

# Classic Minesweeper number colors
NUMBER_COLORS = {
    0: '',
    1: '#0000FF',  # Blue
    2: '#008000',  # Green
    3: '#FF0000',  # Red
    4: '#000080',  # Dark blue
    5: '#800000',  # Maroon
    6: '#008080',  # Teal
    7: '#000000',  # Black
    8: '#808080',  # Gray
}

CELL_HIDDEN_BG = '#C0C0C0'
CELL_REVEALED_BG = '#FFFFFF'
CELL_MINE_BG = '#FF0000'
CELL_FLAG_BG = '#FFA500'


class MinesweeperGUI:
    """Tkinter-based GUI for Verilog Minesweeper."""

    def __init__(self, master):
        self.master = master
        self.master.title("Verilog Minesweeper (Direct Verilator)")
        self.master.resizable(False, False)

        # Initialize Verilog simulation
        print("Initializing Verilog simulation...")
        self.sim = MinesweeperSim()
        print("Simulation ready!")

        # Game state
        self.start_time = None
        self.game_active = True
        self.first_click = True

        # Create UI components
        self._create_widgets()
        self._update_display()

    def _create_widgets(self):
        """Create all GUI widgets."""

        # Top panel
        top_frame = tk.Frame(self.master, bg='#C0C0C0', relief=tk.SUNKEN, bd=3)
        top_frame.pack(padx=10, pady=10, fill=tk.X)

        # Mine counter
        self.mine_counter_label = tk.Label(
            top_frame,
            text=f"{NUM_MINES:03d}",
            font=('Courier', 20, 'bold'),
            bg='#000000',
            fg='#FF0000',
            width=3
        )
        self.mine_counter_label.pack(side=tk.LEFT, padx=10)

        # Reset button
        self.reset_button = tk.Button(
            top_frame,
            text="🙂",
            font=('Arial', 24),
            command=self.reset_game,
            width=2,
            height=1
        )
        self.reset_button.pack(side=tk.LEFT, expand=True, padx=10)

        # Timer
        self.timer_label = tk.Label(
            top_frame,
            text="000",
            font=('Courier', 20, 'bold'),
            bg='#000000',
            fg='#FF0000',
            width=3
        )
        self.timer_label.pack(side=tk.RIGHT, padx=10)

        # Game board
        board_frame = tk.Frame(self.master, bg='#808080', relief=tk.SUNKEN, bd=3)
        board_frame.pack(padx=10, pady=10)

        # Create 8x8 grid
        self.cells = []
        for y in range(BOARD_SIZE):
            row = []
            for x in range(BOARD_SIZE):
                cell = tk.Label(
                    board_frame,
                    text='',
                    width=3,
                    height=1,
                    font=('Arial', 16, 'bold'),
                    bg=CELL_HIDDEN_BG,
                    relief=tk.RAISED,
                    bd=2
                )
                cell.grid(row=y, column=x, padx=1, pady=1)

                # Bind mouse events
                cell.bind('<Button-1>', lambda e, x=x, y=y: self.on_left_click(x, y))
                cell.bind('<Button-3>', lambda e, x=x, y=y: self.on_right_click(x, y))
                cell.bind('<Button-2>', lambda e, x=x, y=y: self.on_middle_click(x, y))
                cell.bind('<Shift-Button-1>', lambda e, x=x, y=y: self.on_middle_click(x, y))

                row.append(cell)
            self.cells.append(row)

        # Start timer update loop
        self._update_timer()

    def _update_timer(self):
        """Update the timer display."""
        if self.game_active and self.start_time is not None:
            elapsed = int(time.time() - self.start_time)
            self.timer_label.config(text=f"{min(elapsed, 999):03d}")

        self.master.after(100, self._update_timer)

    def _update_display(self):
        """Refresh the board display."""
        revealed = self.sim.get_revealed()
        flagged = self.sim.get_flagged()
        mines = self.sim.get_mines()

        # Update mine counter
        flag_count = sum(sum(row) for row in flagged)
        self.mine_counter_label.config(text=f"{max(0, NUM_MINES - flag_count):03d}")

        for y in range(BOARD_SIZE):
            for x in range(BOARD_SIZE):
                cell = self.cells[y][x]

                if flagged[y][x]:
                    cell.config(
                        text='🚩',
                        bg=CELL_HIDDEN_BG,
                        fg='black',
                        relief=tk.RAISED
                    )
                elif revealed[y][x]:
                    cell.config(relief=tk.SUNKEN, bd=1)

                    if mines[y][x]:
                        cell.config(text='💣', bg=CELL_MINE_BG, fg='black')
                    else:
                        count = self.sim.count_neighbors(x, y)
                        if count == 0:
                            cell.config(text='', bg=CELL_REVEALED_BG)
                        else:
                            cell.config(
                                text=str(count),
                                bg=CELL_REVEALED_BG,
                                fg=NUMBER_COLORS.get(count, 'black')
                            )
                else:
                    cell.config(text='', bg=CELL_HIDDEN_BG, relief=tk.RAISED, bd=2)

    def on_left_click(self, x, y):
        """Handle left-click (reveal)."""
        if not self.game_active:
            return

        if self.first_click:
            self.start_time = time.time()
            self.first_click = False

        try:
            self.sim.reveal(x, y)
            self._update_display()
            self._check_game_state()
        except Exception as e:
            print(f"Error: {e}")

    def on_right_click(self, x, y):
        """Handle right-click (flag)."""
        if not self.game_active:
            return

        try:
            self.sim.flag(x, y)
            self._update_display()
        except Exception as e:
            print(f"Error: {e}")

    def on_middle_click(self, x, y):
        """Handle middle-click (chord)."""
        if not self.game_active:
            return

        try:
            self.sim.chord(x, y)
            self._update_display()
            self._check_game_state()
        except Exception as e:
            print(f"Error: {e}")

    def _check_game_state(self):
        """Check win/lose conditions."""
        if self.sim.is_game_over():
            self.game_active = False
            self.reset_button.config(text="😵")
            self._reveal_all_mines()
            messagebox.showinfo("Game Over", "You hit a mine!\n\nClick the smiley to play again.")

        elif self.sim.is_win():
            self.game_active = False
            self.reset_button.config(text="😎")
            elapsed = int(time.time() - self.start_time) if self.start_time else 0
            messagebox.showinfo(
                "You Win!",
                f"Congratulations!\n\nYou won in {elapsed} seconds!"
            )

    def _reveal_all_mines(self):
        """Reveal all mines on game over."""
        mines = self.sim.get_mines()
        for y in range(BOARD_SIZE):
            for x in range(BOARD_SIZE):
                if mines[y][x]:
                    self.cells[y][x].config(
                        text='💣',
                        bg=CELL_MINE_BG,
                        relief=tk.SUNKEN
                    )

    def reset_game(self):
        """Reset the game."""
        self.sim.reset()
        self.game_active = True
        self.first_click = True
        self.start_time = None
        self.reset_button.config(text="🙂")
        self.timer_label.config(text="000")
        self._update_display()
        print("Game reset!")


def main():
    """Launch the Minesweeper GUI."""
    root = tk.Tk()
    app = MinesweeperGUI(root)
    root.mainloop()


if __name__ == '__main__':
    main()
