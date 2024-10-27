// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_virtual_board__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valu_virtual_board::Valu_virtual_board(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_virtual_board__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , arg{vlSymsp->TOP.arg}
    , command{vlSymsp->TOP.command}
    , select_args{vlSymsp->TOP.select_args}
    , load_args{vlSymsp->TOP.load_args}
    , lo_hi_arg{vlSymsp->TOP.lo_hi_arg}
    , carry_in{vlSymsp->TOP.carry_in}
    , result{vlSymsp->TOP.result}
    , flags{vlSymsp->TOP.flags}
    , carry_out{vlSymsp->TOP.carry_out}
    , digit5{vlSymsp->TOP.digit5}
    , digit4{vlSymsp->TOP.digit4}
    , digit3{vlSymsp->TOP.digit3}
    , digit2{vlSymsp->TOP.digit2}
    , digit1{vlSymsp->TOP.digit1}
    , digit0{vlSymsp->TOP.digit0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_virtual_board::Valu_virtual_board(const char* _vcname__)
    : Valu_virtual_board(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_virtual_board::~Valu_virtual_board() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_virtual_board___024root___eval_debug_assertions(Valu_virtual_board___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_virtual_board___024root___eval_static(Valu_virtual_board___024root* vlSelf);
void Valu_virtual_board___024root___eval_initial(Valu_virtual_board___024root* vlSelf);
void Valu_virtual_board___024root___eval_settle(Valu_virtual_board___024root* vlSelf);
void Valu_virtual_board___024root___eval(Valu_virtual_board___024root* vlSelf);

void Valu_virtual_board::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_virtual_board::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_virtual_board___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_virtual_board___024root___eval_static(&(vlSymsp->TOP));
        Valu_virtual_board___024root___eval_initial(&(vlSymsp->TOP));
        Valu_virtual_board___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_virtual_board___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_virtual_board::eventsPending() { return false; }

uint64_t Valu_virtual_board::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_virtual_board::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_virtual_board___024root___eval_final(Valu_virtual_board___024root* vlSelf);

VL_ATTR_COLD void Valu_virtual_board::final() {
    Valu_virtual_board___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_virtual_board::hierName() const { return vlSymsp->name(); }
const char* Valu_virtual_board::modelName() const { return "Valu_virtual_board"; }
unsigned Valu_virtual_board::threads() const { return 1; }
void Valu_virtual_board::prepareClone() const { contextp()->prepareClone(); }
void Valu_virtual_board::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Valu_virtual_board::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Valu_virtual_board___024root__trace_decl_types(VerilatedVcd* tracep);

void Valu_virtual_board___024root__trace_init_top(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_virtual_board___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_virtual_board___024root*>(voidSelf);
    Valu_virtual_board__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Valu_virtual_board___024root__trace_decl_types(tracep);
    Valu_virtual_board___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_virtual_board___024root__trace_register(Valu_virtual_board___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_virtual_board::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Valu_virtual_board::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valu_virtual_board___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}