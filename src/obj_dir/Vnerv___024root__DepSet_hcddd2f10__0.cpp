// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnerv.h for the primary calling header

#include "Vnerv__pch.h"
#include "Vnerv__Syms.h"
#include "Vnerv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__ico(Vnerv___024root* vlSelf);
#endif  // VL_DEBUG

void Vnerv___024root___eval_triggers__ico(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnerv___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__act(Vnerv___024root* vlSelf);
#endif  // VL_DEBUG

void Vnerv___024root___eval_triggers__act(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnerv___024root___dump_triggers__act(vlSelf);
    }
#endif
}
