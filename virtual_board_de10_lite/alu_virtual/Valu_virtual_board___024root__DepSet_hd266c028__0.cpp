// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_virtual_board.h for the primary calling header

#include "Valu_virtual_board__pch.h"
#include "Valu_virtual_board__Syms.h"
#include "Valu_virtual_board___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__ico(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_virtual_board___024root___eval_triggers__ico(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_virtual_board___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_virtual_board___024root___dump_triggers__act(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_virtual_board___024root___eval_triggers__act(Valu_virtual_board___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((~ (IData)(vlSelf->reset)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_virtual_board___024root___dump_triggers__act(vlSelf);
    }
#endif
}
