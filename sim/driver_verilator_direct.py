#!/usr/bin/env python3
"""Minesweeper Verilator driver using direct C++ compilation and ctypes."""

import os
import sys
import subprocess
import ctypes
from pathlib import Path

class VerilatorSim:
    """
    Direct Verilator simulation wrapper using C++ shared library.
    """

    def __init__(self, verilog_path, module_name='minesweeper_core', build_dir='obj_dir_direct'):
        self.verilog_path = Path(verilog_path)
        self.module_name = module_name
        self.build_dir = Path(build_dir)

        if not self.verilog_path.exists():
            raise FileNotFoundError(f"Verilog file not found: {verilog_path}")

        # Create C++ wrapper and compile
        self._generate_cpp_wrapper()
        self._compile()
        self._load_library()

    def _generate_cpp_wrapper(self):
        """Generate C++ wrapper for ctypes interface."""
        print(f"Generating Verilator model...")

        # Run Verilator to generate C++ model
        verilator_cmd = [
            'verilator',
            '--cc',                    # Generate C++ output
            '--build',                 # Build the model
            '-Wno-fatal',              # Don't treat warnings as fatal
            '-Wno-lint',               # Disable lint warnings
            '--Mdir', str(self.build_dir),  # Output directory
            str(self.verilog_path)
        ]

        try:
            result = subprocess.run(verilator_cmd, capture_output=True, text=True, check=True)
            print(f"Verilator compilation successful!")
        except subprocess.CalledProcessError as e:
            print(f"Verilator compilation failed!")
            print(f"STDOUT:\n{e.stdout}")
            print(f"STDERR:\n{e.stderr}")
            raise

        # Generate ctypes wrapper C++ file
        wrapper_cpp = self.build_dir / 'verilator_wrapper.cpp'
        wrapper_content = self._get_wrapper_cpp_code()
        wrapper_cpp.write_text(wrapper_content)
        print(f"Generated C++ wrapper: {wrapper_cpp}")

    def _get_wrapper_cpp_code(self):
        """Generate C++ wrapper code for ctypes interface."""
        return f'''
#include "V{self.module_name}.h"
#include "verilated.h"
#include <cstdint>

// Required by Verilator - simulation time tracking
double sc_time_stamp() {{
    return 0;  // Not using SystemC timing
}}

// Global simulation object
static V{self.module_name}* top = nullptr;
static VerilatedContext* contextp = nullptr;

extern "C" {{

// Initialize simulation
void sim_init() {{
    contextp = new VerilatedContext;
    top = new V{self.module_name}(contextp);
}}

// Cleanup simulation
void sim_cleanup() {{
    if (top) delete top;
    if (contextp) delete contextp;
    top = nullptr;
    contextp = nullptr;
}}

// Evaluate (propagate signals)
void sim_eval() {{
    if (top) top->eval();
}}

// Input setters
void sim_set_clk(uint8_t val) {{ if (top) top->clk = val; }}
void sim_set_reset(uint8_t val) {{ if (top) top->reset = val; }}
void sim_set_cmd_valid(uint8_t val) {{ if (top) top->cmd_valid = val; }}
void sim_set_cmd(uint8_t val) {{ if (top) top->cmd = val; }}
void sim_set_x(uint8_t val) {{ if (top) top->x = val; }}
void sim_set_y(uint8_t val) {{ if (top) top->y = val; }}

// Output getters
uint64_t sim_get_revealed() {{ return top ? top->revealed : 0; }}
uint64_t sim_get_flagged() {{ return top ? top->flagged : 0; }}
uint64_t sim_get_mines() {{ return top ? top->mines : 0; }}
uint8_t sim_get_game_over() {{ return top ? top->game_over : 0; }}
uint8_t sim_get_win() {{ return top ? top->win : 0; }}

}}
'''

    def _compile(self):
        """Compile C++ wrapper into shared library."""
        print(f"Compiling C++ wrapper...")

        # Get Verilator include path
        verilator_include = subprocess.run(
            ['verilator', '--getenv', 'VERILATOR_ROOT'],
            capture_output=True, text=True, check=True
        ).stdout.strip()

        wrapper_cpp = self.build_dir / 'verilator_wrapper.cpp'

        # Platform-specific shared library extension
        import platform
        if platform.system() == 'Darwin':  # macOS
            lib_ext = '.dylib'
        elif platform.system() == 'Windows':
            lib_ext = '.dll'
        else:  # Linux
            lib_ext = '.so'

        self.lib_path = self.build_dir / f'libverilator_wrapper{lib_ext}'

        # Verilator runtime sources (required for linking)
        verilator_sources = [
            f'{verilator_include}/include/verilated.cpp',
            f'{verilator_include}/include/verilated_threads.cpp',
        ]

        # Compile command - include Verilator runtime sources
        compile_cmd = [
            'g++',
            '-shared',
            '-fPIC',
            '-std=c++14',
            '-O2',
            f'-I{verilator_include}/include',
            f'-I{self.build_dir}',
            str(wrapper_cpp),
        ] + verilator_sources + [
            str(self.build_dir / f'V{self.module_name}__ALL.a'),
            '-o', str(self.lib_path)
        ]

        try:
            result = subprocess.run(compile_cmd, capture_output=True, text=True, check=True)
            print(f"Compilation successful: {self.lib_path}")
        except subprocess.CalledProcessError as e:
            print(f"C++ compilation failed!")
            print(f"Command: {' '.join(compile_cmd)}")
            print(f"STDOUT:\n{e.stdout}")
            print(f"STDERR:\n{e.stderr}")
            raise

    def _load_library(self):
        """Load compiled shared library."""
        print(f"Loading shared library...")
        self.lib = ctypes.CDLL(str(self.lib_path))

        # Define function signatures
        self.lib.sim_init.argtypes = []
        self.lib.sim_init.restype = None

        self.lib.sim_cleanup.argtypes = []
        self.lib.sim_cleanup.restype = None

        self.lib.sim_eval.argtypes = []
        self.lib.sim_eval.restype = None

        # Input setters
        for func_name in ['sim_set_clk', 'sim_set_reset', 'sim_set_cmd_valid',
                          'sim_set_cmd', 'sim_set_x', 'sim_set_y']:
            getattr(self.lib, func_name).argtypes = [ctypes.c_uint8]
            getattr(self.lib, func_name).restype = None

        # Output getters
        self.lib.sim_get_revealed.argtypes = []
        self.lib.sim_get_revealed.restype = ctypes.c_uint64

        self.lib.sim_get_flagged.argtypes = []
        self.lib.sim_get_flagged.restype = ctypes.c_uint64

        self.lib.sim_get_mines.argtypes = []
        self.lib.sim_get_mines.restype = ctypes.c_uint64

        self.lib.sim_get_game_over.argtypes = []
        self.lib.sim_get_game_over.restype = ctypes.c_uint8

        self.lib.sim_get_win.argtypes = []
        self.lib.sim_get_win.restype = ctypes.c_uint8

        # Initialize simulation
        self.lib.sim_init()
        print(f"Simulation initialized!")

    def __del__(self):
        """Cleanup on destruction."""
        if hasattr(self, 'lib'):
            self.lib.sim_cleanup()


class MinesweeperSim:
    """
    Python wrapper for Verilog Minesweeper core using direct Verilator.
    Drop-in replacement for PyVerilator version.
    """

    BOARD_SIZE = 8
    CMD_REVEAL = 1
    CMD_FLAG = 2
    CMD_CHORD = 3

    def __init__(self, verilog_path=None, build_dir='obj_dir_direct'):
        """
        Initialize the Minesweeper simulation.

        Args:
            verilog_path: Path to minesweeper_core.v
            build_dir: Directory for Verilator build files
        """
        if verilog_path is None:
            script_dir = os.path.dirname(os.path.abspath(__file__))
            verilog_path = os.path.join(script_dir, '..', 'rtl', 'minesweeper_core.v')

        print(f"Initializing Verilator simulation...")
        self.sim = VerilatorSim(verilog_path, build_dir=build_dir)
        self.reset()

    def _tick(self):
        """Advance simulation by one clock cycle."""
        self.sim.lib.sim_set_clk(1)
        self.sim.lib.sim_eval()
        self.sim.lib.sim_set_clk(0)
        self.sim.lib.sim_eval()

    def reset(self):
        """Reset the game to initial state."""
        self.sim.lib.sim_set_reset(1)
        self._tick()
        self.sim.lib.sim_set_reset(0)
        self._tick()
        print("Game reset complete.")

    def _send_command(self, cmd, x, y):
        """Send a command to the Verilog core."""
        if not (0 <= x < self.BOARD_SIZE and 0 <= y < self.BOARD_SIZE):
            raise ValueError(f"Coordinates out of bounds: ({x}, {y})")

        self.sim.lib.sim_set_cmd_valid(1)
        self.sim.lib.sim_set_cmd(cmd)
        self.sim.lib.sim_set_x(x)
        self.sim.lib.sim_set_y(y)
        self._tick()

        self.sim.lib.sim_set_cmd_valid(0)
        self._tick()

        # Allow flood-fill to complete
        for _ in range(100):
            self._tick()

    def reveal(self, x, y):
        """Reveal cell at (x, y)."""
        self._send_command(self.CMD_REVEAL, x, y)

    def flag(self, x, y):
        """Toggle flag at cell (x, y)."""
        self._send_command(self.CMD_FLAG, x, y)

    def chord(self, x, y):
        """Chord (auto-reveal neighbors) at cell (x, y)."""
        self._send_command(self.CMD_CHORD, x, y)

    def get_revealed(self):
        """Get 2D array of revealed cells (8x8)."""
        bits = self.sim.lib.sim_get_revealed()
        return [[bool(bits & (1 << (y * 8 + x))) for x in range(8)] for y in range(8)]

    def get_flagged(self):
        """Get 2D array of flagged cells (8x8)."""
        bits = self.sim.lib.sim_get_flagged()
        return [[bool(bits & (1 << (y * 8 + x))) for x in range(8)] for y in range(8)]

    def get_mines(self):
        """Get 2D array of mine positions (8x8)."""
        bits = self.sim.lib.sim_get_mines()
        return [[bool(bits & (1 << (y * 8 + x))) for x in range(8)] for y in range(8)]

    def is_game_over(self):
        """Check if game is lost."""
        return bool(self.sim.lib.sim_get_game_over())

    def is_win(self):
        """Check if game is won."""
        return bool(self.sim.lib.sim_get_win())

    def count_neighbors(self, x, y):
        """Count mines in 8 neighbors around (x, y)."""
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


def print_board(sim, show_mines=False):
    """Print the current board state in ASCII."""
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
                    print(" * ", end="")
                else:
                    count = sim.count_neighbors(x, y)
                    if count == 0:
                        print(" . ", end="")
                    else:
                        print(f" {count} ", end="")
            elif show_mines and mines[y][x]:
                print(" M ", end="")
            else:
                print(" # ", end="")
        print()
    print()


def cli_main():
    """Run CLI-based Minesweeper for testing."""
    print("Verilog Minesweeper - CLI Mode")
    print()

    sim = MinesweeperSim()
    show_mines = False

    while True:
        print_board(sim, show_mines=show_mines)

        if sim.is_game_over():
            print("*** GAME OVER! ***")
        elif sim.is_win():
            print("*** YOU WIN! ***")

        try:
            user_input = input(">>> ").strip().lower()
            if not user_input:
                continue

            parts = user_input.split()
            cmd = parts[0]

            if cmd == 'quit':
                break
            elif cmd == 'reset':
                sim.reset()
                show_mines = False
            elif cmd == 'mines':
                show_mines = not show_mines
            elif cmd in ['r', 'f', 'c'] and len(parts) == 3:
                x, y = int(parts[1]), int(parts[2])
                if cmd == 'r':
                    sim.reveal(x, y)
                elif cmd == 'f':
                    sim.flag(x, y)
                elif cmd == 'c':
                    sim.chord(x, y)

        except KeyboardInterrupt:
            break
        except Exception as e:
            print(f"Error: {e}")


if __name__ == '__main__':
    cli_main()
