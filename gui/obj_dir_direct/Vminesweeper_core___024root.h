// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminesweeper_core.h for the primary calling header

#ifndef VERILATED_VMINESWEEPER_CORE___024ROOT_H_
#define VERILATED_VMINESWEEPER_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vminesweeper_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminesweeper_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(cmd_valid,0,0);
    VL_IN8(cmd,1,0);
    VL_IN8(x,2,0);
    VL_IN8(y,2,0);
    VL_OUT8(game_over,0,0);
    VL_OUT8(win,0,0);
    CData/*0:0*/ minesweeper_core__DOT__first_click;
    CData/*5:0*/ minesweeper_core__DOT__head;
    CData/*5:0*/ minesweeper_core__DOT__tail;
    CData/*0:0*/ minesweeper_core__DOT__flood_active;
    CData/*5:0*/ minesweeper_core__DOT__unnamedblk1__DOT__id;
    CData/*2:0*/ minesweeper_core__DOT__unnamedblk1__DOT__cx;
    CData/*2:0*/ minesweeper_core__DOT__unnamedblk1__DOT__cy;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    IData/*31:0*/ minesweeper_core__DOT__count_neighbors__Vstatic__nx;
    IData/*31:0*/ minesweeper_core__DOT__count_neighbors__Vstatic__ny;
    IData/*31:0*/ minesweeper_core__DOT__count_neighbors__Vstatic__cnt;
    IData/*31:0*/ minesweeper_core__DOT__lfsr;
    IData/*31:0*/ minesweeper_core__DOT__generate_mines__Vstatic__pos;
    IData/*31:0*/ minesweeper_core__DOT__generate_mines__Vstatic__placed;
    IData/*31:0*/ minesweeper_core__DOT__chord_neighbors__Vstatic__nx;
    IData/*31:0*/ minesweeper_core__DOT__chord_neighbors__Vstatic__ny;
    IData/*31:0*/ minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount;
    IData/*31:0*/ minesweeper_core__DOT__reveal_cell__Vstatic__id;
    IData/*31:0*/ minesweeper_core__DOT__unnamedblk1__DOT__nx;
    IData/*31:0*/ minesweeper_core__DOT__unnamedblk1__DOT__ny;
    IData/*31:0*/ minesweeper_core__DOT__unnamedblk1__DOT__nid;
    IData/*31:0*/ minesweeper_core__DOT__unnamedblk2__DOT__safe;
    IData/*31:0*/ minesweeper_core__DOT__unnamedblk2__DOT__totalm;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(revealed,63,0);
    VL_OUT64(flagged,63,0);
    VL_OUT64(mines,63,0);
    VlUnpacked<CData/*5:0*/, 64> minesweeper_core__DOT__queue;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vminesweeper_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vminesweeper_core___024root(Vminesweeper_core__Syms* symsp, const char* v__name);
    ~Vminesweeper_core___024root();
    VL_UNCOPYABLE(Vminesweeper_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
