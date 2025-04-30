// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnerv.h for the primary calling header

#include "Vnerv__pch.h"
#include "Vnerv___024root.h"

VL_ATTR_COLD void Vnerv___024root___eval_static(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vnerv___024root___eval_initial(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vnerv___024root___eval_final(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__stl(Vnerv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnerv___024root___eval_phase__stl(Vnerv___024root* vlSelf);

VL_ATTR_COLD void Vnerv___024root___eval_settle(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vnerv___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("nerv.sv", 298, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vnerv___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__stl(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vnerv___024root___ico_sequent__TOP__0(Vnerv___024root* vlSelf);

VL_ATTR_COLD void Vnerv___024root___eval_stl(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vnerv___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vnerv___024root___eval_triggers__stl(Vnerv___024root* vlSelf);

VL_ATTR_COLD bool Vnerv___024root___eval_phase__stl(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnerv___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vnerv___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__ico(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__act(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnerv___024root___dump_triggers__nba(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnerv___024root___ctor_var_reset(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->trap = VL_RAND_RESET_I(1);
    vlSelf->imem_addr = VL_RAND_RESET_I(32);
    vlSelf->imem_data = VL_RAND_RESET_I(32);
    vlSelf->dmem_valid = VL_RAND_RESET_I(1);
    vlSelf->dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->dmem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->dmem_wdata = VL_RAND_RESET_I(32);
    vlSelf->dbg_reg_x1 = VL_RAND_RESET_I(32);
    vlSelf->dbg_reg_x2 = VL_RAND_RESET_I(32);
    vlSelf->dbg_reg_x3 = VL_RAND_RESET_I(32);
    vlSelf->dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->irq = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__mem_wr_enable = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__mem_wr_addr = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__mem_wr_data = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__mem_wr_strb = VL_RAND_RESET_I(4);
    vlSelf->nerv__DOT__mem_rd_enable = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__mem_rd_addr = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__mem_rd_reg = VL_RAND_RESET_I(5);
    vlSelf->nerv__DOT__mem_rd_func = VL_RAND_RESET_I(5);
    vlSelf->nerv__DOT__mem_rd_enable_q = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__mem_rd_reg_q = VL_RAND_RESET_I(5);
    vlSelf->nerv__DOT__mem_rd_func_q = VL_RAND_RESET_I(5);
    vlSelf->nerv__DOT__mem_wr_enable_q = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->nerv__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->nerv__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__imem_addr_q = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__rs1_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__rs2_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__next_wr = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__next_rd = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__wr_rd = VL_RAND_RESET_I(5);
    vlSelf->nerv__DOT__illinsn = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__reset_q = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__cycle_intr = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__cycle_insn = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__cycle_trap = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__cycle_late_wr = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_ack = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_rdval = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mode = VL_RAND_RESET_I(2);
    vlSelf->nerv__DOT__csr_rsval = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_ro = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__hpm_increment = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__hpm_event = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mvendorid_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_marchid_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mimpid_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhartid_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mconfigptr_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mstatus_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mstatus_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mstatus_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mstatus_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_misa_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_misa_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_misa_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_misa_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mie_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mie_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mie_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mie_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mtvec_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mtvec_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mtvec_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mtvec_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mstatush_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mstatush_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mstatush_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mscratch_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mscratch_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mscratch_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mscratch_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mepc_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mepc_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mepc_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mepc_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mcause_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mcause_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mcause_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mcause_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mtval_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mtval_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mtval_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mtval_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mip_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mip_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_mip_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_hpm_counter_sel = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_counter_value);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_counter_wdata);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_counter_next);
    vlSelf->nerv__DOT__csr_mcycle_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_minstret_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter3_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter4_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter5_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter6_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter7_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter8_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter9_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter10_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter11_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter12_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter13_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter14_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter15_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter16_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter17_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter18_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter19_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter20_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter21_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter22_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter23_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter24_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter25_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter26_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter27_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter28_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter29_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter30_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter31_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_hpm_counterh_sel = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_counterh_value);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_counterh_wdata);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_counterh_next);
    vlSelf->nerv__DOT__csr_mcycleh_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_minstreth_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter3h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter4h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter5h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter6h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter7h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter8h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter9h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter10h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter11h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter12h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter13h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter14h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter15h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter16h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter17h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter18h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter19h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter20h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter21h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter22h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter23h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter24h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter25h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter26h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter27h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter28h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter29h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter30h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmcounter31h_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_hpm_event_sel = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_event_value);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_event_wdata);
    VL_RAND_RESET_W(1024, vlSelf->nerv__DOT__csr_hpm_event_next);
    vlSelf->nerv__DOT__csr_mhpmevent3_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent4_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent5_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent6_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent7_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent8_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent9_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent10_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent11_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent12_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent13_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent14_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent15_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent16_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent17_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent18_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent19_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent20_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent21_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent22_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent23_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent24_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent25_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent26_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent27_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent28_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent29_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent30_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_mhpmevent31_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_custom_sel = VL_RAND_RESET_I(1);
    vlSelf->nerv__DOT__csr_custom_value = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_custom_wdata = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__csr_custom_next = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__irq_en = VL_RAND_RESET_I(32);
    vlSelf->nerv__DOT__irq_num = VL_RAND_RESET_I(5);
    vlSelf->nerv__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
