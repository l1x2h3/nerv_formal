// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnerv__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vnerv::Vnerv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnerv__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , stall{vlSymsp->TOP.stall}
    , trap{vlSymsp->TOP.trap}
    , dmem_valid{vlSymsp->TOP.dmem_valid}
    , dmem_wstrb{vlSymsp->TOP.dmem_wstrb}
    , imem_addr{vlSymsp->TOP.imem_addr}
    , imem_data{vlSymsp->TOP.imem_data}
    , dmem_addr{vlSymsp->TOP.dmem_addr}
    , dmem_wdata{vlSymsp->TOP.dmem_wdata}
    , dbg_reg_x1{vlSymsp->TOP.dbg_reg_x1}
    , dbg_reg_x2{vlSymsp->TOP.dbg_reg_x2}
    , dbg_reg_x3{vlSymsp->TOP.dbg_reg_x3}
    , dmem_rdata{vlSymsp->TOP.dmem_rdata}
    , irq{vlSymsp->TOP.irq}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vnerv::Vnerv(const char* _vcname__)
    : Vnerv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnerv::~Vnerv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnerv___024root___eval_debug_assertions(Vnerv___024root* vlSelf);
#endif  // VL_DEBUG
void Vnerv___024root___eval_static(Vnerv___024root* vlSelf);
void Vnerv___024root___eval_initial(Vnerv___024root* vlSelf);
void Vnerv___024root___eval_settle(Vnerv___024root* vlSelf);
void Vnerv___024root___eval(Vnerv___024root* vlSelf);

void Vnerv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnerv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnerv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnerv___024root___eval_static(&(vlSymsp->TOP));
        Vnerv___024root___eval_initial(&(vlSymsp->TOP));
        Vnerv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnerv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnerv::eventsPending() { return false; }

uint64_t Vnerv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnerv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnerv___024root___eval_final(Vnerv___024root* vlSelf);

VL_ATTR_COLD void Vnerv::final() {
    Vnerv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnerv::hierName() const { return vlSymsp->name(); }
const char* Vnerv::modelName() const { return "Vnerv"; }
unsigned Vnerv::threads() const { return 1; }
void Vnerv::prepareClone() const { contextp()->prepareClone(); }
void Vnerv::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vnerv::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnerv___024root__trace_decl_types(VerilatedVcd* tracep);

void Vnerv___024root__trace_init_top(Vnerv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnerv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnerv___024root*>(voidSelf);
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vnerv___024root__trace_decl_types(tracep);
    Vnerv___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vnerv___024root__trace_register(Vnerv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnerv::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnerv::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnerv___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
