// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_16_bit__Syms.h"


void Valu_16_bit___024root__trace_chg_0_sub_0(Valu_16_bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_16_bit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root__trace_chg_0\n"); );
    // Init
    Valu_16_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_16_bit___024root*>(voidSelf);
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_16_bit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_16_bit___024root__trace_chg_0_sub_0(Valu_16_bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->alu_16_bit__DOT__F0),4);
        bufp->chgCData(oldp+1,(vlSelf->alu_16_bit__DOT__F1),4);
        bufp->chgCData(oldp+2,(vlSelf->alu_16_bit__DOT__F2),4);
        bufp->chgCData(oldp+3,(vlSelf->alu_16_bit__DOT__F3),4);
        bufp->chgBit(oldp+4,((1U & (~ (IData)((0xfU 
                                               == (IData)(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int)))))));
        bufp->chgBit(oldp+5,((1U & (~ (IData)((0xfU 
                                               == (IData)(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int)))))));
        bufp->chgBit(oldp+6,((1U & (~ (IData)((0xfU 
                                               == (IData)(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int)))))));
        bufp->chgBit(oldp+7,((1U & (~ (IData)((0xfU 
                                               == (IData)(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int)))))));
        bufp->chgBit(oldp+8,((1U & (~ (IData)(vlSelf->__VdfgTmp_h8bec44e4__0)))));
        bufp->chgBit(oldp+9,((1U & (~ (IData)(vlSelf->__VdfgTmp_h109a05a2__0)))));
        bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->__VdfgTmp_hb6de5df8__0)))));
        bufp->chgBit(oldp+11,((1U & (~ (IData)(vlSelf->__VdfgTmp_h8190f988__0)))));
        bufp->chgBit(oldp+12,(vlSelf->alu_16_bit__DOT__Cn1));
        bufp->chgBit(oldp+13,(vlSelf->alu_16_bit__DOT__Cn2));
        bufp->chgBit(oldp+14,(vlSelf->alu_16_bit__DOT__Cn3));
        bufp->chgCData(oldp+15,(vlSelf->alu_16_bit__DOT__alu0__DOT__P_int),4);
        bufp->chgCData(oldp+16,(vlSelf->alu_16_bit__DOT__alu0__DOT__G_int),4);
        bufp->chgCData(oldp+17,(vlSelf->alu_16_bit__DOT__alu1__DOT__P_int),4);
        bufp->chgCData(oldp+18,(vlSelf->alu_16_bit__DOT__alu1__DOT__G_int),4);
        bufp->chgCData(oldp+19,(vlSelf->alu_16_bit__DOT__alu2__DOT__P_int),4);
        bufp->chgCData(oldp+20,(vlSelf->alu_16_bit__DOT__alu2__DOT__G_int),4);
        bufp->chgCData(oldp+21,(vlSelf->alu_16_bit__DOT__alu3__DOT__P_int),4);
        bufp->chgCData(oldp+22,(vlSelf->alu_16_bit__DOT__alu3__DOT__G_int),4);
    }
    bufp->chgSData(oldp+23,(vlSelf->A),16);
    bufp->chgSData(oldp+24,(vlSelf->B),16);
    bufp->chgCData(oldp+25,(vlSelf->S),3);
    bufp->chgBit(oldp+26,(vlSelf->Cn));
    bufp->chgSData(oldp+27,(vlSelf->F),16);
    bufp->chgBit(oldp+28,(vlSelf->Co));
    bufp->chgCData(oldp+29,((0xfU & (IData)(vlSelf->A))),4);
    bufp->chgCData(oldp+30,((0xfU & (IData)(vlSelf->B))),4);
    bufp->chgCData(oldp+31,((0xfU & ((IData)(vlSelf->A) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+32,((0xfU & ((IData)(vlSelf->B) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+33,((0xfU & ((IData)(vlSelf->A) 
                                     >> 8U))),4);
    bufp->chgCData(oldp+34,((0xfU & ((IData)(vlSelf->B) 
                                     >> 8U))),4);
    bufp->chgCData(oldp+35,((0xfU & ((IData)(vlSelf->A) 
                                     >> 0xcU))),4);
    bufp->chgCData(oldp+36,((0xfU & ((IData)(vlSelf->B) 
                                     >> 0xcU))),4);
}

void Valu_16_bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root__trace_cleanup\n"); );
    // Init
    Valu_16_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_16_bit___024root*>(voidSelf);
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
