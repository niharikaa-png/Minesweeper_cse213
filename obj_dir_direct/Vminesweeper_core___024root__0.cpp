// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminesweeper_core.h for the primary calling header

#include "Vminesweeper_core__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminesweeper_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vminesweeper_core___024root___eval_triggers__act(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_triggers__act\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.reset) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminesweeper_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vminesweeper_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vminesweeper_core___024root___nba_sequent__TOP__0(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___nba_sequent__TOP__0\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__generate_mines__0__sx;
    __Vtask_minesweeper_core__DOT__generate_mines__0__sx = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__generate_mines__0__sy;
    __Vtask_minesweeper_core__DOT__generate_mines__0__sy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__1__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__1__xx;
    __Vfunc_minesweeper_core__DOT__idx__1__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__1__yy;
    __Vfunc_minesweeper_core__DOT__idx__1__yy = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__reveal_cell__2__rx;
    __Vtask_minesweeper_core__DOT__reveal_cell__2__rx = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__reveal_cell__2__ry;
    __Vtask_minesweeper_core__DOT__reveal_cell__2__ry = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__3__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__3__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__3__xx;
    __Vfunc_minesweeper_core__DOT__idx__3__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__3__yy;
    __Vfunc_minesweeper_core__DOT__idx__3__yy = 0;
    CData/*3:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__4__Vfuncout;
    __Vfunc_minesweeper_core__DOT__count_neighbors__4__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__4__xx;
    __Vfunc_minesweeper_core__DOT__count_neighbors__4__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__4__yy;
    __Vfunc_minesweeper_core__DOT__count_neighbors__4__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__5__xx;
    __Vfunc_minesweeper_core__DOT__idx__5__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__5__yy;
    __Vfunc_minesweeper_core__DOT__idx__5__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__6__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__6__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__6__xx;
    __Vfunc_minesweeper_core__DOT__idx__6__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__6__yy;
    __Vfunc_minesweeper_core__DOT__idx__6__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__7__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__7__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__7__xx;
    __Vfunc_minesweeper_core__DOT__idx__7__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__7__yy;
    __Vfunc_minesweeper_core__DOT__idx__7__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__8__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__8__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__8__xx;
    __Vfunc_minesweeper_core__DOT__idx__8__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__8__yy;
    __Vfunc_minesweeper_core__DOT__idx__8__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__9__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__9__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__9__xx;
    __Vfunc_minesweeper_core__DOT__idx__9__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__9__yy;
    __Vfunc_minesweeper_core__DOT__idx__9__yy = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx;
    __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy;
    __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__11__xx;
    __Vfunc_minesweeper_core__DOT__idx__11__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__11__yy;
    __Vfunc_minesweeper_core__DOT__idx__11__yy = 0;
    CData/*3:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__12__Vfuncout;
    __Vfunc_minesweeper_core__DOT__count_neighbors__12__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__12__xx;
    __Vfunc_minesweeper_core__DOT__count_neighbors__12__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__12__yy;
    __Vfunc_minesweeper_core__DOT__count_neighbors__12__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__13__xx;
    __Vfunc_minesweeper_core__DOT__idx__13__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__13__yy;
    __Vfunc_minesweeper_core__DOT__idx__13__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__14__xx;
    __Vfunc_minesweeper_core__DOT__idx__14__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__14__yy;
    __Vfunc_minesweeper_core__DOT__idx__14__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__15__xx;
    __Vfunc_minesweeper_core__DOT__idx__15__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__15__yy;
    __Vfunc_minesweeper_core__DOT__idx__15__yy = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
    __Vtask_minesweeper_core__DOT__reveal_cell__16__rx = 0;
    CData/*2:0*/ __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
    __Vtask_minesweeper_core__DOT__reveal_cell__16__ry = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__17__xx;
    __Vfunc_minesweeper_core__DOT__idx__17__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__17__yy;
    __Vfunc_minesweeper_core__DOT__idx__17__yy = 0;
    CData/*3:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout;
    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__19__xx;
    __Vfunc_minesweeper_core__DOT__idx__19__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__19__yy;
    __Vfunc_minesweeper_core__DOT__idx__19__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__20__xx;
    __Vfunc_minesweeper_core__DOT__idx__20__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__20__yy;
    __Vfunc_minesweeper_core__DOT__idx__20__yy = 0;
    CData/*3:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout;
    __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
    __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
    __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy = 0;
    IData/*31:0*/ __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout;
    __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__22__xx;
    __Vfunc_minesweeper_core__DOT__idx__22__xx = 0;
    CData/*2:0*/ __Vfunc_minesweeper_core__DOT__idx__22__yy;
    __Vfunc_minesweeper_core__DOT__idx__22__yy = 0;
    IData/*31:0*/ __Vdly__minesweeper_core__DOT__lfsr;
    __Vdly__minesweeper_core__DOT__lfsr = 0;
    QData/*63:0*/ __Vdly__revealed;
    __Vdly__revealed = 0;
    QData/*63:0*/ __VdlyMask__revealed;
    __VdlyMask__revealed = 0;
    QData/*63:0*/ __Vdly__flagged;
    __Vdly__flagged = 0;
    QData/*63:0*/ __Vdly__mines;
    __Vdly__mines = 0;
    QData/*63:0*/ __VdlyMask__mines;
    __VdlyMask__mines = 0;
    CData/*0:0*/ __Vdly__game_over;
    __Vdly__game_over = 0;
    CData/*0:0*/ __VdlyMask__game_over;
    __VdlyMask__game_over = 0;
    CData/*0:0*/ __Vdly__win;
    __Vdly__win = 0;
    CData/*5:0*/ __Vdly__minesweeper_core__DOT__head;
    __Vdly__minesweeper_core__DOT__head = 0;
    CData/*5:0*/ __VdlyMask__minesweeper_core__DOT__head;
    __VdlyMask__minesweeper_core__DOT__head = 0;
    CData/*5:0*/ __Vdly__minesweeper_core__DOT__tail;
    __Vdly__minesweeper_core__DOT__tail = 0;
    CData/*5:0*/ __VdlyMask__minesweeper_core__DOT__tail;
    __VdlyMask__minesweeper_core__DOT__tail = 0;
    CData/*0:0*/ __Vdly__minesweeper_core__DOT__flood_active;
    __Vdly__minesweeper_core__DOT__flood_active = 0;
    CData/*0:0*/ __VdlyMask__minesweeper_core__DOT__flood_active;
    __VdlyMask__minesweeper_core__DOT__flood_active = 0;
    CData/*0:0*/ __Vdly__minesweeper_core__DOT__first_click;
    __Vdly__minesweeper_core__DOT__first_click = 0;
    // Body
    __Vdly__flagged = vlSelfRef.flagged;
    __Vdly__win = vlSelfRef.win;
    __Vdly__minesweeper_core__DOT__first_click = vlSelfRef.minesweeper_core__DOT__first_click;
    __Vdly__minesweeper_core__DOT__lfsr = ((IData)(vlSelfRef.reset)
                                            ? 0x0000ace1U
                                            : ((vlSelfRef.minesweeper_core__DOT__lfsr 
                                                << 1U) 
                                               | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0x90000000U 
                                                                  & vlSelfRef.minesweeper_core__DOT__lfsr)))));
    if (vlSelfRef.reset) {
        __Vdly__revealed = 0ULL;
        __VdlyMask__revealed = 0xffffffffffffffffULL;
        __Vdly__flagged = 0ULL;
        __Vdly__mines = 0ULL;
        __VdlyMask__mines = 0xffffffffffffffffULL;
        __Vdly__game_over = 0U;
        __VdlyMask__game_over = 1U;
        __Vdly__win = 0U;
        __Vdly__minesweeper_core__DOT__head = 0U;
        __VdlyMask__minesweeper_core__DOT__head = 0x3fU;
        __Vdly__minesweeper_core__DOT__tail = 0U;
        __VdlyMask__minesweeper_core__DOT__tail = 0x3fU;
        __Vdly__minesweeper_core__DOT__flood_active = 0U;
        __VdlyMask__minesweeper_core__DOT__flood_active = 1U;
        __Vdly__minesweeper_core__DOT__first_click = 1U;
    } else {
        if ((((IData)(vlSelfRef.cmd_valid) & (~ (IData)(vlSelfRef.game_over))) 
             & (~ (IData)(vlSelfRef.win)))) {
            if ((1U == (IData)(vlSelfRef.cmd))) {
                if (vlSelfRef.minesweeper_core__DOT__first_click) {
                    __Vtask_minesweeper_core__DOT__generate_mines__0__sy 
                        = vlSelfRef.y;
                    __Vtask_minesweeper_core__DOT__generate_mines__0__sx 
                        = vlSelfRef.x;
                    vlSelfRef.mines = 0ULL;
                    __Vdly__minesweeper_core__DOT__first_click = 0U;
                    vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__placed = 0U;
                    while (VL_GTS_III(32, 0x0000000aU, vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__placed)) {
                        vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__pos 
                            = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__lfsr);
                        if (((VL_GTS_III(32, 0x00000040U, vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__pos) 
                              & (vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__pos 
                                 != ([&]() {
                                                __Vfunc_minesweeper_core__DOT__idx__1__yy 
                                                    = __Vtask_minesweeper_core__DOT__generate_mines__0__sy;
                                                __Vfunc_minesweeper_core__DOT__idx__1__xx 
                                                    = __Vtask_minesweeper_core__DOT__generate_mines__0__sx;
                                                __Vfunc_minesweeper_core__DOT__idx__1__Vfuncout 
                                                    = 
                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__1__yy), 3U) 
                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__1__xx));
                                            }(), __Vfunc_minesweeper_core__DOT__idx__1__Vfuncout))) 
                             & (~ (IData)((vlSelfRef.mines 
                                           >> (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__pos)))))) {
                            vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__placed 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__placed);
                            vlSelfRef.mines = (vlSelfRef.mines 
                                               | ((QData)((IData)(1U)) 
                                                  << 
                                                  (0x0000003fU 
                                                   & vlSelfRef.minesweeper_core__DOT__generate_mines__Vstatic__pos)));
                        }
                        vlSelfRef.minesweeper_core__DOT__lfsr 
                            = ((vlSelfRef.minesweeper_core__DOT__lfsr 
                                << 1U) | (1U & VL_REDXOR_32(
                                                            (0x90000000U 
                                                             & vlSelfRef.minesweeper_core__DOT__lfsr))));
                    }
                }
                __Vtask_minesweeper_core__DOT__reveal_cell__2__ry 
                    = vlSelfRef.y;
                __Vtask_minesweeper_core__DOT__reveal_cell__2__rx 
                    = vlSelfRef.x;
                __Vfunc_minesweeper_core__DOT__idx__3__yy 
                    = __Vtask_minesweeper_core__DOT__reveal_cell__2__ry;
                __Vfunc_minesweeper_core__DOT__idx__3__xx 
                    = __Vtask_minesweeper_core__DOT__reveal_cell__2__rx;
                __Vfunc_minesweeper_core__DOT__idx__3__Vfuncout 
                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__3__yy), 3U) 
                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__3__xx));
                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                    = __Vfunc_minesweeper_core__DOT__idx__3__Vfuncout;
                if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                        >> (0x0000003fU 
                                            & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                            & (~ (IData)((vlSelfRef.flagged 
                                          >> (0x0000003fU 
                                              & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                           & (~ (IData)(vlSelfRef.game_over))))) {
                    vlSelfRef.revealed = (vlSelfRef.revealed 
                                          | ((QData)((IData)(1U)) 
                                             << (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                    if ((1U & (IData)((vlSelfRef.mines 
                                       >> (0x0000003fU 
                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                        vlSelfRef.game_over = 1U;
                    } else if ((0U == ([&]() {
                                    __Vfunc_minesweeper_core__DOT__count_neighbors__4__yy 
                                        = __Vtask_minesweeper_core__DOT__reveal_cell__2__ry;
                                    __Vfunc_minesweeper_core__DOT__count_neighbors__4__xx 
                                        = __Vtask_minesweeper_core__DOT__reveal_cell__2__rx;
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = ((IData)(0xffffffffU) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__xx));
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = ((IData)(0xffffffffU) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__yy));
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__4__xx;
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = ((IData)(0xffffffffU) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__yy));
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = ((IData)(1U) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__xx));
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = ((IData)(0xffffffffU) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__yy));
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = ((IData)(0xffffffffU) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__xx));
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__4__yy;
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = ((IData)(1U) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__xx));
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__4__yy;
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = ((IData)(0xffffffffU) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__xx));
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = ((IData)(1U) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__yy));
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__4__xx;
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = ((IData)(1U) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__yy));
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                        = ((IData)(1U) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__xx));
                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                        = ((IData)(1U) 
                                           + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__yy));
                                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                        if ((1U & (IData)(
                                                          (vlSelfRef.mines 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ([&]() {
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__yy 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__xx 
                                                                        = 
                                                                        (7U 
                                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                    __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout 
                                                                        = 
                                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__5__yy), 3U) 
                                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__5__xx));
                                                                }(), __Vfunc_minesweeper_core__DOT__idx__5__Vfuncout)))))) {
                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                = ((IData)(1U) 
                                                   + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                        }
                                    }
                                    __Vfunc_minesweeper_core__DOT__count_neighbors__4__Vfuncout 
                                        = (0x0000000fU 
                                           & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__4__Vfuncout)))) {
                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                            = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                    }
                }
            }
            if ((2U == (IData)(vlSelfRef.cmd))) {
                if ((1U & (~ (IData)((vlSelfRef.revealed 
                                      >> (0x0000003fU 
                                          & ([&]() {
                                                __Vfunc_minesweeper_core__DOT__idx__6__yy 
                                                    = vlSelfRef.y;
                                                __Vfunc_minesweeper_core__DOT__idx__6__xx 
                                                    = vlSelfRef.x;
                                                __Vfunc_minesweeper_core__DOT__idx__6__Vfuncout 
                                                    = 
                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__6__yy), 3U) 
                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__6__xx));
                                            }(), __Vfunc_minesweeper_core__DOT__idx__6__Vfuncout))))))) {
                    __Vfunc_minesweeper_core__DOT__idx__8__yy 
                        = vlSelfRef.y;
                    __Vfunc_minesweeper_core__DOT__idx__8__xx 
                        = vlSelfRef.x;
                    __Vfunc_minesweeper_core__DOT__idx__8__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__8__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__8__xx));
                    VL_ASSIGNBIT_QI((0x0000003fU & __Vfunc_minesweeper_core__DOT__idx__8__Vfuncout), __Vdly__flagged, 
                                    (1U & (~ (IData)(
                                                     (vlSelfRef.flagged 
                                                      >> 
                                                      (0x0000003fU 
                                                       & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__7__yy 
                                                        = vlSelfRef.y;
                                                    __Vfunc_minesweeper_core__DOT__idx__7__xx 
                                                        = vlSelfRef.x;
                                                    __Vfunc_minesweeper_core__DOT__idx__7__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__7__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__7__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__7__Vfuncout)))))));
                }
            }
            if ((3U == (IData)(vlSelfRef.cmd))) {
                if ((1U & (IData)((vlSelfRef.revealed 
                                   >> (0x0000003fU 
                                       & ([&]() {
                                            __Vfunc_minesweeper_core__DOT__idx__9__yy 
                                                = vlSelfRef.y;
                                            __Vfunc_minesweeper_core__DOT__idx__9__xx 
                                                = vlSelfRef.x;
                                            __Vfunc_minesweeper_core__DOT__idx__9__Vfuncout 
                                                = (
                                                   VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__9__yy), 3U) 
                                                   + (IData)(__Vfunc_minesweeper_core__DOT__idx__9__xx));
                                        }(), __Vfunc_minesweeper_core__DOT__idx__9__Vfuncout)))))) {
                    __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy 
                        = vlSelfRef.y;
                    __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx 
                        = vlSelfRef.x;
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount = 0U;
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = ((IData)(0xffffffffU) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = ((IData)(0xffffffffU) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx;
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = ((IData)(0xffffffffU) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = ((IData)(0xffffffffU) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = ((IData)(0xffffffffU) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy;
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy;
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = ((IData)(0xffffffffU) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx;
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                        = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                    vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                        = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                    if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                        if ((1U & (IData)((vlSelfRef.flagged 
                                           >> (0x0000003fU 
                                               & ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__idx__11__yy 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__xx 
                                                        = 
                                                        (7U 
                                                         & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                    __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout 
                                                        = 
                                                        (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__11__yy), 3U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__idx__11__xx));
                                                }(), __Vfunc_minesweeper_core__DOT__idx__11__Vfuncout)))))) {
                            vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount);
                        }
                    }
                    if ((vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount 
                         == VL_EXTEND_II(32,4, ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__12__yy 
                                            = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy;
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__12__xx 
                                            = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__12__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__12__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__12__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__12__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__13__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__13__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__13__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__12__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__12__Vfuncout))))) {
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = ((IData)(0xffffffffU) 
                               + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = ((IData)(0xffffffffU) 
                               + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx;
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = ((IData)(0xffffffffU) 
                               + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = ((IData)(0xffffffffU) 
                               + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = ((IData)(0xffffffffU) 
                               + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy;
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cy;
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = ((IData)(0xffffffffU) 
                               + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = __Vtask_minesweeper_core__DOT__chord_neighbors__10__cx;
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx 
                            = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cx));
                        vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny 
                            = ((IData)(1U) + (IData)(__Vtask_minesweeper_core__DOT__chord_neighbors__10__cy));
                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx) 
                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx)) 
                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny)) 
                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny))) {
                            if ((1U & ((~ (IData)((vlSelfRef.flagged 
                                                   >> 
                                                   (0x0000003fU 
                                                    & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__14__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__14__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__14__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__14__Vfuncout))))) 
                                       & (~ (IData)(
                                                    (vlSelfRef.revealed 
                                                     >> 
                                                     (0x0000003fU 
                                                      & ([&]() {
                                                                __Vfunc_minesweeper_core__DOT__idx__15__yy 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__xx 
                                                                    = 
                                                                    (7U 
                                                                     & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                                                __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout 
                                                                    = 
                                                                    (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__15__yy), 3U) 
                                                                     + (IData)(__Vfunc_minesweeper_core__DOT__idx__15__xx));
                                                            }(), __Vfunc_minesweeper_core__DOT__idx__15__Vfuncout)))))))) {
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__ry 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__ny);
                                __Vtask_minesweeper_core__DOT__reveal_cell__16__rx 
                                    = (7U & vlSelfRef.minesweeper_core__DOT__chord_neighbors__Vstatic__nx);
                                __Vfunc_minesweeper_core__DOT__idx__17__yy 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                __Vfunc_minesweeper_core__DOT__idx__17__xx 
                                    = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__17__yy), 3U) 
                                       + (IData)(__Vfunc_minesweeper_core__DOT__idx__17__xx));
                                vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id 
                                    = __Vfunc_minesweeper_core__DOT__idx__17__Vfuncout;
                                if ((1U & (((~ (IData)(
                                                       (vlSelfRef.revealed 
                                                        >> 
                                                        (0x0000003fU 
                                                         & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)))) 
                                            & (~ (IData)(
                                                         (vlSelfRef.flagged 
                                                          >> 
                                                          (0x0000003fU 
                                                           & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) 
                                           & (~ (IData)(vlSelfRef.game_over))))) {
                                    vlSelfRef.revealed 
                                        = (vlSelfRef.revealed 
                                           | ((QData)((IData)(1U)) 
                                              << (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id)));
                                    if ((1U & (IData)(
                                                      (vlSelfRef.mines 
                                                       >> 
                                                       (0x0000003fU 
                                                        & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id))))) {
                                        vlSelfRef.game_over = 1U;
                                    } else if ((0U 
                                                == 
                                                ([&]() {
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__ry;
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx 
                                                        = __Vtask_minesweeper_core__DOT__reveal_cell__16__rx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__yy;
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(0xffffffffU) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = __Vfunc_minesweeper_core__DOT__count_neighbors__18__xx;
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__xx));
                                                    vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                                        = 
                                                        ((IData)(1U) 
                                                         + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__yy));
                                                    if (
                                                        (((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                                           & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                                          & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                                         & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.mines 
                                                                        >> 
                                                                        (0x0000003fU 
                                                                         & ([&]() {
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__yy 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__xx 
                                                                                = 
                                                                                (7U 
                                                                                & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                                __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout 
                                                                                = 
                                                                                (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__19__yy), 3U) 
                                                                                + (IData)(__Vfunc_minesweeper_core__DOT__idx__19__xx));
                                                                                }(), __Vfunc_minesweeper_core__DOT__idx__19__Vfuncout)))))) {
                                                            vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                        }
                                                    }
                                                    __Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout 
                                                        = 
                                                        (0x0000000fU 
                                                         & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                                }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__18__Vfuncout)))) {
                                        vlSelfRef.minesweeper_core__DOT__queue[0U] 
                                            = (0x0000003fU 
                                               & vlSelfRef.minesweeper_core__DOT__reveal_cell__Vstatic__id);
                                        vlSelfRef.minesweeper_core__DOT__head = 0U;
                                        vlSelfRef.minesweeper_core__DOT__tail = 1U;
                                        vlSelfRef.minesweeper_core__DOT__flood_active = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.minesweeper_core__DOT__flood_active) {
            if (((IData)(vlSelfRef.minesweeper_core__DOT__head) 
                 < (IData)(vlSelfRef.minesweeper_core__DOT__tail))) {
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__id 
                    = vlSelfRef.minesweeper_core__DOT__queue
                    [vlSelfRef.minesweeper_core__DOT__head];
                vlSelfRef.minesweeper_core__DOT__head 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__head)));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx 
                    = (7U & (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__id));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy 
                    = (7U & ((IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__id) 
                             >> 3U));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = ((IData)(0xffffffffU) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = ((IData)(0xffffffffU) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy));
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx;
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = ((IData)(0xffffffffU) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy));
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = ((IData)(0xffffffffU) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy));
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = ((IData)(0xffffffffU) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy;
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy;
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = ((IData)(0xffffffffU) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy));
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx;
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy));
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx 
                    = ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cx));
                vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny 
                    = ((IData)(1U) + (IData)(vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__cy));
                if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx) 
                       & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx)) 
                      & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny)) 
                     & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny))) {
                    __Vfunc_minesweeper_core__DOT__idx__20__yy 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                    __Vfunc_minesweeper_core__DOT__idx__20__xx 
                        = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                    __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__20__yy), 3U) 
                           + (IData)(__Vfunc_minesweeper_core__DOT__idx__20__xx));
                    vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid 
                        = __Vfunc_minesweeper_core__DOT__idx__20__Vfuncout;
                    if ((1U & (((~ (IData)((vlSelfRef.revealed 
                                            >> (0x0000003fU 
                                                & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)))) 
                                & (~ (IData)((vlSelfRef.flagged 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))) 
                               & (~ (IData)((vlSelfRef.mines 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid))))))) {
                        vlSelfRef.revealed = (vlSelfRef.revealed 
                                              | ((QData)((IData)(1U)) 
                                                 << 
                                                 (0x0000003fU 
                                                  & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid)));
                        if ((0U == ([&]() {
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__ny);
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx 
                                            = (7U & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nx);
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt = 0U;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__yy;
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(0xffffffffU) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = __Vfunc_minesweeper_core__DOT__count_neighbors__21__xx;
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__xx));
                                        vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny 
                                            = ((IData)(1U) 
                                               + (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__yy));
                                        if ((((VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx) 
                                               & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx)) 
                                              & VL_LTES_III(32, 0U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny)) 
                                             & VL_GTS_III(32, 8U, vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.mines 
                                                            >> 
                                                            (0x0000003fU 
                                                             & ([&]() {
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__yy 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__ny);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__xx 
                                                                            = 
                                                                            (7U 
                                                                             & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__nx);
                                                                        __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout 
                                                                            = 
                                                                            (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_minesweeper_core__DOT__idx__22__yy), 3U) 
                                                                             + (IData)(__Vfunc_minesweeper_core__DOT__idx__22__xx));
                                                                    }(), __Vfunc_minesweeper_core__DOT__idx__22__Vfuncout)))))) {
                                                vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                            }
                                        }
                                        __Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout 
                                            = (0x0000000fU 
                                               & vlSelfRef.minesweeper_core__DOT__count_neighbors__Vstatic__cnt);
                                    }(), (IData)(__Vfunc_minesweeper_core__DOT__count_neighbors__21__Vfuncout)))) {
                            vlSelfRef.minesweeper_core__DOT__queue[vlSelfRef.minesweeper_core__DOT__tail] 
                                = (0x0000003fU & vlSelfRef.minesweeper_core__DOT__unnamedblk1__DOT__nid);
                            vlSelfRef.minesweeper_core__DOT__tail 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.minesweeper_core__DOT__tail)));
                        }
                    }
                }
            } else {
                vlSelfRef.minesweeper_core__DOT__flood_active = 0U;
            }
        }
        vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe = 0U;
        vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm = 0U;
        if ((1U & (IData)(vlSelfRef.mines))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)(vlSelfRef.mines)) & (IData)(vlSelfRef.revealed)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 1U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 1U))) 
                   & (IData)((vlSelfRef.revealed >> 1U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 2U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 2U))) 
                   & (IData)((vlSelfRef.revealed >> 2U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 3U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 3U))) 
                   & (IData)((vlSelfRef.revealed >> 3U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 4U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 4U))) 
                   & (IData)((vlSelfRef.revealed >> 4U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 5U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 5U))) 
                   & (IData)((vlSelfRef.revealed >> 5U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 6U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 6U))) 
                   & (IData)((vlSelfRef.revealed >> 6U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 7U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 7U))) 
                   & (IData)((vlSelfRef.revealed >> 7U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 8U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 8U))) 
                   & (IData)((vlSelfRef.revealed >> 8U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 9U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 9U))) 
                   & (IData)((vlSelfRef.revealed >> 9U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x0aU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x0aU))) 
                   & (IData)((vlSelfRef.revealed >> 0x0aU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x0bU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x0bU))) 
                   & (IData)((vlSelfRef.revealed >> 0x0bU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x0cU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x0cU))) 
                   & (IData)((vlSelfRef.revealed >> 0x0cU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x0dU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x0dU))) 
                   & (IData)((vlSelfRef.revealed >> 0x0dU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x0eU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x0eU))) 
                   & (IData)((vlSelfRef.revealed >> 0x0eU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x0fU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x0fU))) 
                   & (IData)((vlSelfRef.revealed >> 0x0fU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x10U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x10U))) 
                   & (IData)((vlSelfRef.revealed >> 0x10U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x11U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x11U))) 
                   & (IData)((vlSelfRef.revealed >> 0x11U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x12U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x12U))) 
                   & (IData)((vlSelfRef.revealed >> 0x12U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x13U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x13U))) 
                   & (IData)((vlSelfRef.revealed >> 0x13U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x14U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x14U))) 
                   & (IData)((vlSelfRef.revealed >> 0x14U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x15U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x15U))) 
                   & (IData)((vlSelfRef.revealed >> 0x15U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x16U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x16U))) 
                   & (IData)((vlSelfRef.revealed >> 0x16U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x17U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x17U))) 
                   & (IData)((vlSelfRef.revealed >> 0x17U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x18U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x18U))) 
                   & (IData)((vlSelfRef.revealed >> 0x18U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x19U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x19U))) 
                   & (IData)((vlSelfRef.revealed >> 0x19U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x1aU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x1aU))) 
                   & (IData)((vlSelfRef.revealed >> 0x1aU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x1bU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x1bU))) 
                   & (IData)((vlSelfRef.revealed >> 0x1bU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x1cU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x1cU))) 
                   & (IData)((vlSelfRef.revealed >> 0x1cU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x1dU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x1dU))) 
                   & (IData)((vlSelfRef.revealed >> 0x1dU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x1eU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x1eU))) 
                   & (IData)((vlSelfRef.revealed >> 0x1eU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x1fU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x1fU))) 
                   & (IData)((vlSelfRef.revealed >> 0x1fU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x20U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x20U))) 
                   & (IData)((vlSelfRef.revealed >> 0x20U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x21U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x21U))) 
                   & (IData)((vlSelfRef.revealed >> 0x21U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x22U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x22U))) 
                   & (IData)((vlSelfRef.revealed >> 0x22U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x23U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x23U))) 
                   & (IData)((vlSelfRef.revealed >> 0x23U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x24U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x24U))) 
                   & (IData)((vlSelfRef.revealed >> 0x24U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x25U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x25U))) 
                   & (IData)((vlSelfRef.revealed >> 0x25U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x26U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x26U))) 
                   & (IData)((vlSelfRef.revealed >> 0x26U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x27U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x27U))) 
                   & (IData)((vlSelfRef.revealed >> 0x27U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x28U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x28U))) 
                   & (IData)((vlSelfRef.revealed >> 0x28U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x29U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x29U))) 
                   & (IData)((vlSelfRef.revealed >> 0x29U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x2aU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x2aU))) 
                   & (IData)((vlSelfRef.revealed >> 0x2aU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x2bU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x2bU))) 
                   & (IData)((vlSelfRef.revealed >> 0x2bU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x2cU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x2cU))) 
                   & (IData)((vlSelfRef.revealed >> 0x2cU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x2dU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x2dU))) 
                   & (IData)((vlSelfRef.revealed >> 0x2dU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x2eU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x2eU))) 
                   & (IData)((vlSelfRef.revealed >> 0x2eU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x2fU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x2fU))) 
                   & (IData)((vlSelfRef.revealed >> 0x2fU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x30U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x30U))) 
                   & (IData)((vlSelfRef.revealed >> 0x30U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x31U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x31U))) 
                   & (IData)((vlSelfRef.revealed >> 0x31U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x32U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x32U))) 
                   & (IData)((vlSelfRef.revealed >> 0x32U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x33U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x33U))) 
                   & (IData)((vlSelfRef.revealed >> 0x33U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x34U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x34U))) 
                   & (IData)((vlSelfRef.revealed >> 0x34U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x35U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x35U))) 
                   & (IData)((vlSelfRef.revealed >> 0x35U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x36U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x36U))) 
                   & (IData)((vlSelfRef.revealed >> 0x36U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x37U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x37U))) 
                   & (IData)((vlSelfRef.revealed >> 0x37U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x38U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x38U))) 
                   & (IData)((vlSelfRef.revealed >> 0x38U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x39U)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x39U))) 
                   & (IData)((vlSelfRef.revealed >> 0x39U))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x3aU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x3aU))) 
                   & (IData)((vlSelfRef.revealed >> 0x3aU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x3bU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x3bU))) 
                   & (IData)((vlSelfRef.revealed >> 0x3bU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x3cU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x3cU))) 
                   & (IData)((vlSelfRef.revealed >> 0x3cU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x3dU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x3dU))) 
                   & (IData)((vlSelfRef.revealed >> 0x3dU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x3eU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((1U & ((~ (IData)((vlSelfRef.mines >> 0x3eU))) 
                   & (IData)((vlSelfRef.revealed >> 0x3eU))))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((1U & (IData)((vlSelfRef.mines >> 0x3fU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm);
        }
        if ((IData)(((~ (vlSelfRef.mines >> 0x0000003fU)) 
                     & (vlSelfRef.revealed >> 0x0000003fU)))) {
            vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
                = ((IData)(1U) + vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe);
        }
        if ((vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__safe 
             == ((IData)(0x00000040U) - vlSelfRef.minesweeper_core__DOT__unnamedblk2__DOT__totalm))) {
            __Vdly__win = 1U;
        }
    }
    vlSelfRef.flagged = __Vdly__flagged;
    vlSelfRef.win = __Vdly__win;
    vlSelfRef.minesweeper_core__DOT__first_click = __Vdly__minesweeper_core__DOT__first_click;
    vlSelfRef.game_over = (((IData)(__Vdly__game_over) 
                            & (IData)(__VdlyMask__game_over)) 
                           | ((IData)(vlSelfRef.game_over) 
                              & (~ (IData)(__VdlyMask__game_over))));
    __VdlyMask__game_over = 0U;
    vlSelfRef.mines = ((__Vdly__mines & __VdlyMask__mines) 
                       | (vlSelfRef.mines & (~ __VdlyMask__mines)));
    __VdlyMask__mines = 0ULL;
    vlSelfRef.revealed = ((__Vdly__revealed & __VdlyMask__revealed) 
                          | (vlSelfRef.revealed & (~ __VdlyMask__revealed)));
    __VdlyMask__revealed = 0ULL;
    vlSelfRef.minesweeper_core__DOT__flood_active = 
        (((IData)(__Vdly__minesweeper_core__DOT__flood_active) 
          & (IData)(__VdlyMask__minesweeper_core__DOT__flood_active)) 
         | ((IData)(vlSelfRef.minesweeper_core__DOT__flood_active) 
            & (~ (IData)(__VdlyMask__minesweeper_core__DOT__flood_active))));
    __VdlyMask__minesweeper_core__DOT__flood_active = 0U;
    vlSelfRef.minesweeper_core__DOT__head = (((IData)(__Vdly__minesweeper_core__DOT__head) 
                                              & (IData)(__VdlyMask__minesweeper_core__DOT__head)) 
                                             | ((IData)(vlSelfRef.minesweeper_core__DOT__head) 
                                                & (~ (IData)(__VdlyMask__minesweeper_core__DOT__head))));
    __VdlyMask__minesweeper_core__DOT__head = 0U;
    vlSelfRef.minesweeper_core__DOT__tail = (((IData)(__Vdly__minesweeper_core__DOT__tail) 
                                              & (IData)(__VdlyMask__minesweeper_core__DOT__tail)) 
                                             | ((IData)(vlSelfRef.minesweeper_core__DOT__tail) 
                                                & (~ (IData)(__VdlyMask__minesweeper_core__DOT__tail))));
    __VdlyMask__minesweeper_core__DOT__tail = 0U;
    vlSelfRef.minesweeper_core__DOT__lfsr = __Vdly__minesweeper_core__DOT__lfsr;
}

void Vminesweeper_core___024root___eval_nba(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_nba\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vminesweeper_core___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vminesweeper_core___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vminesweeper_core___024root___eval_phase__act(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_phase__act\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminesweeper_core___024root___eval_triggers__act(vlSelf);
    Vminesweeper_core___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vminesweeper_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vminesweeper_core___024root___eval_phase__nba(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_phase__nba\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vminesweeper_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vminesweeper_core___024root___eval_nba(vlSelf);
        Vminesweeper_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vminesweeper_core___024root___eval(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vminesweeper_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/varunhotani/Desktop/proj/sim/../rtl/minesweeper_core.v", 22, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vminesweeper_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/varunhotani/Desktop/proj/sim/../rtl/minesweeper_core.v", 22, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vminesweeper_core___024root___eval_phase__act(vlSelf));
    } while (Vminesweeper_core___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vminesweeper_core___024root___eval_debug_assertions(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_debug_assertions\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.cmd_valid & 0xfeU)))) {
        Verilated::overWidthError("cmd_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.cmd & 0xfcU)))) {
        Verilated::overWidthError("cmd");
    }
    if (VL_UNLIKELY(((vlSelfRef.x & 0xf8U)))) {
        Verilated::overWidthError("x");
    }
    if (VL_UNLIKELY(((vlSelfRef.y & 0xf8U)))) {
        Verilated::overWidthError("y");
    }
}
#endif  // VL_DEBUG
