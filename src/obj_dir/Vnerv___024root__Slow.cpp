// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnerv.h for the primary calling header

#include "Vnerv__pch.h"
#include "Vnerv__Syms.h"
#include "Vnerv___024root.h"

void Vnerv___024root___ctor_var_reset(Vnerv___024root* vlSelf);

Vnerv___024root::Vnerv___024root(Vnerv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnerv___024root___ctor_var_reset(this);
}

void Vnerv___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnerv___024root::~Vnerv___024root() {
}
