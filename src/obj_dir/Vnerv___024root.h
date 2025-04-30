// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnerv.h for the primary calling header

#ifndef VERILATED_VNERV___024ROOT_H_
#define VERILATED_VNERV___024ROOT_H_  // guard

#include "verilated.h"


class Vnerv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnerv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(stall,0,0);
        VL_OUT8(trap,0,0);
        VL_OUT8(dmem_valid,0,0);
        VL_OUT8(dmem_wstrb,3,0);
        CData/*0:0*/ nerv__DOT__mem_wr_enable;
        CData/*3:0*/ nerv__DOT__mem_wr_strb;
        CData/*0:0*/ nerv__DOT__mem_rd_enable;
        CData/*4:0*/ nerv__DOT__mem_rd_reg;
        CData/*4:0*/ nerv__DOT__mem_rd_func;
        CData/*0:0*/ nerv__DOT__mem_rd_enable_q;
        CData/*4:0*/ nerv__DOT__mem_rd_reg_q;
        CData/*4:0*/ nerv__DOT__mem_rd_func_q;
        CData/*0:0*/ nerv__DOT__mem_wr_enable_q;
        CData/*0:0*/ nerv__DOT__next_wr;
        CData/*4:0*/ nerv__DOT__wr_rd;
        CData/*0:0*/ nerv__DOT__illinsn;
        CData/*0:0*/ nerv__DOT__reset_q;
        CData/*0:0*/ nerv__DOT__running;
        CData/*0:0*/ nerv__DOT__cycle_intr;
        CData/*0:0*/ nerv__DOT__cycle_insn;
        CData/*0:0*/ nerv__DOT__cycle_trap;
        CData/*0:0*/ nerv__DOT__cycle_late_wr;
        CData/*0:0*/ nerv__DOT__csr_ack;
        CData/*1:0*/ nerv__DOT__csr_mode;
        CData/*0:0*/ nerv__DOT__csr_ro;
        CData/*0:0*/ nerv__DOT__csr_mvendorid_sel;
        CData/*0:0*/ nerv__DOT__csr_marchid_sel;
        CData/*0:0*/ nerv__DOT__csr_mimpid_sel;
        CData/*0:0*/ nerv__DOT__csr_mhartid_sel;
        CData/*0:0*/ nerv__DOT__csr_mconfigptr_sel;
        CData/*0:0*/ nerv__DOT__csr_mstatus_sel;
        CData/*0:0*/ nerv__DOT__csr_misa_sel;
        CData/*0:0*/ nerv__DOT__csr_mie_sel;
        CData/*0:0*/ nerv__DOT__csr_mtvec_sel;
        CData/*0:0*/ nerv__DOT__csr_mstatush_sel;
        CData/*0:0*/ nerv__DOT__csr_mscratch_sel;
        CData/*0:0*/ nerv__DOT__csr_mepc_sel;
        CData/*0:0*/ nerv__DOT__csr_mcause_sel;
        CData/*0:0*/ nerv__DOT__csr_mtval_sel;
        CData/*0:0*/ nerv__DOT__csr_mip_sel;
        CData/*0:0*/ nerv__DOT__csr_mcycle_sel;
        CData/*0:0*/ nerv__DOT__csr_minstret_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter3_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter4_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter5_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter6_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter7_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter8_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter9_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter10_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter11_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter12_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter13_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter14_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter15_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter16_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter17_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter18_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter19_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter20_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter21_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter22_sel;
    };
    struct {
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter23_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter24_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter25_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter26_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter27_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter28_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter29_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter30_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter31_sel;
        CData/*0:0*/ nerv__DOT__csr_mcycleh_sel;
        CData/*0:0*/ nerv__DOT__csr_minstreth_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter3h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter4h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter5h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter6h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter7h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter8h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter9h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter10h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter11h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter12h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter13h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter14h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter15h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter16h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter17h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter18h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter19h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter20h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter21h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter22h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter23h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter24h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter25h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter26h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter27h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter28h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter29h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter30h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmcounter31h_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent3_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent4_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent5_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent6_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent7_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent8_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent9_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent10_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent11_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent12_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent13_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent14_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent15_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent16_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent17_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent18_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent19_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent20_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent21_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent22_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent23_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent24_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent25_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent26_sel;
    };
    struct {
        CData/*0:0*/ nerv__DOT__csr_mhpmevent27_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent28_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent29_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent30_sel;
        CData/*0:0*/ nerv__DOT__csr_mhpmevent31_sel;
        CData/*0:0*/ nerv__DOT__csr_custom_sel;
        CData/*4:0*/ nerv__DOT__irq_num;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(imem_addr,31,0);
        VL_IN(imem_data,31,0);
        VL_OUT(dmem_addr,31,0);
        VL_OUT(dmem_wdata,31,0);
        VL_OUT(dbg_reg_x1,31,0);
        VL_OUT(dbg_reg_x2,31,0);
        VL_OUT(dbg_reg_x3,31,0);
        VL_IN(dmem_rdata,31,0);
        VL_IN(irq,31,0);
        IData/*31:0*/ nerv__DOT__mem_wr_addr;
        IData/*31:0*/ nerv__DOT__mem_wr_data;
        IData/*31:0*/ nerv__DOT__mem_rd_addr;
        IData/*31:0*/ nerv__DOT__npc;
        IData/*31:0*/ nerv__DOT__pc;
        IData/*31:0*/ nerv__DOT__imem_addr_q;
        IData/*31:0*/ nerv__DOT__rs1_value;
        IData/*31:0*/ nerv__DOT__rs2_value;
        IData/*31:0*/ nerv__DOT__next_rd;
        IData/*31:0*/ nerv__DOT__csr_rdval;
        IData/*31:0*/ nerv__DOT__csr_next;
        IData/*31:0*/ nerv__DOT__csr_rsval;
        IData/*31:0*/ nerv__DOT__hpm_increment;
        IData/*31:0*/ nerv__DOT__hpm_event;
        IData/*31:0*/ nerv__DOT__csr_mstatus_value;
        IData/*31:0*/ nerv__DOT__csr_mstatus_wdata;
        IData/*31:0*/ nerv__DOT__csr_mstatus_next;
        IData/*31:0*/ nerv__DOT__csr_misa_value;
        IData/*31:0*/ nerv__DOT__csr_misa_wdata;
        IData/*31:0*/ nerv__DOT__csr_misa_next;
        IData/*31:0*/ nerv__DOT__csr_mie_value;
        IData/*31:0*/ nerv__DOT__csr_mie_wdata;
        IData/*31:0*/ nerv__DOT__csr_mie_next;
        IData/*31:0*/ nerv__DOT__csr_mtvec_value;
        IData/*31:0*/ nerv__DOT__csr_mtvec_wdata;
        IData/*31:0*/ nerv__DOT__csr_mtvec_next;
        IData/*31:0*/ nerv__DOT__csr_mstatush_value;
        IData/*31:0*/ nerv__DOT__csr_mstatush_wdata;
        IData/*31:0*/ nerv__DOT__csr_mscratch_value;
        IData/*31:0*/ nerv__DOT__csr_mscratch_wdata;
        IData/*31:0*/ nerv__DOT__csr_mscratch_next;
        IData/*31:0*/ nerv__DOT__csr_mepc_value;
        IData/*31:0*/ nerv__DOT__csr_mepc_wdata;
        IData/*31:0*/ nerv__DOT__csr_mepc_next;
        IData/*31:0*/ nerv__DOT__csr_mcause_value;
        IData/*31:0*/ nerv__DOT__csr_mcause_wdata;
        IData/*31:0*/ nerv__DOT__csr_mcause_next;
        IData/*31:0*/ nerv__DOT__csr_mtval_value;
        IData/*31:0*/ nerv__DOT__csr_mtval_wdata;
        IData/*31:0*/ nerv__DOT__csr_mtval_next;
        IData/*31:0*/ nerv__DOT__csr_mip_value;
        IData/*31:0*/ nerv__DOT__csr_mip_wdata;
        IData/*31:0*/ nerv__DOT__csr_hpm_counter_sel;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_counter_value;
    };
    struct {
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_counter_wdata;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_counter_next;
        IData/*31:0*/ nerv__DOT__csr_hpm_counterh_sel;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_counterh_value;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_counterh_wdata;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_counterh_next;
        IData/*31:0*/ nerv__DOT__csr_hpm_event_sel;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_event_value;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_event_wdata;
        VlWide<32>/*1023:0*/ nerv__DOT__csr_hpm_event_next;
        IData/*31:0*/ nerv__DOT__csr_custom_value;
        IData/*31:0*/ nerv__DOT__csr_custom_wdata;
        IData/*31:0*/ nerv__DOT__csr_custom_next;
        IData/*31:0*/ nerv__DOT__irq_en;
        IData/*31:0*/ nerv__DOT__mem_rdata;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> nerv__DOT__regfile;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vnerv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnerv___024root(Vnerv__Syms* symsp, const char* v__name);
    ~Vnerv___024root();
    VL_UNCOPYABLE(Vnerv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
