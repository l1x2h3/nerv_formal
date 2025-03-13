`include "CheckerWrapper.sv"  // 假设这是CheckerWrapper模块定义
`include "wrapper.sv"         // 假设这是rvfi_wrapper模块定义

module top (
    input         clock,
    input         reset
);
    // DUT signals (from rvfi_wrapper)
    wire         dut_clock;
    wire         dut_reset;
    wire         dut_stall;
    wire [31:0]  dut_imem_data;      // 指令数据
    wire [31:0]  dut_dmem_rdata;     // 数据内存读数据
    wire [31:0]  dut_irq;            // 中断信号
    wire         dut_trap;           // 异常信号
    wire [31:0]  dut_imem_addr;      // 指令内存地址
    wire         dut_dmem_valid;     // 数据内存有效信号
    wire [31:0]  dut_dmem_addr;      // 数据内存地址
    wire [3:0]   dut_dmem_wstrb;     // 数据内存写使能
    wire [31:0]  dut_dmem_wdata;     // 数据内存写数据

    // Checker signals (from CheckerWrapper, 完整信号列表)
    wire         checker_clock;
    wire         checker_reset;
    wire         checker_io_instCommit_valid;
    wire [31:0]  checker_io_instCommit_inst;
    wire [63:0]  checker_io_instCommit_pc;
    wire [63:0]  checker_io_result_reg_0;
    wire [63:0]  checker_io_result_reg_1;
    wire [63:0]  checker_io_result_reg_2;
    wire [63:0]  checker_io_result_reg_3;
    wire [63:0]  checker_io_result_reg_4;
    wire [63:0]  checker_io_result_reg_5;
    wire [63:0]  checker_io_result_reg_6;
    wire [63:0]  checker_io_result_reg_7;
    wire [63:0]  checker_io_result_reg_8;
    wire [63:0]  checker_io_result_reg_9;
    wire [63:0]  checker_io_result_reg_10;
    wire [63:0]  checker_io_result_reg_11;
    wire [63:0]  checker_io_result_reg_12;
    wire [63:0]  checker_io_result_reg_13;
    wire [63:0]  checker_io_result_reg_14;
    wire [63:0]  checker_io_result_reg_15;
    wire [63:0]  checker_io_result_reg_16;
    wire [63:0]  checker_io_result_reg_17;
    wire [63:0]  checker_io_result_reg_18;
    wire [63:0]  checker_io_result_reg_19;
    wire [63:0]  checker_io_result_reg_20;
    wire [63:0]  checker_io_result_reg_21;
    wire [63:0]  checker_io_result_reg_22;
    wire [63:0]  checker_io_result_reg_23;
    wire [63:0]  checker_io_result_reg_24;
    wire [63:0]  checker_io_result_reg_25;
    wire [63:0]  checker_io_result_reg_26;
    wire [63:0]  checker_io_result_reg_27;
    wire [63:0]  checker_io_result_reg_28;
    wire [63:0]  checker_io_result_reg_29;
    wire [63:0]  checker_io_result_reg_30;
    wire [63:0]  checker_io_result_reg_31;
    wire [63:0]  checker_io_result_pc;
    wire [63:0]  checker_io_result_csr_misa;
    wire [63:0]  checker_io_result_csr_mvendorid;
    wire [63:0]  checker_io_result_csr_marchid;
    wire [63:0]  checker_io_result_csr_mimpid;
    wire [63:0]  checker_io_result_csr_mhartid;
    wire [63:0]  checker_io_result_csr_mstatus;
    wire [63:0]  checker_io_result_csr_mstatush;
    wire [63:0]  checker_io_result_csr_mscratch;
    wire [63:0]  checker_io_result_csr_mtvec;
    wire [63:0]  checker_io_result_csr_mcounteren;
    wire [63:0]  checker_io_result_csr_medeleg;
    wire [63:0]  checker_io_result_csr_mideleg;
    wire [63:0]  checker_io_result_csr_mip;
    wire [63:0]  checker_io_result_csr_mie;
    wire [63:0]  checker_io_result_csr_mepc;
    wire [63:0]  checker_io_result_csr_mcause;
    wire [63:0]  checker_io_result_csr_mtval;
    wire [63:0]  checker_io_result_csr_cycle;
    wire [63:0]  checker_io_result_csr_scounteren;
    wire [63:0]  checker_io_result_csr_scause;
    wire [63:0]  checker_io_result_csr_stvec;
    wire [63:0]  checker_io_result_csr_sepc;
    wire [63:0]  checker_io_result_csr_stval;
    wire [63:0]  checker_io_result_csr_sscratch;
    wire [63:0]  checker_io_result_csr_satp;
    wire [63:0]  checker_io_result_csr_pmpcfg0;
    wire [63:0]  checker_io_result_csr_pmpcfg1;
    wire [63:0]  checker_io_result_csr_pmpcfg2;
    wire [63:0]  checker_io_result_csr_pmpcfg3;
    wire [63:0]  checker_io_result_csr_pmpaddr0;
    wire [63:0]  checker_io_result_csr_pmpaddr1;
    wire [63:0]  checker_io_result_csr_pmpaddr2;
    wire [63:0]  checker_io_result_csr_pmpaddr3;
    wire [7:0]   checker_io_result_csr_MXLEN;
    wire [7:0]   checker_io_result_csr_IALIGN;
    wire [7:0]   checker_io_result_csr_ILEN;
    wire [1:0]   checker_io_result_internal_privilegeMode;
    wire         checker_io_event_valid;
    wire [63:0]  checker_io_event_intrNO;
    wire [63:0]  checker_io_event_cause;
    wire [63:0]  checker_io_event_exceptionPC;
    wire [63:0]  checker_io_event_exceptionInst;
    wire         checker_io_mem_read_valid;
    wire [63:0]  checker_io_mem_read_addr;
    wire [6:0]   checker_io_mem_read_memWidth;
    wire [63:0]  checker_io_mem_read_data;
    wire         checker_io_mem_write_valid;
    wire [63:0]  checker_io_mem_write_addr;
    wire [6:0]   checker_io_mem_write_memWidth;
    wire [63:0]  checker_io_mem_write_data;
    wire         checker_io_dtlbmem_read_valid;
    wire [63:0]  checker_io_dtlbmem_read_addr;
    wire [63:0]  checker_io_dtlbmem_read_data;
    wire [6:0]   checker_io_dtlbmem_read_memWidth;
    wire         checker_io_dtlbmem_read_access;
    wire [1:0]   checker_io_dtlbmem_read_level;
    wire         checker_io_dtlbmem_write_valid;
    wire [63:0]  checker_io_dtlbmem_write_addr;
    wire [63:0]  checker_io_dtlbmem_write_data;
    wire [6:0]   checker_io_dtlbmem_write_memWidth;
    wire         checker_io_dtlbmem_write_access;
    wire [1:0]   checker_io_dtlbmem_write_level;
    wire         checker_io_itlbmem_read_valid;
    wire [63:0]  checker_io_itlbmem_read_addr;
    wire [63:0]  checker_io_itlbmem_read_data;
    wire [6:0]   checker_io_itlbmem_read_memWidth;
    wire         checker_io_itlbmem_read_access;
    wire [1:0]   checker_io_itlbmem_read_level;
    wire         checker_io_itlbmem_write_valid;
    wire [63:0]  checker_io_itlbmem_write_addr;
    wire [63:0]  checker_io_itlbmem_write_data;
    wire [6:0]   checker_io_itlbmem_write_memWidth;
    wire         checker_io_itlbmem_write_access;
    wire [1:0]   checker_io_itlbmem_write_level;
    wire [`RISCV_FORMAL_NRET - 1 : 0] rvfi_valid;

    // Instantiate DUT (rvfi_wrapper)
    rvfi_wrapper dut (
        .clock      (dut_clock),
        .reset      (dut_reset),
        .stall      (dut_stall),
        .imem_data  (dut_imem_data),
        .dmem_rdata (dut_dmem_rdata),
        .irq        (dut_irq),
        .trap       (dut_trap),
        .imem_addr  (dut_imem_addr),
        .dmem_valid (dut_dmem_valid),
        .dmem_addr  (dut_dmem_addr),
        .dmem_wstrb (dut_dmem_wstrb),
        .dmem_wdata (dut_dmem_wdata)
        // RVFI信号未连接，仅关注Checker连接
    );

    // Instantiate Checker (CheckerWrapper)
    CheckerWrapper checker1 (
        .clock                      (checker_clock),
        .reset                      (checker_reset),
        .io_instCommit_valid        (checker_io_instCommit_valid),
        .io_instCommit_inst         (checker_io_instCommit_inst),
        .io_instCommit_pc           (checker_io_instCommit_pc),
        .io_result_reg_0            (checker_io_result_reg_0),
        .io_result_reg_1            (checker_io_result_reg_1),
        .io_result_reg_2            (checker_io_result_reg_2),
        .io_result_reg_3            (checker_io_result_reg_3),
        .io_result_reg_4            (checker_io_result_reg_4),
        .io_result_reg_5            (checker_io_result_reg_5),
        .io_result_reg_6            (checker_io_result_reg_6),
        .io_result_reg_7            (checker_io_result_reg_7),
        .io_result_reg_8            (checker_io_result_reg_8),
        .io_result_reg_9            (checker_io_result_reg_9),
        .io_result_reg_10           (checker_io_result_reg_10),
        .io_result_reg_11           (checker_io_result_reg_11),
        .io_result_reg_12           (checker_io_result_reg_12),
        .io_result_reg_13           (checker_io_result_reg_13),
        .io_result_reg_14           (checker_io_result_reg_14),
        .io_result_reg_15           (checker_io_result_reg_15),
        .io_result_reg_16           (checker_io_result_reg_16),
        .io_result_reg_17           (checker_io_result_reg_17),
        .io_result_reg_18           (checker_io_result_reg_18),
        .io_result_reg_19           (checker_io_result_reg_19),
        .io_result_reg_20           (checker_io_result_reg_20),
        .io_result_reg_21           (checker_io_result_reg_21),
        .io_result_reg_22           (checker_io_result_reg_22),
        .io_result_reg_23           (checker_io_result_reg_23),
        .io_result_reg_24           (checker_io_result_reg_24),
        .io_result_reg_25           (checker_io_result_reg_25),
        .io_result_reg_26           (checker_io_result_reg_26),
        .io_result_reg_27           (checker_io_result_reg_27),
        .io_result_reg_28           (checker_io_result_reg_28),
        .io_result_reg_29           (checker_io_result_reg_29),
        .io_result_reg_30           (checker_io_result_reg_30),
        .io_result_reg_31           (checker_io_result_reg_31),
        .io_result_pc               (checker_io_result_pc),
        .io_result_csr_misa         (checker_io_result_csr_misa),
        .io_result_csr_mvendorid    (checker_io_result_csr_mvendorid),
        .io_result_csr_marchid      (checker_io_result_csr_marchid),
        .io_result_csr_mimpid       (checker_io_result_csr_mimpid),
        .io_result_csr_mhartid      (checker_io_result_csr_mhartid),
        .io_result_csr_mstatus      (checker_io_result_csr_mstatus),
        .io_result_csr_mstatush     (checker_io_result_csr_mstatush),
        .io_result_csr_mscratch     (checker_io_result_csr_mscratch),
        .io_result_csr_mtvec        (checker_io_result_csr_mtvec),
        .io_result_csr_mcounteren   (checker_io_result_csr_mcounteren),
        .io_result_csr_medeleg      (checker_io_result_csr_medeleg),
        .io_result_csr_mideleg      (checker_io_result_csr_mideleg),
        .io_result_csr_mip          (checker_io_result_csr_mip),
        .io_result_csr_mie          (checker_io_result_csr_mie),
        .io_result_csr_mepc         (checker_io_result_csr_mepc),
        .io_result_csr_mcause       (checker_io_result_csr_mcause),
        .io_result_csr_mtval        (checker_io_result_csr_mtval),
        .io_result_csr_cycle        (checker_io_result_csr_cycle),
        .io_result_csr_scounteren   (checker_io_result_csr_scounteren),
        .io_result_csr_scause       (checker_io_result_csr_scause),
        .io_result_csr_stvec        (checker_io_result_csr_stvec),
        .io_result_csr_sepc         (checker_io_result_csr_sepc),
        .io_result_csr_stval        (checker_io_result_csr_stval),
        .io_result_csr_sscratch     (checker_io_result_csr_sscratch),
        .io_result_csr_satp         (checker_io_result_csr_satp),
        .io_result_csr_pmpcfg0      (checker_io_result_csr_pmpcfg0),
        .io_result_csr_pmpcfg1      (checker_io_result_csr_pmpcfg1),
        .io_result_csr_pmpcfg2      (checker_io_result_csr_pmpcfg2),
        .io_result_csr_pmpcfg3      (checker_io_result_csr_pmpcfg3),
        .io_result_csr_pmpaddr0     (checker_io_result_csr_pmpaddr0),
        .io_result_csr_pmpaddr1     (checker_io_result_csr_pmpaddr1),
        .io_result_csr_pmpaddr2     (checker_io_result_csr_pmpaddr2),
        .io_result_csr_pmpaddr3     (checker_io_result_csr_pmpaddr3),
        .io_result_csr_MXLEN        (checker_io_result_csr_MXLEN),
        .io_result_csr_IALIGN       (checker_io_result_csr_IALIGN),
        .io_result_csr_ILEN         (checker_io_result_csr_ILEN),
        .io_result_internal_privilegeMode (checker_io_result_internal_privilegeMode),
        .io_event_valid             (checker_io_event_valid),
        .io_event_intrNO            (checker_io_event_intrNO),
        .io_event_cause             (checker_io_event_cause),
        .io_event_exceptionPC       (checker_io_event_exceptionPC),
        .io_event_exceptionInst     (checker_io_event_exceptionInst),
        .io_mem_read_valid          (checker_io_mem_read_valid),
        .io_mem_read_addr           (checker_io_mem_read_addr),
        .io_mem_read_memWidth       (checker_io_mem_read_memWidth),
        .io_mem_read_data           (checker_io_mem_read_data),
        .io_mem_write_valid         (checker_io_mem_write_valid),
        .io_mem_write_addr          (checker_io_mem_write_addr),
        .io_mem_write_memWidth      (checker_io_mem_write_memWidth),
        .io_mem_write_data          (checker_io_mem_write_data),
        .io_dtlbmem_read_valid      (checker_io_dtlbmem_read_valid),
        .io_dtlbmem_read_addr       (checker_io_dtlbmem_read_addr),
        .io_dtlbmem_read_data       (checker_io_dtlbmem_read_data),
        .io_dtlbmem_read_memWidth   (checker_io_dtlbmem_read_memWidth),
        .io_dtlbmem_read_access     (checker_io_dtlbmem_read_access),
        .io_dtlbmem_read_level      (checker_io_dtlbmem_read_level),
        .io_dtlbmem_write_valid     (checker_io_dtlbmem_write_valid),
        .io_dtlbmem_write_addr      (checker_io_dtlbmem_write_addr),
        .io_dtlbmem_write_data      (checker_io_dtlbmem_write_data),
        .io_dtlbmem_write_memWidth  (checker_io_dtlbmem_write_memWidth),
        .io_dtlbmem_write_access    (checker_io_dtlbmem_write_access),
        .io_dtlbmem_write_level     (checker_io_dtlbmem_write_level),
        .io_itlbmem_read_valid      (checker_io_itlbmem_read_valid),
        .io_itlbmem_read_addr       (checker_io_itlbmem_read_addr),
        .io_itlbmem_read_data       (checker_io_itlbmem_read_data),
        .io_itlbmem_read_memWidth   (checker_io_itlbmem_read_memWidth),
        .io_itlbmem_read_access     (checker_io_itlbmem_read_access),
        .io_itlbmem_read_level      (checker_io_itlbmem_read_level),
        .io_itlbmem_write_valid     (checker_io_itlbmem_write_valid),
        .io_itlbmem_write_addr      (checker_io_itlbmem_write_addr),
        .io_itlbmem_write_data      (checker_io_itlbmem_write_data),
        .io_itlbmem_write_memWidth  (checker_io_itlbmem_write_memWidth),
        .io_itlbmem_write_access    (checker_io_itlbmem_write_access),
        .io_itlbmem_write_level     (checker_io_itlbmem_write_level)
    );

    // Connect DUT outputs to Checker inputs
    assign dut_clock = clock;
    assign dut_reset = reset;
    assign checker_clock = dut_clock;
    assign checker_reset = dut_reset;

    // Instruction commit signals
    assign checker_io_instCommit_valid = !dut_stall && !dut_trap; // 指令有效
    assign checker_io_instCommit_inst  = dut_imem_data;           // 指令数据
    assign checker_io_instCommit_pc    = {32'b0, dut_imem_addr};  // PC扩展为64位

    // Register results (rvfi_wrapper未提供完整寄存器状态，仅示例连接x0)
    assign checker_io_result_reg_0     = {32'b0, dut_dmem_rdata}; // 示例：用dmem_rdata占位
    assign checker_io_result_reg_1     = 64'b0;
    assign checker_io_result_reg_2     = 64'b0;
    assign checker_io_result_reg_3     = 64'b0;
    assign checker_io_result_reg_4     = 64'b0;
    assign checker_io_result_reg_5     = 64'b0;
    assign checker_io_result_reg_6     = 64'b0;
    assign checker_io_result_reg_7     = 64'b0;
    assign checker_io_result_reg_8     = 64'b0;
    assign checker_io_result_reg_9     = 64'b0;
    assign checker_io_result_reg_10    = 64'b0;
    assign checker_io_result_reg_11    = 64'b0;
    assign checker_io_result_reg_12    = 64'b0;
    assign checker_io_result_reg_13    = 64'b0;
    assign checker_io_result_reg_14    = 64'b0;
    assign checker_io_result_reg_15    = 64'b0;
    assign checker_io_result_reg_16    = 64'b0;
    assign checker_io_result_reg_17    = 64'b0;
    assign checker_io_result_reg_18    = 64'b0;
    assign checker_io_result_reg_19    = 64'b0;
    assign checker_io_result_reg_20    = 64'b0;
    assign checker_io_result_reg_21    = 64'b0;
    assign checker_io_result_reg_22    = 64'b0;
    assign checker_io_result_reg_23    = 64'b0;
    assign checker_io_result_reg_24    = 64'b0;
    assign checker_io_result_reg_25    = 64'b0;
    assign checker_io_result_reg_26    = 64'b0;
    assign checker_io_result_reg_27    = 64'b0;
    assign checker_io_result_reg_28    = 64'b0;
    assign checker_io_result_reg_29    = 64'b0;
    assign checker_io_result_reg_30    = 64'b0;
    assign checker_io_result_reg_31    = 64'b0;

    // PC result
    assign checker_io_result_pc        = {32'b0, dut_imem_addr};

    // CSR results (rvfi_wrapper未提供，设为默认值)
    assign checker_io_result_csr_misa         = 64'b0;
    assign checker_io_result_csr_mvendorid    = 64'b0;
    assign checker_io_result_csr_marchid      = 64'b0;
    assign checker_io_result_csr_mimpid       = 64'b0;
    assign checker_io_result_csr_mhartid      = 64'b0;
    assign checker_io_result_csr_mstatus      = 64'b0;
    assign checker_io_result_csr_mstatush     = 64'b0;
    assign checker_io_result_csr_mscratch     = 64'b0;
    assign checker_io_result_csr_mtvec        = 64'b0;
    assign checker_io_result_csr_mcounteren   = 64'b0;
    assign checker_io_result_csr_medeleg      = 64'b0;
    assign checker_io_result_csr_mideleg      = 64'b0;
    assign checker_io_result_csr_mip          = 64'b0;
    assign checker_io_result_csr_mie          = 64'b0;
    assign checker_io_result_csr_mepc         = 64'b0;
    assign checker_io_result_csr_mcause       = 64'b0;
    assign checker_io_result_csr_mtval        = 64'b0;
    assign checker_io_result_csr_cycle        = 64'b0;
    assign checker_io_result_csr_scounteren   = 64'b0;
    assign checker_io_result_csr_scause       = 64'b0;
    assign checker_io_result_csr_stvec        = 64'b0;
    assign checker_io_result_csr_sepc         = 64'b0;
    assign checker_io_result_csr_stval        = 64'b0;
    assign checker_io_result_csr_sscratch     = 64'b0;
    assign checker_io_result_csr_satp         = 64'b0;
    assign checker_io_result_csr_pmpcfg0      = 64'b0;
    assign checker_io_result_csr_pmpcfg1      = 64'b0;
    assign checker_io_result_csr_pmpcfg2      = 64'b0;
    assign checker_io_result_csr_pmpcfg3      = 64'b0;
    assign checker_io_result_csr_pmpaddr0     = 64'b0;
    assign checker_io_result_csr_pmpaddr1     = 64'b0;
    assign checker_io_result_csr_pmpaddr2     = 64'b0;
    assign checker_io_result_csr_pmpaddr3     = 64'b0;
    assign checker_io_result_csr_MXLEN        = 8'd32;  // 假设RV32
    assign checker_io_result_csr_IALIGN       = 8'd32;  // 指令对齐
    assign checker_io_result_csr_ILEN         = 8'd32;  // 指令长度
    assign checker_io_result_internal_privilegeMode = 2'b11; // 假设机器模式

    // Event signals (异常和中断)
    assign checker_io_event_valid       = dut_trap;
    assign checker_io_event_intrNO      = {32'b0, dut_irq};
    assign checker_io_event_cause       = dut_trap ? 64'd11 : 64'd0; // 示例：环境调用
    assign checker_io_event_exceptionPC = {32'b0, dut_imem_addr};
    assign checker_io_event_exceptionInst = {32'b0, dut_imem_data};

    // Memory signals
    assign checker_io_mem_read_valid    = dut_dmem_valid && (dut_dmem_wstrb == 4'b0);
    assign checker_io_mem_read_addr     = {32'b0, dut_dmem_addr};
    assign checker_io_mem_read_memWidth = 7'd32;  // 假设32位宽
    assign checker_io_mem_read_data     = {32'b0, dut_dmem_rdata};

    assign checker_io_mem_write_valid   = dut_dmem_valid && (dut_dmem_wstrb != 4'b0);
    assign checker_io_mem_write_addr    = {32'b0, dut_dmem_addr};
    assign checker_io_mem_write_memWidth = 7'd32;  // 假设32位宽
    assign checker_io_mem_write_data    = {32'b0, dut_dmem_wdata};

    // DTLB/ITLB signals (rvfi_wrapper未提供，设为默认值)
    assign checker_io_dtlbmem_read_valid     = 1'b0;
    assign checker_io_dtlbmem_read_addr      = 64'b0;
    assign checker_io_dtlbmem_read_data      = 64'b0;
    assign checker_io_dtlbmem_read_memWidth  = 7'd0;
    assign checker_io_dtlbmem_read_access    = 1'b0;
    assign checker_io_dtlbmem_read_level     = 2'b0;
    assign checker_io_dtlbmem_write_valid    = 1'b0;
    assign checker_io_dtlbmem_write_addr     = 64'b0;
    assign checker_io_dtlbmem_write_data     = 64'b0;
    assign checker_io_dtlbmem_write_memWidth = 7'd0;
    assign checker_io_dtlbmem_write_access   = 1'b0;
    assign checker_io_dtlbmem_write_level    = 2'b0;

    assign checker_io_itlbmem_read_valid     = 1'b0;
    assign checker_io_itlbmem_read_addr      = 64'b0;
    assign checker_io_itlbmem_read_data      = 64'b0;
    assign checker_io_itlbmem_read_memWidth  = 7'd0;
    assign checker_io_itlbmem_read_access    = 1'b0;
    assign checker_io_itlbmem_read_level     = 2'b0;
    assign checker_io_itlbmem_write_valid    = 1'b0;
    assign checker_io_itlbmem_write_addr     = 64'b0;
    assign checker_io_itlbmem_write_data     = 64'b0;
    assign checker_io_itlbmem_write_memWidth = 7'd0;
    assign checker_io_itlbmem_write_access   = 1'b0;
    assign checker_io_itlbmem_write_level    = 2'b0;

endmodule