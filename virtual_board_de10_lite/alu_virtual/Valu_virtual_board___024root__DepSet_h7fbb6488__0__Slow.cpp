// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_virtual_board.h for the primary calling header

#include "Valu_virtual_board__pch.h"
#include "Valu_virtual_board___024root.h"

VL_ATTR_COLD void Valu_virtual_board___024root___eval_static(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valu_virtual_board___024root___eval_initial(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Valu_virtual_board___024root___eval_final(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__stl(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Valu_virtual_board___024root___eval_phase__stl(Valu_virtual_board___024root* vlSelf);

VL_ATTR_COLD void Valu_virtual_board___024root___eval_settle(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_settle\n"); );
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
            Valu_virtual_board___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/alu_top.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Valu_virtual_board___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__stl(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0;

VL_ATTR_COLD void Valu_virtual_board___024root___stl_sequent__TOP__0(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->digit5 = ((IData)(vlSelf->select_args) ? 0x6eU
                       : 0x7fU);
    if (vlSelf->lo_hi_arg) {
        vlSelf->digit4 = 0x76U;
        __Vtableidx1 = vlSelf->arg;
        __Vtableidx2 = ((IData)(vlSelf->select_args)
                         ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)
                         : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out));
    } else {
        vlSelf->digit4 = 0x38U;
        __Vtableidx1 = ((IData)(vlSelf->select_args)
                         ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)
                         : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out));
        __Vtableidx2 = vlSelf->arg;
    }
    vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr 
        = (((IData)(vlSelf->lo_hi_arg) << 1U) | (IData)(vlSelf->select_args));
    vlSelf->digit3 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx1];
    vlSelf->digit2 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx2];
    vlSelf->alu_virtual_board__DOT__arg_a = (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                                              << 4U) 
                                             | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out));
    vlSelf->alu_virtual_board__DOT__arg_b = (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out) 
                                              << 4U) 
                                             | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out));
    if ((4U & (IData)(vlSelf->command))) {
        if ((2U & (IData)(vlSelf->command))) {
            if ((1U & (IData)(vlSelf->command))) {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0U;
                vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
                    = (0xfU & 0xfU);
            } else {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                    = ((((0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                         & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))) 
                        | ((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                           & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))))
                        ? 0xfU : 0U);
                vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
                    = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                               & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)));
            }
        } else if ((1U & (IData)(vlSelf->command))) {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0U;
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
                = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                           | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)));
        } else {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out));
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
                = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                           ^ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)));
        }
    } else if ((2U & (IData)(vlSelf->command))) {
        if ((1U & (IData)(vlSelf->command))) {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out));
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
                = (0xfU & (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                            + (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)) 
                           + (IData)(vlSelf->carry_in)));
        } else {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                   & (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)));
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
                = (0xfU & (((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)) 
                            + (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                           + (IData)(vlSelf->carry_in)));
        }
    } else if ((1U & (IData)(vlSelf->command))) {
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
            = ((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
               & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out));
        vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
            = (0xfU & (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out) 
                        + (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out))) 
                       + (IData)(vlSelf->carry_in)));
    } else {
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0xfU;
        vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
            = (0xfU & 0U);
    }
    __Vtableidx4 = vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F;
    vlSelf->digit0 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx4];
    vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
        = (0xfU & ((4U & (IData)(vlSelf->command)) ? 
                   ((2U & (IData)(vlSelf->command))
                     ? ((1U & (IData)(vlSelf->command))
                         ? (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                             & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                             ? 0xfU : 0U) : ((((0U 
                                                == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                                               & (0U 
                                                  == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))) 
                                              | ((0xfU 
                                                  == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))))
                                              ? 0xfU
                                              : (((0xfU 
                                                   == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)))
                                                  ? 0U
                                                  : 0xfU)))
                     : ((1U & (IData)(vlSelf->command))
                         ? (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                             & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                             ? 0xfU : 0U) : (((0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                                              & (0xfU 
                                                 == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                                              ? 0U : 
                                             ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                                              | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))))
                    : ((2U & (IData)(vlSelf->command))
                        ? ((1U & (IData)(vlSelf->command))
                            ? ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                               | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))
                            : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                               | (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))))
                        : ((1U & (IData)(vlSelf->command))
                            ? ((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                               | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))
                            : 0xfU))));
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G 
        = (1U & (~ (((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int) 
                     >> 3U) | ((((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int) 
                                 >> 3U) & ((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int) 
                                           >> 2U)) 
                               | ((IData)(((0xcU == 
                                            (0xcU & (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int))) 
                                           & ((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int) 
                                              >> 1U))) 
                                  | (IData)(((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int))) 
                                             & (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int))))))));
    if ((4U & (IData)(vlSelf->command))) {
        if ((2U & (IData)(vlSelf->command))) {
            if ((1U & (IData)(vlSelf->command))) {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int = 0U;
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                    = (0xfU & (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                                & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)))
                                ? 0xfU : 0U));
            } else if ((((0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                         & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out))) 
                        | ((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                           & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out))))) {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int = 0xfU;
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                    = (0xfU & 0xfU);
            } else {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int = 0U;
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                    = (0xfU & (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)) 
                                & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)))
                                ? 0U : 0xfU));
            }
        } else if ((1U & (IData)(vlSelf->command))) {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int = 0U;
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                            & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)))
                            ? 0xfU : 0U));
        } else {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out));
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & (((0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                            & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)))
                            ? 0U : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                                    | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out))));
        }
    } else if ((2U & (IData)(vlSelf->command))) {
        if ((1U & (IData)(vlSelf->command))) {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out));
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                           | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)));
        } else {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                   & (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)));
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                           | (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out))));
        }
    } else if ((1U & (IData)(vlSelf->command))) {
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int 
            = ((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
               & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out));
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
            = (0xfU & ((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                       | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)));
    } else {
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int = 0xfU;
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int 
            = (0xfU & 0xfU);
    }
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G 
        = (1U & (~ (((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int) 
                     >> 3U) | ((((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int) 
                                 >> 3U) & ((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int) 
                                           >> 2U)) 
                               | ((IData)(((0xcU == 
                                            (0xcU & (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int))) 
                                           & ((IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int) 
                                              >> 1U))) 
                                  | (IData)(((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int))) 
                                             & (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int))))))));
    vlSelf->alu_virtual_board__DOT__local_carry = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G) 
                                                   | ((~ (IData)(
                                                                 (0xfU 
                                                                  == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int)))) 
                                                      & (IData)(vlSelf->carry_in)));
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F 
        = (0xfU & ((4U & (IData)(vlSelf->command)) ? 
                   ((2U & (IData)(vlSelf->command))
                     ? ((1U & (IData)(vlSelf->command))
                         ? 0xfU : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                     : ((1U & (IData)(vlSelf->command))
                         ? ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                            | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))
                         : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                            ^ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))))
                    : ((2U & (IData)(vlSelf->command))
                        ? ((1U & (IData)(vlSelf->command))
                            ? (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                                + (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)) 
                               + (IData)(vlSelf->alu_virtual_board__DOT__local_carry))
                            : (((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)) 
                                + (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                               + (IData)(vlSelf->alu_virtual_board__DOT__local_carry)))
                        : ((1U & (IData)(vlSelf->command))
                            ? (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out) 
                                + (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out))) 
                               + (IData)(vlSelf->alu_virtual_board__DOT__local_carry))
                            : 0U))));
    vlSelf->carry_out = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G) 
                         | ((~ (IData)((0xfU == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int)))) 
                            & (IData)(vlSelf->alu_virtual_board__DOT__local_carry)));
    __Vtableidx3 = vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F;
    vlSelf->digit1 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx3];
    vlSelf->result = (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F) 
                       << 4U) | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F));
    vlSelf->flags = ((0xf8U & (IData)(vlSelf->flags)) 
                     | (((IData)(vlSelf->carry_out) 
                         << 2U) | ((2U & ((IData)(vlSelf->result) 
                                          >> 6U)) | 
                                   (0U == (IData)(vlSelf->result)))));
    vlSelf->flags = ((0xf7U & (IData)(vlSelf->flags)) 
                     | (8U & (((IData)(vlSelf->alu_virtual_board__DOT__arg_a) 
                               & (IData)(vlSelf->alu_virtual_board__DOT__arg_b)) 
                              | (((IData)(vlSelf->alu_virtual_board__DOT__arg_a) 
                                  | (IData)(vlSelf->alu_virtual_board__DOT__arg_b)) 
                                 & ((~ ((IData)(vlSelf->result) 
                                        >> 3U)) << 3U)))));
    vlSelf->flags = ((0xefU & (IData)(vlSelf->flags)) 
                     | ((((1U & ((IData)(vlSelf->alu_virtual_board__DOT__arg_a) 
                                 >> 7U)) == (1U & ((IData)(vlSelf->alu_virtual_board__DOT__arg_b) 
                                                   >> 7U))) 
                         & ((1U & ((IData)(vlSelf->result) 
                                   >> 7U)) != (1U & 
                                               ((IData)(vlSelf->alu_virtual_board__DOT__arg_a) 
                                                >> 7U)))) 
                        << 4U));
    vlSelf->flags = ((0x9fU & (IData)(vlSelf->flags)) 
                     | ((((IData)(vlSelf->alu_virtual_board__DOT__arg_a) 
                          == (IData)(vlSelf->alu_virtual_board__DOT__arg_b)) 
                         << 6U) | (0x20U & ((~ VL_REDXOR_8(vlSelf->result)) 
                                            << 5U))));
    vlSelf->flags = ((0x7fU & (IData)(vlSelf->flags)) 
                     | (((IData)(vlSelf->alu_virtual_board__DOT__arg_a) 
                         < (IData)(vlSelf->alu_virtual_board__DOT__arg_b)) 
                        << 7U));
}

VL_ATTR_COLD void Valu_virtual_board___024root___eval_stl(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Valu_virtual_board___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Valu_virtual_board___024root___eval_triggers__stl(Valu_virtual_board___024root* vlSelf);

VL_ATTR_COLD bool Valu_virtual_board___024root___eval_phase__stl(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Valu_virtual_board___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Valu_virtual_board___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__ico(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__act(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__nba(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock or negedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_virtual_board___024root___ctor_var_reset(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->arg = VL_RAND_RESET_I(4);
    vlSelf->command = VL_RAND_RESET_I(3);
    vlSelf->select_args = VL_RAND_RESET_I(1);
    vlSelf->load_args = VL_RAND_RESET_I(1);
    vlSelf->lo_hi_arg = VL_RAND_RESET_I(1);
    vlSelf->carry_in = VL_RAND_RESET_I(1);
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->result = VL_RAND_RESET_I(8);
    vlSelf->flags = VL_RAND_RESET_I(8);
    vlSelf->carry_out = VL_RAND_RESET_I(1);
    vlSelf->digit5 = VL_RAND_RESET_I(7);
    vlSelf->digit4 = VL_RAND_RESET_I(7);
    vlSelf->digit3 = VL_RAND_RESET_I(7);
    vlSelf->digit2 = VL_RAND_RESET_I(7);
    vlSelf->digit1 = VL_RAND_RESET_I(7);
    vlSelf->digit0 = VL_RAND_RESET_I(7);
    vlSelf->alu_virtual_board__DOT__arg_a = VL_RAND_RESET_I(8);
    vlSelf->alu_virtual_board__DOT__arg_b = VL_RAND_RESET_I(8);
    vlSelf->alu_virtual_board__DOT__local_carry = VL_RAND_RESET_I(1);
    vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr = VL_RAND_RESET_I(2);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G = VL_RAND_RESET_I(1);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G = VL_RAND_RESET_I(1);
    vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int = VL_RAND_RESET_I(4);
    vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
