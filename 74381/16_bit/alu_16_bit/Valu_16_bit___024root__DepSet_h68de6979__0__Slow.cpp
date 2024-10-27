// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_16_bit.h for the primary calling header

#include "Valu_16_bit__pch.h"
#include "Valu_16_bit__Syms.h"
#include "Valu_16_bit___024root.h"

VL_ATTR_COLD void Valu_16_bit___024root___eval_initial__TOP(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_initial__TOP\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[106]);
    ++(vlSymsp->__Vcoverage[133]);
    ++(vlSymsp->__Vcoverage[160]);
    ++(vlSymsp->__Vcoverage[187]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_16_bit___024root___dump_triggers__stl(Valu_16_bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu_16_bit___024root___eval_triggers__stl(Valu_16_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_16_bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Valu_16_bit___024root___configure_coverage(Valu_16_bit___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_16_bit___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "alu_16_bit.v", 2, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "A[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "alu_16_bit.v", 3, 23, ".alu_16_bit", "v_toggle/alu_16_bit", "B[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "alu_16_bit.v", 4, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "S[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "alu_16_bit.v", 4, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "S[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "alu_16_bit.v", 4, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "S[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "alu_16_bit.v", 5, 16, ".alu_16_bit", "v_toggle/alu_16_bit", "Cn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "alu_16_bit.v", 6, 24, ".alu_16_bit", "v_toggle/alu_16_bit", "F[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "alu_16_bit.v", 8, 17, ".alu_16_bit", "v_toggle/alu_16_bit", "Co", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "alu_16_bit.v", 12, 14, ".alu_16_bit", "v_toggle/alu_16_bit", "F0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "alu_16_bit.v", 12, 14, ".alu_16_bit", "v_toggle/alu_16_bit", "F0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "alu_16_bit.v", 12, 14, ".alu_16_bit", "v_toggle/alu_16_bit", "F0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "alu_16_bit.v", 12, 14, ".alu_16_bit", "v_toggle/alu_16_bit", "F0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "alu_16_bit.v", 12, 18, ".alu_16_bit", "v_toggle/alu_16_bit", "F1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "alu_16_bit.v", 12, 18, ".alu_16_bit", "v_toggle/alu_16_bit", "F1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "alu_16_bit.v", 12, 18, ".alu_16_bit", "v_toggle/alu_16_bit", "F1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "alu_16_bit.v", 12, 18, ".alu_16_bit", "v_toggle/alu_16_bit", "F1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "alu_16_bit.v", 12, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "F2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "alu_16_bit.v", 12, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "F2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "alu_16_bit.v", 12, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "F2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "alu_16_bit.v", 12, 22, ".alu_16_bit", "v_toggle/alu_16_bit", "F2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "alu_16_bit.v", 12, 26, ".alu_16_bit", "v_toggle/alu_16_bit", "F3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "alu_16_bit.v", 12, 26, ".alu_16_bit", "v_toggle/alu_16_bit", "F3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "alu_16_bit.v", 12, 26, ".alu_16_bit", "v_toggle/alu_16_bit", "F3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "alu_16_bit.v", 12, 26, ".alu_16_bit", "v_toggle/alu_16_bit", "F3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "alu_16_bit.v", 13, 8, ".alu_16_bit", "v_toggle/alu_16_bit", "P0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "alu_16_bit.v", 13, 12, ".alu_16_bit", "v_toggle/alu_16_bit", "P1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "alu_16_bit.v", 13, 16, ".alu_16_bit", "v_toggle/alu_16_bit", "P2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "alu_16_bit.v", 13, 20, ".alu_16_bit", "v_toggle/alu_16_bit", "P3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "alu_16_bit.v", 14, 8, ".alu_16_bit", "v_toggle/alu_16_bit", "G0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "alu_16_bit.v", 14, 12, ".alu_16_bit", "v_toggle/alu_16_bit", "G1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "alu_16_bit.v", 14, 16, ".alu_16_bit", "v_toggle/alu_16_bit", "G2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "alu_16_bit.v", 14, 20, ".alu_16_bit", "v_toggle/alu_16_bit", "G3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "alu_16_bit.v", 15, 8, ".alu_16_bit", "v_toggle/alu_16_bit", "Cn1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "alu_16_bit.v", 15, 13, ".alu_16_bit", "v_toggle/alu_16_bit", "Cn2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "alu_16_bit.v", 15, 18, ".alu_16_bit", "v_toggle/alu_16_bit", "Cn3", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "S[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "S[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "S[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../alu_74381.v", 14, 16, ".alu_16_bit.alu0", "v_toggle/alu_74381", "Cn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu0", "v_toggle/alu_74381", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../alu_74381.v", 16, 17, ".alu_16_bit.alu0", "v_toggle/alu_74381", "P", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../alu_74381.v", 16, 20, ".alu_16_bit.alu0", "v_toggle/alu_74381", "G", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "P_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "P_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "P_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "P_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "G_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "G_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "G_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu0", "v_toggle/alu_74381", "G_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../alu_74381.v", 28, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "28-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../alu_74381.v", 34, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "34-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../alu_74381.v", 40, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "40-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../alu_74381.v", 46, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "46-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../alu_74381.v", 55, 9, ".alu_16_bit.alu0", "v_branch/alu_74381", "if", "55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../alu_74381.v", 55, 10, ".alu_16_bit.alu0", "v_branch/alu_74381", "else", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../alu_74381.v", 52, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "52-54,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../alu_74381.v", 66, 9, ".alu_16_bit.alu0", "v_branch/alu_74381", "if", "66-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../alu_74381.v", 66, 10, ".alu_16_bit.alu0", "v_branch/alu_74381", "else", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../alu_74381.v", 63, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "63-65,72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../alu_74381.v", 82, 14, ".alu_16_bit.alu0", "v_line/alu_74381", "if", "82-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../alu_74381.v", 82, 15, ".alu_16_bit.alu0", "v_line/alu_74381", "else", "88-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../alu_74381.v", 77, 9, ".alu_16_bit.alu0", "v_line/alu_74381", "elsif", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../alu_74381.v", 74, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../alu_74381.v", 96, 9, ".alu_16_bit.alu0", "v_branch/alu_74381", "if", "96-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../alu_74381.v", 96, 10, ".alu_16_bit.alu0", "v_branch/alu_74381", "else", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../alu_74381.v", 93, 13, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "93-95,102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../alu_74381.v", 104, 7, ".alu_16_bit.alu0", "v_line/alu_74381", "case", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../alu_74381.v", 25, 3, ".alu_16_bit.alu0", "v_line/alu_74381", "block", "25-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "S[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "S[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "S[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../alu_74381.v", 14, 16, ".alu_16_bit.alu1", "v_toggle/alu_74381", "Cn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu1", "v_toggle/alu_74381", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../alu_74381.v", 16, 17, ".alu_16_bit.alu1", "v_toggle/alu_74381", "P", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../alu_74381.v", 16, 20, ".alu_16_bit.alu1", "v_toggle/alu_74381", "G", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "P_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "P_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "P_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "P_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "G_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "G_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "G_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu1", "v_toggle/alu_74381", "G_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../alu_74381.v", 28, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "28-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../alu_74381.v", 34, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "34-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../alu_74381.v", 40, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "40-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../alu_74381.v", 46, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "46-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../alu_74381.v", 55, 9, ".alu_16_bit.alu1", "v_branch/alu_74381", "if", "55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../alu_74381.v", 55, 10, ".alu_16_bit.alu1", "v_branch/alu_74381", "else", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../alu_74381.v", 52, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "52-54,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../alu_74381.v", 66, 9, ".alu_16_bit.alu1", "v_branch/alu_74381", "if", "66-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../alu_74381.v", 66, 10, ".alu_16_bit.alu1", "v_branch/alu_74381", "else", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../alu_74381.v", 63, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "63-65,72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../alu_74381.v", 82, 14, ".alu_16_bit.alu1", "v_line/alu_74381", "if", "82-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../alu_74381.v", 82, 15, ".alu_16_bit.alu1", "v_line/alu_74381", "else", "88-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../alu_74381.v", 77, 9, ".alu_16_bit.alu1", "v_line/alu_74381", "elsif", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../alu_74381.v", 74, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../alu_74381.v", 96, 9, ".alu_16_bit.alu1", "v_branch/alu_74381", "if", "96-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../alu_74381.v", 96, 10, ".alu_16_bit.alu1", "v_branch/alu_74381", "else", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../alu_74381.v", 93, 13, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "93-95,102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../alu_74381.v", 104, 7, ".alu_16_bit.alu1", "v_line/alu_74381", "case", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../alu_74381.v", 25, 3, ".alu_16_bit.alu1", "v_line/alu_74381", "block", "25-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "S[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "S[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "S[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../alu_74381.v", 14, 16, ".alu_16_bit.alu2", "v_toggle/alu_74381", "Cn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu2", "v_toggle/alu_74381", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../alu_74381.v", 16, 17, ".alu_16_bit.alu2", "v_toggle/alu_74381", "P", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../alu_74381.v", 16, 20, ".alu_16_bit.alu2", "v_toggle/alu_74381", "G", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "P_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "P_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "P_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "P_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "G_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "G_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "G_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu2", "v_toggle/alu_74381", "G_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../alu_74381.v", 28, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "28-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../alu_74381.v", 34, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "34-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../alu_74381.v", 40, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "40-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../alu_74381.v", 46, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "46-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../alu_74381.v", 55, 9, ".alu_16_bit.alu2", "v_branch/alu_74381", "if", "55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../alu_74381.v", 55, 10, ".alu_16_bit.alu2", "v_branch/alu_74381", "else", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../alu_74381.v", 52, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "52-54,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../alu_74381.v", 66, 9, ".alu_16_bit.alu2", "v_branch/alu_74381", "if", "66-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../alu_74381.v", 66, 10, ".alu_16_bit.alu2", "v_branch/alu_74381", "else", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../alu_74381.v", 63, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "63-65,72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../alu_74381.v", 82, 14, ".alu_16_bit.alu2", "v_line/alu_74381", "if", "82-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../alu_74381.v", 82, 15, ".alu_16_bit.alu2", "v_line/alu_74381", "else", "88-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../alu_74381.v", 77, 9, ".alu_16_bit.alu2", "v_line/alu_74381", "elsif", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../alu_74381.v", 74, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../alu_74381.v", 96, 9, ".alu_16_bit.alu2", "v_branch/alu_74381", "if", "96-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../alu_74381.v", 96, 10, ".alu_16_bit.alu2", "v_branch/alu_74381", "else", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../alu_74381.v", 93, 13, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "93-95,102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../alu_74381.v", 104, 7, ".alu_16_bit.alu2", "v_line/alu_74381", "case", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../alu_74381.v", 25, 3, ".alu_16_bit.alu2", "v_line/alu_74381", "block", "25-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "A[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "A[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "A[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../alu_74381.v", 11, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "A[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "B[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "B[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "B[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../alu_74381.v", 12, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "B[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "S[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "S[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../alu_74381.v", 13, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "S[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../alu_74381.v", 14, 16, ".alu_16_bit.alu3", "v_toggle/alu_74381", "Cn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "F[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "F[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "F[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../alu_74381.v", 15, 22, ".alu_16_bit.alu3", "v_toggle/alu_74381", "F[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../alu_74381.v", 16, 17, ".alu_16_bit.alu3", "v_toggle/alu_74381", "P", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../alu_74381.v", 16, 20, ".alu_16_bit.alu3", "v_toggle/alu_74381", "G", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "P_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "P_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "P_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../alu_74381.v", 19, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "P_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "G_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "G_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "G_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../alu_74381.v", 20, 13, ".alu_16_bit.alu3", "v_toggle/alu_74381", "G_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../alu_74381.v", 28, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "28-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../alu_74381.v", 34, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "34-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../alu_74381.v", 40, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "40-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../alu_74381.v", 46, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "46-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../alu_74381.v", 55, 9, ".alu_16_bit.alu3", "v_branch/alu_74381", "if", "55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../alu_74381.v", 55, 10, ".alu_16_bit.alu3", "v_branch/alu_74381", "else", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../alu_74381.v", 52, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "52-54,61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../alu_74381.v", 66, 9, ".alu_16_bit.alu3", "v_branch/alu_74381", "if", "66-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../alu_74381.v", 66, 10, ".alu_16_bit.alu3", "v_branch/alu_74381", "else", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../alu_74381.v", 63, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "63-65,72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../alu_74381.v", 82, 14, ".alu_16_bit.alu3", "v_line/alu_74381", "if", "82-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../alu_74381.v", 82, 15, ".alu_16_bit.alu3", "v_line/alu_74381", "else", "88-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../alu_74381.v", 77, 9, ".alu_16_bit.alu3", "v_line/alu_74381", "elsif", "77-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../alu_74381.v", 74, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "74-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../alu_74381.v", 96, 9, ".alu_16_bit.alu3", "v_branch/alu_74381", "if", "96-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../alu_74381.v", 96, 10, ".alu_16_bit.alu3", "v_branch/alu_74381", "else", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../alu_74381.v", 93, 13, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "93-95,102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../alu_74381.v", 104, 7, ".alu_16_bit.alu3", "v_line/alu_74381", "case", "104-105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../alu_74381.v", 25, 3, ".alu_16_bit.alu3", "v_line/alu_74381", "block", "25-27");
}
