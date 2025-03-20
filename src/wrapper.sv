module rvfi_wrapper (
    input         clock,
    input         reset,
    // RVFI 输出信号（32 位处理器）
    output        rvfi_valid,
    output [63:0] rvfi_order,
    output [31:0] rvfi_insn,
    output        rvfi_trap,
    output        rvfi_halt,
    output        rvfi_intr,
    output [1:0]  rvfi_mode,
    output [1:0]  rvfi_ixl,
    output [4:0]  rvfi_rs1_addr,
    output [4:0]  rvfi_rs2_addr,
    output [31:0] rvfi_rs1_rdata,
    output [31:0] rvfi_rs2_rdata,
    output [4:0]  rvfi_rd_addr,
    output [31:0] rvfi_rd_wdata,
    output [31:0] rvfi_pc_rdata,
    output [31:0] rvfi_pc_wdata,
    output [31:0] rvfi_mem_addr,
    output [3:0]  rvfi_mem_rmask,
    output [3:0]  rvfi_mem_wmask,
    output [31:0] rvfi_mem_rdata,
    output [31:0] rvfi_mem_wdata,
    // RVFI Bus 输出信号（假设两个通道：imem 和 dmem）
    output [31:0] rvfi_bus_addr,    // 总线地址
    output        rvfi_bus_insn,    // 是否为指令访问
    output        rvfi_bus_data,    // 是否为数据访问
    output [3:0]  rvfi_bus_rmask,   // 读掩码
    output [3:0]  rvfi_bus_wmask,   // 写掩码
    output [31:0] rvfi_bus_rdata,   // 读数据
    output [31:0] rvfi_bus_wdata,   // 写数据
    output        rvfi_bus_fault,   // 故障信号
    output        rvfi_bus_valid,    // 总线有效信号
    output [31:0] dmem_rdata
);

    // 随机输入信号（替换 `rvformal_rand_reg`）
    (* keep *) reg        stall;
    (* keep *) reg [31:0] imem_data;
    // (* keep *) reg [31:0] dmem_rdata;
    (* keep *) reg [31:0] irq;

    // NERV_FAULT 条件下的信号
    `ifdef NERV_FAULT
        (* keep *) reg imem_fault;
        (* keep *) reg dmem_fault;
    `else
        wire imem_fault = 0;
        wire dmem_fault = 0;
    `endif

    // 内部信号
    (* keep *) wire trap;
    (* keep *) wire [31:0] imem_addr;
    (* keep *) wire        dmem_valid;
    (* keep *) wire [31:0] dmem_addr;
    (* keep *) wire [3:0]  dmem_wstrb;
    (* keep *) wire [31:0] dmem_wdata;

    // 实例化 nerv 模块
    nerv uut (
        .clock      (clock),
        .reset      (reset),
        .stall      (stall),
        .trap       (trap),
        .imem_addr  (imem_addr),
        .imem_data  (imem_data),
        .dmem_valid (dmem_valid),
        .dmem_addr  (dmem_addr),
        .dmem_wstrb (dmem_wstrb),
        .dmem_wdata (dmem_wdata),
        .dmem_rdata (dmem_rdata),
        `ifdef NERV_FAULT
            .imem_fault (imem_fault),
            .dmem_fault (dmem_fault),
        `endif
        .irq        (irq),
        // RVFI 连接（32 位）
        .rvfi_valid     (rvfi_valid),
        .rvfi_order     (rvfi_order),
        .rvfi_insn      (rvfi_insn),
        .rvfi_trap      (rvfi_trap),
        .rvfi_halt      (rvfi_halt),
        .rvfi_intr      (rvfi_intr),
        .rvfi_mode      (rvfi_mode),
        .rvfi_ixl       (rvfi_ixl),
        .rvfi_rs1_addr  (rvfi_rs1_addr),
        .rvfi_rs2_addr  (rvfi_rs2_addr),
        .rvfi_rs1_rdata (rvfi_rs1_rdata),
        .rvfi_rs2_rdata (rvfi_rs2_rdata),
        .rvfi_rd_addr   (rvfi_rd_addr),
        .rvfi_rd_wdata  (rvfi_rd_wdata),
        .rvfi_pc_rdata  (rvfi_pc_rdata),
        .rvfi_pc_wdata  (rvfi_pc_wdata),
        .rvfi_mem_addr  (rvfi_mem_addr),
        .rvfi_mem_rmask (rvfi_mem_rmask),
        .rvfi_mem_wmask (rvfi_mem_wmask),
        .rvfi_mem_rdata (rvfi_mem_rdata),
        .rvfi_mem_wdata (rvfi_mem_wdata)
    );

    // RISCV_FORMAL_BUS 条件下的总线逻辑
    `ifdef RISCV_FORMAL_BUS
        // imem 总线信号（通道 0）
        (* keep *) reg [31:0] imem_bus_addr;
        (* keep *) reg        imem_bus_insn;
        (* keep *) reg        imem_bus_data;
        (* keep *) reg [3:0]  imem_bus_rmask;
        (* keep *) reg [3:0]  imem_bus_wmask;
        (* keep *) reg [31:0] imem_bus_rdata;
        (* keep *) reg [31:0] imem_bus_wdata;
        (* keep *) reg        imem_bus_fault;
        (* keep *) reg        imem_bus_valid;

        // dmem 总线信号（通道 1）
        (* keep *) reg [31:0] dmem_bus_addr;
        (* keep *) reg        dmem_bus_insn;
        (* keep *) reg        dmem_bus_data;
        (* keep *) reg [3:0]  dmem_bus_rmask;
        (* keep *) reg [3:0]  dmem_bus_wmask;
        (* keep *) reg [31:0] dmem_bus_rdata;
        (* keep *) reg [31:0] dmem_bus_wdata;
        (* keep *) reg        dmem_bus_fault;
        (* keep *) reg        dmem_bus_valid;

        // 连接到 rvfi_bus 输出（简化为一组信号）
        assign rvfi_bus_addr  = dmem_bus_valid ? dmem_bus_addr  : imem_bus_addr;
        assign rvfi_bus_insn  = dmem_bus_valid ? dmem_bus_insn  : imem_bus_insn;
        assign rvfi_bus_data  = dmem_bus_valid ? dmem_bus_data  : imem_bus_data;
        assign rvfi_bus_rmask = dmem_bus_valid ? dmem_bus_rmask : imem_bus_rmask;
        assign rvfi_bus_wmask = dmem_bus_valid ? dmem_bus_wmask : imem_bus_wmask;
        assign rvfi_bus_rdata = dmem_bus_valid ? dmem_bus_rdata : imem_bus_rdata;
        assign rvfi_bus_wdata = dmem_bus_valid ? dmem_bus_wdata : imem_bus_wdata;
        assign rvfi_bus_fault = dmem_bus_valid ? dmem_bus_fault : imem_bus_fault;
        assign rvfi_bus_valid = dmem_bus_valid || imem_bus_valid;

        reg [31:0] imem_addr_q;

        always @(posedge clock) begin
            if (!stall)
                imem_addr_q <= imem_addr;
        end

        always @* begin
            imem_bus_addr  = imem_addr_q;
            imem_bus_insn  = 1;
            imem_bus_data  = 0;
            imem_bus_rmask = 4'b1111;
            imem_bus_wmask = 4'b0000;
            imem_bus_rdata = imem_data;
            imem_bus_wdata = 0;
            imem_bus_fault = imem_fault;
            imem_bus_valid = !stall;
        end

        reg        dmem_valid_q;
        reg [31:0] dmem_addr_q;
        reg [3:0]  dmem_wstrb_q;
        reg [31:0] dmem_wdata_q;

        (* keep *) reg [31:0] next_dmem_rdata;
        reg [31:0] next_dmem_rdata_q;

        `ifdef NERV_FAULT
            (* keep *) reg [31:0] next_dmem_fault;
            reg [31:0] next_dmem_fault_q;
        `endif

        always @(posedge clock) begin
            if (!stall) begin
                next_dmem_rdata_q <= next_dmem_rdata;
                `ifdef NERV_FAULT
                    next_dmem_fault_q <= next_dmem_fault;
                `endif
            end
        end

        always @* begin
            if (!stall) begin
                assume (dmem_rdata == next_dmem_rdata_q);
                `ifdef NERV_FAULT
                    assume (dmem_fault == next_dmem_fault_q);
                `endif
            end
            dmem_bus_addr  = dmem_addr;
            dmem_bus_insn  = 0;
            dmem_bus_data  = 1;
            dmem_bus_rmask = dmem_wstrb ? 4'b0000 : 4'b1111;
            dmem_bus_wmask = dmem_wstrb;
            dmem_bus_rdata = next_dmem_rdata;
            dmem_bus_wdata = dmem_wdata;
            `ifdef NERV_FAULT
                dmem_bus_fault = next_dmem_fault;
            `else
                dmem_bus_fault = 0;
            `endif
            dmem_bus_valid = !stall && dmem_valid;
        end
    `else
        // 如果未定义 RISCV_FORMAL_BUS，则将总线信号置为默认值
        assign rvfi_bus_addr  = 32'b0;
        assign rvfi_bus_insn  = 1'b0;
        assign rvfi_bus_data  = 1'b0;
        assign rvfi_bus_rmask = 4'b0;
        assign rvfi_bus_wmask = 4'b0;
        assign rvfi_bus_rdata = 32'b0;
        assign rvfi_bus_wdata = 32'b0;
        assign rvfi_bus_fault = 1'b0;
        assign rvfi_bus_valid = 1'b0;
    `endif

    // NERV_FAIRNESS 条件下的公平性约束
    `ifdef NERV_FAIRNESS
        reg [2:0] stalled = 0;
        always @(posedge clock) begin
            stalled <= {stalled, stall};
            assume (~stalled);
        end
    `endif

endmodule