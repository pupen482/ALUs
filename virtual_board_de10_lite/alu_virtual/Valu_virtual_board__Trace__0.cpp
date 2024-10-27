// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_virtual_board__Syms.h"


void Valu_virtual_board___024root__trace_chg_0_sub_0(Valu_virtual_board___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_virtual_board___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_chg_0\n"); );
    // Init
    Valu_virtual_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_virtual_board___024root*>(voidSelf);
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_virtual_board___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_virtual_board___024root__trace_chg_0_sub_0(Valu_virtual_board___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->alu_virtual_board__DOT__local_carry));
        bufp->chgCData(oldp+1,(((2U & ((~ (IData)((0xfU 
                                                   == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int)))) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int))))))),2);
        bufp->chgCData(oldp+2,((((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G) 
                                 << 1U) | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G))),2);
        bufp->chgCData(oldp+3,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F),4);
        bufp->chgBit(oldp+4,((1U & (~ (IData)((0xfU 
                                               == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int)))))));
        bufp->chgBit(oldp+5,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G));
        bufp->chgCData(oldp+6,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int),4);
        bufp->chgCData(oldp+7,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int),4);
        bufp->chgCData(oldp+8,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F),4);
        bufp->chgBit(oldp+9,((1U & (~ (IData)((0xfU 
                                               == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int)))))));
        bufp->chgBit(oldp+10,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G));
        bufp->chgCData(oldp+11,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int),4);
        bufp->chgCData(oldp+12,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+13,(vlSelf->alu_virtual_board__DOT__arg_a),8);
        bufp->chgCData(oldp+14,(vlSelf->alu_virtual_board__DOT__arg_b),8);
        bufp->chgCData(oldp+15,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out),4);
        bufp->chgCData(oldp+16,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out),4);
        bufp->chgCData(oldp+17,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out),4);
        bufp->chgCData(oldp+18,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out),4);
    }
    bufp->chgCData(oldp+19,(vlSelf->arg),4);
    bufp->chgCData(oldp+20,(vlSelf->command),3);
    bufp->chgBit(oldp+21,(vlSelf->select_args));
    bufp->chgBit(oldp+22,(vlSelf->load_args));
    bufp->chgBit(oldp+23,(vlSelf->lo_hi_arg));
    bufp->chgBit(oldp+24,(vlSelf->carry_in));
    bufp->chgBit(oldp+25,(vlSelf->clock));
    bufp->chgBit(oldp+26,(vlSelf->reset));
    bufp->chgCData(oldp+27,(vlSelf->result),8);
    bufp->chgCData(oldp+28,(vlSelf->flags),8);
    bufp->chgBit(oldp+29,(vlSelf->carry_out));
    bufp->chgCData(oldp+30,(vlSelf->digit5),7);
    bufp->chgCData(oldp+31,(vlSelf->digit4),7);
    bufp->chgCData(oldp+32,(vlSelf->digit3),7);
    bufp->chgCData(oldp+33,(vlSelf->digit2),7);
    bufp->chgCData(oldp+34,(vlSelf->digit1),7);
    bufp->chgCData(oldp+35,(vlSelf->digit0),7);
    bufp->chgCData(oldp+36,((0xfU & ((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)))),4);
    bufp->chgBit(oldp+37,((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                           & (IData)(vlSelf->load_args))));
    bufp->chgBit(oldp+38,((3U & ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                                  >> 2U) & (IData)(vlSelf->load_args)))));
    bufp->chgBit(oldp+39,((7U & ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                                  >> 1U) & (IData)(vlSelf->load_args)))));
    bufp->chgBit(oldp+40,(((IData)(vlSelf->load_args) 
                           & (((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                              >> 3U))));
    bufp->chgCData(oldp+41,(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr),2);
    bufp->chgCData(oldp+42,(((IData)(vlSelf->lo_hi_arg)
                              ? (IData)(vlSelf->arg)
                              : ((IData)(vlSelf->select_args)
                                  ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)
                                  : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)))),4);
    bufp->chgCData(oldp+43,(((IData)(vlSelf->lo_hi_arg)
                              ? ((IData)(vlSelf->select_args)
                                  ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)
                                  : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out))
                              : (IData)(vlSelf->arg))),4);
}

void Valu_virtual_board___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_cleanup\n"); );
    // Init
    Valu_virtual_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_virtual_board___024root*>(voidSelf);
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
