// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_virtual_board.h for the primary calling header

#ifndef VERILATED_VALU_VIRTUAL_BOARD___024UNIT_H_
#define VERILATED_VALU_VIRTUAL_BOARD___024UNIT_H_  // guard

#include "verilated.h"


class Valu_virtual_board__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_virtual_board___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Valu_virtual_board__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_virtual_board___024unit(Valu_virtual_board__Syms* symsp, const char* v__name);
    ~Valu_virtual_board___024unit();
    VL_UNCOPYABLE(Valu_virtual_board___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
