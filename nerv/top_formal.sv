
`include "CheckerWrapper.sv"
`include "nerv_wrapper.sv"
`include "wrapper.sv"
`include "nerv.sv"

module top_formal (
    input         clock,
    input         reset,
    `RVFI_OUTPUTS
);

    // 随机输入信号
    (* keep *) `rvformal_rand_reg stall;
    (* keep *) `rvformal_rand_reg [31:0] io_inst;
    (* keep *) `rvformal_rand_reg io_valid;
    (* keep *) `rvformal_rand_reg [31:0] io_mem_read_data;
    (* keep *) `rvformal_rand_reg [31:0] io_tlb_Anotherread_0_data;
    (* keep *) `rvformal_rand_reg [31:0] io_tlb_Anotherread_1_data;
    (* keep *) `rvformal_rand_reg [31:0] io_tlb_Anotherread_2_data;
    (* keep *) `rvformal_rand_reg [31:0] irq;

    // DUT 输出信号
    wire        dut_mem_read_valid;
    wire [63:0] dut_mem_read_addr;
    wire [6:0]  dut_mem_read_memWidth;
    wire        dut_mem_write_valid;
    wire [63:0] dut_mem_write_addr;
    wire [6:0]  dut_mem_write_memWidth;
    wire [63:0] dut_mem_write_data;
    wire        dut_tlb_Anotherread_0_valid;
    wire [63:0] dut_tlb_Anotherread_0_addr;
    wire        dut_tlb_Anotherread_1_valid;
    wire [63:0] dut_tlb_Anotherread_1_addr;
    wire        dut_tlb_Anotherread_2_valid;
    wire [63:0] dut_tlb_Anotherread_2_addr;
    wire [63:0] dut_now_pc;
    wire [63:0] dut_next_reg_0, dut_next_reg_1, dut_next_reg_2, dut_next_reg_3, dut_next_reg_4;
    wire [63:0] dut_next_reg_5, dut_next_reg_6, dut_next_reg_7, dut_next_reg_8, dut_next_reg_9;
    wire [63:0] dut_next_reg_10, dut_next_reg_11, dut_next_reg_12, dut_next_reg_13, dut_next_reg_14;
    wire [63:0] dut_next_reg_15, dut_next_reg_16, dut_next_reg_17, dut_next_reg_18, dut_next_reg_19;
    wire [63:0] dut_next_reg_20, dut_next_reg_21, dut_next_reg_22, dut_next_reg_23, dut_next_reg_24;
    wire [63:0] dut_next_reg_25, dut_next_reg_26, dut_next_reg_27, dut_next_reg_28, dut_next_reg_29;
    wire [63:0] dut_next_reg_30, dut_next_reg_31;
    wire [63:0] dut_next_csr_misa, dut_next_csr_mvendorid, dut_next_csr_marchid, dut_next_csr_mimpid;
    wire [63:0] dut_next_csr_mhartid, dut_next_csr_mstatus, dut_next_csr_mscratch, dut_next_csr_mtvec;
    wire [63:0] dut_next_csr_mcounteren, dut_next_csr_mip, dut_next_csr_mie, dut_next_csr_mepc;
    wire [63:0] dut_next_csr_mcause, dut_next_csr_mtval;
    wire        dut_event_valid;
    wire [63:0] dut_event_cause;
    wire [63:0] dut_event_exceptionPC;
    wire [63:0] dut_event_exceptionInst;

    // 参考模型输出信号
    wire        ref_mem_read_valid;
    wire [63:0] ref_mem_read_addr;
    wire [6:0]  ref_mem_read_memWidth;
    wire        ref_mem_write_valid;
    wire [63:0] ref_mem_write_addr;
    wire [6:0]  ref_mem_write_memWidth;
    wire [63:0] ref_mem_write_data;
    wire        ref_tlb_Anotherread_0_valid;
    wire [63:0] ref_tlb_Anotherread_0_addr;
    wire        ref_tlb_Anotherread_1_valid;
    wire [63:0] ref_tlb_Anotherread_1_addr;
    wire        ref_tlb_Anotherread_2_valid;
    wire [63:0] ref_tlb_Anotherread_2_addr;
    wire [63:0] ref_now_pc;
    wire [63:0] ref_next_reg_0, ref_next_reg_1, ref_next_reg_2, ref_next_reg_3, ref_next_reg_4;
    wire [63:0] ref_next_reg_5, ref_next_reg_6, ref_next_reg_7, ref_next_reg_8, ref_next_reg_9;
    wire [63:0] ref_next_reg_10, ref_next_reg_11, ref_next_reg_12, ref_next_reg_13, ref_next_reg_14;
    wire [63:0] ref_next_reg_15, ref_next_reg_16, ref_next_reg_17, ref_next_reg_18, ref_next_reg_19;
    wire [63:0] ref_next_reg_20, ref_next_reg_21, ref_next_reg_22, ref_next_reg_23, ref_next_reg_24;
    wire [63:0] ref_next_reg_25, ref_next_reg_26, ref_next_reg_27, ref_next_reg_28, ref_next_reg_29;
    wire [63:0] ref_next_reg_30, ref_next_reg_31;
    wire [63:0] ref_next_csr_misa, ref_next_csr_mvendorid, ref_next_csr_marchid, ref_next_csr_mimpid;
    wire [63:0] ref_next_csr_mhartid, ref_next_csr_mstatus, ref_next_csr_mscratch, ref_next_csr_mtvec;
    wire [63:0] ref_next_csr_mcounteren, ref_next_csr_mip, ref_next_csr_mie, ref_next_csr_mepc;
    wire [63:0] ref_next_csr_mcause, ref_next_csr_mtval;
    wire        ref_event_valid;
    wire [63:0] ref_event_cause;
    wire [63:0] ref_event_exceptionPC;
    wire [63:0] ref_event_exceptionInst;

    // 实例化 DUT (nerv_extended_wrapper)
    nerv_extended_wrapper dut_inst (
        .clock                      (clock),
        .reset                      (reset),
        .stall                      (stall),
        .io_inst                    (io_inst),
        .io_valid                   (io_valid),
        .io_mem_read_data           (io_mem_read_data),
        .io_tlb_Anotherread_0_data  (io_tlb_Anotherread_0_data),
        .io_tlb_Anotherread_1_data  (io_tlb_Anotherread_1_data),
        .io_tlb_Anotherread_2_data  (io_tlb_Anotherread_2_data),
        .irq                        (irq),
        .io_mem_read_valid          (dut_mem_read_valid),
        .io_mem_read_addr           (dut_mem_read_addr),
        .io_mem_read_memWidth       (dut_mem_read_memWidth),
        .io_mem_write_valid         (dut_mem_write_valid),
        .io_mem_write_addr          (dut_mem_write_addr),
        .io_mem_write_memWidth      (dut_mem_write_memWidth),
        .io_mem_write_data          (dut_mem_write_data),
        .io_tlb_Anotherread_0_valid (dut_tlb_Anotherread_0_valid),
        .io_tlb_Anotherread_0_addr  (dut_tlb_Anotherread_0_addr),
        .io_tlb_Anotherread_1_valid (dut_tlb_Anotherread_1_valid),
        .io_tlb_Anotherread_1_addr  (dut_tlb_Anotherread_1_addr),
        .io_tlb_Anotherread_2_valid (dut_tlb_Anotherread_2_valid),
        .io_tlb_Anotherread_2_addr  (dut_tlb_Anotherread_2_addr),
        .io_now_pc                  (dut_now_pc),
        .io_next_reg_0              (dut_next_reg_0),
        .io_next_reg_1              (dut_next_reg_1),
        .io_next_reg_2              (dut_next_reg_2),
        .io_next_reg_3              (dut_next_reg_3),
        .io_next_reg_4              (dut_next_reg_4),
        .io_next_reg_5              (dut_next_reg_5),
        .io_next_reg_6              (dut_next_reg_6),
        .io_next_reg_7              (dut_next_reg_7),
        .io_next_reg_8              (dut_next_reg_8),
        .io_next_reg_9              (dut_next_reg_9),
        .io_next_reg_10             (dut_next_reg_10),
        .io_next_reg_11             (dut_next_reg_11),
        .io_next_reg_12             (dut_next_reg_12),
        .io_next_reg_13             (dut_next_reg_13),
        .io_next_reg_14             (dut_next_reg_14),
        .io_next_reg_15             (dut_next_reg_15),
        .io_next_reg_16             (dut_next_reg_16),
        .io_next_reg_17             (dut_next_reg_17),
        .io_next_reg_18             (dut_next_reg_18),
        .io_next_reg_19             (dut_next_reg_19),
        .io_next_reg_20             (dut_next_reg_20),
        .io_next_reg_21             (dut_next_reg_21),
        .io_next_reg_22             (dut_next_reg_22),
        .io_next_reg_23             (dut_next_reg_23),
        .io_next_reg_24             (dut_next_reg_24),
        .io_next_reg_25             (dut_next_reg_25),
        .io_next_reg_26             (dut_next_reg_26),
        .io_next_reg_27             (dut_next_reg_27),
        .io_next_reg_28             (dut_next_reg_28),
        .io_next_reg_29             (dut_next_reg_29),
        .io_next_reg_30             (dut_next_reg_30),
        .io_next_reg_31             (dut_next_reg_31),
        .io_next_csr_misa           (dut_next_csr_misa),
        .io_next_csr_mvendorid      (dut_next_csr_mvendorid),
        .io_next_csr_marchid        (dut_next_csr_marchid),
        .io_next_csr_mimpid         (dut_next_csr_mimpid),
        .io_next_csr_mhartid        (dut_next_csr_mhartid),
        .io_next_csr_mstatus        (dut_next_csr_mstatus),
        .io_next_csr_mscratch       (dut_next_csr_mscratch),
        .io_next_csr_mtvec          (dut_next_csr_mtvec),
        .io_next_csr_mcounteren     (dut_next_csr_mcounteren),
        .io_next_csr_mip            (dut_next_csr_mip),
        .io_next_csr_mie            (dut_next_csr_mie),
        .io_next_csr_mepc           (dut_next_csr_mepc),
        .io_next_csr_mcause         (dut_next_csr_mcause),
        .io_next_csr_mtval          (dut_next_csr_mtval),
        .io_event_valid             (dut_event_valid),
        .io_event_cause             (dut_event_cause),
        .io_event_exceptionPC       (dut_event_exceptionPC),
        .io_event_exceptionInst     (dut_event_exceptionInst),
        `RVFI_CONN
    );

    // 实例化参考模型 (RiscvCore)
    RiscvCore ref_inst (
        .clock                      (clock),
        .reset                      (reset),
        .io_inst                    (io_inst),
        .io_valid                   (io_valid),
        .io_mem_read_valid          (ref_mem_read_valid),
        .io_mem_read_addr           (ref_mem_read_addr),
        .io_mem_read_memWidth       (ref_mem_read_memWidth),
        .io_mem_read_data           ({{32'b0}, io_mem_read_data}),
        .io_mem_write_valid         (ref_mem_write_valid),
        .io_mem_write_addr          (ref_mem_write_addr),
        .io_mem_write_memWidth      (ref_mem_write_memWidth),
        .io_mem_write_data          (ref_mem_write_data),
        .io_tlb_Anotherread_0_valid (ref_tlb_Anotherread_0_valid),
        .io_tlb_Anotherread_0_addr  (ref_tlb_Anotherread_0_addr),
        .io_tlb_Anotherread_0_data  ({{32'b0}, io_tlb_Anotherread_0_data}),
        .io_tlb_Anotherread_1_valid (ref_tlb_Anotherread_1_valid),
        .io_tlb_Anotherread_1_addr  (ref_tlb_Anotherread_1_addr),
        .io_tlb_Anotherread_1_data  ({{32'b0}, io_tlb_Anotherread_1_data}),
        .io_tlb_Anotherread_2_valid (ref_tlb_Anotherread_2_valid),
        .io_tlb_Anotherread_2_addr  (ref_tlb_Anotherread_2_addr),
        .io_tlb_Anotherread_2_data  ({{32'b0}, io_tlb_Anotherread_2_data}),
        .io_now_pc                  (ref_now_pc),
        .io_next_reg_0              (ref_next_reg_0),
        .io_next_reg_1              (ref_next_reg_1),
        .io_next_reg_2              (ref_next_reg_2),
        .io_next_reg_3              (ref_next_reg_3),
        .io_next_reg_4              (ref_next_reg_4),
        .io_next_reg_5              (ref_next_reg_5),
        .io_next_reg_6              (ref_next_reg_6),
        .io_next_reg_7              (ref_next_reg_7),
        .io_next_reg_8              (ref_next_reg_8),
        .io_next_reg_9              (ref_next_reg_9),
        .io_next_reg_10             (ref_next_reg_10),
        .io_next_reg_11             (ref_next_reg_11),
        .io_next_reg_12             (ref_next_reg_12),
        .io_next_reg_13             (ref_next_reg_13),
        .io_next_reg_14             (ref_next_reg_14),
        .io_next_reg_15             (ref_next_reg_15),
        .io_next_reg_16             (ref_next_reg_16),
        .io_next_reg_17             (ref_next_reg_17),
        .io_next_reg_18             (ref_next_reg_18),
        .io_next_reg_19             (ref_next_reg_19),
        .io_next_reg_20             (ref_next_reg_20),
        .io_next_reg_21             (ref_next_reg_21),
        .io_next_reg_22             (ref_next_reg_22),
        .io_next_reg_23             (ref_next_reg_23),
        .io_next_reg_24             (ref_next_reg_24),
        .io_next_reg_25             (ref_next_reg_25),
        .io_next_reg_26             (ref_next_reg_26),
        .io_next_reg_27             (ref_next_reg_27),
        .io_next_reg_28             (ref_next_reg_28),
        .io_next_reg_29             (ref_next_reg_29),
        .io_next_reg_30             (ref_next_reg_30),
        .io_next_reg_31             (ref_next_reg_31),
        .io_next_csr_misa           (ref_next_csr_misa),
        .io_next_csr_mvendorid      (ref_next_csr_mvendorid),
        .io_next_csr_marchid        (ref_next_csr_marchid),
        .io_next_csr_mimpid         (ref_next_csr_mimpid),
        .io_next_csr_mhartid        (ref_next_csr_mhartid),
        .io_next_csr_mstatus        (ref_next_csr_mstatus),
        .io_next_csr_mscratch       (ref_next_csr_mscratch),
        .io_next_csr_mtvec          (ref_next_csr_mtvec),
        .io_next_csr_mcounteren     (ref_next_csr_mcounteren),
        .io_next_csr_mip            (ref_next_csr_mip),
        .io_next_csr_mie            (ref_next_csr_mie),
        .io_next_csr_mepc           (ref_next_csr_mepc),
        .io_next_csr_mcause         (ref_next_csr_mcause),
        .io_next_csr_mtval          (ref_next_csr_mtval),
        .io_event_valid             (ref_event_valid),
        .io_event_cause             (ref_event_cause),
        .io_event_exceptionPC       (ref_event_exceptionPC),
        .io_event_exceptionInst     (ref_event_exceptionInst)
    );

    // 实例化 Checker
    CheckerWrapper checker_inst (
        .clk                        (clock),
        .dut_mem_read_valid         (dut_mem_read_valid),
        .dut_mem_read_addr          (dut_mem_read_addr),
        .dut_mem_read_memWidth      (dut_mem_read_memWidth),
        .dut_mem_write_valid        (dut_mem_write_valid),
        .dut_mem_write_addr         (dut_mem_write_addr),
        .dut_mem_write_memWidth     (dut_mem_write_memWidth),
        .dut_mem_write_data         (dut_mem_write_data),
        .dut_tlb_Anotherread_0_valid(dut_tlb_Anotherread_0_valid),
        .dut_tlb_Anotherread_0_addr (dut_tlb_Anotherread_0_addr),
        .dut_tlb_Anotherread_1_valid(dut_tlb_Anotherread_1_valid),
        .dut_tlb_Anotherread_1_addr (dut_tlb_Anotherread_1_addr),
        .dut_tlb_Anotherread_2_valid(dut_tlb_Anotherread_2_valid),
        .dut_tlb_Anotherread_2_addr (dut_tlb_Anotherread_2_addr),
        .dut_now_pc                 (dut_now_pc),
        .dut_next_reg_0             (dut_next_reg_0),
        .dut_next_reg_1             (dut_next_reg_1),
        .dut_next_reg_2             (dut_next_reg_2),
        .dut_next_reg_3             (dut_next_reg_3),
        .dut_next_reg_4             (dut_next_reg_4),
        .dut_next_reg_5             (dut_next_reg_5),
        .dut_next_reg_6             (dut_next_reg_6),
        .dut_next_reg_7             (dut_next_reg_7),
        .dut_next_reg_8             (dut_next_reg_8),
        .dut_next_reg_9             (dut_next_reg_9),
        .dut_next_reg_10            (dut_next_reg_10),
        .dut_next_reg_11            (dut_next_reg_11),
        .dut_next_reg_12            (dut_next_reg_12),
        .dut_next_reg_13            (dut_next_reg_13),
        .dut_next_reg_14            (dut_next_reg_14),
        .dut_next_reg_15            (dut_next_reg_15),
        .dut_next_reg_16            (dut_next_reg_16),
        .dut_next_reg_17            (dut_next_reg_17),
        .dut_next_reg_18            (dut_next_reg_18),
        .dut_next_reg_19            (dut_next_reg_19),
        .dut_next_reg_20            (dut_next_reg_20),
        .dut_next_reg_21            (dut_next_reg_21),
        .dut_next_reg_22            (dut_next_reg_22),
        .dut_next_reg_23            (dut_next_reg_23),
        .dut_next_reg_24            (dut_next_reg_24),
        .dut_next_reg_25            (dut_next_reg_25),
        .dut_next_reg_26            (dut_next_reg_26),
        .dut_next_reg_27            (dut_next_reg_27),
        .dut_next_reg_28            (dut_next_reg_28),
        .dut_next_reg_29            (dut_next_reg_29),
        .dut_next_reg_30            (dut_next_reg_30),
        .dut_next_reg_31            (dut_next_reg_31),
        .dut_next_csr_misa          (dut_next_csr_misa),
        .dut_next_csr_mvendorid     (dut_next_csr_mvendorid),
        .dut_next_csr_marchid       (dut_next_csr_marchid),
        .dut_next_csr_mimpid        (dut_next_csr_mimpid),
        .dut_next_csr_mhartid       (dut_next_csr_mhartid),
        .dut_next_csr_mstatus       (dut_next_csr_mstatus),
        .dut_next_csr_mscratch      (dut_next_csr_mscratch),
        .dut_next_csr_mtvec         (dut_next_csr_mtvec),
        .dut_next_csr_mcounteren    (dut_next_csr_mcounteren),
        .dut_next_csr_mip           (dut_next_csr_mip),
        .dut_next_csr_mie           (dut_next_csr_mie),
        .dut_next_csr_mepc          (dut_next_csr_mepc),
        .dut_next_csr_mcause        (dut_next_csr_mcause),
        .dut_next_csr_mtval         (dut_next_csr_mtval),
        .dut_event_valid            (dut_event_valid),
        .dut_event_cause            (dut_event_cause),
        .dut_event_exceptionPC      (dut_event_exceptionPC),
        .dut_event_exceptionInst    (dut_event_exceptionInst),

        .ref_mem_read_valid         (ref_mem_read_valid),
        .ref_mem_read_addr          (ref_mem_read_addr),
        .ref_mem_read_memWidth      (ref_mem_read_memWidth),
        .ref_mem_write_valid        (ref_mem_write_valid),
        .ref_mem_write_addr         (ref_mem_write_addr),
        .ref_mem_write_memWidth     (ref_mem_write_memWidth),
        .ref_mem_write_data         (ref_mem_write_data),
        .ref_tlb_Anotherread_0_valid(ref_tlb_Anotherread_0_valid),
        .ref_tlb_Anotherread_0_addr (ref_tlb_Anotherread_0_addr),
        .ref_tlb_Anotherread_1_valid(ref_tlb_Anotherread_1_valid),
        .ref_tlb_Anotherread_1_addr (ref_tlb_Anotherread_1_addr),
        .ref_tlb_Anotherread_2_valid(ref_tlb_Anotherread_2_valid),
        .ref_tlb_Anotherread_2_addr (ref_tlb_Anotherread_2_addr),
        .ref_now_pc                 (ref_now_pc),
        .ref_next_reg_0             (ref_next_reg_0),
        .ref_next_reg_1             (ref_next_reg_1),
        .ref_next_reg_2             (ref_next_reg_2),
        .ref_next_reg_3             (ref_next_reg_3),
        .ref_next_reg_4             (ref_next_reg_4),
        .ref_next_reg_5             (ref_next_reg_5),
        .ref_next_reg_6             (ref_next_reg_6),
        .ref_next_reg_7             (ref_next_reg_7),
        .ref_next_reg_8             (ref_next_reg_8),
        .ref_next_reg_9             (ref_next_reg_9),
        .ref_next_reg_10            (ref_next_reg_10),
        .ref_next_reg_11            (ref_next_reg_11),
        .ref_next_reg_12            (ref_next_reg_12),
        .ref_next_reg_13            (ref_next_reg_13),
        .ref_next_reg_14            (ref_next_reg_14),
        .ref_next_reg_15            (ref_next_reg_15),
        .ref_next_reg_16            (ref_next_reg_16),
        .ref_next_reg_17            (ref_next_reg_17),
        .ref_next_reg_18            (ref_next_reg_18),
        .ref_next_reg_19            (ref_next_reg_19),
        .ref_next_reg_20            (ref_next_reg_20),
        .ref_next_reg_21            (ref_next_reg_21),
        .ref_next_reg_22            (ref_next_reg_22),
        .ref_next_reg_23            (ref_next_reg_23),
        .ref_next_reg_24            (ref_next_reg_24),
        .ref_next_reg_25            (ref_next_reg_25),
        .ref_next_reg_26            (ref_next_reg_26),
        .ref_next_reg_27            (ref_next_reg_27),
        .ref_next_reg_28            (ref_next_reg_28),
        .ref_next_reg_29            (ref_next_reg_29),
        .ref_next_reg_30            (ref_next_reg_30),
        .ref_next_reg_31            (ref_next_reg_31),
        .ref_next_csr_misa          (ref_next_csr_misa),
        .ref_next_csr_mvendorid     (ref_next_csr_mvendorid),
        .ref_next_csr_marchid       (ref_next_csr_marchid),
        .ref_next_csr_mimpid        (ref_next_csr_mimpid),
        .ref_next_csr_mhartid       (ref_next_csr_mhartid),
        .ref_next_csr_mstatus       (ref_next_csr_mstatus),
        .ref_next_csr_mscratch      (ref_next_csr_mscratch),
        .ref_next_csr_mtvec         (ref_next_csr_mtvec),
        .ref_next_csr_mcounteren    (ref_next_csr_mcounteren),
        .ref_next_csr_mip           (ref_next_csr_mip),
        .ref_next_csr_mie           (ref_next_csr_mie),
        .ref_next_csr_mepc          (ref_next_csr_mepc),
        .ref_next_csr_mcause        (ref_next_csr_mcause),
        .ref_next_csr_mtval         (ref_next_csr_mtval),
        .ref_event_valid            (ref_event_valid),
        .ref_event_cause            (ref_event_cause),
        .ref_event_exceptionPC      (ref_event_exceptionPC),
        .ref_event_exceptionInst    (ref_event_exceptionInst)
    );

    // 公平性约束
    `ifdef NERV_FAIRNESS
    reg [2:0] stalled = 0;
    always @(posedge clock) begin
        stalled <= {stalled, stall};
        assume (~stalled);
    end
    `endif

endmodule