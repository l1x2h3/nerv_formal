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
    

    // 随机输入信号

    // NERV_FAULT 条件下的信号
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

    // 内部信号（从 nerv 引出）
    wire        inst_valid;     // 指令有效
    wire [31:0] inst;           // 当前指令
    wire [31:0] pc;             // 当前 PC
    wire [4:0]  rd_addr;        // 目标寄存器地址
    wire [31:0] rd_wdata;       // 目标寄存器写入数据
    wire        trap;           // 异常信号
    wire [31:0] imem_addr;      // 指令内存地址
    wire        dmem_valid;     // 数据内存访问有效
    wire [31:0] dmem_addr;      // 数据内存地址
    wire [3:0]  dmem_wstrb;     // 数据内存写选通
    wire [31:0] dmem_wdata;     // 数据内存写入数据
    wire [1:0]  mode;           // 特权模式

    // 实例化 nerv 模块
    nerv uut (
        .clock      (clock),
        .reset      (reset),
        .stall      (stall),
        .rvfi_trap       (trap),
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
        // 自定义输出信号（假设 nerv 支持）
        .rvfi_valid (inst_valid),
        .rvfi_insn       (inst),
        .imem_addr         (pc),
        //理论上imem_addr和pc保持一致
        .rvfi_rd_addr    (rd_addr),
        .rvfi_rd_wdata   (rd_wdata),
        .rvfi_mode       (mode)
    );

    // 寄存器文件和 CSR 追踪
    reg [31:0] regfile [0:31];
    reg [31:0] csr_mstatus, csr_misa, csr_mvendorid, csr_marchid, csr_mimpid, csr_mhartid;
    reg [31:0] csr_mtvec, csr_mscratch, csr_mepc, csr_mcause, csr_mtval, csr_mip, csr_mie;
    reg [31:0] csr_mcounteren;

    // 初始化
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1)
            regfile[i] = 32'b0;
        csr_mstatus    = 32'h00001800; // 默认 MPP=11, MIE=0
        csr_misa       = 32'b0;
        csr_mvendorid  = 32'b0;
        csr_marchid    = 32'b0;
        csr_mimpid     = 32'b0;
        csr_mhartid    = 32'b0;
        csr_mtvec      = 32'b0;
        csr_mscratch   = 32'b0;
        csr_mepc       = 32'b0;
        csr_mcause     = 32'b0;
        csr_mtval      = 32'b0;
        csr_mip        = 32'b0;
        csr_mie        = 32'b0;
        csr_mcounteren = 32'b0;
    end

    // 更新寄存器文件和 CSR
    always @(posedge clock) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1)
                regfile[i] <= 32'b0;
            csr_mstatus    <= 32'h00001800;
            csr_misa       <= 32'b0;
            csr_mvendorid  <= 32'b0;
            csr_marchid    <= 32'b0;
            csr_mimpid     <= 32'b0;
            csr_mhartid    <= 32'b0;
            csr_mtvec      <= 32'b0;
            csr_mscratch   <= 32'b0;
            csr_mepc       <= 32'b0;
            csr_mcause     <= 32'b0;
            csr_mtval      <= 32'b0;
            csr_mip        <= 32'b0;
            csr_mie        <= 32'b0;
            csr_mcounteren <= 32'b0;
        end else if (inst_valid && !stall) begin
            if (rd_addr != 5'b0)  // x0 不可写
                regfile[rd_addr] <= rd_wdata;

            // CSR 更新（假设从内存访问中推导，需 nerv 支持）
            if (dmem_valid && dmem_wstrb != 4'b0) begin
                case (dmem_addr)
                    32'h300: csr_mstatus <= dmem_wdata;
                    32'h301: csr_misa    <= dmem_wdata;
                    32'hf11: csr_mvendorid <= dmem_wdata;
                    32'hf12: csr_marchid <= dmem_wdata;
                    32'hf13: csr_mimpid  <= dmem_wdata;
                    32'hf14: csr_mhartid <= dmem_wdata;
                    32'h305: csr_mtvec   <= dmem_wdata;
                    32'h340: csr_mscratch <= dmem_wdata;
                    32'h341: csr_mepc    <= dmem_wdata;
                    32'h342: csr_mcause  <= dmem_wdata;
                    32'h343: csr_mtval   <= dmem_wdata;
                    32'h344: csr_mip     <= dmem_wdata;
                    32'h304: csr_mie     <= dmem_wdata;
                    32'h303: csr_mcounteren <= dmem_wdata;
                endcase
            end
        end
    end

    // 内存访问控制逻辑
    reg isRead, isWrite;
    reg [31:0] addr, wdata;
    reg [6:0] width;
    reg mem_valid;
    reg [31:0] rdata;

    // 参考代码中的 dmem_rdata 处理
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
                    // 写操作
                    isWrite <= 1'b1;
                    isRead  <= 1'b0;
                    addr    <= dmem_addr;
                    wdata   <= dmem_wdata;
                    width   <= (dmem_wstrb == 4'b1111) ? 7'd32 :
                               (dmem_wstrb == 4'b0011 || dmem_wstrb == 4'b1100) ? 7'd16 : 7'd8;
                end else begin
                    // 读操作
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

    // always @(posedge clock) begin
    //     $display("Step: %0d, event_valid: %b, specCore_valid: %b", step, event_valid, specCore.io.event.valid);
    // end

    // 输出信号连接
    assign instCommit_valid = inst_valid;
    assign instCommit_inst  = inst;
    assign instCommit_pc    = pc;
    assign result_reg_0     = 32'b0; // x0 恒为 0
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
    assign result_csr_misa  = csr_misa;
    assign result_csr_mvendorid = csr_mvendorid;
    assign result_csr_marchid = csr_marchid;
    assign result_csr_mimpid  = csr_mimpid;
    assign result_csr_mhartid = csr_mhartid;
    assign result_csr_mstatus = csr_mstatus;
    assign result_csr_mstatush = 32'b0; // 未支持
    assign result_csr_mscratch = csr_mscratch;
    assign result_csr_mtvec   = csr_mtvec;
    assign result_csr_mcounteren = csr_mcounteren;
    assign result_csr_medeleg = 32'b0; // 未支持
    assign result_csr_mideleg = 32'b0; // 未支持
    assign result_csr_mip     = csr_mip;
    assign result_csr_mie     = csr_mie;
    assign result_csr_mepc    = csr_mepc;
    assign result_csr_mcause  = csr_mcause;
    assign result_csr_mtval   = csr_mtval;
    assign result_csr_cycle   = 32'b0; // 未支持
    assign result_csr_scounteren = 32'b0; // 未支持
    assign result_csr_scause  = 32'b0; // 未支持
    assign result_csr_stvec   = 32'b0; // 未支持
    assign result_csr_sepc    = 32'b0; // 未支持
    assign result_csr_stval   = 32'b0; // 未支持
    assign result_csr_sscratch = 32'b0; // 未支持
    assign result_csr_satp    = 32'b0; // 未支持
    assign result_csr_pmpcfg0  = 32'b0; // 未支持
    assign result_csr_pmpcfg1  = 32'b0; // 未支持
    assign result_csr_pmpcfg2  = 32'b0; // 未支持
    assign result_csr_pmpcfg3  = 32'b0; // 未支持
    assign result_csr_pmpaddr0 = 32'b0; // 未支持
    assign result_csr_pmpaddr1 = 32'b0; // 未支持
    assign result_csr_pmpaddr2 = 32'b0; // 未支持
    assign result_csr_pmpaddr3 = 32'b0; // 未支持
    assign result_csr_MXLEN    = 8'd32; // RV32
    assign result_csr_IALIGN   = 8'd32; // 指令对齐 32 位
    assign result_csr_ILEN     = 8'd32; // 指令长度 32 位
    assign result_internal_privilegeMode = mode;
    assign event_valid        = event_valid_reg;
    assign event_intrNO       = uut.irq_num; // 未支持
    //assign event_intrNO       = 32'b0; // 未支持
    assign event_cause        = csr_mcause;
    assign event_exceptionPC  = csr_mepc;
    assign event_exceptionInst = uut.insn;
    assign mem_read_valid     = isRead && mem_valid;
    assign mem_read_addr      = addr;
    assign mem_read_memWidth  = width;
    assign mem_read_data      = rdata;
    assign mem_write_valid    = isWrite && mem_valid;
    assign mem_write_addr     = addr;
    assign mem_write_memWidth = width;
    assign mem_write_data     = wdata;

endmodule