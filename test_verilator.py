#!/usr/bin/env python3
"""Test Verilator installation."""

import subprocess
import sys

def test_verilator():
    """Test if Verilator is installed and accessible."""
    print("Verilator Installation Test\n")

    # Test 1: Check if verilator command exists
    print("[1/3] Checking if Verilator is installed...")
    try:
        result = subprocess.run(
            ['verilator', '--version'],
            capture_output=True,
            text=True,
            check=True
        )
        version = result.stdout.strip().split('\n')[0]
        print(f"✅ Verilator found: {version}")
    except FileNotFoundError:
        print("❌ Verilator not found!")
        print()
        print("Please install Verilator:")
        print("  macOS:        brew install verilator")
        print("  Ubuntu/Debian: sudo apt-get install verilator")
        print("  Windows:      Install via WSL or pre-built binaries")
        return False
    except subprocess.CalledProcessError as e:
        print(f"❌ Verilator command failed: {e}")
        return False

    # Test 2: Check VERILATOR_ROOT
    print("\n[2/3] Checking Verilator environment...")
    try:
        result = subprocess.run(
            ['verilator', '--getenv', 'VERILATOR_ROOT'],
            capture_output=True,
            text=True,
            check=True
        )
        verilator_root = result.stdout.strip()
        print(f"✅ VERILATOR_ROOT: {verilator_root}")
    except subprocess.CalledProcessError as e:
        print(f"❌ Could not get VERILATOR_ROOT: {e}")
        return False

    # Test 3: Check Python version
    print("\n[3/3] Checking Python version...")
    py_version = sys.version.split()[0]
    print(f"✅ Python version: {py_version}")

    if sys.version_info >= (3, 13):
        print("   → Using Python 3.13+, Direct Verilator implementation recommended")
        print("   → Run: python3 gui/gui_direct.py")
    elif sys.version_info >= (3, 8):
        print("   → Python 3.8-3.12 detected")
        print("   → You can use either PyVerilator or Direct Verilator")
        print("   → PyVerilator: python3 gui/gui.py")
        print("   → Direct:      python3 gui/gui_direct.py")
    else:
        print("   ⚠️  Python version too old (< 3.8)")
        print("   → Please upgrade to Python 3.8+")

    print("\n✅ All tests passed!")
    print("\nNext: python3 gui/gui_direct.py")

    return True


if __name__ == '__main__':
    success = test_verilator()
    sys.exit(0 if success else 1)
