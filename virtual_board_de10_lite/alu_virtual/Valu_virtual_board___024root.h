// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_virtual_board.h for the primary calling header

#ifndef VERILATED_VALU_VIRTUAL_BOARD___024ROOT_H_
#define VERILATED_VALU_VIRTUAL_BOARD___024ROOT_H_  // guard

#include "verilated.h"


class Valu_virtual_board__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_virtual_board___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(arg,3,0);
    VL_IN8(command,2,0);
    VL_IN8(select_args,0,0);
    VL_IN8(load_args,0,0);
    VL_IN8(lo_hi_arg,0,0);
    VL_IN8(carry_in,0,0);
    VL_OUT8(result,7,0);
    VL_OUT8(flags,7,0);
    VL_OUT8(carry_out,0,0);
    VL_OUT8(digit5,6,0);
    VL_OUT8(digit4,6,0);
    VL_OUT8(digit3,6,0);
    VL_OUT8(digit2,6,0);
    VL_OUT8(digit1,6,0);
    VL_OUT8(digit0,6,0);
    CData/*7:0*/ alu_virtual_board__DOT__arg_a;
    CData/*7:0*/ alu_virtual_board__DOT__arg_b;
    CData/*0:0*/ alu_virtual_board__DOT__local_carry;
    CData/*1:0*/ alu_virtual_board__DOT____Vcellinp__select__addr;
    CData/*3:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out;
    CData/*3:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out;
    CData/*3:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F;
    CData/*0:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G;
    CData/*3:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out;
    CData/*3:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out;
    CData/*3:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F;
    CData/*0:0*/ alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G;
    CData/*3:0*/ alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int;
    CData/*3:0*/ alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int;
    CData/*3:0*/ alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int;
    CData/*3:0*/ alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_virtual_board__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_virtual_board___024root(Valu_virtual_board__Syms* symsp, const char* v__name);
    ~Valu_virtual_board___024root();
    VL_UNCOPYABLE(Valu_virtual_board___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
