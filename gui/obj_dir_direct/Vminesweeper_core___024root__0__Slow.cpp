// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminesweeper_core.h for the primary calling header

#include "Vminesweeper_core__pch.h"

VL_ATTR_COLD void Vminesweeper_core___024root___eval_static(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_static\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vminesweeper_core___024root___eval_initial(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_initial\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminesweeper_core___024root___eval_final(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_final\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminesweeper_core___024root___eval_settle(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___eval_settle\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vminesweeper_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminesweeper_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vminesweeper_core___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vminesweeper_core___024root___ctor_var_reset(Vminesweeper_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminesweeper_core___024root___ctor_var_reset\n"); );
    Vminesweeper_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->cmd_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15271417814813862642ull);
    vlSelf->cmd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4759173320218931530ull);
    vlSelf->x = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9409450202036847209ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11123243248953317070ull);
    vlSelf->revealed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8713184059058465731ull);
    vlSelf->flagged = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6814261430458388945ull);
    vlSelf->mines = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9199143519903352027ull);
    vlSelf->game_over = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3411246290867526473ull);
    vlSelf->win = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 462831244940742567ull);
    vlSelf->minesweeper_core__DOT__count_neighbors__Vstatic__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16884505473510714799ull);
    vlSelf->minesweeper_core__DOT__count_neighbors__Vstatic__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11420550144791887115ull);
    vlSelf->minesweeper_core__DOT__count_neighbors__Vstatic__cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5013732123031243081ull);
    vlSelf->minesweeper_core__DOT__lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17590056720699616947ull);
    vlSelf->minesweeper_core__DOT__first_click = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2687369919008526660ull);
    vlSelf->minesweeper_core__DOT__generate_mines__Vstatic__pos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18339080338599809593ull);
    vlSelf->minesweeper_core__DOT__generate_mines__Vstatic__placed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9884160498810777314ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->minesweeper_core__DOT__queue[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10741061331325983953ull);
    }
    vlSelf->minesweeper_core__DOT__head = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14261155720848106555ull);
    vlSelf->minesweeper_core__DOT__tail = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2461296781387302889ull);
    vlSelf->minesweeper_core__DOT__flood_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13218936319504217845ull);
    vlSelf->minesweeper_core__DOT__chord_neighbors__Vstatic__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11016934851730257505ull);
    vlSelf->minesweeper_core__DOT__chord_neighbors__Vstatic__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2617966820302911964ull);
    vlSelf->minesweeper_core__DOT__chord_neighbors__Vstatic__flagcount = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10136579570359480209ull);
    vlSelf->minesweeper_core__DOT__reveal_cell__Vstatic__id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3147068367867340520ull);
    vlSelf->minesweeper_core__DOT__unnamedblk1__DOT__id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14688872773202573234ull);
    vlSelf->minesweeper_core__DOT__unnamedblk1__DOT__cx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17824528522899532979ull);
    vlSelf->minesweeper_core__DOT__unnamedblk1__DOT__cy = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17319760794890017907ull);
    vlSelf->minesweeper_core__DOT__unnamedblk1__DOT__nx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18427484104473729055ull);
    vlSelf->minesweeper_core__DOT__unnamedblk1__DOT__ny = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12666172161027850244ull);
    vlSelf->minesweeper_core__DOT__unnamedblk1__DOT__nid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12520441068775788704ull);
    vlSelf->minesweeper_core__DOT__unnamedblk2__DOT__safe = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15054187713561669429ull);
    vlSelf->minesweeper_core__DOT__unnamedblk2__DOT__totalm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9412717927579805877ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1487628987237401141ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
