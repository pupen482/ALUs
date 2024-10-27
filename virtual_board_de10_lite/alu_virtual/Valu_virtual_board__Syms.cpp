// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Valu_virtual_board__pch.h"
#include "Valu_virtual_board.h"
#include "Valu_virtual_board___024root.h"
#include "Valu_virtual_board___024unit.h"

// FUNCTIONS
Valu_virtual_board__Syms::~Valu_virtual_board__Syms()
{
}

Valu_virtual_board__Syms::Valu_virtual_board__Syms(VerilatedContext* contextp, const char* namep, Valu_virtual_board* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
