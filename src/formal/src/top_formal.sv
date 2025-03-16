
`ifdef YOSYS
`define rvformal_rand_reg rand reg
`define rvformal_rand_const_reg rand const reg
`else
`ifdef SIMULATION
`define rvformal_rand_reg reg
`define rvformal_rand_const_reg reg
`else
`define rvformal_rand_reg wire
`define rvformal_rand_const_reg reg
`endif
`endif

module top_formal (
    input         clock,
    input         reset,
    input         stall,
    input  [31:0] io_inst,
    input         io_valid,
    input  [31:0] io_mem_read_data,
    input  [31:0] io_tlb_Anotherread_0_data,
    input  [31:0] io_tlb_Anotherread_1_data,
    input  [31:0] io_tlb_Anotherread_2_data,
    input  [31:0] irq
);

    // nerv_extended_wrapper 输出信号
    wire        io_mem_read_valid;
    wire [63:0] io_mem_read_addr;
    wire [6:0]  io_mem_read_memWidth;
    wire        io_mem_write_valid;
    wire [63:0] io_mem_write_addr;
    wire [6:0]  io_mem_write_memWidth;
    wire [63:0] io_mem_write_data;
    wire        io_tlb_Anotherread_0_valid;
    wire [63:0] io_tlb_Anotherread_0_addr;
    wire        io_tlb_Anotherread_1_valid;
    wire [63:0] io_tlb_Anotherread_1_addr;
    wire        io_tlb_Anotherread_2_valid;
    wire [63:0] io_tlb_Anotherread_2_addr;
    wire [63:0] io_now_pc;
    wire [63:0] io_next_reg_0, io_next_reg_1, io_next_reg_2, io_next_reg_3, io_next_reg_4;
    wire [63:0] io_next_reg_5, io_next_reg_6, io_next_reg_7, io_next_reg_8, io_next_reg_9;
    wire [63:0] io_next_reg_10, io_next_reg_11, io_next_reg_12, io_next_reg_13, io_next_reg_14;
    wire [63:0] io_next_reg_15, io_next_reg_16, io_next_reg_17, io_next_reg_18, io_next_reg_19;
    wire [63:0] io_next_reg_20, io_next_reg_21, io_next_reg_22, io_next_reg_23, io_next_reg_24;
    wire [63:0] io_next_reg_25, io_next_reg_26, io_next_reg_27, io_next_reg_28, io_next_reg_29;
    wire [63:0] io_next_reg_30, io_next_reg_31;
    wire [63:0] io_next_csr_misa, io_next_csr_mvendorid, io_next_csr_marchid, io_next_csr_mimpid;
    wire [63:0] io_next_csr_mhartid, io_next_csr_mstatus, io_next_csr_mscratch, io_next_csr_mtvec;
    wire [63:0] io_next_csr_mcounteren, io_next_csr_mip, io_next_csr_mie, io_next_csr_mepc;
    wire [63:0] io_next_csr_mcause, io_next_csr_mtval;
    wire        io_event_valid;
    wire [63:0] io_event_cause;
    wire [63:0] io_event_exceptionPC;
    wire [63:0] io_event_exceptionInst;
    wire        io_instCommit_valid;
    wire [31:0] io_instCommit_inst; 


    // 实例化 nerv_extended_wrapper
    nerv_extended_wrapper dut (
        .clock(clock),
        .reset(reset),
        .stall(stall),
        .io_inst(io_inst),
        .io_valid(io_valid),
        .io_mem_read_data(io_mem_read_data),
        .io_tlb_Anotherread_0_data(io_tlb_Anotherread_0_data),
        .io_tlb_Anotherread_1_data(io_tlb_Anotherread_1_data),
        .io_tlb_Anotherread_2_data(io_tlb_Anotherread_2_data),
        .irq(irq),
        .io_mem_read_valid(io_mem_read_valid),
        .io_mem_read_addr(io_mem_read_addr),
        .io_mem_read_memWidth(io_mem_read_memWidth),
        .io_mem_write_valid(io_mem_write_valid),
        .io_mem_write_addr(io_mem_write_addr),
        .io_mem_write_memWidth(io_mem_write_memWidth),
        .io_mem_write_data(io_mem_write_data),
        .io_tlb_Anotherread_0_valid(io_tlb_Anotherread_0_valid),
        .io_tlb_Anotherread_0_addr(io_tlb_Anotherread_0_addr),
        .io_tlb_Anotherread_1_valid(io_tlb_Anotherread_1_valid),
        .io_tlb_Anotherread_1_addr(io_tlb_Anotherread_1_addr),
        .io_tlb_Anotherread_2_valid(io_tlb_Anotherread_2_valid),
        .io_tlb_Anotherread_2_addr(io_tlb_Anotherread_2_addr),
        .io_now_pc(io_now_pc),
        .io_next_reg_0(io_next_reg_0), .io_next_reg_1(io_next_reg_1), .io_next_reg_2(io_next_reg_2),
        .io_next_reg_3(io_next_reg_3), .io_next_reg_4(io_next_reg_4), .io_next_reg_5(io_next_reg_5),
        .io_next_reg_6(io_next_reg_6), .io_next_reg_7(io_next_reg_7), .io_next_reg_8(io_next_reg_8),
        .io_next_reg_9(io_next_reg_9), .io_next_reg_10(io_next_reg_10), .io_next_reg_11(io_next_reg_11),
        .io_next_reg_12(io_next_reg_12), .io_next_reg_13(io_next_reg_13), .io_next_reg_14(io_next_reg_14),
        .io_next_reg_15(io_next_reg_15), .io_next_reg_16(io_next_reg_16), .io_next_reg_17(io_next_reg_17),
        .io_next_reg_18(io_next_reg_18), .io_next_reg_19(io_next_reg_19), .io_next_reg_20(io_next_reg_20),
        .io_next_reg_21(io_next_reg_21), .io_next_reg_22(io_next_reg_22), .io_next_reg_23(io_next_reg_23),
        .io_next_reg_24(io_next_reg_24), .io_next_reg_25(io_next_reg_25), .io_next_reg_26(io_next_reg_26),
        .io_next_reg_27(io_next_reg_27), .io_next_reg_28(io_next_reg_28), .io_next_reg_29(io_next_reg_29),
        .io_next_reg_30(io_next_reg_30), .io_next_reg_31(io_next_reg_31),
        .io_next_csr_misa(io_next_csr_misa),
        .io_next_csr_mvendorid(io_next_csr_mvendorid),
        .io_next_csr_marchid(io_next_csr_marchid),
        .io_next_csr_mimpid(io_next_csr_mimpid),
        .io_next_csr_mhartid(io_next_csr_mhartid),
        .io_next_csr_mstatus(io_next_csr_mstatus),
        .io_next_csr_mscratch(io_next_csr_mscratch),
        .io_next_csr_mtvec(io_next_csr_mtvec),
        .io_next_csr_mcounteren(io_next_csr_mcounteren),
        .io_next_csr_mip(io_next_csr_mip),
        .io_next_csr_mie(io_next_csr_mie),
        .io_next_csr_mepc(io_next_csr_mepc),
        .io_next_csr_mcause(io_next_csr_mcause),
        .io_next_csr_mtval(io_next_csr_mtval),
        .io_event_valid(io_event_valid),
        .io_event_cause(io_event_cause),
        .io_event_exceptionPC(io_event_exceptionPC),
        .io_event_exceptionInst(io_event_exceptionInst),
        .rvfi_valid(io_instCommit_valid),
        .rvfi_insn(io_instCommit_inst)
        // .io_instCommit_valid(rvfi_valid),
        // .io_instCommit_inst(rvfi_insn)
    );

    // // 推导指令提交信号
    // wire        io_instCommit_valid = dut.rvfi_valid; // 从 RVFI 推导
    // wire [31:0] io_instCommit_inst  = dut.rvfi_insn;

    // 实例化 CheckerWrapper
    CheckerWrapper checker_inst (
        .clock(clock),
        .reset(reset),
        .io_instCommit_valid(io_instCommit_valid),
        .io_instCommit_inst(io_instCommit_inst),
        .io_instCommit_pc(io_now_pc),
        .io_result_reg_0(io_next_reg_0),
        .io_result_reg_1(io_next_reg_1),
        .io_result_reg_2(io_next_reg_2),
        .io_result_reg_3(io_next_reg_3),
        .io_result_reg_4(io_next_reg_4),
        .io_result_reg_5(io_next_reg_5),
        .io_result_reg_6(io_next_reg_6),
        .io_result_reg_7(io_next_reg_7),
        .io_result_reg_8(io_next_reg_8),
        .io_result_reg_9(io_next_reg_9),
        .io_result_reg_10(io_next_reg_10),
        .io_result_reg_11(io_next_reg_11),
        .io_result_reg_12(io_next_reg_12),
        .io_result_reg_13(io_next_reg_13),
        .io_result_reg_14(io_next_reg_14),
        .io_result_reg_15(io_next_reg_15),
        .io_result_reg_16(io_next_reg_16),
        .io_result_reg_17(io_next_reg_17),
        .io_result_reg_18(io_next_reg_18),
        .io_result_reg_19(io_next_reg_19),
        .io_result_reg_20(io_next_reg_20),
        .io_result_reg_21(io_next_reg_21),
        .io_result_reg_22(io_next_reg_22),
        .io_result_reg_23(io_next_reg_23),
        .io_result_reg_24(io_next_reg_24),
        .io_result_reg_25(io_next_reg_25),
        .io_result_reg_26(io_next_reg_26),
        .io_result_reg_27(io_next_reg_27),
        .io_result_reg_28(io_next_reg_28),
        .io_result_reg_29(io_next_reg_29),
        .io_result_reg_30(io_next_reg_30),
        .io_result_reg_31(io_next_reg_31),
        .io_result_pc(io_now_pc),
        .io_result_csr_misa(io_next_csr_misa),
        .io_result_csr_mvendorid(io_next_csr_mvendorid),
        .io_result_csr_marchid(io_next_csr_marchid),
        .io_result_csr_mimpid(io_next_csr_mimpid),
        .io_result_csr_mhartid(io_next_csr_mhartid),
        .io_result_csr_mstatus(io_next_csr_mstatus),
        .io_result_csr_mstatush(64'b0), // 未支持
        .io_result_csr_mscratch(io_next_csr_mscratch),
        .io_result_csr_mtvec(io_next_csr_mtvec),
        .io_result_csr_mcounteren(io_next_csr_mcounteren),
        .io_result_csr_medeleg(64'b0), // 未支持
        .io_result_csr_mideleg(64'b0), // 未支持
        .io_result_csr_mip(io_next_csr_mip),
        .io_result_csr_mie(io_next_csr_mie),
        .io_result_csr_mepc(io_next_csr_mepc),
        .io_result_csr_mcause(io_next_csr_mcause),
        .io_result_csr_mtval(io_next_csr_mtval),
        .io_result_csr_cycle(64'b0), // 未支持
        .io_result_csr_scounteren(64'b0), // 未支持
        .io_result_csr_scause(64'b0), // 未支持
        .io_result_csr_stvec(64'b0), // 未支持
        .io_result_csr_sepc(64'b0), // 未支持
        .io_result_csr_stval(64'b0), // 未支持
        .io_result_csr_sscratch(64'b0), // 未支持
        .io_result_csr_satp(64'b0), // 未支持
        .io_result_csr_pmpcfg0(64'b0), // 未支持
        .io_result_csr_pmpcfg1(64'b0), // 未支持
        .io_result_csr_pmpcfg2(64'b0), // 未支持
        .io_result_csr_pmpcfg3(64'b0), // 未支持
        .io_result_csr_pmpaddr0(64'b0), // 未支持
        .io_result_csr_pmpaddr1(64'b0), // 未支持
        .io_result_csr_pmpaddr2(64'b0), // 未支持
        .io_result_csr_pmpaddr3(64'b0), // 未支持
        .io_result_csr_MXLEN(8'd32), // RV32
        .io_result_csr_IALIGN(8'd32), // 指令对齐 32 位
        .io_result_csr_ILEN(8'd32), // 指令长度 32 位
        .io_result_internal_privilegeMode(2'b11), // 默认 Machine 模式
        .io_event_valid(io_event_valid),
        .io_event_intrNO(64'b0), // 未支持中断号
        .io_event_cause(io_event_cause),
        .io_event_exceptionPC(io_event_exceptionPC),
        .io_event_exceptionInst(io_event_exceptionInst),
        .io_mem_read_valid(io_mem_read_valid),
        .io_mem_read_addr(io_mem_read_addr),
        .io_mem_read_memWidth(io_mem_read_memWidth),
        .io_mem_read_data({{32{1'b0}}, io_mem_read_data}), // 从输入转发
        .io_mem_write_valid(io_mem_write_valid),
        .io_mem_write_addr(io_mem_write_addr),
        .io_mem_write_memWidth(io_mem_write_memWidth),
        .io_mem_write_data(io_mem_write_data),
        .io_dtlbmem_read_valid(1'b0), // 未支持
        .io_dtlbmem_read_addr(64'b0),
        .io_dtlbmem_read_data(64'b0),
        .io_dtlbmem_read_memWidth(7'b0),
        .io_dtlbmem_read_access(1'b0),
        .io_dtlbmem_read_level(2'b0),
        .io_dtlbmem_write_valid(1'b0),
        .io_dtlbmem_write_addr(64'b0),
        .io_dtlbmem_write_data(64'b0),
        .io_dtlbmem_write_memWidth(7'b0),
        .io_dtlbmem_write_access(1'b0),
        .io_dtlbmem_write_level(2'b0),
        .io_itlbmem_read_valid(1'b0),
        .io_itlbmem_read_addr(64'b0),
        .io_itlbmem_read_data(64'b0),
        .io_itlbmem_read_memWidth(7'b0),
        .io_itlbmem_read_access(1'b0),
        .io_itlbmem_read_level(2'b0),
        .io_itlbmem_write_valid(1'b0),
        .io_itlbmem_write_addr(64'b0),
        .io_itlbmem_write_data(64'b0),
        .io_itlbmem_write_memWidth(7'b0),
        .io_itlbmem_write_access(1'b0),
        .io_itlbmem_write_level(2'b0)
    );

endmodule