// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_16_bit.h for the primary calling header

#include "Valu_16_bit__pch.h"
#include "Valu_16_bit__Syms.h"
#include "Valu_16_bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__ico(Valu_16_bit___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_16_bit___024root___eval_triggers__ico(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_16_bit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Valu_16_bit___024root___ico_sequent__TOP__0(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->S) >> 2U)))) {
        if ((2U & (IData)(vlSelf->S))) {
            if ((1U & (IData)(vlSelf->S))) {
                ++(vlSymsp->__Vcoverage[91]);
                ++(vlSymsp->__Vcoverage[118]);
                ++(vlSymsp->__Vcoverage[145]);
                ++(vlSymsp->__Vcoverage[172]);
            }
            if ((1U & (~ (IData)(vlSelf->S)))) {
                ++(vlSymsp->__Vcoverage[90]);
                ++(vlSymsp->__Vcoverage[117]);
                ++(vlSymsp->__Vcoverage[144]);
                ++(vlSymsp->__Vcoverage[171]);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->S) >> 1U)))) {
            if ((1U & (IData)(vlSelf->S))) {
                ++(vlSymsp->__Vcoverage[89]);
                ++(vlSymsp->__Vcoverage[116]);
                ++(vlSymsp->__Vcoverage[143]);
                ++(vlSymsp->__Vcoverage[170]);
            }
            if ((1U & (~ (IData)(vlSelf->S)))) {
                ++(vlSymsp->__Vcoverage[88]);
                ++(vlSymsp->__Vcoverage[115]);
                ++(vlSymsp->__Vcoverage[142]);
                ++(vlSymsp->__Vcoverage[169]);
            }
        }
    }
    if (((IData)(vlSelf->Cn) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__Cn))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->alu_16_bit__DOT____Vtogcov__Cn = vlSelf->Cn;
    }
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->alu_16_bit__DOT____Vtogcov__S = ((6U 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__S)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->alu_16_bit__DOT____Vtogcov__S = ((5U 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__S)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->alu_16_bit__DOT____Vtogcov__S = ((3U 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__S)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->S)));
    }
    if ((1U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfffeU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((2U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfffdU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((4U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfffbU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((8U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfff7U 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x10U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xffefU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x20U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xffdfU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x40U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xffbfU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x80U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xff7fU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x100U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfeffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x100U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x200U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfdffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x200U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x400U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xfbffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x400U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x800U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xf7ffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x800U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x1000U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xefffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x1000U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x2000U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xdfffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x2000U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x4000U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0xbfffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x4000U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((0x8000U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->alu_16_bit__DOT____Vtogcov__A = ((0x7fffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__A)) 
                                                 | (0x8000U 
                                                    & (IData)(vlSelf->A)));
    }
    if ((1U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfffeU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((2U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfffdU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((4U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfffbU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((8U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfff7U 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x10U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xffefU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x20U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xffdfU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x40U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xffbfU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x80U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xff7fU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x100U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfeffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x100U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x200U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfdffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x200U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x400U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xfbffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x400U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x800U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xf7ffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x800U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x1000U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xefffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x1000U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x2000U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xdfffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x2000U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x4000U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0xbfffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x4000U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((0x8000U & ((IData)(vlSelf->B) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->alu_16_bit__DOT____Vtogcov__B = ((0x7fffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__B)) 
                                                 | (0x8000U 
                                                    & (IData)(vlSelf->B)));
    }
    if ((4U & (IData)(vlSelf->S))) {
        if ((1U & (~ ((IData)(vlSelf->S) >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->S)))) {
                ++(vlSymsp->__Vcoverage[94]);
                ++(vlSymsp->__Vcoverage[121]);
                ++(vlSymsp->__Vcoverage[148]);
                ++(vlSymsp->__Vcoverage[175]);
                if ((1U & (~ ((0U == (0xfU & (IData)(vlSelf->A))) 
                              & (0xfU == (0xfU & (IData)(vlSelf->B))))))) {
                    ++(vlSymsp->__Vcoverage[93]);
                }
                if (((0U == (0xfU & (IData)(vlSelf->A))) 
                     & (0xfU == (0xfU & (IData)(vlSelf->B))))) {
                    ++(vlSymsp->__Vcoverage[92]);
                }
                if ((1U & (~ (IData)(((0U == (0xf0U 
                                              & (IData)(vlSelf->A))) 
                                      & (0xf0U == (0xf0U 
                                                   & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[120]);
                }
                if ((IData)(((0U == (0xf0U & (IData)(vlSelf->A))) 
                             & (0xf0U == (0xf0U & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[119]);
                }
                if ((1U & (~ (IData)(((0U == (0xf00U 
                                              & (IData)(vlSelf->A))) 
                                      & (0xf00U == 
                                         (0xf00U & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[147]);
                }
                if ((IData)(((0U == (0xf00U & (IData)(vlSelf->A))) 
                             & (0xf00U == (0xf00U & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[146]);
                }
                if ((1U & (~ (IData)(((0U == (0xf000U 
                                              & (IData)(vlSelf->A))) 
                                      & (0xf000U == 
                                         (0xf000U & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[174]);
                }
                if ((IData)(((0U == (0xf000U & (IData)(vlSelf->A))) 
                             & (0xf000U == (0xf000U 
                                            & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[173]);
                }
            }
            if ((1U & (IData)(vlSelf->S))) {
                ++(vlSymsp->__Vcoverage[97]);
                ++(vlSymsp->__Vcoverage[124]);
                ++(vlSymsp->__Vcoverage[151]);
                ++(vlSymsp->__Vcoverage[178]);
                if ((1U & (~ ((0xfU == (0xfU & (IData)(vlSelf->A))) 
                              & (0xfU == (0xfU & (IData)(vlSelf->B))))))) {
                    ++(vlSymsp->__Vcoverage[96]);
                }
                if (((0xfU == (0xfU & (IData)(vlSelf->A))) 
                     & (0xfU == (0xfU & (IData)(vlSelf->B))))) {
                    ++(vlSymsp->__Vcoverage[95]);
                }
                if ((1U & (~ (IData)(((0xf0U == (0xf0U 
                                                 & (IData)(vlSelf->A))) 
                                      & (0xf0U == (0xf0U 
                                                   & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[123]);
                }
                if ((IData)(((0xf0U == (0xf0U & (IData)(vlSelf->A))) 
                             & (0xf0U == (0xf0U & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[122]);
                }
                if ((1U & (~ (IData)(((0xf00U == (0xf00U 
                                                  & (IData)(vlSelf->A))) 
                                      & (0xf00U == 
                                         (0xf00U & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[150]);
                }
                if ((IData)(((0xf00U == (0xf00U & (IData)(vlSelf->A))) 
                             & (0xf00U == (0xf00U & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[149]);
                }
                if ((1U & (~ (IData)(((0xf000U == (0xf000U 
                                                   & (IData)(vlSelf->A))) 
                                      & (0xf000U == 
                                         (0xf000U & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[177]);
                }
                if ((IData)(((0xf000U == (0xf000U & (IData)(vlSelf->A))) 
                             & (0xf000U == (0xf000U 
                                            & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[176]);
                }
            }
        }
        if ((2U & (IData)(vlSelf->S))) {
            if ((1U & (~ (IData)(vlSelf->S)))) {
                ++(vlSymsp->__Vcoverage[101]);
                ++(vlSymsp->__Vcoverage[128]);
                ++(vlSymsp->__Vcoverage[155]);
                ++(vlSymsp->__Vcoverage[182]);
                if ((1U & (~ (((0U == (0xfU & (IData)(vlSelf->A))) 
                               & (0U == (0xfU & (IData)(vlSelf->B)))) 
                              | ((0xfU == (0xfU & (IData)(vlSelf->A))) 
                                 & (0U == (0xfU & (IData)(vlSelf->B)))))))) {
                    if ((1U & (~ ((0xfU == (0xfU & (IData)(vlSelf->B))) 
                                  & (0U == (0xfU & (IData)(vlSelf->A))))))) {
                        ++(vlSymsp->__Vcoverage[99]);
                    }
                    if (((0xfU == (0xfU & (IData)(vlSelf->B))) 
                         & (0U == (0xfU & (IData)(vlSelf->A))))) {
                        ++(vlSymsp->__Vcoverage[98]);
                    }
                }
                if ((((0U == (0xfU & (IData)(vlSelf->A))) 
                      & (0U == (0xfU & (IData)(vlSelf->B)))) 
                     | ((0xfU == (0xfU & (IData)(vlSelf->A))) 
                        & (0U == (0xfU & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[100]);
                }
                if ((1U & (~ ((IData)(((0U == (0xf0U 
                                               & (IData)(vlSelf->A))) 
                                       & (0U == (0xf0U 
                                                 & (IData)(vlSelf->B))))) 
                              | (IData)(((0xf0U == 
                                          (0xf0U & (IData)(vlSelf->A))) 
                                         & (0U == (0xf0U 
                                                   & (IData)(vlSelf->B))))))))) {
                    if ((1U & (~ (IData)(((0xf0U == 
                                           (0xf0U & (IData)(vlSelf->B))) 
                                          & (0U == 
                                             (0xf0U 
                                              & (IData)(vlSelf->A)))))))) {
                        ++(vlSymsp->__Vcoverage[126]);
                    }
                    if ((IData)(((0xf0U == (0xf0U & (IData)(vlSelf->B))) 
                                 & (0U == (0xf0U & (IData)(vlSelf->A)))))) {
                        ++(vlSymsp->__Vcoverage[125]);
                    }
                }
                if (((IData)(((0U == (0xf0U & (IData)(vlSelf->A))) 
                              & (0U == (0xf0U & (IData)(vlSelf->B))))) 
                     | (IData)(((0xf0U == (0xf0U & (IData)(vlSelf->A))) 
                                & (0U == (0xf0U & (IData)(vlSelf->B))))))) {
                    ++(vlSymsp->__Vcoverage[127]);
                }
                if ((1U & (~ ((IData)(((0U == (0xf00U 
                                               & (IData)(vlSelf->A))) 
                                       & (0U == (0xf00U 
                                                 & (IData)(vlSelf->B))))) 
                              | (IData)(((0xf00U == 
                                          (0xf00U & (IData)(vlSelf->A))) 
                                         & (0U == (0xf00U 
                                                   & (IData)(vlSelf->B))))))))) {
                    if ((1U & (~ (IData)(((0xf00U == 
                                           (0xf00U 
                                            & (IData)(vlSelf->B))) 
                                          & (0U == 
                                             (0xf00U 
                                              & (IData)(vlSelf->A)))))))) {
                        ++(vlSymsp->__Vcoverage[153]);
                    }
                    if ((IData)(((0xf00U == (0xf00U 
                                             & (IData)(vlSelf->B))) 
                                 & (0U == (0xf00U & (IData)(vlSelf->A)))))) {
                        ++(vlSymsp->__Vcoverage[152]);
                    }
                }
                if (((IData)(((0U == (0xf00U & (IData)(vlSelf->A))) 
                              & (0U == (0xf00U & (IData)(vlSelf->B))))) 
                     | (IData)(((0xf00U == (0xf00U 
                                            & (IData)(vlSelf->A))) 
                                & (0U == (0xf00U & (IData)(vlSelf->B))))))) {
                    ++(vlSymsp->__Vcoverage[154]);
                }
                if ((1U & (~ ((IData)(((0U == (0xf000U 
                                               & (IData)(vlSelf->A))) 
                                       & (0U == (0xf000U 
                                                 & (IData)(vlSelf->B))))) 
                              | (IData)(((0xf000U == 
                                          (0xf000U 
                                           & (IData)(vlSelf->A))) 
                                         & (0U == (0xf000U 
                                                   & (IData)(vlSelf->B))))))))) {
                    if ((1U & (~ (IData)(((0xf000U 
                                           == (0xf000U 
                                               & (IData)(vlSelf->B))) 
                                          & (0U == 
                                             (0xf000U 
                                              & (IData)(vlSelf->A)))))))) {
                        ++(vlSymsp->__Vcoverage[180]);
                    }
                    if ((IData)(((0xf000U == (0xf000U 
                                              & (IData)(vlSelf->B))) 
                                 & (0U == (0xf000U 
                                           & (IData)(vlSelf->A)))))) {
                        ++(vlSymsp->__Vcoverage[179]);
                    }
                }
                if (((IData)(((0U == (0xf000U & (IData)(vlSelf->A))) 
                              & (0U == (0xf000U & (IData)(vlSelf->B))))) 
                     | (IData)(((0xf000U == (0xf000U 
                                             & (IData)(vlSelf->A))) 
                                & (0U == (0xf000U & (IData)(vlSelf->B))))))) {
                    ++(vlSymsp->__Vcoverage[181]);
                }
            }
            if ((1U & (IData)(vlSelf->S))) {
                ++(vlSymsp->__Vcoverage[104]);
                ++(vlSymsp->__Vcoverage[131]);
                ++(vlSymsp->__Vcoverage[158]);
                ++(vlSymsp->__Vcoverage[185]);
                if ((1U & (~ ((0xfU == (0xfU & (IData)(vlSelf->A))) 
                              & (0xfU == (0xfU & (IData)(vlSelf->B))))))) {
                    ++(vlSymsp->__Vcoverage[103]);
                }
                if (((0xfU == (0xfU & (IData)(vlSelf->A))) 
                     & (0xfU == (0xfU & (IData)(vlSelf->B))))) {
                    ++(vlSymsp->__Vcoverage[102]);
                }
                if ((1U & (~ (IData)(((0xf0U == (0xf0U 
                                                 & (IData)(vlSelf->A))) 
                                      & (0xf0U == (0xf0U 
                                                   & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[130]);
                }
                if ((IData)(((0xf0U == (0xf0U & (IData)(vlSelf->A))) 
                             & (0xf0U == (0xf0U & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[129]);
                }
                if ((1U & (~ (IData)(((0xf00U == (0xf00U 
                                                  & (IData)(vlSelf->A))) 
                                      & (0xf00U == 
                                         (0xf00U & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[157]);
                }
                if ((IData)(((0xf00U == (0xf00U & (IData)(vlSelf->A))) 
                             & (0xf00U == (0xf00U & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[156]);
                }
                if ((1U & (~ (IData)(((0xf000U == (0xf000U 
                                                   & (IData)(vlSelf->A))) 
                                      & (0xf000U == 
                                         (0xf000U & (IData)(vlSelf->B)))))))) {
                    ++(vlSymsp->__Vcoverage[184]);
                }
                if ((IData)(((0xf000U == (0xf000U & (IData)(vlSelf->A))) 
                             & (0xf000U == (0xf000U 
                                            & (IData)(vlSelf->B)))))) {
                    ++(vlSymsp->__Vcoverage[183]);
                }
                vlSelf->alu_16_bit__DOT__alu3__DOT__G_int 
                    = (0xfU & 0U);
            } else {
                vlSelf->alu_16_bit__DOT__alu3__DOT__G_int 
                    = (0xfU & (((IData)(((0U == (0xf000U 
                                                 & (IData)(vlSelf->A))) 
                                         & (0U == (0xf000U 
                                                   & (IData)(vlSelf->B))))) 
                                | (IData)(((0xf000U 
                                            == (0xf000U 
                                                & (IData)(vlSelf->A))) 
                                           & (0U == 
                                              (0xf000U 
                                               & (IData)(vlSelf->B))))))
                                ? 0xfU : 0U));
            }
        } else {
            vlSelf->alu_16_bit__DOT__alu3__DOT__G_int 
                = (0xfU & ((1U & (IData)(vlSelf->S))
                            ? 0U : (((IData)(vlSelf->A) 
                                     & (IData)(vlSelf->B)) 
                                    >> 0xcU)));
        }
    } else {
        vlSelf->alu_16_bit__DOT__alu3__DOT__G_int = 
            (0xfU & ((2U & (IData)(vlSelf->S)) ? ((1U 
                                                   & (IData)(vlSelf->S))
                                                   ? 
                                                  (((IData)(vlSelf->A) 
                                                    & (IData)(vlSelf->B)) 
                                                   >> 0xcU)
                                                   : 
                                                  (((IData)(vlSelf->A) 
                                                    >> 0xcU) 
                                                   & (~ 
                                                      ((IData)(vlSelf->B) 
                                                       >> 0xcU))))
                      : ((1U & (IData)(vlSelf->S)) ? 
                         ((~ ((IData)(vlSelf->A) >> 0xcU)) 
                          & ((IData)(vlSelf->B) >> 0xcU))
                          : 0xfU)));
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int)));
    }
    vlSelf->alu_16_bit__DOT__alu3__DOT__P_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(
                                                               ((0xf000U 
                                                                 == 
                                                                 (0xf000U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf000U 
                                                                   == 
                                                                   (0xf000U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      (((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0xf000U 
                                                                   & (IData)(vlSelf->A))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf000U 
                                                                     & (IData)(vlSelf->B))))) 
                                                        | (IData)(
                                                                  ((0xf000U 
                                                                    == 
                                                                    (0xf000U 
                                                                     & (IData)(vlSelf->A))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xf000U 
                                                                       & (IData)(vlSelf->B))))))
                                                        ? 0xfU
                                                        : 
                                                       ((IData)(
                                                                ((0xf000U 
                                                                  == 
                                                                  (0xf000U 
                                                                   & (IData)(vlSelf->B))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf000U 
                                                                     & (IData)(vlSelf->A)))))
                                                         ? 0U
                                                         : 0xfU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(
                                                               ((0xf000U 
                                                                 == 
                                                                 (0xf000U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf000U 
                                                                   == 
                                                                   (0xf000U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      ((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0xf000U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf000U 
                                                                   == 
                                                                   (0xf000U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->A) 
                                                         | (IData)(vlSelf->B)) 
                                                        >> 0xcU))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((IData)(vlSelf->A) 
                                                        | (IData)(vlSelf->B)) 
                                                       >> 0xcU)
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        >> 0xcU) 
                                                       | (~ 
                                                          ((IData)(vlSelf->B) 
                                                           >> 0xcU))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->A) 
                                                         >> 0xcU)) 
                                                       | ((IData)(vlSelf->B) 
                                                          >> 0xcU))
                                                       : 0xfU))));
    if ((1U & ((~ (IData)((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)))) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__P3)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->alu_16_bit__DOT____Vtogcov__P3 = (1U 
                                                  & (~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)))));
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)));
    }
    vlSelf->__VdfgTmp_h8190f988__0 = (1U & (((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
                                             >> 3U) 
                                            | ((((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
                                                   >> 2U)) 
                                               | ((IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)))) 
                                                  & (((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int) 
                                                      >> 1U) 
                                                     | (((IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int)))))));
    vlSelf->alu_16_bit__DOT__F0 = (0xfU & ((4U & (IData)(vlSelf->S))
                                            ? ((2U 
                                                & (IData)(vlSelf->S))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 0xfU
                                                    : 
                                                   ((IData)(vlSelf->A) 
                                                    & (IData)(vlSelf->B)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 
                                                   ((IData)(vlSelf->A) 
                                                    | (IData)(vlSelf->B))
                                                    : 
                                                   ((IData)(vlSelf->A) 
                                                    ^ (IData)(vlSelf->B))))
                                            : ((2U 
                                                & (IData)(vlSelf->S))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 
                                                   (((IData)(vlSelf->A) 
                                                     + (IData)(vlSelf->B)) 
                                                    + (IData)(vlSelf->Cn))
                                                    : 
                                                   (((~ (IData)(vlSelf->B)) 
                                                     + (IData)(vlSelf->A)) 
                                                    + (IData)(vlSelf->Cn)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 
                                                   (((IData)(vlSelf->B) 
                                                     + 
                                                     (~ (IData)(vlSelf->A))) 
                                                    + (IData)(vlSelf->Cn))
                                                    : 0U))));
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__F0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F0 = ((0xeU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F0)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__F0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F0 = ((0xdU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F0)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__F0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F0 = ((0xbU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F0)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__F0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F0 = ((7U 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F0)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F0)));
    }
    vlSelf->alu_16_bit__DOT__alu2__DOT__G_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 0U
                                                       : 
                                                      (((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0xf00U 
                                                                   & (IData)(vlSelf->A))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf00U 
                                                                     & (IData)(vlSelf->B))))) 
                                                        | (IData)(
                                                                  ((0xf00U 
                                                                    == 
                                                                    (0xf00U 
                                                                     & (IData)(vlSelf->A))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xf00U 
                                                                       & (IData)(vlSelf->B))))))
                                                        ? 0xfU
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 0U
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        & (IData)(vlSelf->B)) 
                                                       >> 8U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((IData)(vlSelf->A) 
                                                        & (IData)(vlSelf->B)) 
                                                       >> 8U)
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        >> 8U) 
                                                       & (~ 
                                                          ((IData)(vlSelf->B) 
                                                           >> 8U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->A) 
                                                         >> 8U)) 
                                                       & ((IData)(vlSelf->B) 
                                                          >> 8U))
                                                       : 0xfU))));
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int)));
    }
    vlSelf->alu_16_bit__DOT__alu1__DOT__G_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 0U
                                                       : 
                                                      (((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0xf0U 
                                                                   & (IData)(vlSelf->A))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->B))))) 
                                                        | (IData)(
                                                                  ((0xf0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->A))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xf0U 
                                                                       & (IData)(vlSelf->B))))))
                                                        ? 0xfU
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 0U
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        & (IData)(vlSelf->B)) 
                                                       >> 4U)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((IData)(vlSelf->A) 
                                                        & (IData)(vlSelf->B)) 
                                                       >> 4U)
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        >> 4U) 
                                                       & (~ 
                                                          ((IData)(vlSelf->B) 
                                                           >> 4U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->A) 
                                                         >> 4U)) 
                                                       & ((IData)(vlSelf->B) 
                                                          >> 4U))
                                                       : 0xfU))));
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int)));
    }
    vlSelf->alu_16_bit__DOT__alu2__DOT__P_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(
                                                               ((0xf00U 
                                                                 == 
                                                                 (0xf00U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf00U 
                                                                   == 
                                                                   (0xf00U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      (((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0xf00U 
                                                                   & (IData)(vlSelf->A))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf00U 
                                                                     & (IData)(vlSelf->B))))) 
                                                        | (IData)(
                                                                  ((0xf00U 
                                                                    == 
                                                                    (0xf00U 
                                                                     & (IData)(vlSelf->A))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xf00U 
                                                                       & (IData)(vlSelf->B))))))
                                                        ? 0xfU
                                                        : 
                                                       ((IData)(
                                                                ((0xf00U 
                                                                  == 
                                                                  (0xf00U 
                                                                   & (IData)(vlSelf->B))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf00U 
                                                                     & (IData)(vlSelf->A)))))
                                                         ? 0U
                                                         : 0xfU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(
                                                               ((0xf00U 
                                                                 == 
                                                                 (0xf00U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf00U 
                                                                   == 
                                                                   (0xf00U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      ((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0xf00U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf00U 
                                                                   == 
                                                                   (0xf00U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->A) 
                                                         | (IData)(vlSelf->B)) 
                                                        >> 8U))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((IData)(vlSelf->A) 
                                                        | (IData)(vlSelf->B)) 
                                                       >> 8U)
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        >> 8U) 
                                                       | (~ 
                                                          ((IData)(vlSelf->B) 
                                                           >> 8U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->A) 
                                                         >> 8U)) 
                                                       | ((IData)(vlSelf->B) 
                                                          >> 8U))
                                                       : 0xfU))));
    if ((1U & ((~ (IData)((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)))) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__P2)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->alu_16_bit__DOT____Vtogcov__P2 = (1U 
                                                  & (~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)))));
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)));
    }
    vlSelf->__VdfgTmp_hb6de5df8__0 = (1U & (((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
                                             >> 3U) 
                                            | ((((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
                                                   >> 2U)) 
                                               | ((IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)))) 
                                                  & (((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int) 
                                                      >> 1U) 
                                                     | (((IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int)))))));
    vlSelf->alu_16_bit__DOT__alu0__DOT__G_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 0U
                                                       : 
                                                      ((((0U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->A))) 
                                                         & (0U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->B)))) 
                                                        | ((0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->A))) 
                                                           & (0U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->A) 
                                                       & (IData)(vlSelf->B))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(vlSelf->A) 
                                                       & (IData)(vlSelf->B))
                                                       : 
                                                      ((IData)(vlSelf->A) 
                                                       & (~ (IData)(vlSelf->B))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ (IData)(vlSelf->A)) 
                                                       & (IData)(vlSelf->B))
                                                       : 0xfU))));
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int)));
    }
    vlSelf->alu_16_bit__DOT__alu1__DOT__P_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(
                                                               ((0xf0U 
                                                                 == 
                                                                 (0xf0U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf0U 
                                                                   == 
                                                                   (0xf0U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      (((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0xf0U 
                                                                   & (IData)(vlSelf->A))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->B))))) 
                                                        | (IData)(
                                                                  ((0xf0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->A))) 
                                                                   & (0U 
                                                                      == 
                                                                      (0xf0U 
                                                                       & (IData)(vlSelf->B))))))
                                                        ? 0xfU
                                                        : 
                                                       ((IData)(
                                                                ((0xf0U 
                                                                  == 
                                                                  (0xf0U 
                                                                   & (IData)(vlSelf->B))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelf->A)))))
                                                         ? 0U
                                                         : 0xfU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(
                                                               ((0xf0U 
                                                                 == 
                                                                 (0xf0U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf0U 
                                                                   == 
                                                                   (0xf0U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      ((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0xf0U 
                                                                  & (IData)(vlSelf->A))) 
                                                                & (0xf0U 
                                                                   == 
                                                                   (0xf0U 
                                                                    & (IData)(vlSelf->B)))))
                                                        ? 0U
                                                        : 
                                                       (((IData)(vlSelf->A) 
                                                         | (IData)(vlSelf->B)) 
                                                        >> 4U))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((IData)(vlSelf->A) 
                                                        | (IData)(vlSelf->B)) 
                                                       >> 4U)
                                                       : 
                                                      (((IData)(vlSelf->A) 
                                                        >> 4U) 
                                                       | (~ 
                                                          ((IData)(vlSelf->B) 
                                                           >> 4U))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->A) 
                                                         >> 4U)) 
                                                       | ((IData)(vlSelf->B) 
                                                          >> 4U))
                                                       : 0xfU))));
    if ((1U & ((~ (IData)((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)))) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__P1)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->alu_16_bit__DOT____Vtogcov__P1 = (1U 
                                                  & (~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)))));
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)));
    }
    vlSelf->__VdfgTmp_h109a05a2__0 = (1U & (((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
                                             >> 3U) 
                                            | ((((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
                                                   >> 2U)) 
                                               | ((IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)))) 
                                                  & (((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int) 
                                                      >> 1U) 
                                                     | (((IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int)))))));
    vlSelf->alu_16_bit__DOT__alu0__DOT__P_int = (0xfU 
                                                 & ((4U 
                                                     & (IData)(vlSelf->S))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->A))) 
                                                        & (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->B))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      ((((0U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->A))) 
                                                         & (0U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->B)))) 
                                                        | ((0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->A))) 
                                                           & (0U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelf->B)))))
                                                        ? 0xfU
                                                        : 
                                                       (((0xfU 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->B))) 
                                                         & (0U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->A))))
                                                         ? 0U
                                                         : 0xfU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      (((0xfU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->A))) 
                                                        & (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->B))))
                                                        ? 0xfU
                                                        : 0U)
                                                       : 
                                                      (((0U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->A))) 
                                                        & (0xfU 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->B))))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->A) 
                                                        | (IData)(vlSelf->B)))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->S))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((IData)(vlSelf->A) 
                                                       | (IData)(vlSelf->B))
                                                       : 
                                                      ((IData)(vlSelf->A) 
                                                       | (~ (IData)(vlSelf->B))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->S))
                                                       ? 
                                                      ((~ (IData)(vlSelf->A)) 
                                                       | (IData)(vlSelf->B))
                                                       : 0xfU))));
    if ((1U & ((~ (IData)((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)))) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__P0)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->alu_16_bit__DOT____Vtogcov__P0 = (1U 
                                                  & (~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)))));
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int 
            = ((0xeU & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)) 
               | (1U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int 
            = ((0xdU & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)) 
               | (2U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int 
            = ((0xbU & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)) 
               | (4U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int) 
               ^ (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int 
            = ((7U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int)) 
               | (8U & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)));
    }
    vlSelf->__VdfgTmp_h8bec44e4__0 = (1U & (((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
                                             >> 3U) 
                                            | ((((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
                                                   >> 2U)) 
                                               | ((IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)))) 
                                                  & (((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int) 
                                                      >> 1U) 
                                                     | (((IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int)))))));
    if ((1U ^ ((IData)(vlSelf->__VdfgTmp_h8190f988__0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__G3)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->alu_16_bit__DOT____Vtogcov__G3 = (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h8190f988__0)));
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgTmp_hb6de5df8__0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__G2)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->alu_16_bit__DOT____Vtogcov__G2 = (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_hb6de5df8__0)));
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgTmp_h109a05a2__0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__G1)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->alu_16_bit__DOT____Vtogcov__G1 = (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h109a05a2__0)));
    }
    if ((1U ^ ((IData)(vlSelf->__VdfgTmp_h8bec44e4__0) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__G0)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->alu_16_bit__DOT____Vtogcov__G0 = (1U 
                                                  & (~ (IData)(vlSelf->__VdfgTmp_h8bec44e4__0)));
    }
    vlSelf->alu_16_bit__DOT__Cn1 = ((IData)(vlSelf->__VdfgTmp_h8bec44e4__0) 
                                    | ((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)) 
                                       & (IData)(vlSelf->Cn)));
    if (((IData)(vlSelf->alu_16_bit__DOT__Cn1) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__Cn1))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->alu_16_bit__DOT____Vtogcov__Cn1 = vlSelf->alu_16_bit__DOT__Cn1;
    }
    vlSelf->alu_16_bit__DOT__Cn2 = ((IData)(vlSelf->__VdfgTmp_h109a05a2__0) 
                                    | ((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)) 
                                       & (IData)(vlSelf->alu_16_bit__DOT__Cn1)));
    vlSelf->alu_16_bit__DOT__F1 = (0xfU & ((4U & (IData)(vlSelf->S))
                                            ? ((2U 
                                                & (IData)(vlSelf->S))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 0xfU
                                                    : 
                                                   (((IData)(vlSelf->A) 
                                                     & (IData)(vlSelf->B)) 
                                                    >> 4U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 
                                                   (((IData)(vlSelf->A) 
                                                     | (IData)(vlSelf->B)) 
                                                    >> 4U)
                                                    : 
                                                   (((IData)(vlSelf->A) 
                                                     ^ (IData)(vlSelf->B)) 
                                                    >> 4U)))
                                            : ((2U 
                                                & (IData)(vlSelf->S))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 
                                                   ((((IData)(vlSelf->A) 
                                                      >> 4U) 
                                                     + 
                                                     ((IData)(vlSelf->B) 
                                                      >> 4U)) 
                                                    + (IData)(vlSelf->alu_16_bit__DOT__Cn1))
                                                    : 
                                                   (((~ 
                                                      ((IData)(vlSelf->B) 
                                                       >> 4U)) 
                                                     + 
                                                     ((IData)(vlSelf->A) 
                                                      >> 4U)) 
                                                    + (IData)(vlSelf->alu_16_bit__DOT__Cn1)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->S))
                                                    ? 
                                                   ((((IData)(vlSelf->B) 
                                                      >> 4U) 
                                                     + 
                                                     (~ 
                                                      ((IData)(vlSelf->A) 
                                                       >> 4U))) 
                                                    + (IData)(vlSelf->alu_16_bit__DOT__Cn1))
                                                    : 0U))));
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__F1) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F1 = ((0xeU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F1)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__F1) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F1 = ((0xdU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F1)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__F1) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F1 = ((0xbU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F1)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__F1) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F1 = ((7U 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F1)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F1)));
    }
    if (((IData)(vlSelf->alu_16_bit__DOT__Cn2) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__Cn2))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->alu_16_bit__DOT____Vtogcov__Cn2 = vlSelf->alu_16_bit__DOT__Cn2;
    }
    vlSelf->alu_16_bit__DOT__Cn3 = ((IData)(vlSelf->__VdfgTmp_hb6de5df8__0) 
                                    | ((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)) 
                                       & (IData)(vlSelf->alu_16_bit__DOT__Cn2)));
    if ((4U & (IData)(vlSelf->S))) {
        if ((2U & (IData)(vlSelf->S))) {
            if ((1U & (IData)(vlSelf->S))) {
                vlSelf->alu_16_bit__DOT__F2 = (0xfU 
                                               & 0xfU);
                vlSelf->alu_16_bit__DOT__F3 = (0xfU 
                                               & 0xfU);
            } else {
                vlSelf->alu_16_bit__DOT__F2 = (0xfU 
                                               & (((IData)(vlSelf->A) 
                                                   & (IData)(vlSelf->B)) 
                                                  >> 8U));
                vlSelf->alu_16_bit__DOT__F3 = (0xfU 
                                               & (((IData)(vlSelf->A) 
                                                   & (IData)(vlSelf->B)) 
                                                  >> 0xcU));
            }
        } else if ((1U & (IData)(vlSelf->S))) {
            vlSelf->alu_16_bit__DOT__F2 = (0xfU & (
                                                   ((IData)(vlSelf->A) 
                                                    | (IData)(vlSelf->B)) 
                                                   >> 8U));
            vlSelf->alu_16_bit__DOT__F3 = (0xfU & (
                                                   ((IData)(vlSelf->A) 
                                                    | (IData)(vlSelf->B)) 
                                                   >> 0xcU));
        } else {
            vlSelf->alu_16_bit__DOT__F2 = (0xfU & (
                                                   ((IData)(vlSelf->A) 
                                                    ^ (IData)(vlSelf->B)) 
                                                   >> 8U));
            vlSelf->alu_16_bit__DOT__F3 = (0xfU & (
                                                   ((IData)(vlSelf->A) 
                                                    ^ (IData)(vlSelf->B)) 
                                                   >> 0xcU));
        }
    } else if ((2U & (IData)(vlSelf->S))) {
        if ((1U & (IData)(vlSelf->S))) {
            vlSelf->alu_16_bit__DOT__F2 = (0xfU & (
                                                   (((IData)(vlSelf->A) 
                                                     >> 8U) 
                                                    + 
                                                    ((IData)(vlSelf->B) 
                                                     >> 8U)) 
                                                   + (IData)(vlSelf->alu_16_bit__DOT__Cn2)));
            vlSelf->alu_16_bit__DOT__F3 = (0xfU & (
                                                   (((IData)(vlSelf->A) 
                                                     >> 0xcU) 
                                                    + 
                                                    ((IData)(vlSelf->B) 
                                                     >> 0xcU)) 
                                                   + (IData)(vlSelf->alu_16_bit__DOT__Cn3)));
        } else {
            vlSelf->alu_16_bit__DOT__F2 = (0xfU & (
                                                   ((~ 
                                                     ((IData)(vlSelf->B) 
                                                      >> 8U)) 
                                                    + 
                                                    ((IData)(vlSelf->A) 
                                                     >> 8U)) 
                                                   + (IData)(vlSelf->alu_16_bit__DOT__Cn2)));
            vlSelf->alu_16_bit__DOT__F3 = (0xfU & (
                                                   ((~ 
                                                     ((IData)(vlSelf->B) 
                                                      >> 0xcU)) 
                                                    + 
                                                    ((IData)(vlSelf->A) 
                                                     >> 0xcU)) 
                                                   + (IData)(vlSelf->alu_16_bit__DOT__Cn3)));
        }
    } else if ((1U & (IData)(vlSelf->S))) {
        vlSelf->alu_16_bit__DOT__F2 = (0xfU & ((((IData)(vlSelf->B) 
                                                 >> 8U) 
                                                + (~ 
                                                   ((IData)(vlSelf->A) 
                                                    >> 8U))) 
                                               + (IData)(vlSelf->alu_16_bit__DOT__Cn2)));
        vlSelf->alu_16_bit__DOT__F3 = (0xfU & ((((IData)(vlSelf->B) 
                                                 >> 0xcU) 
                                                + (~ 
                                                   ((IData)(vlSelf->A) 
                                                    >> 0xcU))) 
                                               + (IData)(vlSelf->alu_16_bit__DOT__Cn3)));
    } else {
        vlSelf->alu_16_bit__DOT__F2 = (0xfU & 0U);
        vlSelf->alu_16_bit__DOT__F3 = (0xfU & 0U);
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__F2) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F2 = ((0xeU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F2)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__F2) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F2 = ((0xdU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F2)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__F2) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F2 = ((0xbU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F2)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__F2) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F2 = ((7U 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F2)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F2)));
    }
    if (((IData)(vlSelf->alu_16_bit__DOT__Cn3) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__Cn3))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->alu_16_bit__DOT____Vtogcov__Cn3 = vlSelf->alu_16_bit__DOT__Cn3;
    }
    vlSelf->Co = ((IData)(vlSelf->__VdfgTmp_h8190f988__0) 
                  | ((0xfU == (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)) 
                     & (IData)(vlSelf->alu_16_bit__DOT__Cn3)));
    if (((IData)(vlSelf->Co) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__Co))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->alu_16_bit__DOT____Vtogcov__Co = vlSelf->Co;
    }
    if ((1U & ((IData)(vlSelf->alu_16_bit__DOT__F3) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F3 = ((0xeU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)) 
                                                  | (1U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F3)));
    }
    if ((2U & ((IData)(vlSelf->alu_16_bit__DOT__F3) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F3 = ((0xdU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)) 
                                                  | (2U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F3)));
    }
    if ((4U & ((IData)(vlSelf->alu_16_bit__DOT__F3) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F3 = ((0xbU 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)) 
                                                  | (4U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F3)));
    }
    if ((8U & ((IData)(vlSelf->alu_16_bit__DOT__F3) 
               ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F3 = ((7U 
                                                   & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F3)) 
                                                  | (8U 
                                                     & (IData)(vlSelf->alu_16_bit__DOT__F3)));
    }
    vlSelf->F = (((IData)(vlSelf->alu_16_bit__DOT__F3) 
                  << 0xcU) | (((IData)(vlSelf->alu_16_bit__DOT__F2) 
                               << 8U) | (((IData)(vlSelf->alu_16_bit__DOT__F1) 
                                          << 4U) | (IData)(vlSelf->alu_16_bit__DOT__F0))));
    if ((1U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfffeU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((2U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfffdU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((4U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfffbU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((8U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfff7U 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x10U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xffefU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x20U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xffdfU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x40U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xffbfU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x80U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xff7fU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x100U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfeffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x100U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x200U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfdffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x200U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x400U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xfbffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x400U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x800U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xf7ffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x800U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x1000U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xefffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x1000U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x2000U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xdfffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x2000U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x4000U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0xbfffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x4000U 
                                                    & (IData)(vlSelf->F)));
    }
    if ((0x8000U & ((IData)(vlSelf->F) ^ (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->alu_16_bit__DOT____Vtogcov__F = ((0x7fffU 
                                                  & (IData)(vlSelf->alu_16_bit__DOT____Vtogcov__F)) 
                                                 | (0x8000U 
                                                    & (IData)(vlSelf->F)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__act(Valu_16_bit___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_16_bit___024root___eval_triggers__act(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_16_bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
