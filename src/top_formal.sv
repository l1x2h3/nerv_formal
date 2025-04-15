module top_formal (
    input         clock,
    input         reset
);

    // 输出信号
    wire        io_mem_read_valid;
    wire [31:0] io_mem_read_addr;
    wire [5:0]  io_mem_read_memWidth;  // 与 CheckerWrapper 一致，调整为 6:0
    wire [31:0] io_mem_read_data;
    wire        io_mem_write_valid;
    wire [31:0] io_mem_write_addr;
    wire [5:0]  io_mem_write_memWidth; // 与 CheckerWrapper 一致，调整为 6:0
    wire [31:0] io_mem_write_data;
    wire [31:0] io_now_pc;
    wire [31:0] result_pc;
    wire [31:0] io_next_reg_0, io_next_reg_1, io_next_reg_2, io_next_reg_3, io_next_reg_4;
    wire [31:0] io_next_reg_5, io_next_reg_6, io_next_reg_7, io_next_reg_8, io_next_reg_9;
    wire [31:0] io_next_reg_10, io_next_reg_11, io_next_reg_12, io_next_reg_13, io_next_reg_14;
    wire [31:0] io_next_reg_15, io_next_reg_16, io_next_reg_17, io_next_reg_18, io_next_reg_19;
    wire [31:0] io_next_reg_20, io_next_reg_21, io_next_reg_22, io_next_reg_23, io_next_reg_24;
    wire [31:0] io_next_reg_25, io_next_reg_26, io_next_reg_27, io_next_reg_28, io_next_reg_29;
    wire [31:0] io_next_reg_30, io_next_reg_31;
    wire [31:0] io_next_csr_misa, io_next_csr_mvendorid, io_next_csr_marchid, io_next_csr_mimpid;
    wire [31:0] io_next_csr_mhartid, io_next_csr_mstatus, io_next_csr_mscratch, io_next_csr_mtvec;
    wire [31:0] io_next_csr_mcounteren, io_next_csr_mip, io_next_csr_mie, io_next_csr_mepc;
    wire [31:0] io_next_csr_mcause, io_next_csr_mtval;
    wire        io_event_valid;
    wire [31:0] io_event_intrNO;
    wire [31:0] io_event_cause;
    wire [31:0] io_event_exceptionPC;
    wire [31:0] io_event_exceptionInst;
    wire        io_instCommit_valid;
    wire [31:0] io_instCommit_inst;

    // 实例化 rvfi_wrapper（接口已与 CheckerWrapper 一致）
    nerv_extended_wrapper wrapper_inst (
        .clock(clock),
        .reset(reset),
        .instCommit_valid(io_instCommit_valid),
        .instCommit_inst(io_instCommit_inst),
        .instCommit_pc(io_now_pc),
        .result_reg_0(io_next_reg_0),
        .result_reg_1(io_next_reg_1),
        .result_reg_2(io_next_reg_2),
        .result_reg_3(io_next_reg_3),
        .result_reg_4(io_next_reg_4),
        .result_reg_5(io_next_reg_5),
        .result_reg_6(io_next_reg_6),
        .result_reg_7(io_next_reg_7),
        .result_reg_8(io_next_reg_8),
        .result_reg_9(io_next_reg_9),
        .result_reg_10(io_next_reg_10),
        .result_reg_11(io_next_reg_11),
        .result_reg_12(io_next_reg_12),
        .result_reg_13(io_next_reg_13),
        .result_reg_14(io_next_reg_14),
        .result_reg_15(io_next_reg_15),
        .result_reg_16(io_next_reg_16),
        .result_reg_17(io_next_reg_17),
        .result_reg_18(io_next_reg_18),
        .result_reg_19(io_next_reg_19),
        .result_reg_20(io_next_reg_20),
        .result_reg_21(io_next_reg_21),
        .result_reg_22(io_next_reg_22),
        .result_reg_23(io_next_reg_23),
        .result_reg_24(io_next_reg_24),
        .result_reg_25(io_next_reg_25),
        .result_reg_26(io_next_reg_26),
        .result_reg_27(io_next_reg_27),
        .result_reg_28(io_next_reg_28),
        .result_reg_29(io_next_reg_29),
        .result_reg_30(io_next_reg_30),
        .result_reg_31(io_next_reg_31),
        .result_pc(result_pc),
        .result_csr_misa(io_next_csr_misa),
        .result_csr_mvendorid(io_next_csr_mvendorid),
        .result_csr_marchid(io_next_csr_marchid),
        .result_csr_mimpid(io_next_csr_mimpid),
        .result_csr_mhartid(io_next_csr_mhartid),
        .result_csr_mstatus(io_next_csr_mstatus),
        // .result_csr_mstatush(32'b0), // 未支持
        .result_csr_mscratch(io_next_csr_mscratch),
        .result_csr_mtvec(io_next_csr_mtvec),
        .result_csr_mcounteren(io_next_csr_mcounteren),
        // .result_csr_medeleg(32'b0), // 未支持
        // .result_csr_mideleg(32'b0), // 未支持
        .result_csr_mip(io_next_csr_mip),
        .result_csr_mie(io_next_csr_mie),
        .result_csr_mepc(io_next_csr_mepc),
        .result_csr_mcause(io_next_csr_mcause),
        .result_csr_mtval(io_next_csr_mtval),
        // .result_csr_cycle(32'b0), // 未支持
        // .result_csr_scounteren(32'b0), // 未支持
        // .result_csr_scause(32'b0), // 未支持
        // .result_csr_stvec(32'b0), // 未支持
        // .result_csr_sepc(32'b0), // 未支持
        // .result_csr_stval(32'b0), // 未支持
        // .result_csr_sscratch(32'b0), // 未支持
        // .result_csr_satp(32'b0), // 未支持
        // .result_csr_pmpcfg0(32'b0), // 未支持
        // .result_csr_pmpcfg1(32'b0), // 未支持
        // .result_csr_pmpcfg2(32'b0), // 未支持
        // .result_csr_pmpcfg3(32'b0), // 未支持
        // .result_csr_pmpaddr0(32'b0), // 未支持
        // .result_csr_pmpaddr1(32'b0), // 未支持
        // .result_csr_pmpaddr2(32'b0), // 未支持
        // .result_csr_pmpaddr3(32'b0), // 未支持
        // .result_csr_MXLEN(8'd32), // RV32
        // .result_csr_IALIGN(8'd32), // 指令对齐 32 位
        // .result_csr_ILEN(8'd32), // 指令长度 32 位
        // .result_internal_privilegeMode(2'b11), // 默认 Machine 模式
        .event_valid(io_event_valid),
        .event_intrNO(io_event_intrNO), // 未支持中断号
        .event_cause(io_event_cause),
        .event_exceptionPC(io_event_exceptionPC),
        .event_exceptionInst(io_event_exceptionInst),
        .mem_read_valid(io_mem_read_valid),
        .mem_read_addr(io_mem_read_addr),
        .mem_read_memWidth(io_mem_read_memWidth),
        .mem_read_data(io_mem_read_data),
        .mem_write_valid(io_mem_write_valid),
        .mem_write_addr(io_mem_write_addr),
        .mem_write_data(io_mem_write_data),
        //.dmem_rdata(io_mem_write_data)
    );

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
        .io_result_pc(result_pc),
        .io_result_csr_misa(io_next_csr_misa),
        .io_result_csr_mvendorid(io_next_csr_mvendorid),
        .io_result_csr_marchid(io_next_csr_marchid),
        .io_result_csr_mimpid(io_next_csr_mimpid),
        .io_result_csr_mhartid(io_next_csr_mhartid),
        .io_result_csr_mstatus(io_next_csr_mstatus),
        .io_result_csr_mstatush(32'b0), // 未支持
        .io_result_csr_mscratch(io_next_csr_mscratch),
        .io_result_csr_mtvec(io_next_csr_mtvec),
        .io_result_csr_mcounteren(io_next_csr_mcounteren),
        .io_result_csr_medeleg(32'b0), // 未支持
        .io_result_csr_mideleg(32'b0), // 未支持
        .io_result_csr_mip(io_next_csr_mip),
        .io_result_csr_mie(io_next_csr_mie),
        .io_result_csr_mepc(io_next_csr_mepc),
        .io_result_csr_mcause(io_next_csr_mcause),
        .io_result_csr_mtval(io_next_csr_mtval),
        .io_result_csr_cycle(32'b0), // 未支持
        .io_result_csr_scounteren(32'b0), // 未支持
        .io_result_csr_scause(32'b0), // 未支持
        .io_result_csr_stvec(32'b0), // 未支持
        .io_result_csr_sepc(32'b0), // 未支持
        .io_result_csr_stval(32'b0), // 未支持
        .io_result_csr_sscratch(32'b0), // 未支持
        .io_result_csr_satp(32'b0), // 未支持
        .io_result_csr_pmpcfg0(32'b0), // 未支持
        .io_result_csr_pmpcfg1(32'b0), // 未支持
        .io_result_csr_pmpcfg2(32'b0), // 未支持
        .io_result_csr_pmpcfg3(32'b0), // 未支持
        .io_result_csr_pmpaddr0(32'b0), // 未支持
        .io_result_csr_pmpaddr1(32'b0), // 未支持
        .io_result_csr_pmpaddr2(32'b0), // 未支持
        .io_result_csr_pmpaddr3(32'b0), // 未支持
        .io_result_csr_MXLEN(8'd32), // RV32
        .io_result_csr_IALIGN(8'd32), // 指令对齐 32 位
        .io_result_csr_ILEN(8'd32), // 指令长度 32 位
        .io_result_internal_privilegeMode(2'b11), // 默认 Machine 模式
        .io_event_valid(io_event_valid),
        .io_event_intrNO(32'b0), // 未支持中断号
        .io_event_cause(io_event_cause),
        .io_event_exceptionPC(io_event_exceptionPC),
        .io_event_exceptionInst(io_event_exceptionInst),
        .io_mem_read_valid(io_mem_read_valid),
        .io_mem_read_addr(io_mem_read_addr),
        .io_mem_read_memWidth(io_mem_read_memWidth),
        .io_mem_read_data(io_mem_read_data),
        .io_mem_write_valid(io_mem_write_valid),
        .io_mem_write_addr(io_mem_write_addr),
        .io_mem_write_memWidth(io_mem_write_memWidth),
        .io_mem_write_data(io_mem_write_data)
    );

endmodule