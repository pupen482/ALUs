// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_virtual_board.h for the primary calling header

#include "Valu_virtual_board__pch.h"
#include "Valu_virtual_board___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0;

VL_INLINE_OPT void Valu_virtual_board___024root___ico_sequent__TOP__0(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___ico_sequent__TOP__0\n"); );
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

void Valu_virtual_board___024root___eval_ico(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu_virtual_board___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Valu_virtual_board___024root___eval_triggers__ico(Valu_virtual_board___024root* vlSelf);

bool Valu_virtual_board___024root___eval_phase__ico(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu_virtual_board___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu_virtual_board___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu_virtual_board___024root___eval_act(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_act\n"); );
}

VL_INLINE_OPT void Valu_virtual_board___024root___nba_sequent__TOP__0(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___nba_sequent__TOP__0\n"); );
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
    if (vlSelf->reset) {
        if (((IData)(vlSelf->load_args) & (((IData)(1U) 
                                            << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                                           >> 3U))) {
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out 
                = vlSelf->arg;
        }
        if ((7U & ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                    >> 1U) & (IData)(vlSelf->load_args)))) {
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out 
                = vlSelf->arg;
        }
        if ((3U & ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                    >> 2U) & (IData)(vlSelf->load_args)))) {
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out 
                = vlSelf->arg;
        }
        if ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
             & (IData)(vlSelf->load_args))) {
            vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out 
                = vlSelf->arg;
        }
    } else {
        vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out = 0U;
        vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out = 0U;
        vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out = 0U;
        vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out = 0U;
    }
    if (vlSelf->lo_hi_arg) {
        __Vtableidx1 = vlSelf->arg;
        __Vtableidx2 = ((IData)(vlSelf->select_args)
                         ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)
                         : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out));
    } else {
        __Vtableidx1 = ((IData)(vlSelf->select_args)
                         ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)
                         : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out));
        __Vtableidx2 = vlSelf->arg;
    }
    vlSelf->digit3 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx1];
    vlSelf->alu_virtual_board__DOT__arg_b = (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out) 
                                              << 4U) 
                                             | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out));
    vlSelf->digit2 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx2];
    vlSelf->alu_virtual_board__DOT__arg_a = (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                                              << 4U) 
                                             | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out));
    if ((4U & (IData)(vlSelf->command))) {
        if ((2U & (IData)(vlSelf->command))) {
            if ((1U & (IData)(vlSelf->command))) {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0U;
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                    = (0xfU & (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                                & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                                ? 0xfU : 0U));
            } else if ((((0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                         & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))) 
                        | ((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                           & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))))) {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0xfU;
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                    = (0xfU & 0xfU);
            } else {
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0U;
                vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                    = (0xfU & (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)) 
                                & (0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)))
                                ? 0U : 0xfU));
            }
        } else if ((1U & (IData)(vlSelf->command))) {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0U;
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & (((0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                            & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                            ? 0xfU : 0U));
        } else {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out));
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & (((0U == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                            & (0xfU == (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)))
                            ? 0U : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                                    | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))));
        }
    } else if ((2U & (IData)(vlSelf->command))) {
        if ((1U & (IData)(vlSelf->command))) {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out));
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                           | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)));
        } else {
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
                = ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                   & (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)));
            vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
                = (0xfU & ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out) 
                           | (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out))));
        }
    } else if ((1U & (IData)(vlSelf->command))) {
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int 
            = ((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
               & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out));
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
            = (0xfU & ((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)) 
                       | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)));
    } else {
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int = 0xfU;
        vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int 
            = (0xfU & 0xfU);
    }
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
    vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F 
        = (0xfU & ((4U & (IData)(vlSelf->command)) ? 
                   ((2U & (IData)(vlSelf->command))
                     ? ((1U & (IData)(vlSelf->command))
                         ? 0xfU : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                                   & (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)))
                     : ((1U & (IData)(vlSelf->command))
                         ? ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                            | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out))
                         : ((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                            ^ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out))))
                    : ((2U & (IData)(vlSelf->command))
                        ? ((1U & (IData)(vlSelf->command))
                            ? (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out) 
                                + (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)) 
                               + (IData)(vlSelf->carry_in))
                            : (((~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)) 
                                + (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out)) 
                               + (IData)(vlSelf->carry_in)))
                        : ((1U & (IData)(vlSelf->command))
                            ? (((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out) 
                                + (~ (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out))) 
                               + (IData)(vlSelf->carry_in))
                            : 0U))));
    __Vtableidx4 = vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F;
    vlSelf->digit0 = Valu_virtual_board__ConstPool__TABLE_h1e0c678d_0
        [__Vtableidx4];
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

void Valu_virtual_board___024root___eval_nba(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valu_virtual_board___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Valu_virtual_board___024root___eval_triggers__act(Valu_virtual_board___024root* vlSelf);

bool Valu_virtual_board___024root___eval_phase__act(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_virtual_board___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu_virtual_board___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_virtual_board___024root___eval_phase__nba(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_virtual_board___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__ico(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__nba(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__act(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_virtual_board___024root___eval(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Valu_virtual_board___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/alu_top.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu_virtual_board___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu_virtual_board___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/alu_top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu_virtual_board___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/alu_top.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu_virtual_board___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu_virtual_board___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_virtual_board___024root___eval_debug_assertions(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->arg & 0xf0U))) {
        Verilated::overWidthError("arg");}
    if (VL_UNLIKELY((vlSelf->command & 0xf8U))) {
        Verilated::overWidthError("command");}
    if (VL_UNLIKELY((vlSelf->select_args & 0xfeU))) {
        Verilated::overWidthError("select_args");}
    if (VL_UNLIKELY((vlSelf->load_args & 0xfeU))) {
        Verilated::overWidthError("load_args");}
    if (VL_UNLIKELY((vlSelf->lo_hi_arg & 0xfeU))) {
        Verilated::overWidthError("lo_hi_arg");}
    if (VL_UNLIKELY((vlSelf->carry_in & 0xfeU))) {
        Verilated::overWidthError("carry_in");}
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
