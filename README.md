# Verilog Minesweeper

8×8 Minesweeper implemented in Verilog with Python GUI.

## Features

- First-click always safe (mines generated after first reveal)
- LFSR random mine placement
- BFS flood-fill for zero expansion
- Chording (auto-reveal neighbors when flags match)
- Win/lose detection

## Requirements

- Python 3.7+
- Verilator
- Tkinter (usually included with Python)

## Installation

Install Verilator:
```bash
# macOS
brew install verilator

# Ubuntu/Debian
sudo apt install verilator
```

## Usage

### GUI Mode
```bash
cd gui
python3 gui_direct.py
```

### CLI Mode
```bash
cd sim
python3 driver_verilator_direct.py
```

CLI commands:
- `r X Y` - Reveal cell
- `f X Y` - Flag cell
- `c X Y` - Chord cell
- `mines` - Show mines (debug)
- `reset` - New game
- `quit` - Exit

## Controls (GUI)

- **Left-click**: Reveal cell
- **Right-click**: Flag/unflag
- **Middle-click** or **Shift+Left-click**: Chord
- **Smiley button**: Reset

## Architecture

```
Python GUI (Tkinter)
    ↓
Driver (ctypes wrapper)
    ↓
Verilator C++ Model
    ↓
Verilog RTL (minesweeper_core.v)
```

See `docs/architecture.md` for technical details.

## Project Structure

```
rtl/                    # Verilog source
sim/                    # Python driver
gui/                    # Tkinter GUI
docs/                   # Documentation
test_compile.py         # Compilation test
```

## License

MIT
