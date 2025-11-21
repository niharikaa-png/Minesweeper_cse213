#!/usr/bin/env python3
"""Test Verilator compilation and basic operations."""

import sys
import os
sys.path.insert(0, 'sim')

from driver_verilator_direct import MinesweeperSim

print("Testing compilation (takes ~10 seconds)...\n")

try:
    sim = MinesweeperSim()
    print("\nCompilation OK")

    # Test basic operations
    sim.reveal(3, 3)
    sim.flag(2, 2)
    revealed = sim.get_revealed()
    flagged = sim.get_flagged()

    print(f"Revealed: {sum(sum(r) for r in revealed)} cells")
    print("\nAll tests passed!")
    print("Run: python3 gui/gui_direct.py")

except Exception as e:
    print(f"FAILED: {e}")
    import traceback
    traceback.print_exc()
    sys.exit(1)
