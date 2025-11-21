// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINESWEEPER_CORE__SYMS_H_
#define VERILATED_VMINESWEEPER_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vminesweeper_core.h"

// INCLUDE MODULE CLASSES
#include "Vminesweeper_core___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vminesweeper_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vminesweeper_core* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vminesweeper_core___024root    TOP;

    // CONSTRUCTORS
    Vminesweeper_core__Syms(VerilatedContext* contextp, const char* namep, Vminesweeper_core* modelp);
    ~Vminesweeper_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
