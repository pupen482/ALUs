// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_VIRTUAL_BOARD__SYMS_H_
#define VERILATED_VALU_VIRTUAL_BOARD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Valu_virtual_board.h"

// INCLUDE MODULE CLASSES
#include "Valu_virtual_board___024root.h"
#include "Valu_virtual_board___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Valu_virtual_board__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Valu_virtual_board* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Valu_virtual_board___024root   TOP;

    // CONSTRUCTORS
    Valu_virtual_board__Syms(VerilatedContext* contextp, const char* namep, Valu_virtual_board* modelp);
    ~Valu_virtual_board__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
