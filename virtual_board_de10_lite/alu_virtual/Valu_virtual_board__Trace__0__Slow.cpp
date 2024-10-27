// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu_virtual_board__Syms.h"


VL_ATTR_COLD void Valu_virtual_board___024root__trace_init_sub__TOP__alu_virtual_board_pkg__0(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_virtual_board___024root__trace_init_sub__TOP__0(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+20,0,"arg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+22,0,"select_args",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"load_args",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"lo_hi_arg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"carry_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"digit5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+32,0,"digit4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"digit3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"digit2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"digit1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"digit0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("alu_virtual_board_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Valu_virtual_board___024root__trace_init_sub__TOP__alu_virtual_board_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("alu_virtual_board", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"arg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+22,0,"select_args",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"load_args",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"lo_hi_arg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"carry_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+30,0,"carry_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"digit5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+32,0,"digit4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"digit3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"digit2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"digit1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"digit0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+14,0,"arg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"arg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"sel_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"local_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("gen_block[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut_virtual", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"Cn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"P_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"G_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_block[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("dut_virtual", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"S",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1,0,"Cn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"F",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"P",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"G",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"P_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"G_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_b", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("select", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"selector",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("sseg_driver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"arg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"select_args",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"load_args",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"lo_hi_arg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+31,0,"operand_digit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+32,0,"lo_hi_digit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+33,0,"hi_arg_digit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+34,0,"lo_arg_digit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"hi_res_digit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"lo_res_digit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"X",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+48,0,"Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+50,0,"L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("hi_arg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"num_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"sseg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("hi_res", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"num_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"sseg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("lo_arg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"num_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"sseg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("lo_res", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"num_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"sseg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_init_sub__TOP__alu_virtual_board_pkg__0(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_init_sub__TOP__alu_virtual_board_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+51,0,"SELECT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"ORIG_OPERAND_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"ORIG_RESULT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"OPERAND_DESIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"RESULT_DESIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_init_top(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_init_top\n"); );
    // Body
    Valu_virtual_board___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Valu_virtual_board___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_virtual_board___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu_virtual_board___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu_virtual_board___024root__trace_register(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Valu_virtual_board___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Valu_virtual_board___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Valu_virtual_board___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Valu_virtual_board___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_const_0_sub_0(Valu_virtual_board___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_virtual_board___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_const_0\n"); );
    // Init
    Valu_virtual_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_virtual_board___024root*>(voidSelf);
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_virtual_board___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_const_0_sub_0(Valu_virtual_board___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+45,(4U),32);
    bufp->fullIData(oldp+46,(2U),32);
    bufp->fullCData(oldp+47,(0x7fU),7);
    bufp->fullCData(oldp+48,(0x6eU),7);
    bufp->fullCData(oldp+49,(0x76U),7);
    bufp->fullCData(oldp+50,(0x38U),7);
    bufp->fullIData(oldp+51,(3U),32);
    bufp->fullIData(oldp+52,(7U),32);
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_full_0_sub_0(Valu_virtual_board___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu_virtual_board___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_full_0\n"); );
    // Init
    Valu_virtual_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_virtual_board___024root*>(voidSelf);
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_virtual_board___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_full_0_sub_0(Valu_virtual_board___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_virtual_board___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->alu_virtual_board__DOT__local_carry));
    bufp->fullCData(oldp+2,(((2U & ((~ (IData)((0xfU 
                                                == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int)))) 
                                    << 1U)) | (1U & 
                                               (~ (IData)(
                                                          (0xfU 
                                                           == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int))))))),2);
    bufp->fullCData(oldp+3,((((IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G) 
                              << 1U) | (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G))),2);
    bufp->fullCData(oldp+4,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__F),4);
    bufp->fullBit(oldp+5,((1U & (~ (IData)((0xfU == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int)))))));
    bufp->fullBit(oldp+6,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__dut_virtual__G));
    bufp->fullCData(oldp+7,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__P_int),4);
    bufp->fullCData(oldp+8,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__0__KET____DOT__dut_virtual__DOT__G_int),4);
    bufp->fullCData(oldp+9,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__F),4);
    bufp->fullBit(oldp+10,((1U & (~ (IData)((0xfU == (IData)(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int)))))));
    bufp->fullBit(oldp+11,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__dut_virtual__G));
    bufp->fullCData(oldp+12,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__P_int),4);
    bufp->fullCData(oldp+13,(vlSelf->alu_virtual_board__DOT__gen_block__BRA__1__KET____DOT__dut_virtual__DOT__G_int),4);
    bufp->fullCData(oldp+14,(vlSelf->alu_virtual_board__DOT__arg_a),8);
    bufp->fullCData(oldp+15,(vlSelf->alu_virtual_board__DOT__arg_b),8);
    bufp->fullCData(oldp+16,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out),4);
    bufp->fullCData(oldp+17,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out),4);
    bufp->fullCData(oldp+18,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out),4);
    bufp->fullCData(oldp+19,(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out),4);
    bufp->fullCData(oldp+20,(vlSelf->arg),4);
    bufp->fullCData(oldp+21,(vlSelf->command),3);
    bufp->fullBit(oldp+22,(vlSelf->select_args));
    bufp->fullBit(oldp+23,(vlSelf->load_args));
    bufp->fullBit(oldp+24,(vlSelf->lo_hi_arg));
    bufp->fullBit(oldp+25,(vlSelf->carry_in));
    bufp->fullBit(oldp+26,(vlSelf->clock));
    bufp->fullBit(oldp+27,(vlSelf->reset));
    bufp->fullCData(oldp+28,(vlSelf->result),8);
    bufp->fullCData(oldp+29,(vlSelf->flags),8);
    bufp->fullBit(oldp+30,(vlSelf->carry_out));
    bufp->fullCData(oldp+31,(vlSelf->digit5),7);
    bufp->fullCData(oldp+32,(vlSelf->digit4),7);
    bufp->fullCData(oldp+33,(vlSelf->digit3),7);
    bufp->fullCData(oldp+34,(vlSelf->digit2),7);
    bufp->fullCData(oldp+35,(vlSelf->digit1),7);
    bufp->fullCData(oldp+36,(vlSelf->digit0),7);
    bufp->fullCData(oldp+37,((0xfU & ((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)))),4);
    bufp->fullBit(oldp+38,((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                            & (IData)(vlSelf->load_args))));
    bufp->fullBit(oldp+39,((3U & ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                                   >> 2U) & (IData)(vlSelf->load_args)))));
    bufp->fullBit(oldp+40,((7U & ((((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                                   >> 1U) & (IData)(vlSelf->load_args)))));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->load_args) 
                            & (((IData)(1U) << (IData)(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr)) 
                               >> 3U))));
    bufp->fullCData(oldp+42,(vlSelf->alu_virtual_board__DOT____Vcellinp__select__addr),2);
    bufp->fullCData(oldp+43,(((IData)(vlSelf->lo_hi_arg)
                               ? (IData)(vlSelf->arg)
                               : ((IData)(vlSelf->select_args)
                                   ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_b__data_out)
                                   : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__1__KET____DOT__reg_a__data_out)))),4);
    bufp->fullCData(oldp+44,(((IData)(vlSelf->lo_hi_arg)
                               ? ((IData)(vlSelf->select_args)
                                   ? (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_b__data_out)
                                   : (IData)(vlSelf->alu_virtual_board__DOT____Vcellout__gen_block__BRA__0__KET____DOT__reg_a__data_out))
                               : (IData)(vlSelf->arg))),4);
}
