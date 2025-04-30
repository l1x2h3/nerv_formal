// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnerv__Syms.h"


void Vnerv___024root__trace_chg_0_sub_0(Vnerv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnerv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root__trace_chg_0\n"); );
    // Init
    Vnerv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnerv___024root*>(voidSelf);
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnerv___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnerv___024root__trace_chg_0_sub_0(Vnerv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.nerv__DOT__mem_wr_enable));
        bufp->chgIData(oldp+1,(vlSelfRef.nerv__DOT__mem_wr_addr),32);
        bufp->chgIData(oldp+2,(vlSelfRef.nerv__DOT__mem_wr_data),32);
        bufp->chgCData(oldp+3,(vlSelfRef.nerv__DOT__mem_wr_strb),4);
        bufp->chgBit(oldp+4,(vlSelfRef.nerv__DOT__mem_rd_enable));
        bufp->chgIData(oldp+5,(vlSelfRef.nerv__DOT__mem_rd_addr),32);
        bufp->chgCData(oldp+6,(vlSelfRef.nerv__DOT__mem_rd_reg),5);
        bufp->chgCData(oldp+7,(vlSelfRef.nerv__DOT__mem_rd_func),5);
        bufp->chgIData(oldp+8,(vlSelfRef.nerv__DOT__npc),32);
        bufp->chgIData(oldp+9,(vlSelfRef.nerv__DOT__rs1_value),32);
        bufp->chgIData(oldp+10,(vlSelfRef.nerv__DOT__rs2_value),32);
        bufp->chgBit(oldp+11,(vlSelfRef.nerv__DOT__next_wr));
        bufp->chgIData(oldp+12,(vlSelfRef.nerv__DOT__next_rd),32);
        bufp->chgCData(oldp+13,(vlSelfRef.nerv__DOT__wr_rd),5);
        bufp->chgBit(oldp+14,(vlSelfRef.nerv__DOT__illinsn));
        bufp->chgBit(oldp+15,(vlSelfRef.nerv__DOT__running));
        bufp->chgBit(oldp+16,(vlSelfRef.nerv__DOT__cycle_intr));
        bufp->chgBit(oldp+17,(vlSelfRef.nerv__DOT__cycle_insn));
        bufp->chgBit(oldp+18,(vlSelfRef.nerv__DOT__cycle_trap));
        bufp->chgBit(oldp+19,(vlSelfRef.nerv__DOT__cycle_late_wr));
        bufp->chgBit(oldp+20,(vlSelfRef.nerv__DOT__csr_ack));
        bufp->chgIData(oldp+21,(vlSelfRef.nerv__DOT__csr_rdval),32);
        bufp->chgIData(oldp+22,(vlSelfRef.nerv__DOT__csr_next),32);
        bufp->chgCData(oldp+23,(vlSelfRef.nerv__DOT__csr_mode),2);
        bufp->chgIData(oldp+24,(vlSelfRef.nerv__DOT__csr_rsval),32);
        bufp->chgBit(oldp+25,(vlSelfRef.nerv__DOT__csr_ro));
        bufp->chgIData(oldp+26,(vlSelfRef.nerv__DOT__hpm_increment),32);
        bufp->chgIData(oldp+27,(vlSelfRef.nerv__DOT__hpm_event),32);
        bufp->chgBit(oldp+28,(vlSelfRef.nerv__DOT__csr_mie_sel));
        bufp->chgBit(oldp+29,(vlSelfRef.nerv__DOT__csr_mip_sel));
        bufp->chgBit(oldp+30,(vlSelfRef.nerv__DOT__csr_mepc_sel));
        bufp->chgBit(oldp+31,(vlSelfRef.nerv__DOT__csr_misa_sel));
        bufp->chgBit(oldp+32,(vlSelfRef.nerv__DOT__csr_mtval_sel));
        bufp->chgBit(oldp+33,(vlSelfRef.nerv__DOT__csr_mtvec_sel));
        bufp->chgBit(oldp+34,(vlSelfRef.nerv__DOT__csr_custom_sel));
        bufp->chgBit(oldp+35,(vlSelfRef.nerv__DOT__csr_mcause_sel));
        bufp->chgBit(oldp+36,(vlSelfRef.nerv__DOT__csr_mcycle_sel));
        bufp->chgBit(oldp+37,(vlSelfRef.nerv__DOT__csr_mimpid_sel));
        bufp->chgBit(oldp+38,(vlSelfRef.nerv__DOT__csr_marchid_sel));
        bufp->chgBit(oldp+39,(vlSelfRef.nerv__DOT__csr_mcycleh_sel));
        bufp->chgBit(oldp+40,(vlSelfRef.nerv__DOT__csr_mhartid_sel));
        bufp->chgBit(oldp+41,(vlSelfRef.nerv__DOT__csr_mstatus_sel));
        bufp->chgBit(oldp+42,(vlSelfRef.nerv__DOT__csr_minstret_sel));
        bufp->chgBit(oldp+43,(vlSelfRef.nerv__DOT__csr_mscratch_sel));
        bufp->chgBit(oldp+44,(vlSelfRef.nerv__DOT__csr_mstatush_sel));
        bufp->chgBit(oldp+45,(vlSelfRef.nerv__DOT__csr_minstreth_sel));
        bufp->chgBit(oldp+46,(vlSelfRef.nerv__DOT__csr_mvendorid_sel));
        bufp->chgBit(oldp+47,(vlSelfRef.nerv__DOT__csr_mconfigptr_sel));
        bufp->chgBit(oldp+48,(vlSelfRef.nerv__DOT__csr_mhpmevent3_sel));
        bufp->chgBit(oldp+49,(vlSelfRef.nerv__DOT__csr_mhpmevent4_sel));
        bufp->chgBit(oldp+50,(vlSelfRef.nerv__DOT__csr_mhpmevent5_sel));
        bufp->chgBit(oldp+51,(vlSelfRef.nerv__DOT__csr_mhpmevent6_sel));
        bufp->chgBit(oldp+52,(vlSelfRef.nerv__DOT__csr_mhpmevent7_sel));
        bufp->chgBit(oldp+53,(vlSelfRef.nerv__DOT__csr_mhpmevent8_sel));
        bufp->chgBit(oldp+54,(vlSelfRef.nerv__DOT__csr_mhpmevent9_sel));
        bufp->chgBit(oldp+55,(vlSelfRef.nerv__DOT__csr_mhpmevent10_sel));
        bufp->chgBit(oldp+56,(vlSelfRef.nerv__DOT__csr_mhpmevent11_sel));
        bufp->chgBit(oldp+57,(vlSelfRef.nerv__DOT__csr_mhpmevent12_sel));
        bufp->chgBit(oldp+58,(vlSelfRef.nerv__DOT__csr_mhpmevent13_sel));
        bufp->chgBit(oldp+59,(vlSelfRef.nerv__DOT__csr_mhpmevent14_sel));
        bufp->chgBit(oldp+60,(vlSelfRef.nerv__DOT__csr_mhpmevent15_sel));
        bufp->chgBit(oldp+61,(vlSelfRef.nerv__DOT__csr_mhpmevent16_sel));
        bufp->chgBit(oldp+62,(vlSelfRef.nerv__DOT__csr_mhpmevent17_sel));
        bufp->chgBit(oldp+63,(vlSelfRef.nerv__DOT__csr_mhpmevent18_sel));
        bufp->chgBit(oldp+64,(vlSelfRef.nerv__DOT__csr_mhpmevent19_sel));
        bufp->chgBit(oldp+65,(vlSelfRef.nerv__DOT__csr_mhpmevent20_sel));
        bufp->chgBit(oldp+66,(vlSelfRef.nerv__DOT__csr_mhpmevent21_sel));
        bufp->chgBit(oldp+67,(vlSelfRef.nerv__DOT__csr_mhpmevent22_sel));
        bufp->chgBit(oldp+68,(vlSelfRef.nerv__DOT__csr_mhpmevent23_sel));
        bufp->chgBit(oldp+69,(vlSelfRef.nerv__DOT__csr_mhpmevent24_sel));
        bufp->chgBit(oldp+70,(vlSelfRef.nerv__DOT__csr_mhpmevent25_sel));
        bufp->chgBit(oldp+71,(vlSelfRef.nerv__DOT__csr_mhpmevent26_sel));
        bufp->chgBit(oldp+72,(vlSelfRef.nerv__DOT__csr_mhpmevent27_sel));
        bufp->chgBit(oldp+73,(vlSelfRef.nerv__DOT__csr_mhpmevent28_sel));
        bufp->chgBit(oldp+74,(vlSelfRef.nerv__DOT__csr_mhpmevent29_sel));
        bufp->chgBit(oldp+75,(vlSelfRef.nerv__DOT__csr_mhpmevent30_sel));
        bufp->chgBit(oldp+76,(vlSelfRef.nerv__DOT__csr_mhpmevent31_sel));
        bufp->chgBit(oldp+77,(vlSelfRef.nerv__DOT__csr_mhpmcounter3_sel));
        bufp->chgBit(oldp+78,(vlSelfRef.nerv__DOT__csr_mhpmcounter4_sel));
        bufp->chgBit(oldp+79,(vlSelfRef.nerv__DOT__csr_mhpmcounter5_sel));
        bufp->chgBit(oldp+80,(vlSelfRef.nerv__DOT__csr_mhpmcounter6_sel));
        bufp->chgBit(oldp+81,(vlSelfRef.nerv__DOT__csr_mhpmcounter7_sel));
        bufp->chgBit(oldp+82,(vlSelfRef.nerv__DOT__csr_mhpmcounter8_sel));
        bufp->chgBit(oldp+83,(vlSelfRef.nerv__DOT__csr_mhpmcounter9_sel));
        bufp->chgBit(oldp+84,(vlSelfRef.nerv__DOT__csr_mhpmcounter10_sel));
        bufp->chgBit(oldp+85,(vlSelfRef.nerv__DOT__csr_mhpmcounter11_sel));
        bufp->chgBit(oldp+86,(vlSelfRef.nerv__DOT__csr_mhpmcounter12_sel));
        bufp->chgBit(oldp+87,(vlSelfRef.nerv__DOT__csr_mhpmcounter13_sel));
        bufp->chgBit(oldp+88,(vlSelfRef.nerv__DOT__csr_mhpmcounter14_sel));
        bufp->chgBit(oldp+89,(vlSelfRef.nerv__DOT__csr_mhpmcounter15_sel));
        bufp->chgBit(oldp+90,(vlSelfRef.nerv__DOT__csr_mhpmcounter16_sel));
        bufp->chgBit(oldp+91,(vlSelfRef.nerv__DOT__csr_mhpmcounter17_sel));
        bufp->chgBit(oldp+92,(vlSelfRef.nerv__DOT__csr_mhpmcounter18_sel));
        bufp->chgBit(oldp+93,(vlSelfRef.nerv__DOT__csr_mhpmcounter19_sel));
        bufp->chgBit(oldp+94,(vlSelfRef.nerv__DOT__csr_mhpmcounter20_sel));
        bufp->chgBit(oldp+95,(vlSelfRef.nerv__DOT__csr_mhpmcounter21_sel));
        bufp->chgBit(oldp+96,(vlSelfRef.nerv__DOT__csr_mhpmcounter22_sel));
        bufp->chgBit(oldp+97,(vlSelfRef.nerv__DOT__csr_mhpmcounter23_sel));
        bufp->chgBit(oldp+98,(vlSelfRef.nerv__DOT__csr_mhpmcounter24_sel));
        bufp->chgBit(oldp+99,(vlSelfRef.nerv__DOT__csr_mhpmcounter25_sel));
        bufp->chgBit(oldp+100,(vlSelfRef.nerv__DOT__csr_mhpmcounter26_sel));
        bufp->chgBit(oldp+101,(vlSelfRef.nerv__DOT__csr_mhpmcounter27_sel));
        bufp->chgBit(oldp+102,(vlSelfRef.nerv__DOT__csr_mhpmcounter28_sel));
        bufp->chgBit(oldp+103,(vlSelfRef.nerv__DOT__csr_mhpmcounter29_sel));
        bufp->chgBit(oldp+104,(vlSelfRef.nerv__DOT__csr_mhpmcounter30_sel));
        bufp->chgBit(oldp+105,(vlSelfRef.nerv__DOT__csr_mhpmcounter31_sel));
        bufp->chgBit(oldp+106,(vlSelfRef.nerv__DOT__csr_mhpmcounter3h_sel));
        bufp->chgBit(oldp+107,(vlSelfRef.nerv__DOT__csr_mhpmcounter4h_sel));
        bufp->chgBit(oldp+108,(vlSelfRef.nerv__DOT__csr_mhpmcounter5h_sel));
        bufp->chgBit(oldp+109,(vlSelfRef.nerv__DOT__csr_mhpmcounter6h_sel));
        bufp->chgBit(oldp+110,(vlSelfRef.nerv__DOT__csr_mhpmcounter7h_sel));
        bufp->chgBit(oldp+111,(vlSelfRef.nerv__DOT__csr_mhpmcounter8h_sel));
        bufp->chgBit(oldp+112,(vlSelfRef.nerv__DOT__csr_mhpmcounter9h_sel));
        bufp->chgBit(oldp+113,(vlSelfRef.nerv__DOT__csr_mhpmcounter10h_sel));
        bufp->chgBit(oldp+114,(vlSelfRef.nerv__DOT__csr_mhpmcounter11h_sel));
        bufp->chgBit(oldp+115,(vlSelfRef.nerv__DOT__csr_mhpmcounter12h_sel));
        bufp->chgBit(oldp+116,(vlSelfRef.nerv__DOT__csr_mhpmcounter13h_sel));
        bufp->chgBit(oldp+117,(vlSelfRef.nerv__DOT__csr_mhpmcounter14h_sel));
        bufp->chgBit(oldp+118,(vlSelfRef.nerv__DOT__csr_mhpmcounter15h_sel));
        bufp->chgBit(oldp+119,(vlSelfRef.nerv__DOT__csr_mhpmcounter16h_sel));
        bufp->chgBit(oldp+120,(vlSelfRef.nerv__DOT__csr_mhpmcounter17h_sel));
        bufp->chgBit(oldp+121,(vlSelfRef.nerv__DOT__csr_mhpmcounter18h_sel));
        bufp->chgBit(oldp+122,(vlSelfRef.nerv__DOT__csr_mhpmcounter19h_sel));
        bufp->chgBit(oldp+123,(vlSelfRef.nerv__DOT__csr_mhpmcounter20h_sel));
        bufp->chgBit(oldp+124,(vlSelfRef.nerv__DOT__csr_mhpmcounter21h_sel));
        bufp->chgBit(oldp+125,(vlSelfRef.nerv__DOT__csr_mhpmcounter22h_sel));
        bufp->chgBit(oldp+126,(vlSelfRef.nerv__DOT__csr_mhpmcounter23h_sel));
        bufp->chgBit(oldp+127,(vlSelfRef.nerv__DOT__csr_mhpmcounter24h_sel));
        bufp->chgBit(oldp+128,(vlSelfRef.nerv__DOT__csr_mhpmcounter25h_sel));
        bufp->chgBit(oldp+129,(vlSelfRef.nerv__DOT__csr_mhpmcounter26h_sel));
        bufp->chgBit(oldp+130,(vlSelfRef.nerv__DOT__csr_mhpmcounter27h_sel));
        bufp->chgBit(oldp+131,(vlSelfRef.nerv__DOT__csr_mhpmcounter28h_sel));
        bufp->chgBit(oldp+132,(vlSelfRef.nerv__DOT__csr_mhpmcounter29h_sel));
        bufp->chgBit(oldp+133,(vlSelfRef.nerv__DOT__csr_mhpmcounter30h_sel));
        bufp->chgBit(oldp+134,(vlSelfRef.nerv__DOT__csr_mhpmcounter31h_sel));
        bufp->chgIData(oldp+135,(vlSelfRef.nerv__DOT__csr_mie_next),32);
        bufp->chgIData(oldp+136,(vlSelfRef.nerv__DOT__csr_mepc_next),32);
        bufp->chgIData(oldp+137,(vlSelfRef.nerv__DOT__csr_mie_wdata),32);
        bufp->chgIData(oldp+138,(vlSelfRef.nerv__DOT__csr_mip_wdata),32);
        bufp->chgIData(oldp+139,(vlSelfRef.nerv__DOT__csr_misa_next),32);
        bufp->chgIData(oldp+140,(vlSelfRef.nerv__DOT__csr_mepc_wdata),32);
        bufp->chgIData(oldp+141,(vlSelfRef.nerv__DOT__csr_misa_wdata),32);
        bufp->chgIData(oldp+142,(vlSelfRef.nerv__DOT__csr_mtval_next),32);
        bufp->chgIData(oldp+143,(vlSelfRef.nerv__DOT__csr_mtvec_next),32);
        bufp->chgIData(oldp+144,(vlSelfRef.nerv__DOT__csr_custom_next),32);
        bufp->chgIData(oldp+145,(vlSelfRef.nerv__DOT__csr_mcause_next),32);
        bufp->chgIData(oldp+146,(vlSelfRef.nerv__DOT__csr_mtval_wdata),32);
        bufp->chgIData(oldp+147,(vlSelfRef.nerv__DOT__csr_mtvec_wdata),32);
        bufp->chgIData(oldp+148,(vlSelfRef.nerv__DOT__csr_custom_wdata),32);
        bufp->chgIData(oldp+149,(vlSelfRef.nerv__DOT__csr_mcause_wdata),32);
        bufp->chgIData(oldp+150,(vlSelfRef.nerv__DOT__csr_mstatus_next),32);
        bufp->chgIData(oldp+151,(vlSelfRef.nerv__DOT__csr_mscratch_next),32);
        bufp->chgIData(oldp+152,(vlSelfRef.nerv__DOT__csr_mstatus_wdata),32);
        bufp->chgIData(oldp+153,(vlSelfRef.nerv__DOT__csr_mscratch_wdata),32);
        bufp->chgIData(oldp+154,(vlSelfRef.nerv__DOT__csr_mstatush_wdata),32);
        bufp->chgIData(oldp+155,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0U]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0U]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0U]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0U]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[2U]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[2U]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[2U]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.nerv__DOT__csr_hpm_event_next[3U]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.nerv__DOT__csr_hpm_event_next[4U]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.nerv__DOT__csr_hpm_event_next[5U]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.nerv__DOT__csr_hpm_event_next[6U]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.nerv__DOT__csr_hpm_event_next[7U]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.nerv__DOT__csr_hpm_event_next[8U]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.nerv__DOT__csr_hpm_event_next[9U]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[2U]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0xaU]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0xbU]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0xcU]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0xdU]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0xeU]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0xfU]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x10U]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x11U]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x12U]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x13U]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x14U]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x15U]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x16U]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x17U]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x18U]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x19U]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1aU]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1bU]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1cU]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1dU]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1eU]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.nerv__DOT__csr_hpm_event_next[0x1fU]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[3U]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[4U]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[5U]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[6U]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[7U]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[8U]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[9U]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[3U]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[4U]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[5U]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[6U]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[7U]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[8U]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[9U]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xaU]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xbU]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xcU]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xdU]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xeU]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0xfU]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x10U]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x11U]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x12U]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x13U]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x14U]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x15U]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x16U]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x17U]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x18U]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x19U]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1aU]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1bU]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1cU]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1dU]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1eU]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata[0x1fU]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xaU]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xbU]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xcU]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xdU]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xeU]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0xfU]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x10U]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x11U]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x12U]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x13U]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x14U]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x15U]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x16U]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x17U]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x18U]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x19U]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1aU]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1bU]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1cU]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1dU]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1eU]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.nerv__DOT__csr_hpm_counter_next[0x1fU]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[3U]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[3U]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[4U]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[4U]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[5U]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[5U]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[6U]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[6U]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[7U]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[7U]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[8U]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[8U]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[9U]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[9U]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xaU]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xaU]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xbU]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xbU]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xcU]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xcU]),32);
        bufp->chgIData(oldp+270,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xdU]),32);
        bufp->chgIData(oldp+271,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xdU]),32);
        bufp->chgIData(oldp+272,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xeU]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xeU]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0xfU]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0xfU]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x10U]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x10U]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x11U]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x11U]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x12U]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x12U]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x13U]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x13U]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x14U]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x14U]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x15U]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x15U]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x16U]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x16U]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x17U]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x17U]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x18U]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x18U]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x19U]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x19U]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1aU]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1aU]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1bU]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1bU]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1cU]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1cU]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1dU]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1dU]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1eU]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1eU]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata[0x1fU]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next[0x1fU]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[3U]),32);
        bufp->chgIData(oldp+309,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[4U]),32);
        bufp->chgIData(oldp+310,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[5U]),32);
        bufp->chgIData(oldp+311,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[6U]),32);
        bufp->chgIData(oldp+312,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[7U]),32);
        bufp->chgIData(oldp+313,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[8U]),32);
        bufp->chgIData(oldp+314,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[9U]),32);
        bufp->chgIData(oldp+315,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xaU]),32);
        bufp->chgIData(oldp+316,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xbU]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xcU]),32);
        bufp->chgIData(oldp+318,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xdU]),32);
        bufp->chgIData(oldp+319,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xeU]),32);
        bufp->chgIData(oldp+320,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0xfU]),32);
        bufp->chgIData(oldp+321,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x10U]),32);
        bufp->chgIData(oldp+322,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x11U]),32);
        bufp->chgIData(oldp+323,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x12U]),32);
        bufp->chgIData(oldp+324,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x13U]),32);
        bufp->chgIData(oldp+325,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x14U]),32);
        bufp->chgIData(oldp+326,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x15U]),32);
        bufp->chgIData(oldp+327,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x16U]),32);
        bufp->chgIData(oldp+328,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x17U]),32);
        bufp->chgIData(oldp+329,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x18U]),32);
        bufp->chgIData(oldp+330,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x19U]),32);
        bufp->chgIData(oldp+331,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1aU]),32);
        bufp->chgIData(oldp+332,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1bU]),32);
        bufp->chgIData(oldp+333,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1cU]),32);
        bufp->chgIData(oldp+334,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1dU]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1eU]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata[0x1fU]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.nerv__DOT__csr_hpm_event_sel),32);
        bufp->chgIData(oldp+338,(vlSelfRef.nerv__DOT__csr_hpm_counter_sel),32);
        bufp->chgIData(oldp+339,(vlSelfRef.nerv__DOT__csr_hpm_counterh_sel),32);
        bufp->chgWData(oldp+340,(vlSelfRef.nerv__DOT__csr_hpm_event_next),1024);
        bufp->chgWData(oldp+372,(vlSelfRef.nerv__DOT__csr_hpm_event_wdata),1024);
        bufp->chgWData(oldp+404,(vlSelfRef.nerv__DOT__csr_hpm_counter_next),1024);
        bufp->chgWData(oldp+436,(vlSelfRef.nerv__DOT__csr_hpm_counter_wdata),1024);
        bufp->chgWData(oldp+468,(vlSelfRef.nerv__DOT__csr_hpm_counterh_next),1024);
        bufp->chgWData(oldp+500,(vlSelfRef.nerv__DOT__csr_hpm_counterh_wdata),1024);
        bufp->chgIData(oldp+532,(vlSelfRef.nerv__DOT__irq_en),32);
        bufp->chgCData(oldp+533,(vlSelfRef.nerv__DOT__irq_num),5);
        bufp->chgIData(oldp+534,(vlSelfRef.nerv__DOT__mem_rdata),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+535,(vlSelfRef.nerv__DOT__mem_rd_enable_q));
        bufp->chgCData(oldp+536,(vlSelfRef.nerv__DOT__mem_rd_reg_q),5);
        bufp->chgCData(oldp+537,(vlSelfRef.nerv__DOT__mem_rd_func_q),5);
        bufp->chgBit(oldp+538,(vlSelfRef.nerv__DOT__mem_wr_enable_q));
        bufp->chgIData(oldp+539,(vlSelfRef.nerv__DOT__regfile[0]),32);
        bufp->chgIData(oldp+540,(vlSelfRef.nerv__DOT__regfile[1]),32);
        bufp->chgIData(oldp+541,(vlSelfRef.nerv__DOT__regfile[2]),32);
        bufp->chgIData(oldp+542,(vlSelfRef.nerv__DOT__regfile[3]),32);
        bufp->chgIData(oldp+543,(vlSelfRef.nerv__DOT__regfile[4]),32);
        bufp->chgIData(oldp+544,(vlSelfRef.nerv__DOT__regfile[5]),32);
        bufp->chgIData(oldp+545,(vlSelfRef.nerv__DOT__regfile[6]),32);
        bufp->chgIData(oldp+546,(vlSelfRef.nerv__DOT__regfile[7]),32);
        bufp->chgIData(oldp+547,(vlSelfRef.nerv__DOT__regfile[8]),32);
        bufp->chgIData(oldp+548,(vlSelfRef.nerv__DOT__regfile[9]),32);
        bufp->chgIData(oldp+549,(vlSelfRef.nerv__DOT__regfile[10]),32);
        bufp->chgIData(oldp+550,(vlSelfRef.nerv__DOT__regfile[11]),32);
        bufp->chgIData(oldp+551,(vlSelfRef.nerv__DOT__regfile[12]),32);
        bufp->chgIData(oldp+552,(vlSelfRef.nerv__DOT__regfile[13]),32);
        bufp->chgIData(oldp+553,(vlSelfRef.nerv__DOT__regfile[14]),32);
        bufp->chgIData(oldp+554,(vlSelfRef.nerv__DOT__regfile[15]),32);
        bufp->chgIData(oldp+555,(vlSelfRef.nerv__DOT__regfile[16]),32);
        bufp->chgIData(oldp+556,(vlSelfRef.nerv__DOT__regfile[17]),32);
        bufp->chgIData(oldp+557,(vlSelfRef.nerv__DOT__regfile[18]),32);
        bufp->chgIData(oldp+558,(vlSelfRef.nerv__DOT__regfile[19]),32);
        bufp->chgIData(oldp+559,(vlSelfRef.nerv__DOT__regfile[20]),32);
        bufp->chgIData(oldp+560,(vlSelfRef.nerv__DOT__regfile[21]),32);
        bufp->chgIData(oldp+561,(vlSelfRef.nerv__DOT__regfile[22]),32);
        bufp->chgIData(oldp+562,(vlSelfRef.nerv__DOT__regfile[23]),32);
        bufp->chgIData(oldp+563,(vlSelfRef.nerv__DOT__regfile[24]),32);
        bufp->chgIData(oldp+564,(vlSelfRef.nerv__DOT__regfile[25]),32);
        bufp->chgIData(oldp+565,(vlSelfRef.nerv__DOT__regfile[26]),32);
        bufp->chgIData(oldp+566,(vlSelfRef.nerv__DOT__regfile[27]),32);
        bufp->chgIData(oldp+567,(vlSelfRef.nerv__DOT__regfile[28]),32);
        bufp->chgIData(oldp+568,(vlSelfRef.nerv__DOT__regfile[29]),32);
        bufp->chgIData(oldp+569,(vlSelfRef.nerv__DOT__regfile[30]),32);
        bufp->chgIData(oldp+570,(vlSelfRef.nerv__DOT__regfile[31]),32);
        bufp->chgIData(oldp+571,(vlSelfRef.nerv__DOT__pc),32);
        bufp->chgIData(oldp+572,(vlSelfRef.nerv__DOT__imem_addr_q),32);
        bufp->chgBit(oldp+573,(vlSelfRef.nerv__DOT__reset_q));
        bufp->chgBit(oldp+574,((1U & ((~ (IData)(vlSelfRef.nerv__DOT__mem_rd_enable_q)) 
                                      & (~ (IData)(vlSelfRef.nerv__DOT__mem_wr_enable_q))))));
        bufp->chgIData(oldp+575,(vlSelfRef.nerv__DOT__csr_mie_value),32);
        bufp->chgIData(oldp+576,(vlSelfRef.nerv__DOT__csr_mip_value),32);
        bufp->chgIData(oldp+577,(vlSelfRef.nerv__DOT__csr_mepc_value),32);
        bufp->chgIData(oldp+578,(vlSelfRef.nerv__DOT__csr_misa_value),32);
        bufp->chgIData(oldp+579,(vlSelfRef.nerv__DOT__csr_mtval_value),32);
        bufp->chgIData(oldp+580,(vlSelfRef.nerv__DOT__csr_mtvec_value),32);
        bufp->chgIData(oldp+581,(vlSelfRef.nerv__DOT__csr_custom_value),32);
        bufp->chgIData(oldp+582,(vlSelfRef.nerv__DOT__csr_mcause_value),32);
        bufp->chgIData(oldp+583,(vlSelfRef.nerv__DOT__csr_mstatus_value),32);
        bufp->chgIData(oldp+584,(vlSelfRef.nerv__DOT__csr_mscratch_value),32);
        bufp->chgIData(oldp+585,(vlSelfRef.nerv__DOT__csr_mstatush_value),32);
        bufp->chgIData(oldp+586,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0U]),32);
        bufp->chgIData(oldp+587,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0U]),32);
        bufp->chgIData(oldp+588,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[2U]),32);
        bufp->chgIData(oldp+589,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[2U]),32);
        bufp->chgIData(oldp+590,(vlSelfRef.nerv__DOT__csr_hpm_event_value[3U]),32);
        bufp->chgIData(oldp+591,(vlSelfRef.nerv__DOT__csr_hpm_event_value[4U]),32);
        bufp->chgIData(oldp+592,(vlSelfRef.nerv__DOT__csr_hpm_event_value[5U]),32);
        bufp->chgIData(oldp+593,(vlSelfRef.nerv__DOT__csr_hpm_event_value[6U]),32);
        bufp->chgIData(oldp+594,(vlSelfRef.nerv__DOT__csr_hpm_event_value[7U]),32);
        bufp->chgIData(oldp+595,(vlSelfRef.nerv__DOT__csr_hpm_event_value[8U]),32);
        bufp->chgIData(oldp+596,(vlSelfRef.nerv__DOT__csr_hpm_event_value[9U]),32);
        bufp->chgIData(oldp+597,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0xaU]),32);
        bufp->chgIData(oldp+598,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0xbU]),32);
        bufp->chgIData(oldp+599,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0xcU]),32);
        bufp->chgIData(oldp+600,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0xdU]),32);
        bufp->chgIData(oldp+601,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0xeU]),32);
        bufp->chgIData(oldp+602,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0xfU]),32);
        bufp->chgIData(oldp+603,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x10U]),32);
        bufp->chgIData(oldp+604,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x11U]),32);
        bufp->chgIData(oldp+605,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x12U]),32);
        bufp->chgIData(oldp+606,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x13U]),32);
        bufp->chgIData(oldp+607,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x14U]),32);
        bufp->chgIData(oldp+608,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x15U]),32);
        bufp->chgIData(oldp+609,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x16U]),32);
        bufp->chgIData(oldp+610,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x17U]),32);
        bufp->chgIData(oldp+611,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x18U]),32);
        bufp->chgIData(oldp+612,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x19U]),32);
        bufp->chgIData(oldp+613,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1aU]),32);
        bufp->chgIData(oldp+614,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1bU]),32);
        bufp->chgIData(oldp+615,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1cU]),32);
        bufp->chgIData(oldp+616,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1dU]),32);
        bufp->chgIData(oldp+617,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1eU]),32);
        bufp->chgIData(oldp+618,(vlSelfRef.nerv__DOT__csr_hpm_event_value[0x1fU]),32);
        bufp->chgIData(oldp+619,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[3U]),32);
        bufp->chgIData(oldp+620,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[4U]),32);
        bufp->chgIData(oldp+621,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[5U]),32);
        bufp->chgIData(oldp+622,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[6U]),32);
        bufp->chgIData(oldp+623,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[7U]),32);
        bufp->chgIData(oldp+624,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[8U]),32);
        bufp->chgIData(oldp+625,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[9U]),32);
        bufp->chgIData(oldp+626,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xaU]),32);
        bufp->chgIData(oldp+627,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xbU]),32);
        bufp->chgIData(oldp+628,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xcU]),32);
        bufp->chgIData(oldp+629,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xdU]),32);
        bufp->chgIData(oldp+630,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xeU]),32);
        bufp->chgIData(oldp+631,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0xfU]),32);
        bufp->chgIData(oldp+632,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x10U]),32);
        bufp->chgIData(oldp+633,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x11U]),32);
        bufp->chgIData(oldp+634,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x12U]),32);
        bufp->chgIData(oldp+635,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x13U]),32);
        bufp->chgIData(oldp+636,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x14U]),32);
        bufp->chgIData(oldp+637,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x15U]),32);
        bufp->chgIData(oldp+638,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x16U]),32);
        bufp->chgIData(oldp+639,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x17U]),32);
        bufp->chgIData(oldp+640,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x18U]),32);
        bufp->chgIData(oldp+641,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x19U]),32);
        bufp->chgIData(oldp+642,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1aU]),32);
        bufp->chgIData(oldp+643,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1bU]),32);
        bufp->chgIData(oldp+644,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1cU]),32);
        bufp->chgIData(oldp+645,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1dU]),32);
        bufp->chgIData(oldp+646,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1eU]),32);
        bufp->chgIData(oldp+647,(vlSelfRef.nerv__DOT__csr_hpm_counter_value[0x1fU]),32);
        bufp->chgIData(oldp+648,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[3U]),32);
        bufp->chgIData(oldp+649,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[4U]),32);
        bufp->chgIData(oldp+650,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[5U]),32);
        bufp->chgIData(oldp+651,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[6U]),32);
        bufp->chgIData(oldp+652,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[7U]),32);
        bufp->chgIData(oldp+653,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[8U]),32);
        bufp->chgIData(oldp+654,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[9U]),32);
        bufp->chgIData(oldp+655,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xaU]),32);
        bufp->chgIData(oldp+656,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xbU]),32);
        bufp->chgIData(oldp+657,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xcU]),32);
        bufp->chgIData(oldp+658,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xdU]),32);
        bufp->chgIData(oldp+659,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xeU]),32);
        bufp->chgIData(oldp+660,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0xfU]),32);
        bufp->chgIData(oldp+661,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x10U]),32);
        bufp->chgIData(oldp+662,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x11U]),32);
        bufp->chgIData(oldp+663,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x12U]),32);
        bufp->chgIData(oldp+664,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x13U]),32);
        bufp->chgIData(oldp+665,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x14U]),32);
        bufp->chgIData(oldp+666,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x15U]),32);
        bufp->chgIData(oldp+667,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x16U]),32);
        bufp->chgIData(oldp+668,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x17U]),32);
        bufp->chgIData(oldp+669,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x18U]),32);
        bufp->chgIData(oldp+670,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x19U]),32);
        bufp->chgIData(oldp+671,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1aU]),32);
        bufp->chgIData(oldp+672,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1bU]),32);
        bufp->chgIData(oldp+673,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1cU]),32);
        bufp->chgIData(oldp+674,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1dU]),32);
        bufp->chgIData(oldp+675,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1eU]),32);
        bufp->chgIData(oldp+676,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value[0x1fU]),32);
        bufp->chgWData(oldp+677,(vlSelfRef.nerv__DOT__csr_hpm_event_value),1024);
        bufp->chgWData(oldp+709,(vlSelfRef.nerv__DOT__csr_hpm_counter_value),1024);
        bufp->chgWData(oldp+741,(vlSelfRef.nerv__DOT__csr_hpm_counterh_value),1024);
    }
    bufp->chgBit(oldp+773,(vlSelfRef.clock));
    bufp->chgBit(oldp+774,(vlSelfRef.reset));
    bufp->chgBit(oldp+775,(vlSelfRef.stall));
    bufp->chgBit(oldp+776,(vlSelfRef.trap));
    bufp->chgIData(oldp+777,(vlSelfRef.imem_addr),32);
    bufp->chgIData(oldp+778,(vlSelfRef.imem_data),32);
    bufp->chgBit(oldp+779,(vlSelfRef.dmem_valid));
    bufp->chgIData(oldp+780,(vlSelfRef.dmem_addr),32);
    bufp->chgCData(oldp+781,(vlSelfRef.dmem_wstrb),4);
    bufp->chgIData(oldp+782,(vlSelfRef.dmem_wdata),32);
    bufp->chgIData(oldp+783,(vlSelfRef.dbg_reg_x1),32);
    bufp->chgIData(oldp+784,(vlSelfRef.dbg_reg_x2),32);
    bufp->chgIData(oldp+785,(vlSelfRef.dbg_reg_x3),32);
    bufp->chgIData(oldp+786,(vlSelfRef.dmem_rdata),32);
    bufp->chgIData(oldp+787,(vlSelfRef.irq),32);
    bufp->chgCData(oldp+788,((vlSelfRef.imem_data >> 0x19U)),7);
    bufp->chgCData(oldp+789,((0x1fU & (vlSelfRef.imem_data 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+790,((0x1fU & (vlSelfRef.imem_data 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+791,((7U & (vlSelfRef.imem_data 
                                    >> 0xcU))),3);
    bufp->chgCData(oldp+792,((0x1fU & (vlSelfRef.imem_data 
                                       >> 7U))),5);
    bufp->chgCData(oldp+793,((0x7fU & vlSelfRef.imem_data)),7);
    bufp->chgSData(oldp+794,((vlSelfRef.imem_data >> 0x14U)),12);
    bufp->chgSData(oldp+795,(((0xfe0U & (vlSelfRef.imem_data 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSelfRef.imem_data 
                                          >> 7U)))),12);
    bufp->chgSData(oldp+796,(((0x1000U & (vlSelfRef.imem_data 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelfRef.imem_data 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelfRef.imem_data 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelfRef.imem_data 
                                                >> 7U)))))),13);
    bufp->chgIData(oldp+797,(((0x100000U & (vlSelfRef.imem_data 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelfRef.imem_data) 
                                 | ((0x800U & (vlSelfRef.imem_data 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelfRef.imem_data 
                                                 >> 0x14U)))))),21);
    bufp->chgIData(oldp+798,(VL_EXTENDS_II(32,12, (vlSelfRef.imem_data 
                                                   >> 0x14U))),32);
    bufp->chgIData(oldp+799,(VL_EXTENDS_II(32,12, (
                                                   (0xfe0U 
                                                    & (vlSelfRef.imem_data 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.imem_data 
                                                         >> 7U))))),32);
    bufp->chgIData(oldp+800,(VL_EXTENDS_II(32,13, (
                                                   (0x1000U 
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
                                                               >> 7U))))))),32);
    bufp->chgIData(oldp+801,(VL_EXTENDS_II(32,21, (
                                                   (0x100000U 
                                                    & (vlSelfRef.imem_data 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelfRef.imem_data) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.imem_data 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelfRef.imem_data 
                                                               >> 0x14U))))))),32);
    bufp->chgBit(oldp+802,(((IData)(vlSelfRef.nerv__DOT__csr_ro) 
                            & (0xfc0U == (vlSelfRef.imem_data 
                                          >> 0x14U)))));
    bufp->chgIData(oldp+803,((0xffff0888U & vlSelfRef.irq)),32);
}

void Vnerv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnerv___024root__trace_cleanup\n"); );
    // Init
    Vnerv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnerv___024root*>(voidSelf);
    Vnerv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
