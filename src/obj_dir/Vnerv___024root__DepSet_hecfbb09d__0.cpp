// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnerv.h for the primary calling header

#include "Vnerv__pch.h"
#include "Vnerv___024root.h"

void Vnerv___024root___ico_sequent__TOP__0(Vnerv___024root* vlSelf);

void Vnerv___024root___eval_ico(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vnerv___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vnerv___024root___ico_sequent__TOP__0(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ nerv__DOT____Vconcswap_1_he58bf432__0;
    nerv__DOT____Vconcswap_1_he58bf432__0 = 0;
    IData/*31:0*/ nerv__DOT____Vconcswap_1_he589ec08__0;
    nerv__DOT____Vconcswap_1_he589ec08__0 = 0;
    CData/*0:0*/ nerv__DOT____VdfgExtracted_h3c846c51__0;
    nerv__DOT____VdfgExtracted_h3c846c51__0 = 0;
    CData/*0:0*/ nerv__DOT____VdfgExtracted_h3c5ca625__0;
    nerv__DOT____VdfgExtracted_h3c5ca625__0 = 0;
    IData/*31:0*/ nerv__DOT____VdfgExtracted_heb22d996__0;
    nerv__DOT____VdfgExtracted_heb22d996__0 = 0;
    CData/*4:0*/ nerv__DOT____VdfgRegularize_h29c87cf7_0_22;
    nerv__DOT____VdfgRegularize_h29c87cf7_0_22 = 0;
    CData/*0:0*/ nerv__DOT____VdfgRegularize_h29c87cf7_0_23;
    nerv__DOT____VdfgRegularize_h29c87cf7_0_23 = 0;
    CData/*0:0*/ nerv__DOT____VdfgRegularize_h29c87cf7_0_25;
    nerv__DOT____VdfgRegularize_h29c87cf7_0_25 = 0;
    // Body
    vlSelfRef.nerv__DOT__wr_rd = (0x1fU & (vlSelfRef.imem_data 
                                           >> 7U));
    vlSelfRef.nerv__DOT__mem_rdata = VL_SHIFTR_III(32,32,32, vlSelfRef.dmem_rdata, 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.nerv__DOT__mem_rd_func_q) 
                                                                     >> 3U)), 3U));
    if ((0U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelfRef.nerv__DOT__mem_rdata));
    } else if ((1U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & vlSelfRef.nerv__DOT__mem_rdata));
    } else if ((4U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = (0xffU & vlSelfRef.nerv__DOT__mem_rdata);
    } else if ((5U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = (0xffffU & vlSelfRef.nerv__DOT__mem_rdata);
    }
    if ((0U != (0x1fU & (vlSelfRef.imem_data >> 0x14U)))) {
        nerv__DOT____VdfgRegularize_h29c87cf7_0_22 
            = (0x1fU & vlSelfRef.nerv__DOT__regfile
               [(0x1fU & (vlSelfRef.imem_data >> 0x14U))]);
        vlSelfRef.nerv__DOT__rs2_value = vlSelfRef.nerv__DOT__regfile
            [(0x1fU & (vlSelfRef.imem_data >> 0x14U))];
    } else {
        nerv__DOT____VdfgRegularize_h29c87cf7_0_22 = 0U;
        vlSelfRef.nerv__DOT__rs2_value = 0U;
    }
    vlSelfRef.nerv__DOT__rs1_value = ((0U != (0x1fU 
                                              & (vlSelfRef.imem_data 
                                                 >> 0xfU)))
                                       ? vlSelfRef.nerv__DOT__regfile
                                      [(0x1fU & (vlSelfRef.imem_data 
                                                 >> 0xfU))]
                                       : 0U);
    vlSelfRef.nerv__DOT__running = (1U & ((~ (IData)(vlSelfRef.stall)) 
                                          & (~ ((IData)(vlSelfRef.nerv__DOT__reset_q) 
                                                | (IData)(vlSelfRef.reset)))));
    vlSelfRef.nerv__DOT__irq_en = (vlSelfRef.irq & vlSelfRef.nerv__DOT__csr_mie_value);
    vlSelfRef.nerv__DOT__csr_rsval = ((0x4000U & vlSelfRef.imem_data)
                                       ? (0x1fU & (vlSelfRef.imem_data 
                                                   >> 0xfU))
                                       : vlSelfRef.nerv__DOT__rs1_value);
    nerv__DOT____VdfgExtracted_h3c846c51__0 = VL_LTS_III(32, vlSelfRef.nerv__DOT__rs1_value, vlSelfRef.nerv__DOT__rs2_value);
    nerv__DOT____VdfgExtracted_h3c5ca625__0 = (vlSelfRef.nerv__DOT__rs1_value 
                                               < vlSelfRef.nerv__DOT__rs2_value);
    nerv__DOT____VdfgExtracted_heb22d996__0 = (vlSelfRef.nerv__DOT__rs1_value 
                                               + VL_EXTENDS_II(32,12, 
                                                               (vlSelfRef.imem_data 
                                                                >> 0x14U)));
    vlSelfRef.nerv__DOT__irq_num = ((vlSelfRef.nerv__DOT__irq_en 
                                     >> 0x1fU) ? 0x1fU
                                     : ((0x40000000U 
                                         & vlSelfRef.nerv__DOT__irq_en)
                                         ? 0x1eU : 
                                        ((0x20000000U 
                                          & vlSelfRef.nerv__DOT__irq_en)
                                          ? 0x1dU : 
                                         ((0x10000000U 
                                           & vlSelfRef.nerv__DOT__irq_en)
                                           ? 0x1cU : 
                                          ((0x8000000U 
                                            & vlSelfRef.nerv__DOT__irq_en)
                                            ? 0x1bU
                                            : ((0x4000000U 
                                                & vlSelfRef.nerv__DOT__irq_en)
                                                ? 0x1aU
                                                : (
                                                   (0x2000000U 
                                                    & vlSelfRef.nerv__DOT__irq_en)
                                                    ? 0x19U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelfRef.nerv__DOT__irq_en)
                                                     ? 0x18U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelfRef.nerv__DOT__irq_en)
                                                      ? 0x17U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelfRef.nerv__DOT__irq_en)
                                                       ? 0x16U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelfRef.nerv__DOT__irq_en)
                                                        ? 0x15U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelfRef.nerv__DOT__irq_en)
                                                         ? 0x14U
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelfRef.nerv__DOT__irq_en)
                                                          ? 0x13U
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelfRef.nerv__DOT__irq_en)
                                                           ? 0x12U
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelfRef.nerv__DOT__irq_en)
                                                            ? 0x11U
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelfRef.nerv__DOT__irq_en)
                                                             ? 0x10U
                                                             : 
                                                            ((0x800U 
                                                              & vlSelfRef.nerv__DOT__irq_en)
                                                              ? 0xbU
                                                              : 
                                                             ((0x80U 
                                                               & vlSelfRef.nerv__DOT__irq_en)
                                                               ? 7U
                                                               : 
                                                              ((8U 
                                                                & vlSelfRef.nerv__DOT__irq_en)
                                                                ? 3U
                                                                : 0U)))))))))))))))))));
    nerv__DOT____VdfgRegularize_h29c87cf7_0_25 = ((IData)(vlSelfRef.nerv__DOT__running) 
                                                  & (((~ (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q)) 
                                                      & (~ (IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q))) 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffff0888U 
                                                                     & vlSelfRef.nerv__DOT__irq_en)))) 
                                                        & (0x73U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.imem_data)))));
    vlSelfRef.nerv__DOT__cycle_intr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.nerv__DOT__reset_q))))) {
        if ((1U & (~ (IData)(vlSelfRef.stall)))) {
            if (vlSelfRef.nerv__DOT__mem_rd_enable_q) {
                vlSelfRef.nerv__DOT__wr_rd = vlSelfRef.nerv__DOT__mem_rd_reg_q;
            }
            if ((1U & (~ (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q)))) {
                if ((0U != (IData)(vlSelfRef.nerv__DOT__irq_num))) {
                    vlSelfRef.nerv__DOT__cycle_intr = 1U;
                }
            }
        }
    }
    if (nerv__DOT____VdfgRegularize_h29c87cf7_0_25) {
        vlSelfRef.nerv__DOT__csr_mode = (3U & (vlSelfRef.imem_data 
                                               >> 0xcU));
        nerv__DOT____VdfgRegularize_h29c87cf7_0_23 
            = (0U != (3U & (vlSelfRef.imem_data >> 0xcU)));
    } else {
        vlSelfRef.nerv__DOT__csr_mode = 0U;
        nerv__DOT____VdfgRegularize_h29c87cf7_0_23 = 0U;
    }
    vlSelfRef.nerv__DOT__csr_mstatus_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                            & (0x300U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_misa_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                         & (0x301U 
                                            == (vlSelfRef.imem_data 
                                                >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mie_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                        & (0x304U == 
                                           (vlSelfRef.imem_data 
                                            >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mtvec_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                          & (0x305U 
                                             == (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mstatush_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                             & (0x310U 
                                                == 
                                                (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mscratch_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                             & (0x340U 
                                                == 
                                                (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mepc_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                         & (0x341U 
                                            == (vlSelfRef.imem_data 
                                                >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mcause_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                           & (0x342U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mtval_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                          & (0x343U 
                                             == (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mip_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                        & (0x344U == 
                                           (vlSelfRef.imem_data 
                                            >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_custom_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                           & (0xbc0U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent3_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x323U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent4_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x324U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent5_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x325U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent6_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x326U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent7_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x327U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent8_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x328U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent9_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x329U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent10_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32aU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent11_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32bU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent12_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32cU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent13_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32dU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent14_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32eU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent15_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32fU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent16_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x330U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent17_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x331U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent18_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x332U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent19_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x333U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent20_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x334U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent21_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x335U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent22_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x336U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent23_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x337U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent24_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x338U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent25_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x339U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent26_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33aU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent27_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33bU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent28_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33cU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent29_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33dU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent30_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33eU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent31_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33fU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mcycle_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                           & (0xb00U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_minstret_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                             & (0xb02U 
                                                == 
                                                (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb03U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb04U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb05U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb06U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb07U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb08U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb09U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0aU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0bU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0cU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0dU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0eU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0fU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb10U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb11U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb12U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb13U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb14U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb15U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb16U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb17U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb18U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb19U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1aU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1bU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1cU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1dU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1eU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1fU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mcycleh_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                            & (0xb80U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_minstreth_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                              & (0xb82U 
                                                 == 
                                                 (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb83U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb84U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb85U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb86U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb87U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb88U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb89U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8aU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8bU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8cU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8dU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8eU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8fU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb90U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb91U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb92U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb93U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb94U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb95U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb96U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb97U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb98U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb99U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9aU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9bU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9cU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9dU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9eU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9fU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_ro = ((~ (IData)(((0U 
                                                != 
                                                (0xf8000U 
                                                 & vlSelfRef.imem_data)) 
                                               | (1U 
                                                  == (IData)(vlSelfRef.nerv__DOT__csr_mode))))) 
                                   & (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23));
    vlSelfRef.nerv__DOT__csr_hpm_event_sel = (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent31_sel) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent30_sel) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent29_sel) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent21_sel) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent13_sel) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent5_sel) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel) 
                                                                                << 4U) 
                                                                                | ((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel) 
                                                                                << 3U)))))))))))))))))))))))))))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_sel = (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel) 
                                                          << 0x1cU) 
                                                         | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel) 
                                                             << 0x1bU) 
                                                            | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel) 
                                                                << 0x1aU) 
                                                               | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel) 
                                                                         << 0x17U) 
                                                                        | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel) 
                                                                            << 0x16U) 
                                                                           | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel) 
                                                                               << 0x15U) 
                                                                              | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_minstret_sel) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelfRef.nerv__DOT__csr_mcycle_sel)))))))))))))))))))))))))))))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_sel = (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_minstreth_sel) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelfRef.nerv__DOT__csr_mcycleh_sel)))))))))))))))))))))))))))))));
    vlSelfRef.nerv__DOT__csr_mvendorid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                              & (0xf11U 
                                                 == 
                                                 (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_marchid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                            & (0xf12U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mimpid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                           & (0xf13U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhartid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                            & (0xf14U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mconfigptr_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                               & (0xf15U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__npc = ((IData)(4U) + vlSelfRef.nerv__DOT__pc);
    vlSelfRef.nerv__DOT__next_wr = 0U;
    vlSelfRef.nerv__DOT__next_rd = 0U;
    vlSelfRef.nerv__DOT__cycle_trap = 0U;
    vlSelfRef.nerv__DOT__cycle_insn = 0U;
    vlSelfRef.nerv__DOT__cycle_late_wr = 0U;
    vlSelfRef.nerv__DOT__illinsn = 0U;
    vlSelfRef.nerv__DOT__mem_wr_enable = 0U;
    vlSelfRef.nerv__DOT__mem_wr_addr = 0U;
    vlSelfRef.nerv__DOT__mem_wr_data = 0U;
    vlSelfRef.nerv__DOT__mem_wr_strb = 0U;
    vlSelfRef.nerv__DOT__mem_rd_enable = 0U;
    vlSelfRef.nerv__DOT__mem_rd_addr = 0U;
    vlSelfRef.nerv__DOT__mem_rd_reg = 0U;
    vlSelfRef.nerv__DOT__mem_rd_func = 0U;
    vlSelfRef.nerv__DOT__csr_ack = 0U;
    vlSelfRef.nerv__DOT__csr_rdval = 0U;
    if ((((((IData)(vlSelfRef.nerv__DOT__csr_ro) & 
            (((((IData)(vlSelfRef.nerv__DOT__csr_mvendorid_sel) 
                | (IData)(vlSelfRef.nerv__DOT__csr_marchid_sel)) 
               | (IData)(vlSelfRef.nerv__DOT__csr_mimpid_sel)) 
              | (IData)(vlSelfRef.nerv__DOT__csr_mhartid_sel)) 
             | (IData)(vlSelfRef.nerv__DOT__csr_mconfigptr_sel))) 
           | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
              & (IData)(vlSelfRef.nerv__DOT__csr_mstatus_sel))) 
          | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_misa_sel))) 
         | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
            & (IData)(vlSelfRef.nerv__DOT__csr_mie_sel)))) {
        if (((IData)(vlSelfRef.nerv__DOT__csr_ro) & (IData)(vlSelfRef.nerv__DOT__csr_mvendorid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_marchid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mimpid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhartid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mconfigptr_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mstatus_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mstatus_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_misa_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_misa_value;
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mie_value;
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mtvec_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mstatush_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mscratch_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mepc_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mcause_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mtval_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mip_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mcycle_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mtvec_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mtvec_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mstatush_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mstatush_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mscratch_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mscratch_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mepc_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mepc_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mcause_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mcause_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mtval_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mtval_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mip_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mip_value;
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_minstret_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_minstret_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mcycleh_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_minstreth_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mcycleh_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent5_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[3U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[4U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[5U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent13_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[6U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[7U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[8U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[9U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent21_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent29_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU];
        }
    } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent30_sel))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU];
    } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent31_sel))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU];
    } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                & (IData)(vlSelfRef.nerv__DOT__csr_custom_sel))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_custom_value;
    } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                & (0xfc0U == (vlSelfRef.imem_data >> 0x14U)))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = 0xdeadbeefU;
    }
    vlSelfRef.nerv__DOT__csr_next = vlSelfRef.nerv__DOT__csr_rdval;
    if ((1U == (IData)(vlSelfRef.nerv__DOT__csr_mode))) {
        vlSelfRef.nerv__DOT__csr_next = vlSelfRef.nerv__DOT__csr_rsval;
    } else if ((2U == (IData)(vlSelfRef.nerv__DOT__csr_mode))) {
        vlSelfRef.nerv__DOT__csr_next = (vlSelfRef.nerv__DOT__csr_next 
                                         | vlSelfRef.nerv__DOT__csr_rsval);
    } else if ((3U == (IData)(vlSelfRef.nerv__DOT__csr_mode))) {
        vlSelfRef.nerv__DOT__csr_next = (vlSelfRef.nerv__DOT__csr_next 
                                         & (~ vlSelfRef.nerv__DOT__csr_rsval));
    }
    vlSelfRef.nerv__DOT__csr_mstatus_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mstatus_sel)
                                               ? vlSelfRef.nerv__DOT__csr_next
                                               : vlSelfRef.nerv__DOT__csr_mstatus_value);
    vlSelfRef.nerv__DOT__csr_mstatus_next = vlSelfRef.nerv__DOT__csr_mstatus_wdata;
    vlSelfRef.nerv__DOT__csr_misa_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_misa_sel)
                                            ? vlSelfRef.nerv__DOT__csr_next
                                            : vlSelfRef.nerv__DOT__csr_misa_value);
    vlSelfRef.nerv__DOT__csr_misa_next = vlSelfRef.nerv__DOT__csr_misa_wdata;
    vlSelfRef.nerv__DOT__csr_mie_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mie_sel)
                                           ? vlSelfRef.nerv__DOT__csr_next
                                           : vlSelfRef.nerv__DOT__csr_mie_value);
    vlSelfRef.nerv__DOT__csr_mie_next = vlSelfRef.nerv__DOT__csr_mie_wdata;
    vlSelfRef.nerv__DOT__csr_mtvec_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mtvec_sel)
                                             ? vlSelfRef.nerv__DOT__csr_next
                                             : vlSelfRef.nerv__DOT__csr_mtvec_value);
    vlSelfRef.nerv__DOT__csr_mtvec_next = vlSelfRef.nerv__DOT__csr_mtvec_wdata;
    vlSelfRef.nerv__DOT__csr_mstatush_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mstatush_sel)
                                                ? vlSelfRef.nerv__DOT__csr_next
                                                : vlSelfRef.nerv__DOT__csr_mstatush_value);
    vlSelfRef.nerv__DOT__csr_mscratch_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mscratch_sel)
                                                ? vlSelfRef.nerv__DOT__csr_next
                                                : vlSelfRef.nerv__DOT__csr_mscratch_value);
    vlSelfRef.nerv__DOT__csr_mscratch_next = vlSelfRef.nerv__DOT__csr_mscratch_wdata;
    vlSelfRef.nerv__DOT__csr_mepc_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mepc_sel)
                                            ? vlSelfRef.nerv__DOT__csr_next
                                            : vlSelfRef.nerv__DOT__csr_mepc_value);
    vlSelfRef.nerv__DOT__csr_mepc_next = vlSelfRef.nerv__DOT__csr_mepc_wdata;
    vlSelfRef.nerv__DOT__csr_mcause_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mcause_sel)
                                              ? vlSelfRef.nerv__DOT__csr_next
                                              : vlSelfRef.nerv__DOT__csr_mcause_value);
    vlSelfRef.nerv__DOT__csr_mcause_next = vlSelfRef.nerv__DOT__csr_mcause_wdata;
    vlSelfRef.nerv__DOT__csr_mtval_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mtval_sel)
                                             ? vlSelfRef.nerv__DOT__csr_next
                                             : vlSelfRef.nerv__DOT__csr_mtval_value);
    vlSelfRef.nerv__DOT__csr_mtval_next = vlSelfRef.nerv__DOT__csr_mtval_wdata;
    vlSelfRef.nerv__DOT__csr_mip_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mip_sel)
                                           ? vlSelfRef.nerv__DOT__csr_next
                                           : vlSelfRef.nerv__DOT__csr_mip_value);
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0U] 
        = (IData)((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[1U]))) 
                    << 0x20U) | (QData)((IData)(((1U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[1U] 
        = (IData)(((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[1U]))) 
                     << 0x20U) | (QData)((IData)(((1U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[2U] 
        = (IData)((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U]))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[3U] 
        = (IData)(((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U]))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[4U] 
        = (IData)((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U]))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[5U] 
        = (IData)(((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U]))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[6U] 
        = (IData)((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U]))) 
                    << 0x20U) | (QData)((IData)(((0x40U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[7U] 
        = (IData)(((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U]))) 
                     << 0x20U) | (QData)((IData)(((0x40U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[8U] 
        = (IData)((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U]))) 
                    << 0x20U) | (QData)((IData)(((0x100U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[9U] 
        = (IData)(((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U]))) 
                     << 0x20U) | (QData)((IData)(((0x100U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xaU] 
        = (IData)((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0x400U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xbU] 
        = (IData)(((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0x400U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xcU] 
        = (IData)((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0x1000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xdU] 
        = (IData)(((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0x1000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xeU] 
        = (IData)((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xfU] 
        = (IData)(((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x10U] 
        = (IData)((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x11U] 
        = (IData)(((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x12U] 
        = (IData)((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x40000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x13U] 
        = (IData)(((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x40000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x14U] 
        = (IData)((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x100000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x15U] 
        = (IData)(((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x100000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x16U] 
        = (IData)((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x400000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x17U] 
        = (IData)(((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x400000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x18U] 
        = (IData)((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x1000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x19U] 
        = (IData)(((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x1000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1aU] 
        = (IData)((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1bU] 
        = (IData)(((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1cU] 
        = (IData)((((QData)((IData)(((0x20000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x10000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1dU] 
        = (IData)(((((QData)((IData)(((0x20000000U 
                                       & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x10000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counter_sel 
                                      >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x40000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1fU] 
        = (IData)(((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counter_sel 
                                       >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x40000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[1U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[2U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[3U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[4U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[5U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[6U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[7U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[8U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[9U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1fU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0U] 
        = (IData)((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[1U]))) 
                    << 0x20U) | (QData)((IData)(((1U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[1U] 
        = (IData)(((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[1U]))) 
                     << 0x20U) | (QData)((IData)(((1U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[2U] 
        = (IData)((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U]))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[3U] 
        = (IData)(((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U]))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[4U] 
        = (IData)((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U]))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[5U] 
        = (IData)(((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U]))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[6U] 
        = (IData)((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U]))) 
                    << 0x20U) | (QData)((IData)(((0x40U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[7U] 
        = (IData)(((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U]))) 
                     << 0x20U) | (QData)((IData)(((0x40U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[8U] 
        = (IData)((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U]))) 
                    << 0x20U) | (QData)((IData)(((0x100U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[9U] 
        = (IData)(((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U]))) 
                     << 0x20U) | (QData)((IData)(((0x100U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xaU] 
        = (IData)((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0x400U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xbU] 
        = (IData)(((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0x400U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xcU] 
        = (IData)((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0x1000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xdU] 
        = (IData)(((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0x1000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xeU] 
        = (IData)((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xfU] 
        = (IData)(((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x10U] 
        = (IData)((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x11U] 
        = (IData)(((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x12U] 
        = (IData)((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x40000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x13U] 
        = (IData)(((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x40000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x14U] 
        = (IData)((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x100000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x15U] 
        = (IData)(((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x100000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x16U] 
        = (IData)((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x400000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x17U] 
        = (IData)(((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x400000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x18U] 
        = (IData)((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x1000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x19U] 
        = (IData)(((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x1000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1aU] 
        = (IData)((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1bU] 
        = (IData)(((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1cU] 
        = (IData)((((QData)((IData)(((0x20000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x10000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1dU] 
        = (IData)(((((QData)((IData)(((0x20000000U 
                                       & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x10000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counterh_sel 
                                      >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x40000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1fU] 
        = (IData)(((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counterh_sel 
                                       >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x40000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[1U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[2U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[3U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[4U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[5U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[6U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[7U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[8U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[9U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1fU];
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((2U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[1U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((1U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[0U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[1U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((2U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[1U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((1U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[0U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[2U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((8U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[3U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((4U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[2U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[3U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((8U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[3U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((4U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[2U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[4U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((0x20U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x10U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[4U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[5U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x20U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x10U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[4U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[6U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((0x80U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[7U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x40U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[6U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[7U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x80U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[7U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x40U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[6U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[8U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((0x200U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[9U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x100U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[8U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[9U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x200U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[9U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x100U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[8U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xaU] 
        = (IData)((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0x400U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xbU] 
        = (IData)(((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0x400U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xcU] 
        = (IData)((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0x1000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xdU] 
        = (IData)(((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0x1000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xeU] 
        = (IData)((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xfU] 
        = (IData)(((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x10U] 
        = (IData)((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x11U] 
        = (IData)(((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x12U] 
        = (IData)((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x40000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x13U] 
        = (IData)(((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x40000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x14U] 
        = (IData)((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x100000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x15U] 
        = (IData)(((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x100000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x16U] 
        = (IData)((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x400000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x17U] 
        = (IData)(((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x400000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x18U] 
        = (IData)((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x1000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x19U] 
        = (IData)(((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x1000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1aU] 
        = (IData)((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1bU] 
        = (IData)(((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1cU] 
        = (IData)((((QData)((IData)(((0x20000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x10000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1dU] 
        = (IData)(((((QData)((IData)(((0x20000000U 
                                       & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x10000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_event_sel 
                                      >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x40000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1fU] 
        = (IData)(((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_event_sel 
                                       >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x40000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[1U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[1U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[2U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[2U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[3U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[3U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[4U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[4U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[5U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[5U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[6U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[6U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[7U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[7U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[8U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[8U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[9U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[9U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1fU];
    vlSelfRef.nerv__DOT__csr_custom_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_custom_sel)
                                              ? vlSelfRef.nerv__DOT__csr_next
                                              : vlSelfRef.nerv__DOT__csr_custom_value);
    vlSelfRef.nerv__DOT__csr_custom_next = vlSelfRef.nerv__DOT__csr_custom_wdata;
    vlSelfRef.nerv__DOT__hpm_increment = 1U;
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    ((1ULL 
                                                      + 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U])))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = ((IData)(1U) 
                                             + vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U]);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[1U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[1U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = 2U;
    vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                           ? 1U : 0U);
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[3U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[3U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[4U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[4U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[5U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[5U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[6U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[6U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[7U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[7U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[8U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[8U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[9U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[9U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__csr_mstatus_next = (0x1800U 
                                             | (0xffU 
                                                & vlSelfRef.nerv__DOT__csr_mstatus_next));
    vlSelfRef.nerv__DOT__csr_mstatus_next = (0xffffff8fU 
                                             & vlSelfRef.nerv__DOT__csr_mstatus_next);
    vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff8U 
                                             & vlSelfRef.nerv__DOT__csr_mstatus_next);
    vlSelfRef.nerv__DOT__csr_misa_next = (0xfffffU 
                                          & vlSelfRef.nerv__DOT__csr_misa_next);
    vlSelfRef.nerv__DOT__csr_misa_next = (0xc0000000U 
                                          & vlSelfRef.nerv__DOT__csr_misa_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xffff0fffU 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xfffff8ffU 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xffffff8fU 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xfffffff8U 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mtvec_next = (0xfffffffdU 
                                           & vlSelfRef.nerv__DOT__csr_mtvec_next);
    vlSelfRef.nerv__DOT__csr_mcause_next = (0x8000001fU 
                                            & vlSelfRef.nerv__DOT__csr_mcause_next);
    vlSelfRef.nerv__DOT__csr_mepc_next = (0xfffffffcU 
                                          & vlSelfRef.nerv__DOT__csr_mepc_next);
    if ((0x40U & vlSelfRef.imem_data)) {
        if ((0x20U & vlSelfRef.imem_data)) {
            if ((0x10U & vlSelfRef.imem_data)) {
                if ((8U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((4U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((2U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.imem_data)) {
                        if ((0U == (7U & (vlSelfRef.imem_data 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelfRef.imem_data 
                                        >> 0x14U))) {
                                vlSelfRef.nerv__DOT__csr_mepc_next 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__pc);
                                vlSelfRef.nerv__DOT__npc 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__csr_mtvec_value);
                                vlSelfRef.nerv__DOT__csr_mcause_next = 0xbU;
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = ((0xffffff7fU 
                                        & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                       | (0x80U & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                   << 4U)));
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = (0xfffffff7U 
                                       & vlSelfRef.nerv__DOT__csr_mstatus_next);
                            } else if ((1U == (vlSelfRef.imem_data 
                                               >> 0x14U))) {
                                vlSelfRef.nerv__DOT__csr_mepc_next 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__pc);
                                vlSelfRef.nerv__DOT__npc 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__csr_mtvec_value);
                                vlSelfRef.nerv__DOT__csr_mcause_next = 3U;
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = ((0xffffff7fU 
                                        & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                       | (0x80U & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                   << 4U)));
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = (0xfffffff7U 
                                       & vlSelfRef.nerv__DOT__csr_mstatus_next);
                            } else if ((0x302U == (vlSelfRef.imem_data 
                                                   >> 0x14U))) {
                                vlSelfRef.nerv__DOT__npc 
                                    = vlSelfRef.nerv__DOT__csr_mepc_value;
                                vlSelfRef.nerv__DOT__csr_mcause_next = 0U;
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = ((0xfffffff7U 
                                        & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                       | (8U & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                >> 4U)));
                            } else if ((0x105U != (vlSelfRef.imem_data 
                                                   >> 0x14U))) {
                                vlSelfRef.nerv__DOT__illinsn = 1U;
                            }
                        } else if (vlSelfRef.nerv__DOT__csr_ack) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = vlSelfRef.nerv__DOT__csr_rdval;
                        } else {
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((8U & vlSelfRef.imem_data)) {
                if ((4U & vlSelfRef.imem_data)) {
                    if ((2U & vlSelfRef.imem_data)) {
                        if ((1U & vlSelfRef.imem_data)) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = vlSelfRef.nerv__DOT__npc;
                            vlSelfRef.nerv__DOT__npc 
                                = (vlSelfRef.nerv__DOT__pc 
                                   + VL_EXTENDS_II(32,21, 
                                                   ((0x100000U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0xbU)) 
                                                    | ((0xff000U 
                                                        & vlSelfRef.imem_data) 
                                                       | ((0x800U 
                                                           & (vlSelfRef.imem_data 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.imem_data 
                                                                >> 0x14U)))))));
                            if ((0U != (3U & vlSelfRef.nerv__DOT__npc))) {
                                vlSelfRef.nerv__DOT__npc 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__npc);
                                vlSelfRef.nerv__DOT__illinsn = 1U;
                            }
                        } else {
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((4U & vlSelfRef.imem_data)) {
                if ((2U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.imem_data)) {
                        if ((0U == (7U & (vlSelfRef.imem_data 
                                          >> 0xcU)))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = vlSelfRef.nerv__DOT__npc;
                            vlSelfRef.nerv__DOT__npc 
                                = (0xfffffffeU & nerv__DOT____VdfgExtracted_heb22d996__0);
                        } else {
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                        if ((0U != (3U & vlSelfRef.nerv__DOT__npc))) {
                            vlSelfRef.nerv__DOT__npc 
                                = (0xfffffffcU & vlSelfRef.nerv__DOT__npc);
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((2U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.imem_data)) {
                    if ((0x4000U & vlSelfRef.imem_data)) {
                        if ((0x2000U & vlSelfRef.imem_data)) {
                            if ((0x1000U & vlSelfRef.imem_data)) {
                                if ((vlSelfRef.nerv__DOT__rs1_value 
                                     >= vlSelfRef.nerv__DOT__rs2_value)) {
                                    vlSelfRef.nerv__DOT__npc 
                                        = (vlSelfRef.nerv__DOT__pc 
                                           + VL_EXTENDS_II(32,13, 
                                                           ((0x1000U 
                                                             & (vlSelfRef.imem_data 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelfRef.imem_data 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelfRef.imem_data 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelfRef.imem_data 
                                                                        >> 7U)))))));
                                }
                            } else if (nerv__DOT____VdfgExtracted_h3c5ca625__0) {
                                vlSelfRef.nerv__DOT__npc 
                                    = (vlSelfRef.nerv__DOT__pc 
                                       + VL_EXTENDS_II(32,13, 
                                                       ((0x1000U 
                                                         & (vlSelfRef.imem_data 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.imem_data 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.imem_data 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.imem_data 
                                                                    >> 7U)))))));
                            }
                        } else if ((0x1000U & vlSelfRef.imem_data)) {
                            if (VL_GTES_III(32, vlSelfRef.nerv__DOT__rs1_value, vlSelfRef.nerv__DOT__rs2_value)) {
                                vlSelfRef.nerv__DOT__npc 
                                    = (vlSelfRef.nerv__DOT__pc 
                                       + VL_EXTENDS_II(32,13, 
                                                       ((0x1000U 
                                                         & (vlSelfRef.imem_data 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.imem_data 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.imem_data 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.imem_data 
                                                                    >> 7U)))))));
                            }
                        } else if (nerv__DOT____VdfgExtracted_h3c846c51__0) {
                            vlSelfRef.nerv__DOT__npc 
                                = (vlSelfRef.nerv__DOT__pc 
                                   + VL_EXTENDS_II(32,13, 
                                                   ((0x1000U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.imem_data 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.imem_data 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.imem_data 
                                                                >> 7U)))))));
                        }
                    } else if ((0x2000U & vlSelfRef.imem_data)) {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    } else if ((0x1000U & vlSelfRef.imem_data)) {
                        if ((vlSelfRef.nerv__DOT__rs1_value 
                             != vlSelfRef.nerv__DOT__rs2_value)) {
                            vlSelfRef.nerv__DOT__npc 
                                = (vlSelfRef.nerv__DOT__pc 
                                   + VL_EXTENDS_II(32,13, 
                                                   ((0x1000U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.imem_data 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.imem_data 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.imem_data 
                                                                >> 7U)))))));
                        }
                    } else if ((vlSelfRef.nerv__DOT__rs1_value 
                                == vlSelfRef.nerv__DOT__rs2_value)) {
                        vlSelfRef.nerv__DOT__npc = 
                            (vlSelfRef.nerv__DOT__pc 
                             + VL_EXTENDS_II(32,13, 
                                             ((0x1000U 
                                               & (vlSelfRef.imem_data 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelfRef.imem_data 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.imem_data 
                                                          >> 7U)))))));
                    }
                    if ((0U != (3U & vlSelfRef.nerv__DOT__npc))) {
                        vlSelfRef.nerv__DOT__npc = 
                            (0xfffffffcU & vlSelfRef.nerv__DOT__npc);
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else if ((0x20U & vlSelfRef.imem_data)) {
        if ((0x10U & vlSelfRef.imem_data)) {
            if ((8U & vlSelfRef.imem_data)) {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            } else if ((4U & vlSelfRef.imem_data)) {
                if ((2U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.imem_data)) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (0xfffff000U & vlSelfRef.imem_data);
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((2U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.imem_data)) {
                    if (((((((((0U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)))) 
                               | (0x100U == ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU))))) 
                              | (1U == ((0x3f8U & (vlSelfRef.imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlSelfRef.imem_data 
                                                 >> 0xcU))))) 
                             | (2U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) 
                            | (3U == ((0x3f8U & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlSelfRef.imem_data 
                                               >> 0xcU))))) 
                           | (4U == ((0x3f8U & (vlSelfRef.imem_data 
                                                >> 0x16U)) 
                                     | (7U & (vlSelfRef.imem_data 
                                              >> 0xcU))))) 
                          | (5U == ((0x3f8U & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                    | (7U & (vlSelfRef.imem_data 
                                             >> 0xcU))))) 
                         | (0x105U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)))))) {
                        if ((0U == ((0x3f8U & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                    | (7U & (vlSelfRef.imem_data 
                                             >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   + vlSelfRef.nerv__DOT__rs2_value);
                        } else if ((0x100U == ((0x3f8U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelfRef.imem_data 
                                                     >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   - vlSelfRef.nerv__DOT__rs2_value);
                        } else if ((1U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   << (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_22));
                        } else if ((2U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = nerv__DOT____VdfgExtracted_h3c846c51__0;
                        } else if ((3U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = nerv__DOT____VdfgExtracted_h3c5ca625__0;
                        } else if ((4U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   ^ vlSelfRef.nerv__DOT__rs2_value);
                        } else if ((5U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   >> (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_22));
                        } else {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.nerv__DOT__rs1_value, (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_22));
                        }
                    } else if ((6U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               | vlSelfRef.nerv__DOT__rs2_value);
                    } else if ((7U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               & vlSelfRef.nerv__DOT__rs2_value);
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else if ((8U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        } else if ((4U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        } else if ((2U & vlSelfRef.imem_data)) {
            if ((1U & vlSelfRef.imem_data)) {
                vlSelfRef.nerv__DOT__mem_wr_addr = 
                    (vlSelfRef.nerv__DOT__rs1_value 
                     + VL_EXTENDS_II(32,12, ((0xfe0U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelfRef.imem_data 
                                                   >> 7U)))));
                if ((((0U == (0x1cU & ((0x1cU & (vlSelfRef.imem_data 
                                                 >> 0xaU)) 
                                       | (3U & vlSelfRef.nerv__DOT__mem_wr_addr)))) 
                      || (4U == (0x1dU & ((0x1cU & 
                                           (vlSelfRef.imem_data 
                                            >> 0xaU)) 
                                          | (3U & vlSelfRef.nerv__DOT__mem_wr_addr))))) 
                     || (8U == ((0x1cU & (vlSelfRef.imem_data 
                                          >> 0xaU)) 
                                | (3U & vlSelfRef.nerv__DOT__mem_wr_addr))))) {
                    vlSelfRef.nerv__DOT__mem_wr_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_wr_data 
                        = vlSelfRef.nerv__DOT__rs2_value;
                    vlSelfRef.nerv__DOT__mem_wr_strb = 0xfU;
                    if ((0U == (7U & (vlSelfRef.imem_data 
                                      >> 0xcU)))) {
                        vlSelfRef.nerv__DOT__mem_wr_strb = 1U;
                    } else if ((1U == (7U & (vlSelfRef.imem_data 
                                             >> 0xcU)))) {
                        vlSelfRef.nerv__DOT__mem_wr_strb = 3U;
                    } else if ((2U == (7U & (vlSelfRef.imem_data 
                                             >> 0xcU)))) {
                        vlSelfRef.nerv__DOT__mem_wr_strb = 0xfU;
                    }
                    vlSelfRef.nerv__DOT__mem_wr_data 
                        = VL_SHIFTL_III(32,32,32, vlSelfRef.nerv__DOT__mem_wr_data, 
                                        VL_SHIFTL_III(32,32,32, 
                                                      (3U 
                                                       & vlSelfRef.nerv__DOT__mem_wr_addr), 3U));
                    vlSelfRef.nerv__DOT__mem_wr_strb 
                        = (0xfU & ((IData)(vlSelfRef.nerv__DOT__mem_wr_strb) 
                                   << (3U & vlSelfRef.nerv__DOT__mem_wr_addr)));
                    vlSelfRef.nerv__DOT__mem_wr_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_wr_addr);
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else if ((0x10U & vlSelfRef.imem_data)) {
        if ((8U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        } else if ((4U & vlSelfRef.imem_data)) {
            if ((2U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__next_wr = 1U;
                    vlSelfRef.nerv__DOT__next_rd = 
                        (VL_SHIFTL_III(32,32,32, (vlSelfRef.imem_data 
                                                  >> 0xcU), 0xcU) 
                         + vlSelfRef.nerv__DOT__pc);
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else if ((2U & vlSelfRef.imem_data)) {
            if ((1U & vlSelfRef.imem_data)) {
                if (((((((((0U == (7U & ((0x3f8U & 
                                          (vlSelfRef.imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlSelfRef.imem_data 
                                                  >> 0xcU))))) 
                           | (2U == (7U & ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU)))))) 
                          | (3U == (7U & ((0x3f8U & 
                                           (vlSelfRef.imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) 
                         | (4U == (7U & ((0x3f8U & 
                                          (vlSelfRef.imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlSelfRef.imem_data 
                                                  >> 0xcU)))))) 
                        | (6U == (7U & ((0x3f8U & (vlSelfRef.imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlSelfRef.imem_data 
                                                 >> 0xcU)))))) 
                       | (7U == (7U & ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)))))) 
                      | (1U == ((0x3f8U & (vlSelfRef.imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlSelfRef.imem_data 
                                         >> 0xcU))))) 
                     | (5U == ((0x3f8U & (vlSelfRef.imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlSelfRef.imem_data 
                                        >> 0xcU)))))) {
                    if ((0U == (7U & ((0x3f8U & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlSelfRef.imem_data 
                                               >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = nerv__DOT____VdfgExtracted_heb22d996__0;
                    } else if ((2U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = VL_LTS_III(32, vlSelfRef.nerv__DOT__rs1_value, 
                                         VL_EXTENDS_II(32,12, 
                                                       (vlSelfRef.imem_data 
                                                        >> 0x14U)));
                    } else if ((3U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               < VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((4U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               ^ VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((6U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               | VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((7U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               & VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((1U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               << (0x1fU & (vlSelfRef.imem_data 
                                            >> 0x14U)));
                    } else {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               >> (0x1fU & (vlSelfRef.imem_data 
                                            >> 0x14U)));
                    }
                } else if ((0x105U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                    vlSelfRef.nerv__DOT__next_wr = 1U;
                    vlSelfRef.nerv__DOT__next_rd = 
                        VL_SHIFTRS_III(32,32,5, vlSelfRef.nerv__DOT__rs1_value, 
                                       (0x1fU & (vlSelfRef.imem_data 
                                                 >> 0x14U)));
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else if ((8U & vlSelfRef.imem_data)) {
        vlSelfRef.nerv__DOT__illinsn = 1U;
    } else if ((4U & vlSelfRef.imem_data)) {
        vlSelfRef.nerv__DOT__illinsn = 1U;
    } else if ((2U & vlSelfRef.imem_data)) {
        if ((1U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__mem_rd_addr = nerv__DOT____VdfgExtracted_heb22d996__0;
            if ((0x4000U & vlSelfRef.imem_data)) {
                if ((0x2000U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((0x1000U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    } else {
                        vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                        vlSelfRef.nerv__DOT__mem_rd_reg 
                            = (0x1fU & (vlSelfRef.imem_data 
                                        >> 7U));
                        vlSelfRef.nerv__DOT__mem_rd_func 
                            = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                         << 3U)) | 
                               (7U & (vlSelfRef.imem_data 
                                      >> 0xcU)));
                        vlSelfRef.nerv__DOT__mem_rd_addr 
                            = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                    }
                } else {
                    vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_rd_reg 
                        = (0x1fU & (vlSelfRef.imem_data 
                                    >> 7U));
                    vlSelfRef.nerv__DOT__mem_rd_func 
                        = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)));
                    vlSelfRef.nerv__DOT__mem_rd_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                }
            } else if ((0x2000U & vlSelfRef.imem_data)) {
                if ((0x1000U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((2U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((1U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else {
                    vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_rd_reg 
                        = (0x1fU & (vlSelfRef.imem_data 
                                    >> 7U));
                    vlSelfRef.nerv__DOT__mem_rd_func 
                        = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)));
                    vlSelfRef.nerv__DOT__mem_rd_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                }
            } else if ((0x1000U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else {
                    vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_rd_reg 
                        = (0x1fU & (vlSelfRef.imem_data 
                                    >> 7U));
                    vlSelfRef.nerv__DOT__mem_rd_func 
                        = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)));
                    vlSelfRef.nerv__DOT__mem_rd_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                }
            } else {
                vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                vlSelfRef.nerv__DOT__mem_rd_reg = (0x1fU 
                                                   & (vlSelfRef.imem_data 
                                                      >> 7U));
                vlSelfRef.nerv__DOT__mem_rd_func = 
                    ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                               << 3U)) | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)));
                vlSelfRef.nerv__DOT__mem_rd_addr = 
                    (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else {
        vlSelfRef.nerv__DOT__illinsn = 1U;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.nerv__DOT__reset_q))) {
        vlSelfRef.nerv__DOT__npc = 0U;
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff7U 
                                                 & vlSelfRef.nerv__DOT__csr_mstatus_next);
    } else if (vlSelfRef.stall) {
        vlSelfRef.nerv__DOT__npc = vlSelfRef.nerv__DOT__pc;
    } else if (vlSelfRef.nerv__DOT__mem_rd_enable_q) {
        vlSelfRef.nerv__DOT__npc = vlSelfRef.nerv__DOT__pc;
        vlSelfRef.nerv__DOT__cycle_late_wr = 1U;
        vlSelfRef.nerv__DOT__next_rd = vlSelfRef.nerv__DOT__mem_rdata;
    } else if ((0U != (IData)(vlSelfRef.nerv__DOT__irq_num))) {
        vlSelfRef.nerv__DOT__csr_mepc_next = (0xfffffffcU 
                                              & vlSelfRef.nerv__DOT__pc);
        vlSelfRef.nerv__DOT__csr_mcause_next = (0x80000000U 
                                                | (IData)(vlSelfRef.nerv__DOT__irq_num));
        vlSelfRef.nerv__DOT__npc = ((0U != (1U & vlSelfRef.nerv__DOT__csr_mtvec_value))
                                     ? ((0xfffffffcU 
                                         & vlSelfRef.nerv__DOT__csr_mtvec_value) 
                                        + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.nerv__DOT__irq_num), 2U))
                                     : (0xfffffffcU 
                                        & vlSelfRef.nerv__DOT__csr_mtvec_value));
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0x80U 
                                                 | vlSelfRef.nerv__DOT__csr_mstatus_next);
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff7U 
                                                 & vlSelfRef.nerv__DOT__csr_mstatus_next);
    } else if (vlSelfRef.nerv__DOT__illinsn) {
        vlSelfRef.nerv__DOT__cycle_trap = 1U;
        vlSelfRef.nerv__DOT__csr_mepc_next = ((3U & vlSelfRef.nerv__DOT__csr_mepc_next) 
                                              | (0xfffffffcU 
                                                 & vlSelfRef.nerv__DOT__pc));
        vlSelfRef.nerv__DOT__npc = (0xfffffffcU & vlSelfRef.nerv__DOT__csr_mtvec_value);
        vlSelfRef.nerv__DOT__csr_mcause_next = 2U;
        vlSelfRef.nerv__DOT__csr_mcause_wdata = 2U;
        vlSelfRef.nerv__DOT__csr_mstatus_next = ((0xffffff7fU 
                                                  & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                                 | (0x80U 
                                                    & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                       << 4U)));
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff7U 
                                                 & vlSelfRef.nerv__DOT__csr_mstatus_next);
    } else {
        vlSelfRef.nerv__DOT__cycle_insn = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.nerv__DOT__cycle_insn)))) {
        vlSelfRef.nerv__DOT__next_wr = ((IData)(vlSelfRef.nerv__DOT__cycle_late_wr) 
                                        & (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q));
        vlSelfRef.nerv__DOT__mem_rd_enable = 0U;
        vlSelfRef.nerv__DOT__mem_wr_enable = 0U;
    }
    vlSelfRef.imem_addr = vlSelfRef.nerv__DOT__npc;
    vlSelfRef.trap = vlSelfRef.nerv__DOT__cycle_trap;
    vlSelfRef.dmem_valid = ((IData)(vlSelfRef.nerv__DOT__mem_rd_enable) 
                            | (IData)(vlSelfRef.nerv__DOT__mem_wr_enable));
    if (vlSelfRef.nerv__DOT__mem_wr_enable) {
        vlSelfRef.dmem_wstrb = vlSelfRef.nerv__DOT__mem_wr_strb;
        vlSelfRef.dmem_wdata = vlSelfRef.nerv__DOT__mem_wr_data;
        vlSelfRef.dmem_addr = vlSelfRef.nerv__DOT__mem_wr_addr;
    } else {
        vlSelfRef.dmem_wstrb = 0U;
        vlSelfRef.dmem_wdata = 0U;
        vlSelfRef.dmem_addr = ((IData)(vlSelfRef.nerv__DOT__mem_rd_enable)
                                ? vlSelfRef.nerv__DOT__mem_rd_addr
                                : 0U);
    }
}

void Vnerv___024root___eval_triggers__ico(Vnerv___024root* vlSelf);

bool Vnerv___024root___eval_phase__ico(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vnerv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vnerv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vnerv___024root___eval_act(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vnerv___024root___nba_sequent__TOP__0(Vnerv___024root* vlSelf);

void Vnerv___024root___eval_nba(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vnerv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

extern const VlWide<32>/*1023:0*/ Vnerv__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void Vnerv___024root___nba_sequent__TOP__0(Vnerv___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ nerv__DOT____Vconcswap_1_he58bf432__0;
    nerv__DOT____Vconcswap_1_he58bf432__0 = 0;
    IData/*31:0*/ nerv__DOT____Vconcswap_1_he589ec08__0;
    nerv__DOT____Vconcswap_1_he589ec08__0 = 0;
    CData/*0:0*/ nerv__DOT____VdfgExtracted_h3c846c51__0;
    nerv__DOT____VdfgExtracted_h3c846c51__0 = 0;
    CData/*0:0*/ nerv__DOT____VdfgExtracted_h3c5ca625__0;
    nerv__DOT____VdfgExtracted_h3c5ca625__0 = 0;
    IData/*31:0*/ nerv__DOT____VdfgExtracted_heb22d996__0;
    nerv__DOT____VdfgExtracted_heb22d996__0 = 0;
    CData/*4:0*/ nerv__DOT____VdfgRegularize_h29c87cf7_0_22;
    nerv__DOT____VdfgRegularize_h29c87cf7_0_22 = 0;
    CData/*0:0*/ nerv__DOT____VdfgRegularize_h29c87cf7_0_23;
    nerv__DOT____VdfgRegularize_h29c87cf7_0_23 = 0;
    CData/*0:0*/ nerv__DOT____VdfgRegularize_h29c87cf7_0_25;
    nerv__DOT____VdfgRegularize_h29c87cf7_0_25 = 0;
    CData/*0:0*/ __Vdly__nerv__DOT__reset_q;
    __Vdly__nerv__DOT__reset_q = 0;
    IData/*31:0*/ __VdlyVal__nerv__DOT__regfile__v0;
    __VdlyVal__nerv__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__nerv__DOT__regfile__v0;
    __VdlyDim0__nerv__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__nerv__DOT__regfile__v0;
    __VdlySet__nerv__DOT__regfile__v0 = 0;
    // Body
    __VdlySet__nerv__DOT__regfile__v0 = 0U;
    __Vdly__nerv__DOT__reset_q = vlSelfRef.nerv__DOT__reset_q;
    if (vlSelfRef.nerv__DOT__next_wr) {
        __VdlyVal__nerv__DOT__regfile__v0 = vlSelfRef.nerv__DOT__next_rd;
        __VdlyDim0__nerv__DOT__regfile__v0 = vlSelfRef.nerv__DOT__wr_rd;
        __VdlySet__nerv__DOT__regfile__v0 = 1U;
    }
    vlSelfRef.nerv__DOT__imem_addr_q = vlSelfRef.imem_addr;
    if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.nerv__DOT__mem_rd_reg_q = vlSelfRef.nerv__DOT__mem_rd_reg;
        vlSelfRef.nerv__DOT__mem_rd_func_q = vlSelfRef.nerv__DOT__mem_rd_func;
        vlSelfRef.nerv__DOT__mem_wr_enable_q = vlSelfRef.nerv__DOT__mem_wr_enable;
        vlSelfRef.nerv__DOT__mem_rd_enable_q = vlSelfRef.nerv__DOT__mem_rd_enable;
    }
    vlSelfRef.nerv__DOT__csr_mstatush_value = 0U;
    vlSelfRef.nerv__DOT__csr_mip_value = (0xffff0888U 
                                          & vlSelfRef.irq);
    vlSelfRef.nerv__DOT__csr_custom_value = vlSelfRef.nerv__DOT__csr_custom_next;
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[1U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[1U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[2U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[2U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[3U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[3U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[4U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[4U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[5U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[5U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[6U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[6U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[7U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[7U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[8U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[8U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[9U] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_next[9U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[1U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[1U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU];
    vlSelfRef.nerv__DOT__csr_mtval_value = vlSelfRef.nerv__DOT__csr_mtval_next;
    vlSelfRef.nerv__DOT__csr_mcause_value = vlSelfRef.nerv__DOT__csr_mcause_next;
    vlSelfRef.nerv__DOT__csr_mepc_value = vlSelfRef.nerv__DOT__csr_mepc_next;
    vlSelfRef.nerv__DOT__csr_mscratch_value = vlSelfRef.nerv__DOT__csr_mscratch_next;
    vlSelfRef.nerv__DOT__csr_mtvec_value = vlSelfRef.nerv__DOT__csr_mtvec_next;
    vlSelfRef.nerv__DOT__csr_misa_value = vlSelfRef.nerv__DOT__csr_misa_next;
    vlSelfRef.nerv__DOT__csr_mstatus_value = vlSelfRef.nerv__DOT__csr_mstatus_next;
    if (vlSelfRef.reset) {
        vlSelfRef.nerv__DOT__mem_rd_enable_q = 0U;
    }
    __Vdly__nerv__DOT__reset_q = ((IData)(vlSelfRef.reset) 
                                  | ((IData)(vlSelfRef.nerv__DOT__reset_q) 
                                     & (IData)(vlSelfRef.stall)));
    vlSelfRef.nerv__DOT__pc = vlSelfRef.nerv__DOT__npc;
    vlSelfRef.nerv__DOT__csr_mie_value = vlSelfRef.nerv__DOT__csr_mie_next;
    if (__VdlySet__nerv__DOT__regfile__v0) {
        vlSelfRef.nerv__DOT__regfile[__VdlyDim0__nerv__DOT__regfile__v0] 
            = __VdlyVal__nerv__DOT__regfile__v0;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.nerv__DOT__reset_q))) {
        vlSelfRef.nerv__DOT__csr_mstatush_value = 0U;
        vlSelfRef.nerv__DOT__csr_mip_value = 0U;
        vlSelfRef.nerv__DOT__csr_custom_value = 0U;
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[1U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[2U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[3U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[4U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[5U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[6U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[7U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[8U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[9U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[1U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[1U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU] 
            = Vnerv__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelfRef.nerv__DOT__csr_mtval_value = 0U;
        vlSelfRef.nerv__DOT__csr_mcause_value = 0U;
        vlSelfRef.nerv__DOT__csr_mepc_value = 0U;
        vlSelfRef.nerv__DOT__csr_mscratch_value = 0U;
        vlSelfRef.nerv__DOT__csr_mtvec_value = 0U;
        vlSelfRef.nerv__DOT__csr_misa_value = 0U;
        vlSelfRef.nerv__DOT__csr_mstatus_value = 0U;
        vlSelfRef.nerv__DOT__pc = (- ((IData)(vlSelfRef.reset)
                                       ? 4U : 0U));
        vlSelfRef.nerv__DOT__csr_mie_value = 0U;
    }
    vlSelfRef.nerv__DOT__reset_q = __Vdly__nerv__DOT__reset_q;
    if ((0U != (0x1fU & (vlSelfRef.imem_data >> 0x14U)))) {
        nerv__DOT____VdfgRegularize_h29c87cf7_0_22 
            = (0x1fU & vlSelfRef.nerv__DOT__regfile
               [(0x1fU & (vlSelfRef.imem_data >> 0x14U))]);
        vlSelfRef.nerv__DOT__rs2_value = vlSelfRef.nerv__DOT__regfile
            [(0x1fU & (vlSelfRef.imem_data >> 0x14U))];
    } else {
        nerv__DOT____VdfgRegularize_h29c87cf7_0_22 = 0U;
        vlSelfRef.nerv__DOT__rs2_value = 0U;
    }
    vlSelfRef.nerv__DOT__rs1_value = ((0U != (0x1fU 
                                              & (vlSelfRef.imem_data 
                                                 >> 0xfU)))
                                       ? vlSelfRef.nerv__DOT__regfile
                                      [(0x1fU & (vlSelfRef.imem_data 
                                                 >> 0xfU))]
                                       : 0U);
    vlSelfRef.nerv__DOT__mem_rdata = VL_SHIFTR_III(32,32,32, vlSelfRef.dmem_rdata, 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.nerv__DOT__mem_rd_func_q) 
                                                                     >> 3U)), 3U));
    if ((0U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = VL_EXTENDS_II(32,8, 
                                                       (0xffU 
                                                        & vlSelfRef.nerv__DOT__mem_rdata));
    } else if ((1U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & vlSelfRef.nerv__DOT__mem_rdata));
    } else if ((4U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = (0xffU & vlSelfRef.nerv__DOT__mem_rdata);
    } else if ((5U == (7U & (IData)(vlSelfRef.nerv__DOT__mem_rd_func_q)))) {
        vlSelfRef.nerv__DOT__mem_rdata = (0xffffU & vlSelfRef.nerv__DOT__mem_rdata);
    }
    vlSelfRef.nerv__DOT__irq_en = (vlSelfRef.irq & vlSelfRef.nerv__DOT__csr_mie_value);
    vlSelfRef.nerv__DOT__wr_rd = (0x1fU & (vlSelfRef.imem_data 
                                           >> 7U));
    vlSelfRef.nerv__DOT__running = (1U & ((~ (IData)(vlSelfRef.stall)) 
                                          & (~ ((IData)(vlSelfRef.nerv__DOT__reset_q) 
                                                | (IData)(vlSelfRef.reset)))));
    vlSelfRef.nerv__DOT__csr_rsval = ((0x4000U & vlSelfRef.imem_data)
                                       ? (0x1fU & (vlSelfRef.imem_data 
                                                   >> 0xfU))
                                       : vlSelfRef.nerv__DOT__rs1_value);
    nerv__DOT____VdfgExtracted_h3c846c51__0 = VL_LTS_III(32, vlSelfRef.nerv__DOT__rs1_value, vlSelfRef.nerv__DOT__rs2_value);
    nerv__DOT____VdfgExtracted_h3c5ca625__0 = (vlSelfRef.nerv__DOT__rs1_value 
                                               < vlSelfRef.nerv__DOT__rs2_value);
    nerv__DOT____VdfgExtracted_heb22d996__0 = (vlSelfRef.nerv__DOT__rs1_value 
                                               + VL_EXTENDS_II(32,12, 
                                                               (vlSelfRef.imem_data 
                                                                >> 0x14U)));
    vlSelfRef.nerv__DOT__irq_num = ((vlSelfRef.nerv__DOT__irq_en 
                                     >> 0x1fU) ? 0x1fU
                                     : ((0x40000000U 
                                         & vlSelfRef.nerv__DOT__irq_en)
                                         ? 0x1eU : 
                                        ((0x20000000U 
                                          & vlSelfRef.nerv__DOT__irq_en)
                                          ? 0x1dU : 
                                         ((0x10000000U 
                                           & vlSelfRef.nerv__DOT__irq_en)
                                           ? 0x1cU : 
                                          ((0x8000000U 
                                            & vlSelfRef.nerv__DOT__irq_en)
                                            ? 0x1bU
                                            : ((0x4000000U 
                                                & vlSelfRef.nerv__DOT__irq_en)
                                                ? 0x1aU
                                                : (
                                                   (0x2000000U 
                                                    & vlSelfRef.nerv__DOT__irq_en)
                                                    ? 0x19U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSelfRef.nerv__DOT__irq_en)
                                                     ? 0x18U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSelfRef.nerv__DOT__irq_en)
                                                      ? 0x17U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSelfRef.nerv__DOT__irq_en)
                                                       ? 0x16U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSelfRef.nerv__DOT__irq_en)
                                                        ? 0x15U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSelfRef.nerv__DOT__irq_en)
                                                         ? 0x14U
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelfRef.nerv__DOT__irq_en)
                                                          ? 0x13U
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelfRef.nerv__DOT__irq_en)
                                                           ? 0x12U
                                                           : 
                                                          ((0x20000U 
                                                            & vlSelfRef.nerv__DOT__irq_en)
                                                            ? 0x11U
                                                            : 
                                                           ((0x10000U 
                                                             & vlSelfRef.nerv__DOT__irq_en)
                                                             ? 0x10U
                                                             : 
                                                            ((0x800U 
                                                              & vlSelfRef.nerv__DOT__irq_en)
                                                              ? 0xbU
                                                              : 
                                                             ((0x80U 
                                                               & vlSelfRef.nerv__DOT__irq_en)
                                                               ? 7U
                                                               : 
                                                              ((8U 
                                                                & vlSelfRef.nerv__DOT__irq_en)
                                                                ? 3U
                                                                : 0U)))))))))))))))))));
    nerv__DOT____VdfgRegularize_h29c87cf7_0_25 = ((IData)(vlSelfRef.nerv__DOT__running) 
                                                  & (((~ (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q)) 
                                                      & (~ (IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q))) 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xffff0888U 
                                                                     & vlSelfRef.nerv__DOT__irq_en)))) 
                                                        & (0x73U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.imem_data)))));
    vlSelfRef.nerv__DOT__cycle_intr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.nerv__DOT__reset_q))))) {
        if ((1U & (~ (IData)(vlSelfRef.stall)))) {
            if (vlSelfRef.nerv__DOT__mem_rd_enable_q) {
                vlSelfRef.nerv__DOT__wr_rd = vlSelfRef.nerv__DOT__mem_rd_reg_q;
            }
            if ((1U & (~ (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q)))) {
                if ((0U != (IData)(vlSelfRef.nerv__DOT__irq_num))) {
                    vlSelfRef.nerv__DOT__cycle_intr = 1U;
                }
            }
        }
    }
    if (nerv__DOT____VdfgRegularize_h29c87cf7_0_25) {
        vlSelfRef.nerv__DOT__csr_mode = (3U & (vlSelfRef.imem_data 
                                               >> 0xcU));
        nerv__DOT____VdfgRegularize_h29c87cf7_0_23 
            = (0U != (3U & (vlSelfRef.imem_data >> 0xcU)));
    } else {
        vlSelfRef.nerv__DOT__csr_mode = 0U;
        nerv__DOT____VdfgRegularize_h29c87cf7_0_23 = 0U;
    }
    vlSelfRef.nerv__DOT__csr_mstatus_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                            & (0x300U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_misa_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                         & (0x301U 
                                            == (vlSelfRef.imem_data 
                                                >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mie_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                        & (0x304U == 
                                           (vlSelfRef.imem_data 
                                            >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mtvec_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                          & (0x305U 
                                             == (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mstatush_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                             & (0x310U 
                                                == 
                                                (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mscratch_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                             & (0x340U 
                                                == 
                                                (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mepc_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                         & (0x341U 
                                            == (vlSelfRef.imem_data 
                                                >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mcause_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                           & (0x342U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mtval_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                          & (0x343U 
                                             == (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mip_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                        & (0x344U == 
                                           (vlSelfRef.imem_data 
                                            >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_custom_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                           & (0xbc0U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent3_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x323U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent4_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x324U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent5_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x325U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent6_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x326U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent7_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x327U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent8_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x328U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent9_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                               & (0x329U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent10_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32aU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent11_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32bU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent12_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32cU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent13_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32dU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent14_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32eU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent15_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x32fU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent16_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x330U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent17_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x331U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent18_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x332U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent19_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x333U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent20_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x334U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent21_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x335U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent22_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x336U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent23_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x337U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent24_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x338U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent25_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x339U 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent26_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33aU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent27_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33bU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent28_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33cU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent29_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33dU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent30_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33eU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmevent31_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                & (0x33fU 
                                                   == 
                                                   (vlSelfRef.imem_data 
                                                    >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mcycle_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                           & (0xb00U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_minstret_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                             & (0xb02U 
                                                == 
                                                (vlSelfRef.imem_data 
                                                 >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb03U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb04U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb05U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb06U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb07U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb08U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                 & (0xb09U 
                                                    == 
                                                    (vlSelfRef.imem_data 
                                                     >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0aU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0bU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0cU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0dU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0eU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb0fU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb10U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb11U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb12U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb13U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb14U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb15U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb16U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb17U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb18U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb19U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1aU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1bU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1cU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1dU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1eU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb1fU 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mcycleh_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                            & (0xb80U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_minstreth_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                              & (0xb82U 
                                                 == 
                                                 (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb83U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb84U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb85U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb86U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb87U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb88U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                  & (0xb89U 
                                                     == 
                                                     (vlSelfRef.imem_data 
                                                      >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8aU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8bU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8cU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8dU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8eU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb8fU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb90U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb91U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb92U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb93U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb94U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb95U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb96U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb97U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb98U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb99U 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9aU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9bU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9cU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9dU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9eU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel = ((IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23) 
                                                   & (0xb9fU 
                                                      == 
                                                      (vlSelfRef.imem_data 
                                                       >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_ro = ((~ (IData)(((0U 
                                                != 
                                                (0xf8000U 
                                                 & vlSelfRef.imem_data)) 
                                               | (1U 
                                                  == (IData)(vlSelfRef.nerv__DOT__csr_mode))))) 
                                   & (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_23));
    vlSelfRef.nerv__DOT__csr_hpm_event_sel = (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent31_sel) 
                                               << 0x1fU) 
                                              | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent30_sel) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent29_sel) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent21_sel) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent13_sel) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent5_sel) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel) 
                                                                                << 4U) 
                                                                                | ((IData)(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel) 
                                                                                << 3U)))))))))))))))))))))))))))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_sel = (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel) 
                                                 << 0x1fU) 
                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel) 
                                                    << 0x1eU) 
                                                   | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel) 
                                                       << 0x1dU) 
                                                      | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel) 
                                                          << 0x1cU) 
                                                         | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel) 
                                                             << 0x1bU) 
                                                            | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel) 
                                                                << 0x1aU) 
                                                               | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel) 
                                                                   << 0x19U) 
                                                                  | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel) 
                                                                         << 0x17U) 
                                                                        | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel) 
                                                                            << 0x16U) 
                                                                           | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel) 
                                                                               << 0x15U) 
                                                                              | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_minstret_sel) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelfRef.nerv__DOT__csr_mcycle_sel)))))))))))))))))))))))))))))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_sel = (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel) 
                                                  << 0x1fU) 
                                                 | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel) 
                                                     << 0x1eU) 
                                                    | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel) 
                                                        << 0x1dU) 
                                                       | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel) 
                                                              << 0x1bU) 
                                                             | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel) 
                                                                 << 0x1aU) 
                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel) 
                                                                    << 0x19U) 
                                                                   | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel) 
                                                                          << 0x17U) 
                                                                         | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel) 
                                                                             << 0x16U) 
                                                                            | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel) 
                                                                                << 0x15U) 
                                                                               | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.nerv__DOT__csr_minstreth_sel) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelfRef.nerv__DOT__csr_mcycleh_sel)))))))))))))))))))))))))))))));
    vlSelfRef.nerv__DOT__csr_mvendorid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                              & (0xf11U 
                                                 == 
                                                 (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_marchid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                            & (0xf12U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mimpid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                           & (0xf13U 
                                              == (vlSelfRef.imem_data 
                                                  >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mhartid_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                            & (0xf14U 
                                               == (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__csr_mconfigptr_sel = ((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                                               & (0xf15U 
                                                  == 
                                                  (vlSelfRef.imem_data 
                                                   >> 0x14U)));
    vlSelfRef.nerv__DOT__npc = ((IData)(4U) + vlSelfRef.nerv__DOT__pc);
    vlSelfRef.nerv__DOT__next_wr = 0U;
    vlSelfRef.nerv__DOT__next_rd = 0U;
    vlSelfRef.nerv__DOT__cycle_trap = 0U;
    vlSelfRef.nerv__DOT__cycle_insn = 0U;
    vlSelfRef.nerv__DOT__cycle_late_wr = 0U;
    vlSelfRef.nerv__DOT__illinsn = 0U;
    vlSelfRef.nerv__DOT__mem_wr_enable = 0U;
    vlSelfRef.nerv__DOT__mem_wr_addr = 0U;
    vlSelfRef.nerv__DOT__mem_wr_data = 0U;
    vlSelfRef.nerv__DOT__mem_wr_strb = 0U;
    vlSelfRef.nerv__DOT__mem_rd_enable = 0U;
    vlSelfRef.nerv__DOT__mem_rd_addr = 0U;
    vlSelfRef.nerv__DOT__mem_rd_reg = 0U;
    vlSelfRef.nerv__DOT__mem_rd_func = 0U;
    vlSelfRef.nerv__DOT__csr_ack = 0U;
    vlSelfRef.nerv__DOT__csr_rdval = 0U;
    if ((((((IData)(vlSelfRef.nerv__DOT__csr_ro) & 
            (((((IData)(vlSelfRef.nerv__DOT__csr_mvendorid_sel) 
                | (IData)(vlSelfRef.nerv__DOT__csr_marchid_sel)) 
               | (IData)(vlSelfRef.nerv__DOT__csr_mimpid_sel)) 
              | (IData)(vlSelfRef.nerv__DOT__csr_mhartid_sel)) 
             | (IData)(vlSelfRef.nerv__DOT__csr_mconfigptr_sel))) 
           | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
              & (IData)(vlSelfRef.nerv__DOT__csr_mstatus_sel))) 
          | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_misa_sel))) 
         | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
            & (IData)(vlSelfRef.nerv__DOT__csr_mie_sel)))) {
        if (((IData)(vlSelfRef.nerv__DOT__csr_ro) & (IData)(vlSelfRef.nerv__DOT__csr_mvendorid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_marchid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mimpid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhartid_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mconfigptr_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = 0U;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mstatus_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mstatus_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_misa_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_misa_value;
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mie_value;
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mtvec_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mstatush_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mscratch_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mepc_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mcause_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mtval_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mip_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mcycle_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mtvec_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mtvec_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mstatush_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mstatush_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mscratch_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mscratch_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mepc_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mepc_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mcause_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mcause_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mtval_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mtval_value;
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mip_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_mip_value;
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_minstret_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_minstret_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mcycleh_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_minstreth_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mcycleh_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent5_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[3U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[4U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[5U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent13_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[6U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[7U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[8U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[9U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent21_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U];
        }
    } else if ((((((((((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel)) 
                      | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                         & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel))) 
                     | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                        & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel))) 
                    | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                       & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel))) 
                   | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                      & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel))) 
                  | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                     & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel))) 
                 | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel))) 
                | ((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                   & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent29_sel)))) {
        if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
             & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU];
        } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                    & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel))) {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU];
        } else {
            vlSelfRef.nerv__DOT__csr_ack = 1U;
            vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU];
        }
    } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent30_sel))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU];
    } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                & (IData)(vlSelfRef.nerv__DOT__csr_mhpmevent31_sel))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU];
    } else if (((0U != (IData)(vlSelfRef.nerv__DOT__csr_mode)) 
                & (IData)(vlSelfRef.nerv__DOT__csr_custom_sel))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = vlSelfRef.nerv__DOT__csr_custom_value;
    } else if (((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                & (0xfc0U == (vlSelfRef.imem_data >> 0x14U)))) {
        vlSelfRef.nerv__DOT__csr_ack = 1U;
        vlSelfRef.nerv__DOT__csr_rdval = 0xdeadbeefU;
    }
    vlSelfRef.nerv__DOT__csr_next = vlSelfRef.nerv__DOT__csr_rdval;
    if ((1U == (IData)(vlSelfRef.nerv__DOT__csr_mode))) {
        vlSelfRef.nerv__DOT__csr_next = vlSelfRef.nerv__DOT__csr_rsval;
    } else if ((2U == (IData)(vlSelfRef.nerv__DOT__csr_mode))) {
        vlSelfRef.nerv__DOT__csr_next = (vlSelfRef.nerv__DOT__csr_next 
                                         | vlSelfRef.nerv__DOT__csr_rsval);
    } else if ((3U == (IData)(vlSelfRef.nerv__DOT__csr_mode))) {
        vlSelfRef.nerv__DOT__csr_next = (vlSelfRef.nerv__DOT__csr_next 
                                         & (~ vlSelfRef.nerv__DOT__csr_rsval));
    }
    vlSelfRef.nerv__DOT__csr_mstatus_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mstatus_sel)
                                               ? vlSelfRef.nerv__DOT__csr_next
                                               : vlSelfRef.nerv__DOT__csr_mstatus_value);
    vlSelfRef.nerv__DOT__csr_mstatus_next = vlSelfRef.nerv__DOT__csr_mstatus_wdata;
    vlSelfRef.nerv__DOT__csr_misa_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_misa_sel)
                                            ? vlSelfRef.nerv__DOT__csr_next
                                            : vlSelfRef.nerv__DOT__csr_misa_value);
    vlSelfRef.nerv__DOT__csr_misa_next = vlSelfRef.nerv__DOT__csr_misa_wdata;
    vlSelfRef.nerv__DOT__csr_mie_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mie_sel)
                                           ? vlSelfRef.nerv__DOT__csr_next
                                           : vlSelfRef.nerv__DOT__csr_mie_value);
    vlSelfRef.nerv__DOT__csr_mie_next = vlSelfRef.nerv__DOT__csr_mie_wdata;
    vlSelfRef.nerv__DOT__csr_mtvec_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mtvec_sel)
                                             ? vlSelfRef.nerv__DOT__csr_next
                                             : vlSelfRef.nerv__DOT__csr_mtvec_value);
    vlSelfRef.nerv__DOT__csr_mtvec_next = vlSelfRef.nerv__DOT__csr_mtvec_wdata;
    vlSelfRef.nerv__DOT__csr_mstatush_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mstatush_sel)
                                                ? vlSelfRef.nerv__DOT__csr_next
                                                : vlSelfRef.nerv__DOT__csr_mstatush_value);
    vlSelfRef.nerv__DOT__csr_mscratch_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mscratch_sel)
                                                ? vlSelfRef.nerv__DOT__csr_next
                                                : vlSelfRef.nerv__DOT__csr_mscratch_value);
    vlSelfRef.nerv__DOT__csr_mscratch_next = vlSelfRef.nerv__DOT__csr_mscratch_wdata;
    vlSelfRef.nerv__DOT__csr_mepc_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mepc_sel)
                                            ? vlSelfRef.nerv__DOT__csr_next
                                            : vlSelfRef.nerv__DOT__csr_mepc_value);
    vlSelfRef.nerv__DOT__csr_mepc_next = vlSelfRef.nerv__DOT__csr_mepc_wdata;
    vlSelfRef.nerv__DOT__csr_mcause_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mcause_sel)
                                              ? vlSelfRef.nerv__DOT__csr_next
                                              : vlSelfRef.nerv__DOT__csr_mcause_value);
    vlSelfRef.nerv__DOT__csr_mcause_next = vlSelfRef.nerv__DOT__csr_mcause_wdata;
    vlSelfRef.nerv__DOT__csr_mtval_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mtval_sel)
                                             ? vlSelfRef.nerv__DOT__csr_next
                                             : vlSelfRef.nerv__DOT__csr_mtval_value);
    vlSelfRef.nerv__DOT__csr_mtval_next = vlSelfRef.nerv__DOT__csr_mtval_wdata;
    vlSelfRef.nerv__DOT__csr_mip_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_mip_sel)
                                           ? vlSelfRef.nerv__DOT__csr_next
                                           : vlSelfRef.nerv__DOT__csr_mip_value);
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0U] 
        = (IData)((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[1U]))) 
                    << 0x20U) | (QData)((IData)(((1U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[1U] 
        = (IData)(((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[1U]))) 
                     << 0x20U) | (QData)((IData)(((1U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[2U] 
        = (IData)((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U]))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[3U] 
        = (IData)(((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U]))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[4U] 
        = (IData)((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U]))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[5U] 
        = (IData)(((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U]))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[6U] 
        = (IData)((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U]))) 
                    << 0x20U) | (QData)((IData)(((0x40U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[7U] 
        = (IData)(((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U]))) 
                     << 0x20U) | (QData)((IData)(((0x40U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[8U] 
        = (IData)((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U]))) 
                    << 0x20U) | (QData)((IData)(((0x100U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[9U] 
        = (IData)(((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U]))) 
                     << 0x20U) | (QData)((IData)(((0x100U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xaU] 
        = (IData)((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0x400U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xbU] 
        = (IData)(((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0x400U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xcU] 
        = (IData)((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0x1000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xdU] 
        = (IData)(((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0x1000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xeU] 
        = (IData)((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xfU] 
        = (IData)(((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x10U] 
        = (IData)((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x11U] 
        = (IData)(((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x12U] 
        = (IData)((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x40000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x13U] 
        = (IData)(((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x40000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x14U] 
        = (IData)((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x100000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x15U] 
        = (IData)(((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x100000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x16U] 
        = (IData)((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x400000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x17U] 
        = (IData)(((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x400000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x18U] 
        = (IData)((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x1000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x19U] 
        = (IData)(((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x1000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1aU] 
        = (IData)((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1bU] 
        = (IData)(((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1cU] 
        = (IData)((((QData)((IData)(((0x20000000U & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x10000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1dU] 
        = (IData)(((((QData)((IData)(((0x20000000U 
                                       & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x10000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counter_sel 
                                      >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x40000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1fU] 
        = (IData)(((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counter_sel 
                                       >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x40000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counter_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[1U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[2U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[3U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[4U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[5U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[6U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[7U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[8U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U] = 
        vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[9U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1fU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0U] 
        = (IData)((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[1U]))) 
                    << 0x20U) | (QData)((IData)(((1U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[1U] 
        = (IData)(((((QData)((IData)(((2U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[1U]))) 
                     << 0x20U) | (QData)((IData)(((1U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[2U] 
        = (IData)((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U]))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[3U] 
        = (IData)(((((QData)((IData)(((8U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U]))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[4U] 
        = (IData)((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U]))) 
                    << 0x20U) | (QData)((IData)(((0x10U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[5U] 
        = (IData)(((((QData)((IData)(((0x20U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U]))) 
                     << 0x20U) | (QData)((IData)(((0x10U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[6U] 
        = (IData)((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U]))) 
                    << 0x20U) | (QData)((IData)(((0x40U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[7U] 
        = (IData)(((((QData)((IData)(((0x80U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U]))) 
                     << 0x20U) | (QData)((IData)(((0x40U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[8U] 
        = (IData)((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U]))) 
                    << 0x20U) | (QData)((IData)(((0x100U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[9U] 
        = (IData)(((((QData)((IData)(((0x200U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U]))) 
                     << 0x20U) | (QData)((IData)(((0x100U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xaU] 
        = (IData)((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0x400U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xbU] 
        = (IData)(((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0x400U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xcU] 
        = (IData)((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0x1000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xdU] 
        = (IData)(((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0x1000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xeU] 
        = (IData)((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xfU] 
        = (IData)(((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x10U] 
        = (IData)((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x11U] 
        = (IData)(((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x12U] 
        = (IData)((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x40000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x13U] 
        = (IData)(((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x40000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x14U] 
        = (IData)((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x100000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x15U] 
        = (IData)(((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x100000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x16U] 
        = (IData)((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x400000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x17U] 
        = (IData)(((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x400000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x18U] 
        = (IData)((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x1000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x19U] 
        = (IData)(((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x1000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1aU] 
        = (IData)((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1bU] 
        = (IData)(((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1cU] 
        = (IData)((((QData)((IData)(((0x20000000U & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x10000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1dU] 
        = (IData)(((((QData)((IData)(((0x20000000U 
                                       & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x10000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counterh_sel 
                                      >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x40000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU])))));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1fU] 
        = (IData)(((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_counterh_sel 
                                       >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x40000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_counterh_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[1U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[2U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[3U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[4U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[5U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[6U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[7U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[8U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[9U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1fU];
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((2U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[1U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((1U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[0U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[1U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((2U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[1U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((1U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[0U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[2U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((8U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[3U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((4U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[2U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[3U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((8U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[3U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((4U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[2U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[4U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((0x20U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[5U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x10U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[4U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[5U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x20U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[5U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x10U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[4U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[6U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((0x80U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[7U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x40U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[6U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[7U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x80U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[7U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x40U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[6U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[8U] = (IData)(
                                                           (((QData)((IData)(
                                                                             ((0x200U 
                                                                               & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                               ? vlSelfRef.nerv__DOT__csr_next
                                                                               : 
                                                                              vlSelfRef.nerv__DOT__csr_hpm_event_value[9U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x100U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[8U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[9U] = (IData)(
                                                           ((((QData)((IData)(
                                                                              ((0x200U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                ? vlSelfRef.nerv__DOT__csr_next
                                                                                : 
                                                                               vlSelfRef.nerv__DOT__csr_hpm_event_value[9U]))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0x100U 
                                                                                & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                                                 ? vlSelfRef.nerv__DOT__csr_next
                                                                                 : 
                                                                                vlSelfRef.nerv__DOT__csr_hpm_event_value[8U])))) 
                                                            >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xaU] 
        = (IData)((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU]))) 
                    << 0x20U) | (QData)((IData)(((0x400U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xbU] 
        = (IData)(((((QData)((IData)(((0x800U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU]))) 
                     << 0x20U) | (QData)((IData)(((0x400U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xcU] 
        = (IData)((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU]))) 
                    << 0x20U) | (QData)((IData)(((0x1000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xdU] 
        = (IData)(((((QData)((IData)(((0x2000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU]))) 
                     << 0x20U) | (QData)((IData)(((0x1000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xeU] 
        = (IData)((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xfU] 
        = (IData)(((((QData)((IData)(((0x8000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x10U] 
        = (IData)((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U]))) 
                    << 0x20U) | (QData)((IData)(((0x10000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x11U] 
        = (IData)(((((QData)((IData)(((0x20000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U]))) 
                     << 0x20U) | (QData)((IData)(((0x10000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x12U] 
        = (IData)((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U]))) 
                    << 0x20U) | (QData)((IData)(((0x40000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x13U] 
        = (IData)(((((QData)((IData)(((0x80000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U]))) 
                     << 0x20U) | (QData)((IData)(((0x40000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x14U] 
        = (IData)((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U]))) 
                    << 0x20U) | (QData)((IData)(((0x100000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x15U] 
        = (IData)(((((QData)((IData)(((0x200000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U]))) 
                     << 0x20U) | (QData)((IData)(((0x100000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x16U] 
        = (IData)((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U]))) 
                    << 0x20U) | (QData)((IData)(((0x400000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x17U] 
        = (IData)(((((QData)((IData)(((0x800000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U]))) 
                     << 0x20U) | (QData)((IData)(((0x400000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x18U] 
        = (IData)((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U]))) 
                    << 0x20U) | (QData)((IData)(((0x1000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x19U] 
        = (IData)(((((QData)((IData)(((0x2000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U]))) 
                     << 0x20U) | (QData)((IData)(((0x1000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1aU] 
        = (IData)((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU]))) 
                    << 0x20U) | (QData)((IData)(((0x4000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1bU] 
        = (IData)(((((QData)((IData)(((0x8000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU]))) 
                     << 0x20U) | (QData)((IData)(((0x4000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1cU] 
        = (IData)((((QData)((IData)(((0x20000000U & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                      ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU]))) 
                    << 0x20U) | (QData)((IData)(((0x10000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1dU] 
        = (IData)(((((QData)((IData)(((0x20000000U 
                                       & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                       ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU]))) 
                     << 0x20U) | (QData)((IData)(((0x10000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1eU] 
        = (IData)((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_event_sel 
                                      >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                      : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU]))) 
                    << 0x20U) | (QData)((IData)(((0x40000000U 
                                                  & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                  ? vlSelfRef.nerv__DOT__csr_next
                                                  : 
                                                 vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU])))));
    vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1fU] 
        = (IData)(((((QData)((IData)(((vlSelfRef.nerv__DOT__csr_hpm_event_sel 
                                       >> 0x1fU) ? vlSelfRef.nerv__DOT__csr_next
                                       : vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU]))) 
                     << 0x20U) | (QData)((IData)(((0x40000000U 
                                                   & vlSelfRef.nerv__DOT__csr_hpm_event_sel)
                                                   ? vlSelfRef.nerv__DOT__csr_next
                                                   : 
                                                  vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[1U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[1U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[2U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[2U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[3U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[3U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[4U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[4U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[5U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[5U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[6U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[6U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[7U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[7U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[8U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[8U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[9U] = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[9U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xaU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xbU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xcU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xdU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xeU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU] = 
        vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xfU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x10U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x11U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x12U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x13U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x14U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x15U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x16U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x17U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x18U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x19U];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1aU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1bU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1cU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1dU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1eU];
    vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU] 
        = vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1fU];
    vlSelfRef.nerv__DOT__csr_custom_wdata = ((IData)(vlSelfRef.nerv__DOT__csr_custom_sel)
                                              ? vlSelfRef.nerv__DOT__csr_next
                                              : vlSelfRef.nerv__DOT__csr_custom_value);
    vlSelfRef.nerv__DOT__csr_custom_next = vlSelfRef.nerv__DOT__csr_custom_wdata;
    vlSelfRef.nerv__DOT__hpm_increment = 1U;
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    ((1ULL 
                                                      + 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U])))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = ((IData)(1U) 
                                             + vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U]);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[1U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[1U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[1U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[1U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = 2U;
    vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                           ? 1U : 0U);
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[3U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[3U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[4U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[4U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[5U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[5U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[6U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[6U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[7U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[7U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[8U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[8U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[9U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[9U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U] = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__hpm_event = vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU];
    if ((1U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = 1U;
    } else if ((2U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__running)
                                               ? 1U
                                               : 0U);
    } else if ((3U == vlSelfRef.nerv__DOT__hpm_event)) {
        vlSelfRef.nerv__DOT__hpm_increment = ((IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q)
                                               ? 1U
                                               : 0U);
    } else {
        vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU] = 0U;
        vlSelfRef.nerv__DOT__hpm_increment = 0U;
    }
    nerv__DOT____Vconcswap_1_he58bf432__0 = (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU]))) 
                                                      + (QData)((IData)(vlSelfRef.nerv__DOT__hpm_increment))) 
                                                     >> 0x20U));
    nerv__DOT____Vconcswap_1_he589ec08__0 = (vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU] 
                                             + vlSelfRef.nerv__DOT__hpm_increment);
    vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU] 
        = nerv__DOT____Vconcswap_1_he58bf432__0;
    vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU] 
        = nerv__DOT____Vconcswap_1_he589ec08__0;
    vlSelfRef.nerv__DOT__csr_mstatus_next = (0x1800U 
                                             | (0xffU 
                                                & vlSelfRef.nerv__DOT__csr_mstatus_next));
    vlSelfRef.nerv__DOT__csr_mstatus_next = (0xffffff8fU 
                                             & vlSelfRef.nerv__DOT__csr_mstatus_next);
    vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff8U 
                                             & vlSelfRef.nerv__DOT__csr_mstatus_next);
    vlSelfRef.nerv__DOT__csr_misa_next = (0xfffffU 
                                          & vlSelfRef.nerv__DOT__csr_misa_next);
    vlSelfRef.nerv__DOT__csr_misa_next = (0xc0000000U 
                                          & vlSelfRef.nerv__DOT__csr_misa_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xffff0fffU 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xfffff8ffU 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xffffff8fU 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mie_next = (0xfffffff8U 
                                         & vlSelfRef.nerv__DOT__csr_mie_next);
    vlSelfRef.nerv__DOT__csr_mtvec_next = (0xfffffffdU 
                                           & vlSelfRef.nerv__DOT__csr_mtvec_next);
    vlSelfRef.nerv__DOT__csr_mcause_next = (0x8000001fU 
                                            & vlSelfRef.nerv__DOT__csr_mcause_next);
    vlSelfRef.nerv__DOT__csr_mepc_next = (0xfffffffcU 
                                          & vlSelfRef.nerv__DOT__csr_mepc_next);
    if ((0x40U & vlSelfRef.imem_data)) {
        if ((0x20U & vlSelfRef.imem_data)) {
            if ((0x10U & vlSelfRef.imem_data)) {
                if ((8U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((4U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((2U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.imem_data)) {
                        if ((0U == (7U & (vlSelfRef.imem_data 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelfRef.imem_data 
                                        >> 0x14U))) {
                                vlSelfRef.nerv__DOT__csr_mepc_next 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__pc);
                                vlSelfRef.nerv__DOT__npc 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__csr_mtvec_value);
                                vlSelfRef.nerv__DOT__csr_mcause_next = 0xbU;
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = ((0xffffff7fU 
                                        & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                       | (0x80U & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                   << 4U)));
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = (0xfffffff7U 
                                       & vlSelfRef.nerv__DOT__csr_mstatus_next);
                            } else if ((1U == (vlSelfRef.imem_data 
                                               >> 0x14U))) {
                                vlSelfRef.nerv__DOT__csr_mepc_next 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__pc);
                                vlSelfRef.nerv__DOT__npc 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__csr_mtvec_value);
                                vlSelfRef.nerv__DOT__csr_mcause_next = 3U;
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = ((0xffffff7fU 
                                        & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                       | (0x80U & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                   << 4U)));
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = (0xfffffff7U 
                                       & vlSelfRef.nerv__DOT__csr_mstatus_next);
                            } else if ((0x302U == (vlSelfRef.imem_data 
                                                   >> 0x14U))) {
                                vlSelfRef.nerv__DOT__npc 
                                    = vlSelfRef.nerv__DOT__csr_mepc_value;
                                vlSelfRef.nerv__DOT__csr_mcause_next = 0U;
                                vlSelfRef.nerv__DOT__csr_mstatus_next 
                                    = ((0xfffffff7U 
                                        & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                       | (8U & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                >> 4U)));
                            } else if ((0x105U != (vlSelfRef.imem_data 
                                                   >> 0x14U))) {
                                vlSelfRef.nerv__DOT__illinsn = 1U;
                            }
                        } else if (vlSelfRef.nerv__DOT__csr_ack) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = vlSelfRef.nerv__DOT__csr_rdval;
                        } else {
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((8U & vlSelfRef.imem_data)) {
                if ((4U & vlSelfRef.imem_data)) {
                    if ((2U & vlSelfRef.imem_data)) {
                        if ((1U & vlSelfRef.imem_data)) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = vlSelfRef.nerv__DOT__npc;
                            vlSelfRef.nerv__DOT__npc 
                                = (vlSelfRef.nerv__DOT__pc 
                                   + VL_EXTENDS_II(32,21, 
                                                   ((0x100000U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0xbU)) 
                                                    | ((0xff000U 
                                                        & vlSelfRef.imem_data) 
                                                       | ((0x800U 
                                                           & (vlSelfRef.imem_data 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.imem_data 
                                                                >> 0x14U)))))));
                            if ((0U != (3U & vlSelfRef.nerv__DOT__npc))) {
                                vlSelfRef.nerv__DOT__npc 
                                    = (0xfffffffcU 
                                       & vlSelfRef.nerv__DOT__npc);
                                vlSelfRef.nerv__DOT__illinsn = 1U;
                            }
                        } else {
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((4U & vlSelfRef.imem_data)) {
                if ((2U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.imem_data)) {
                        if ((0U == (7U & (vlSelfRef.imem_data 
                                          >> 0xcU)))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = vlSelfRef.nerv__DOT__npc;
                            vlSelfRef.nerv__DOT__npc 
                                = (0xfffffffeU & nerv__DOT____VdfgExtracted_heb22d996__0);
                        } else {
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                        if ((0U != (3U & vlSelfRef.nerv__DOT__npc))) {
                            vlSelfRef.nerv__DOT__npc 
                                = (0xfffffffcU & vlSelfRef.nerv__DOT__npc);
                            vlSelfRef.nerv__DOT__illinsn = 1U;
                        }
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((2U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.imem_data)) {
                    if ((0x4000U & vlSelfRef.imem_data)) {
                        if ((0x2000U & vlSelfRef.imem_data)) {
                            if ((0x1000U & vlSelfRef.imem_data)) {
                                if ((vlSelfRef.nerv__DOT__rs1_value 
                                     >= vlSelfRef.nerv__DOT__rs2_value)) {
                                    vlSelfRef.nerv__DOT__npc 
                                        = (vlSelfRef.nerv__DOT__pc 
                                           + VL_EXTENDS_II(32,13, 
                                                           ((0x1000U 
                                                             & (vlSelfRef.imem_data 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelfRef.imem_data 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelfRef.imem_data 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelfRef.imem_data 
                                                                        >> 7U)))))));
                                }
                            } else if (nerv__DOT____VdfgExtracted_h3c5ca625__0) {
                                vlSelfRef.nerv__DOT__npc 
                                    = (vlSelfRef.nerv__DOT__pc 
                                       + VL_EXTENDS_II(32,13, 
                                                       ((0x1000U 
                                                         & (vlSelfRef.imem_data 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.imem_data 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.imem_data 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.imem_data 
                                                                    >> 7U)))))));
                            }
                        } else if ((0x1000U & vlSelfRef.imem_data)) {
                            if (VL_GTES_III(32, vlSelfRef.nerv__DOT__rs1_value, vlSelfRef.nerv__DOT__rs2_value)) {
                                vlSelfRef.nerv__DOT__npc 
                                    = (vlSelfRef.nerv__DOT__pc 
                                       + VL_EXTENDS_II(32,13, 
                                                       ((0x1000U 
                                                         & (vlSelfRef.imem_data 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.imem_data 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.imem_data 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.imem_data 
                                                                    >> 7U)))))));
                            }
                        } else if (nerv__DOT____VdfgExtracted_h3c846c51__0) {
                            vlSelfRef.nerv__DOT__npc 
                                = (vlSelfRef.nerv__DOT__pc 
                                   + VL_EXTENDS_II(32,13, 
                                                   ((0x1000U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.imem_data 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.imem_data 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.imem_data 
                                                                >> 7U)))))));
                        }
                    } else if ((0x2000U & vlSelfRef.imem_data)) {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    } else if ((0x1000U & vlSelfRef.imem_data)) {
                        if ((vlSelfRef.nerv__DOT__rs1_value 
                             != vlSelfRef.nerv__DOT__rs2_value)) {
                            vlSelfRef.nerv__DOT__npc 
                                = (vlSelfRef.nerv__DOT__pc 
                                   + VL_EXTENDS_II(32,13, 
                                                   ((0x1000U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.imem_data 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.imem_data 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.imem_data 
                                                                >> 7U)))))));
                        }
                    } else if ((vlSelfRef.nerv__DOT__rs1_value 
                                == vlSelfRef.nerv__DOT__rs2_value)) {
                        vlSelfRef.nerv__DOT__npc = 
                            (vlSelfRef.nerv__DOT__pc 
                             + VL_EXTENDS_II(32,13, 
                                             ((0x1000U 
                                               & (vlSelfRef.imem_data 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelfRef.imem_data 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.imem_data 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.imem_data 
                                                          >> 7U)))))));
                    }
                    if ((0U != (3U & vlSelfRef.nerv__DOT__npc))) {
                        vlSelfRef.nerv__DOT__npc = 
                            (0xfffffffcU & vlSelfRef.nerv__DOT__npc);
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else if ((0x20U & vlSelfRef.imem_data)) {
        if ((0x10U & vlSelfRef.imem_data)) {
            if ((8U & vlSelfRef.imem_data)) {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            } else if ((4U & vlSelfRef.imem_data)) {
                if ((2U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.imem_data)) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (0xfffff000U & vlSelfRef.imem_data);
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else if ((2U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.imem_data)) {
                    if (((((((((0U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)))) 
                               | (0x100U == ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU))))) 
                              | (1U == ((0x3f8U & (vlSelfRef.imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlSelfRef.imem_data 
                                                 >> 0xcU))))) 
                             | (2U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) 
                            | (3U == ((0x3f8U & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlSelfRef.imem_data 
                                               >> 0xcU))))) 
                           | (4U == ((0x3f8U & (vlSelfRef.imem_data 
                                                >> 0x16U)) 
                                     | (7U & (vlSelfRef.imem_data 
                                              >> 0xcU))))) 
                          | (5U == ((0x3f8U & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                    | (7U & (vlSelfRef.imem_data 
                                             >> 0xcU))))) 
                         | (0x105U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)))))) {
                        if ((0U == ((0x3f8U & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                    | (7U & (vlSelfRef.imem_data 
                                             >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   + vlSelfRef.nerv__DOT__rs2_value);
                        } else if ((0x100U == ((0x3f8U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelfRef.imem_data 
                                                     >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   - vlSelfRef.nerv__DOT__rs2_value);
                        } else if ((1U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   << (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_22));
                        } else if ((2U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = nerv__DOT____VdfgExtracted_h3c846c51__0;
                        } else if ((3U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = nerv__DOT____VdfgExtracted_h3c5ca625__0;
                        } else if ((4U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   ^ vlSelfRef.nerv__DOT__rs2_value);
                        } else if ((5U == ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU))))) {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = (vlSelfRef.nerv__DOT__rs1_value 
                                   >> (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_22));
                        } else {
                            vlSelfRef.nerv__DOT__next_wr = 1U;
                            vlSelfRef.nerv__DOT__next_rd 
                                = VL_SHIFTRS_III(32,32,5, vlSelfRef.nerv__DOT__rs1_value, (IData)(nerv__DOT____VdfgRegularize_h29c87cf7_0_22));
                        }
                    } else if ((6U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               | vlSelfRef.nerv__DOT__rs2_value);
                    } else if ((7U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               & vlSelfRef.nerv__DOT__rs2_value);
                    } else {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    }
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else if ((8U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        } else if ((4U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        } else if ((2U & vlSelfRef.imem_data)) {
            if ((1U & vlSelfRef.imem_data)) {
                vlSelfRef.nerv__DOT__mem_wr_addr = 
                    (vlSelfRef.nerv__DOT__rs1_value 
                     + VL_EXTENDS_II(32,12, ((0xfe0U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelfRef.imem_data 
                                                   >> 7U)))));
                if ((((0U == (0x1cU & ((0x1cU & (vlSelfRef.imem_data 
                                                 >> 0xaU)) 
                                       | (3U & vlSelfRef.nerv__DOT__mem_wr_addr)))) 
                      || (4U == (0x1dU & ((0x1cU & 
                                           (vlSelfRef.imem_data 
                                            >> 0xaU)) 
                                          | (3U & vlSelfRef.nerv__DOT__mem_wr_addr))))) 
                     || (8U == ((0x1cU & (vlSelfRef.imem_data 
                                          >> 0xaU)) 
                                | (3U & vlSelfRef.nerv__DOT__mem_wr_addr))))) {
                    vlSelfRef.nerv__DOT__mem_wr_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_wr_data 
                        = vlSelfRef.nerv__DOT__rs2_value;
                    vlSelfRef.nerv__DOT__mem_wr_strb = 0xfU;
                    if ((0U == (7U & (vlSelfRef.imem_data 
                                      >> 0xcU)))) {
                        vlSelfRef.nerv__DOT__mem_wr_strb = 1U;
                    } else if ((1U == (7U & (vlSelfRef.imem_data 
                                             >> 0xcU)))) {
                        vlSelfRef.nerv__DOT__mem_wr_strb = 3U;
                    } else if ((2U == (7U & (vlSelfRef.imem_data 
                                             >> 0xcU)))) {
                        vlSelfRef.nerv__DOT__mem_wr_strb = 0xfU;
                    }
                    vlSelfRef.nerv__DOT__mem_wr_data 
                        = VL_SHIFTL_III(32,32,32, vlSelfRef.nerv__DOT__mem_wr_data, 
                                        VL_SHIFTL_III(32,32,32, 
                                                      (3U 
                                                       & vlSelfRef.nerv__DOT__mem_wr_addr), 3U));
                    vlSelfRef.nerv__DOT__mem_wr_strb 
                        = (0xfU & ((IData)(vlSelfRef.nerv__DOT__mem_wr_strb) 
                                   << (3U & vlSelfRef.nerv__DOT__mem_wr_addr)));
                    vlSelfRef.nerv__DOT__mem_wr_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_wr_addr);
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else if ((0x10U & vlSelfRef.imem_data)) {
        if ((8U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        } else if ((4U & vlSelfRef.imem_data)) {
            if ((2U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__next_wr = 1U;
                    vlSelfRef.nerv__DOT__next_rd = 
                        (VL_SHIFTL_III(32,32,32, (vlSelfRef.imem_data 
                                                  >> 0xcU), 0xcU) 
                         + vlSelfRef.nerv__DOT__pc);
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else if ((2U & vlSelfRef.imem_data)) {
            if ((1U & vlSelfRef.imem_data)) {
                if (((((((((0U == (7U & ((0x3f8U & 
                                          (vlSelfRef.imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlSelfRef.imem_data 
                                                  >> 0xcU))))) 
                           | (2U == (7U & ((0x3f8U 
                                            & (vlSelfRef.imem_data 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelfRef.imem_data 
                                               >> 0xcU)))))) 
                          | (3U == (7U & ((0x3f8U & 
                                           (vlSelfRef.imem_data 
                                            >> 0x16U)) 
                                          | (7U & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) 
                         | (4U == (7U & ((0x3f8U & 
                                          (vlSelfRef.imem_data 
                                           >> 0x16U)) 
                                         | (7U & (vlSelfRef.imem_data 
                                                  >> 0xcU)))))) 
                        | (6U == (7U & ((0x3f8U & (vlSelfRef.imem_data 
                                                   >> 0x16U)) 
                                        | (7U & (vlSelfRef.imem_data 
                                                 >> 0xcU)))))) 
                       | (7U == (7U & ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)))))) 
                      | (1U == ((0x3f8U & (vlSelfRef.imem_data 
                                           >> 0x16U)) 
                                | (7U & (vlSelfRef.imem_data 
                                         >> 0xcU))))) 
                     | (5U == ((0x3f8U & (vlSelfRef.imem_data 
                                          >> 0x16U)) 
                               | (7U & (vlSelfRef.imem_data 
                                        >> 0xcU)))))) {
                    if ((0U == (7U & ((0x3f8U & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                      | (7U & (vlSelfRef.imem_data 
                                               >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = nerv__DOT____VdfgExtracted_heb22d996__0;
                    } else if ((2U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = VL_LTS_III(32, vlSelfRef.nerv__DOT__rs1_value, 
                                         VL_EXTENDS_II(32,12, 
                                                       (vlSelfRef.imem_data 
                                                        >> 0x14U)));
                    } else if ((3U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               < VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((4U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               ^ VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((6U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               | VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((7U == (7U & ((0x3f8U 
                                              & (vlSelfRef.imem_data 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               & VL_EXTENDS_II(32,12, 
                                               (vlSelfRef.imem_data 
                                                >> 0x14U)));
                    } else if ((1U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               << (0x1fU & (vlSelfRef.imem_data 
                                            >> 0x14U)));
                    } else {
                        vlSelfRef.nerv__DOT__next_wr = 1U;
                        vlSelfRef.nerv__DOT__next_rd 
                            = (vlSelfRef.nerv__DOT__rs1_value 
                               >> (0x1fU & (vlSelfRef.imem_data 
                                            >> 0x14U)));
                    }
                } else if ((0x105U == ((0x3f8U & (vlSelfRef.imem_data 
                                                  >> 0x16U)) 
                                       | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU))))) {
                    vlSelfRef.nerv__DOT__next_wr = 1U;
                    vlSelfRef.nerv__DOT__next_rd = 
                        VL_SHIFTRS_III(32,32,5, vlSelfRef.nerv__DOT__rs1_value, 
                                       (0x1fU & (vlSelfRef.imem_data 
                                                 >> 0x14U)));
                } else {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                }
            } else {
                vlSelfRef.nerv__DOT__illinsn = 1U;
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else if ((8U & vlSelfRef.imem_data)) {
        vlSelfRef.nerv__DOT__illinsn = 1U;
    } else if ((4U & vlSelfRef.imem_data)) {
        vlSelfRef.nerv__DOT__illinsn = 1U;
    } else if ((2U & vlSelfRef.imem_data)) {
        if ((1U & vlSelfRef.imem_data)) {
            vlSelfRef.nerv__DOT__mem_rd_addr = nerv__DOT____VdfgExtracted_heb22d996__0;
            if ((0x4000U & vlSelfRef.imem_data)) {
                if ((0x2000U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((0x1000U & vlSelfRef.imem_data)) {
                    if ((1U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                        vlSelfRef.nerv__DOT__illinsn = 1U;
                    } else {
                        vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                        vlSelfRef.nerv__DOT__mem_rd_reg 
                            = (0x1fU & (vlSelfRef.imem_data 
                                        >> 7U));
                        vlSelfRef.nerv__DOT__mem_rd_func 
                            = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                         << 3U)) | 
                               (7U & (vlSelfRef.imem_data 
                                      >> 0xcU)));
                        vlSelfRef.nerv__DOT__mem_rd_addr 
                            = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                    }
                } else {
                    vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_rd_reg 
                        = (0x1fU & (vlSelfRef.imem_data 
                                    >> 7U));
                    vlSelfRef.nerv__DOT__mem_rd_func 
                        = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)));
                    vlSelfRef.nerv__DOT__mem_rd_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                }
            } else if ((0x2000U & vlSelfRef.imem_data)) {
                if ((0x1000U & vlSelfRef.imem_data)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((2U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else if ((1U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else {
                    vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_rd_reg 
                        = (0x1fU & (vlSelfRef.imem_data 
                                    >> 7U));
                    vlSelfRef.nerv__DOT__mem_rd_func 
                        = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)));
                    vlSelfRef.nerv__DOT__mem_rd_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                }
            } else if ((0x1000U & vlSelfRef.imem_data)) {
                if ((1U & vlSelfRef.nerv__DOT__mem_rd_addr)) {
                    vlSelfRef.nerv__DOT__illinsn = 1U;
                } else {
                    vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                    vlSelfRef.nerv__DOT__mem_rd_reg 
                        = (0x1fU & (vlSelfRef.imem_data 
                                    >> 7U));
                    vlSelfRef.nerv__DOT__mem_rd_func 
                        = ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                                     << 3U)) | (7U 
                                                & (vlSelfRef.imem_data 
                                                   >> 0xcU)));
                    vlSelfRef.nerv__DOT__mem_rd_addr 
                        = (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
                }
            } else {
                vlSelfRef.nerv__DOT__mem_rd_enable = 1U;
                vlSelfRef.nerv__DOT__mem_rd_reg = (0x1fU 
                                                   & (vlSelfRef.imem_data 
                                                      >> 7U));
                vlSelfRef.nerv__DOT__mem_rd_func = 
                    ((0x18U & (vlSelfRef.nerv__DOT__mem_rd_addr 
                               << 3U)) | (7U & (vlSelfRef.imem_data 
                                                >> 0xcU)));
                vlSelfRef.nerv__DOT__mem_rd_addr = 
                    (0xfffffffcU & vlSelfRef.nerv__DOT__mem_rd_addr);
            }
        } else {
            vlSelfRef.nerv__DOT__illinsn = 1U;
        }
    } else {
        vlSelfRef.nerv__DOT__illinsn = 1U;
    }
    if (((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.nerv__DOT__reset_q))) {
        vlSelfRef.nerv__DOT__npc = 0U;
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff7U 
                                                 & vlSelfRef.nerv__DOT__csr_mstatus_next);
    } else if (vlSelfRef.stall) {
        vlSelfRef.nerv__DOT__npc = vlSelfRef.nerv__DOT__pc;
    } else if (vlSelfRef.nerv__DOT__mem_rd_enable_q) {
        vlSelfRef.nerv__DOT__npc = vlSelfRef.nerv__DOT__pc;
        vlSelfRef.nerv__DOT__cycle_late_wr = 1U;
        vlSelfRef.nerv__DOT__next_rd = vlSelfRef.nerv__DOT__mem_rdata;
    } else if ((0U != (IData)(vlSelfRef.nerv__DOT__irq_num))) {
        vlSelfRef.nerv__DOT__csr_mepc_next = (0xfffffffcU 
                                              & vlSelfRef.nerv__DOT__pc);
        vlSelfRef.nerv__DOT__csr_mcause_next = (0x80000000U 
                                                | (IData)(vlSelfRef.nerv__DOT__irq_num));
        vlSelfRef.nerv__DOT__npc = ((0U != (1U & vlSelfRef.nerv__DOT__csr_mtvec_value))
                                     ? ((0xfffffffcU 
                                         & vlSelfRef.nerv__DOT__csr_mtvec_value) 
                                        + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.nerv__DOT__irq_num), 2U))
                                     : (0xfffffffcU 
                                        & vlSelfRef.nerv__DOT__csr_mtvec_value));
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0x80U 
                                                 | vlSelfRef.nerv__DOT__csr_mstatus_next);
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff7U 
                                                 & vlSelfRef.nerv__DOT__csr_mstatus_next);
    } else if (vlSelfRef.nerv__DOT__illinsn) {
        vlSelfRef.nerv__DOT__cycle_trap = 1U;
        vlSelfRef.nerv__DOT__csr_mepc_next = ((3U & vlSelfRef.nerv__DOT__csr_mepc_next) 
                                              | (0xfffffffcU 
                                                 & vlSelfRef.nerv__DOT__pc));
        vlSelfRef.nerv__DOT__npc = (0xfffffffcU & vlSelfRef.nerv__DOT__csr_mtvec_value);
        vlSelfRef.nerv__DOT__csr_mcause_next = 2U;
        vlSelfRef.nerv__DOT__csr_mcause_wdata = 2U;
        vlSelfRef.nerv__DOT__csr_mstatus_next = ((0xffffff7fU 
                                                  & vlSelfRef.nerv__DOT__csr_mstatus_next) 
                                                 | (0x80U 
                                                    & (vlSelfRef.nerv__DOT__csr_mstatus_value 
                                                       << 4U)));
        vlSelfRef.nerv__DOT__csr_mstatus_next = (0xfffffff7U 
                                                 & vlSelfRef.nerv__DOT__csr_mstatus_next);
    } else {
        vlSelfRef.nerv__DOT__cycle_insn = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.nerv__DOT__cycle_insn)))) {
        vlSelfRef.nerv__DOT__next_wr = ((IData)(vlSelfRef.nerv__DOT__cycle_late_wr) 
                                        & (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q));
        vlSelfRef.nerv__DOT__mem_rd_enable = 0U;
        vlSelfRef.nerv__DOT__mem_wr_enable = 0U;
    }
    vlSelfRef.imem_addr = vlSelfRef.nerv__DOT__npc;
    vlSelfRef.trap = vlSelfRef.nerv__DOT__cycle_trap;
    vlSelfRef.dmem_valid = ((IData)(vlSelfRef.nerv__DOT__mem_rd_enable) 
                            | (IData)(vlSelfRef.nerv__DOT__mem_wr_enable));
    if (vlSelfRef.nerv__DOT__mem_wr_enable) {
        vlSelfRef.dmem_wstrb = vlSelfRef.nerv__DOT__mem_wr_strb;
        vlSelfRef.dmem_wdata = vlSelfRef.nerv__DOT__mem_wr_data;
        vlSelfRef.dmem_addr = vlSelfRef.nerv__DOT__mem_wr_addr;
    } else {
        vlSelfRef.dmem_wstrb = 0U;
        vlSelfRef.dmem_wdata = 0U;
        vlSelfRef.dmem_addr = ((IData)(vlSelfRef.nerv__DOT__mem_rd_enable)
                                ? vlSelfRef.nerv__DOT__mem_rd_addr
                                : 0U);
    }
}
