// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_virtual_board.h for the primary calling header

#include "Valu_virtual_board__pch.h"
#include "Valu_virtual_board__Syms.h"
#include "Valu_virtual_board___024unit.h"

void Valu_virtual_board___024unit___ctor_var_reset(Valu_virtual_board___024unit* vlSelf);

Valu_virtual_board___024unit::Valu_virtual_board___024unit(Valu_virtual_board__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_virtual_board___024unit___ctor_var_reset(this);
}

void Valu_virtual_board___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu_virtual_board___024unit::~Valu_virtual_board___024unit() {
}
