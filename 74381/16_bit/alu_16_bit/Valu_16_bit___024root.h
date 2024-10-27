// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_16_bit.h for the primary calling header

#ifndef VERILATED_VALU_16_BIT___024ROOT_H_
#define VERILATED_VALU_16_BIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Valu_16_bit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_16_bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(S,2,0);
    VL_IN8(Cn,0,0);
    VL_OUT8(Co,0,0);
    CData/*3:0*/ alu_16_bit__DOT__F0;
    CData/*3:0*/ alu_16_bit__DOT__F1;
    CData/*3:0*/ alu_16_bit__DOT__F2;
    CData/*3:0*/ alu_16_bit__DOT__F3;
    CData/*0:0*/ alu_16_bit__DOT__Cn1;
    CData/*0:0*/ alu_16_bit__DOT__Cn2;
    CData/*0:0*/ alu_16_bit__DOT__Cn3;
    CData/*2:0*/ alu_16_bit__DOT____Vtogcov__S;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__Cn;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__Co;
    CData/*3:0*/ alu_16_bit__DOT____Vtogcov__F0;
    CData/*3:0*/ alu_16_bit__DOT____Vtogcov__F1;
    CData/*3:0*/ alu_16_bit__DOT____Vtogcov__F2;
    CData/*3:0*/ alu_16_bit__DOT____Vtogcov__F3;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__P0;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__P1;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__P2;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__P3;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__G0;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__G1;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__G2;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__G3;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__Cn1;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__Cn2;
    CData/*0:0*/ alu_16_bit__DOT____Vtogcov__Cn3;
    CData/*3:0*/ alu_16_bit__DOT__alu0__DOT__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu0__DOT__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu0__DOT____Vtogcov__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu0__DOT____Vtogcov__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu1__DOT__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu1__DOT__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu1__DOT____Vtogcov__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu1__DOT____Vtogcov__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu2__DOT__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu2__DOT__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu2__DOT____Vtogcov__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu2__DOT____Vtogcov__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu3__DOT__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu3__DOT__G_int;
    CData/*3:0*/ alu_16_bit__DOT__alu3__DOT____Vtogcov__P_int;
    CData/*3:0*/ alu_16_bit__DOT__alu3__DOT____Vtogcov__G_int;
    CData/*0:0*/ __VdfgTmp_h8190f988__0;
    CData/*0:0*/ __VdfgTmp_h8bec44e4__0;
    CData/*0:0*/ __VdfgTmp_h109a05a2__0;
    CData/*0:0*/ __VdfgTmp_hb6de5df8__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(A,15,0);
    VL_IN16(B,15,0);
    VL_OUT16(F,15,0);
    SData/*15:0*/ alu_16_bit__DOT____Vtogcov__A;
    SData/*15:0*/ alu_16_bit__DOT____Vtogcov__B;
    SData/*15:0*/ alu_16_bit__DOT____Vtogcov__F;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_16_bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_16_bit___024root(Valu_16_bit__Syms* symsp, const char* v__name);
    ~Valu_16_bit___024root();
    VL_UNCOPYABLE(Valu_16_bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
