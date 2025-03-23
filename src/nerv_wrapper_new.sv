`define rvformal_rand_reg wire
`define rvformal_rand_const_reg reg

module nerv_extended_wrapper (
    input         clock,
    input         reset,
    // 指令提交信号
    output        instCommit_valid,
    output [31:0] instCommit_inst,
    output [31:0] instCommit_pc,
    // 寄存器文件
    output [31:0] result_reg_0, result_reg_1, result_reg_2, result_reg_3, result_reg_4,
    output [31:0] result_reg_5, result_reg_6, result_reg_7, result_reg_8, result_reg_9,
    output [31:0] result_reg_10, result_reg_11, result_reg_12, result_reg_13, result_reg_14,
    output [31:0] result_reg_15, result_reg_16, result_reg_17, result_reg_18, result_reg_19,
    output [31:0] result_reg_20, result_reg_21, result_reg_22, result_reg_23, result_reg_24,
    output [31:0] result_reg_25, result_reg_26, result_reg_27, result_reg_28, result_reg_29,
    output [31:0] result_reg_30, result_reg_31,
    // PC
    output [31:0] result_pc,
    // CSR 寄存器
    output [31:0] result_csr_misa,
    output [31:0] result_csr_mvendorid,
    output [31:0] result_csr_marchid,
    output [31:0] result_csr_mimpid,
    output [31:0] result_csr_mhartid,
    output [31:0] result_csr_mstatus,
    output [31:0] result_csr_mstatush,
    output [31:0] result_csr_mscratch,
    output [31:0] result_csr_mtvec,
    output [31:0] result_csr_mcounteren,
    output [31:0] result_csr_medeleg,
    output [31:0] result_csr_mideleg,
    output [31:0] result_csr_mip,
    output [31:0] result_csr_mie,
    output [31:0] result_csr_mepc,
    output [31:0] result_csr_mcause,
    output [31:0] result_csr_mtval,
    output [31:0] result_csr_cycle,
    output [31:0] result_csr_scounteren,
    output [31:0] result_csr_scause,
    output [31:0] result_csr_stvec,
    output [31:0] result_csr_sepc,
    output [31:0] result_csr_stval,
    output [31:0] result_csr_sscratch,
    output [31:0] result_csr_satp,
    output [31:0] result_csr_pmpcfg0,
    output [31:0] result_csr_pmpcfg1,
    output [31:0] result_csr_pmpcfg2,
    output [31:0] result_csr_pmpcfg3,
    output [31:0] result_csr_pmpaddr0,
    output [31:0] result_csr_pmpaddr1,
    output [31:0] result_csr_pmpaddr2,
    output [31:0] result_csr_pmpaddr3,
    output [7:0]  result_csr_MXLEN,
    output [7:0]  result_csr_IALIGN,
    output [7:0]  result_csr_ILEN,
    output [1:0]  result_internal_privilegeMode,
    // 事件信号
    output        event_valid,
    output [31:0] event_intrNO,
    output [31:0] event_cause,
    output [31:0] event_exceptionPC,
    output [31:0] event_exceptionInst,
    // 内存访问信号
    output        mem_read_valid,
    output [31:0] mem_read_addr,
    output [6:0]  mem_read_memWidth,
    output [31:0] mem_read_data,
    output        mem_write_valid,
    output [31:0] mem_write_addr,
    output [6:0]  mem_write_memWidth,
    output [31:0] mem_write_data,
    // 数据内存读取数据
    output [31:0] dmem_rdata
);
    (* keep *) `rvformal_rand_reg stall;
    (* keep *) `rvformal_rand_reg [31:0] imem_data;
    (* keep *) `rvformal_rand_reg [31:0] dmem_rdata;
    (* keep *) `rvformal_rand_reg [31:0] irq;

    `ifdef NERV_FAULT
        (* keep *) reg imem_fault;
        (* keep *) reg dmem_fault;
    `else
        wire imem_fault = 0;
        wire dmem_fault = 0;
    `endif

    initial begin
        assume (reset == 1'b1);
    end

    // 内部信号
    wire        inst_valid;
    wire [31:0] inst;
    wire [31:0] pc;
    wire [4:0]  rd_addr;
    wire [31:0] rd_wdata;
    wire        trap;
    wire [31:0] imem_addr;
    wire        dmem_valid;
    wire [31:0] dmem_addr;
    wire [3:0]  dmem_wstrb;
    wire [31:0] dmem_wdata;
    wire [1:0]  mode;

    // CSR 输出信号（从 nerv 模块中直接获取）
    // wire [31:0] csr_mstatus_value;
    // wire [31:0] csr_misa_value;
    // wire [31:0] csr_mvendorid_value;
    // wire [31:0] csr_marchid_value;
    // wire [31:0] csr_mimpid_value;
    // wire [31:0] csr_mhartid_value;
    // wire [31:0] csr_mstatush_value;
    // wire [31:0] csr_mscratch_value;
    // wire [31:0] csr_mtvec_value;
    // wire [31:0] csr_mip_value;
    // wire [31:0] csr_mie_value;
    // wire [31:0] csr_mepc_value;
    // wire [31:0] csr_mcause_value;
    // wire [31:0] csr_mtval_value;
    // wire [31:0] csr_mcycle_value;
    //wire [4:0]  irq_num;

    // 实例化 nerv 模块
    nerv uut (
        .clock      (clock),
        .reset      (reset),
        .stall      (stall),
        .rvfi_trap  (trap),
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
        .rvfi_valid (inst_valid),
        .rvfi_insn  (inst),
        .rvfi_pc_rdata (pc),
        .rvfi_rd_addr (rd_addr),
        .rvfi_rd_wdata (rd_wdata),
        .rvfi_mode  (mode),
        // CSR 输出（直接连接到内部信号）
        // .csr_mstatus_value  (csr_mstatus_value),
        // .csr_misa_value     (csr_misa_value),
        // .csr_mvendorid_value(csr_mvendorid_value),
        // .csr_marchid_value  (csr_marchid_value),
        // .csr_mimpid_value   (csr_mimpid_value),
        // .csr_mhartid_value  (csr_mhartid_value),
        // .csr_mstatush_value (csr_mstatush_value),
        // .csr_mscratch_value (csr_mscratch_value),
        // .csr_mtvec_value    (csr_mtvec_value),
        // .csr_mip_value      (csr_mip_value),
        // .csr_mie_value      (csr_mie_value),
        // .csr_mepc_value     (csr_mepc_value),
        // .csr_mcause_value   (csr_mcause_value),
        // .csr_mtval_value    (csr_mtval_value),
        // .csr_mcycle_value   (csr_mcycle_value),
    );

    // 寄存器文件
    reg [31:0] regfile [0:31];
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1)
            regfile[i] = 32'b0;
    end

    always @(posedge clock) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1)
                regfile[i] <= 32'b0;
        end else if (inst_valid && !stall && rd_addr != 5'b0) begin
            regfile[rd_addr] <= rd_wdata;
        end
    end

    // 内存访问控制逻辑
    reg isRead, isWrite;
    reg [31:0] addr, wdata;
    reg [6:0] width;
    reg mem_valid;
    reg [31:0] rdata;

    (* keep *) `rvformal_rand_reg [31:0] next_dmem_rdata;
    reg [31:0] next_dmem_rdata_q;

    always @(posedge clock) begin
        if (!stall) begin
            next_dmem_rdata_q <= next_dmem_rdata;
        end
    end

    always @* begin
        if (!stall) begin
            assume (dmem_rdata == next_dmem_rdata_q);
        end
    end

    always @(posedge clock) begin
        if (reset) begin
            isRead    <= 1'b0;
            isWrite   <= 1'b0;
            addr      <= 32'b0;
            wdata     <= 32'b0;
            width     <= 7'b0;
            mem_valid <= 1'b0;
            rdata     <= 32'b0;
        end else if (!stall) begin
            if (dmem_valid) begin
                if (dmem_wstrb != 4'b0) begin
                    isWrite <= 1'b1;
                    isRead  <= 1'b0;
                    addr    <= dmem_addr;
                    wdata   <= dmem_wdata;
                    width   <= (dmem_wstrb == 4'b1111) ? 7'd32 :
                               (dmem_wstrb == 4'b0011 || dmem_wstrb == 4'b1100) ? 7'd16 : 7'd8;
                end else begin
                    isRead  <= 1'b1;
                    isWrite <= 1'b0;
                    addr    <= dmem_addr;
                    width   <= 7'd32;
                    rdata   <= dmem_rdata;
                end
                mem_valid <= 1'b1;
            end else begin
                isRead    <= 1'b0;
                isWrite   <= 1'b0;
                mem_valid <= 1'b0;
            end
        end
    end

    reg event_valid_reg;
    always @(posedge clock) begin
        if (reset) begin
            event_valid_reg <= 0;
        end else begin
            event_valid_reg <= 0;
        end
    end

    // 输出信号连接
    assign instCommit_valid = inst_valid;
    assign instCommit_inst  = inst;
    assign instCommit_pc    = pc;
    assign result_reg_0     = 32'b0;
    assign result_reg_1     = regfile[1];
    assign result_reg_2     = regfile[2];
    assign result_reg_3     = regfile[3];
    assign result_reg_4     = regfile[4];
    assign result_reg_5     = regfile[5];
    assign result_reg_6     = regfile[6];
    assign result_reg_7     = regfile[7];
    assign result_reg_8     = regfile[8];
    assign result_reg_9     = regfile[9];
    assign result_reg_10    = regfile[10];
    assign result_reg_11    = regfile[11];
    assign result_reg_12    = regfile[12];
    assign result_reg_13    = regfile[13];
    assign result_reg_14    = regfile[14];
    assign result_reg_15    = regfile[15];
    assign result_reg_16    = regfile[16];
    assign result_reg_17    = regfile[17];
    assign result_reg_18    = regfile[18];
    assign result_reg_19    = regfile[19];
    assign result_reg_20    = regfile[20];
    assign result_reg_21    = regfile[21];
    assign result_reg_22    = regfile[22];
    assign result_reg_23    = regfile[23];
    assign result_reg_24    = regfile[24];
    assign result_reg_25    = regfile[25];
    assign result_reg_26    = regfile[26];
    assign result_reg_27    = regfile[27];
    assign result_reg_28    = regfile[28];
    assign result_reg_29    = regfile[29];
    assign result_reg_30    = regfile[30];
    assign result_reg_31    = regfile[31];
    assign result_pc        = pc;
    assign result_csr_misa  = uut.csr_misa_value;
    assign result_csr_mvendorid = uut.csr_mvendorid_value;
    assign result_csr_marchid = uut.csr_marchid_value;
    assign result_csr_mimpid  = uut.csr_mimpid_value;
    assign result_csr_mhartid = uut.csr_mhartid_value;
    assign result_csr_mstatus = uut.csr_mstatus_value;
    assign result_csr_mstatush = uut.csr_mstatush_value;
    assign result_csr_mscratch = uut.csr_mscratch_value;
    assign result_csr_mtvec   = uut.csr_mtvec_value;
    assign result_csr_mcounteren = 32'b0; // 未实现
    assign result_csr_medeleg = 32'b0; // 未实现
    assign result_csr_mideleg = 32'b0; // 未实现
    assign result_csr_mip     = uut.csr_mip_next;
    assign result_csr_mie     = uut.csr_mie_value;
    assign result_csr_mepc    = uut.csr_mepc_value;
    assign result_csr_mcause  = uut.csr_mcause_value;
    assign result_csr_mtval   = uut.csr_mtval_value;
    assign result_csr_cycle   = uut.csr_mcycle_value;
    assign result_csr_scounteren = 32'b0; // 未实现
    assign result_csr_scause  = 32'b0; // 未实现
    assign result_csr_stvec   = 32'b0; // 未实现
    assign result_csr_sepc    = 32'b0; // 未实现
    assign result_csr_stval   = 32'b0; // 未实现
    assign result_csr_sscratch = 32'b0; // 未实现
    assign result_csr_satp    = 32'b0; // 未实现
    assign result_csr_pmpcfg0  = 32'b0; // 未实现 PMP
    assign result_csr_pmpcfg1  = 32'b0;
    assign result_csr_pmpcfg2  = 32'b0;
    assign result_csr_pmpcfg3  = 32'b0;
    assign result_csr_pmpaddr0 = 32'b0;
    assign result_csr_pmpaddr1 = 32'b0;
    assign result_csr_pmpaddr2 = 32'b0;
    assign result_csr_pmpaddr3 = 32'b0;
    assign result_csr_MXLEN    = 8'd32;
    assign result_csr_IALIGN   = 8'd32;
    assign result_csr_ILEN     = 8'd32;
    assign result_internal_privilegeMode = mode;
    assign event_valid        = 32'b0;
    assign event_intrNO       = 32'b0;
    assign event_cause        = csr_mcause_value;
    assign event_exceptionPC  = csr_mepc_value;
    assign event_exceptionInst = inst;
    assign mem_read_valid     = isRead && mem_valid;
    assign mem_read_addr      = addr;
    assign mem_read_memWidth  = width;
    assign mem_read_data      = rdata;
    assign mem_write_valid    = isWrite && mem_valid;
    assign mem_write_addr     = addr;
    assign mem_write_memWidth = width;
    assign mem_write_data     = wdata;
endmodule