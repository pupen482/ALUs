// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Valu_16_bit__pch.h"
#include "Valu_16_bit.h"
#include "Valu_16_bit___024root.h"

// FUNCTIONS
Valu_16_bit__Syms::~Valu_16_bit__Syms()
{
}

Valu_16_bit__Syms::Valu_16_bit__Syms(VerilatedContext* contextp, const char* namep, Valu_16_bit* modelp)
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
