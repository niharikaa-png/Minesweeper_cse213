// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vminesweeper_core__pch.h"

//============================================================
// Constructors

Vminesweeper_core::Vminesweeper_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vminesweeper_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cmd_valid{vlSymsp->TOP.cmd_valid}
    , cmd{vlSymsp->TOP.cmd}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , game_over{vlSymsp->TOP.game_over}
    , win{vlSymsp->TOP.win}
    , revealed{vlSymsp->TOP.revealed}
    , flagged{vlSymsp->TOP.flagged}
    , mines{vlSymsp->TOP.mines}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vminesweeper_core::Vminesweeper_core(const char* _vcname__)
    : Vminesweeper_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vminesweeper_core::~Vminesweeper_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vminesweeper_core___024root___eval_debug_assertions(Vminesweeper_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vminesweeper_core___024root___eval_static(Vminesweeper_core___024root* vlSelf);
void Vminesweeper_core___024root___eval_initial(Vminesweeper_core___024root* vlSelf);
void Vminesweeper_core___024root___eval_settle(Vminesweeper_core___024root* vlSelf);
void Vminesweeper_core___024root___eval(Vminesweeper_core___024root* vlSelf);

void Vminesweeper_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vminesweeper_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vminesweeper_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vminesweeper_core___024root___eval_static(&(vlSymsp->TOP));
        Vminesweeper_core___024root___eval_initial(&(vlSymsp->TOP));
        Vminesweeper_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vminesweeper_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vminesweeper_core::eventsPending() { return false; }

uint64_t Vminesweeper_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vminesweeper_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vminesweeper_core___024root___eval_final(Vminesweeper_core___024root* vlSelf);

VL_ATTR_COLD void Vminesweeper_core::final() {
    Vminesweeper_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vminesweeper_core::hierName() const { return vlSymsp->name(); }
const char* Vminesweeper_core::modelName() const { return "Vminesweeper_core"; }
unsigned Vminesweeper_core::threads() const { return 1; }
void Vminesweeper_core::prepareClone() const { contextp()->prepareClone(); }
void Vminesweeper_core::atClone() const {
    contextp()->threadPoolpOnClone();
}
