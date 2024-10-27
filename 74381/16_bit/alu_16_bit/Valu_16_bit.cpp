// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_16_bit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valu_16_bit::Valu_16_bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_16_bit__Syms(contextp(), _vcname__, this)}
    , S{vlSymsp->TOP.S}
    , Cn{vlSymsp->TOP.Cn}
    , Co{vlSymsp->TOP.Co}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , F{vlSymsp->TOP.F}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Valu_16_bit::Valu_16_bit(const char* _vcname__)
    : Valu_16_bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_16_bit::~Valu_16_bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_16_bit___024root___eval_debug_assertions(Valu_16_bit___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_16_bit___024root___eval_static(Valu_16_bit___024root* vlSelf);
void Valu_16_bit___024root___eval_initial(Valu_16_bit___024root* vlSelf);
void Valu_16_bit___024root___eval_settle(Valu_16_bit___024root* vlSelf);
void Valu_16_bit___024root___eval(Valu_16_bit___024root* vlSelf);

void Valu_16_bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_16_bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_16_bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_16_bit___024root___eval_static(&(vlSymsp->TOP));
        Valu_16_bit___024root___eval_initial(&(vlSymsp->TOP));
        Valu_16_bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_16_bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Valu_16_bit::eventsPending() { return false; }

uint64_t Valu_16_bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Valu_16_bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_16_bit___024root___eval_final(Valu_16_bit___024root* vlSelf);

VL_ATTR_COLD void Valu_16_bit::final() {
    Valu_16_bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_16_bit::hierName() const { return vlSymsp->name(); }
const char* Valu_16_bit::modelName() const { return "Valu_16_bit"; }
unsigned Valu_16_bit::threads() const { return 1; }
void Valu_16_bit::prepareClone() const { contextp()->prepareClone(); }
void Valu_16_bit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Valu_16_bit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Valu_16_bit___024root__trace_decl_types(VerilatedVcd* tracep);

void Valu_16_bit___024root__trace_init_top(Valu_16_bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_16_bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_16_bit___024root*>(voidSelf);
    Valu_16_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Valu_16_bit___024root__trace_decl_types(tracep);
    Valu_16_bit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_16_bit___024root__trace_register(Valu_16_bit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_16_bit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Valu_16_bit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valu_16_bit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
