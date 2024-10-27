// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_16_bit.h for the primary calling header

#include "Valu_16_bit__pch.h"
#include "Valu_16_bit___024root.h"

VL_ATTR_COLD void Valu_16_bit___024root___eval_static(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valu_16_bit___024root___eval_initial__TOP(Valu_16_bit___024root* vlSelf);

VL_ATTR_COLD void Valu_16_bit___024root___eval_initial(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_initial\n"); );
    // Body
    Valu_16_bit___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Valu_16_bit___024root___eval_final(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__stl(Valu_16_bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu_16_bit___024root___eval_phase__stl(Valu_16_bit___024root* vlSelf);

VL_ATTR_COLD void Valu_16_bit___024root___eval_settle(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Valu_16_bit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("alu_16_bit.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Valu_16_bit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__stl(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Valu_16_bit___024root___ico_sequent__TOP__0(Valu_16_bit___024root* vlSelf);

VL_ATTR_COLD void Valu_16_bit___024root___eval_stl(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Valu_16_bit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Valu_16_bit___024root___eval_triggers__stl(Valu_16_bit___024root* vlSelf);

VL_ATTR_COLD bool Valu_16_bit___024root___eval_phase__stl(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Valu_16_bit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Valu_16_bit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__ico(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__act(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__nba(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_16_bit___024root___ctor_var_reset(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(16);
    vlSelf->B = VL_RAND_RESET_I(16);
    vlSelf->S = VL_RAND_RESET_I(3);
    vlSelf->Cn = VL_RAND_RESET_I(1);
    vlSelf->F = VL_RAND_RESET_I(16);
    vlSelf->Co = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT__F0 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__F1 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__F2 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__F3 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__Cn1 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT__Cn2 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT__Cn3 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__A = VL_RAND_RESET_I(16);
    vlSelf->alu_16_bit__DOT____Vtogcov__B = VL_RAND_RESET_I(16);
    vlSelf->alu_16_bit__DOT____Vtogcov__S = VL_RAND_RESET_I(3);
    vlSelf->alu_16_bit__DOT____Vtogcov__Cn = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__F = VL_RAND_RESET_I(16);
    vlSelf->alu_16_bit__DOT____Vtogcov__Co = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__F0 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT____Vtogcov__F1 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT____Vtogcov__F2 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT____Vtogcov__F3 = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT____Vtogcov__P0 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__P1 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__P2 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__P3 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__G0 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__G1 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__G2 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__G3 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__Cn1 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__Cn2 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT____Vtogcov__Cn3 = VL_RAND_RESET_I(1);
    vlSelf->alu_16_bit__DOT__alu0__DOT__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu0__DOT__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu1__DOT__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu1__DOT__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu2__DOT__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu2__DOT__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu3__DOT__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu3__DOT__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int = VL_RAND_RESET_I(4);
    vlSelf->__VdfgTmp_h8190f988__0 = 0;
    vlSelf->__VdfgTmp_h8bec44e4__0 = 0;
    vlSelf->__VdfgTmp_h109a05a2__0 = 0;
    vlSelf->__VdfgTmp_hb6de5df8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
