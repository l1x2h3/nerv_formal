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


module nerv_extended_wrapper (
    input         clock,
    input         reset,
    input [31:0]  imem_data,
    // 指令提交信号
    output        instCommit_valid,
    output [31:0] instCommit_inst,
    output [31:0] instCommit_pc,
    // 寄存器文件
    output reg [31:0] result_reg_0, result_reg_1, result_reg_2, result_reg_3, result_reg_4,
    output reg [31:0] result_reg_5, result_reg_6, result_reg_7, result_reg_8, result_reg_9,
    output reg [31:0] result_reg_10, result_reg_11, result_reg_12, result_reg_13, result_reg_14,
    output reg [31:0] result_reg_15, result_reg_16, result_reg_17, result_reg_18, result_reg_19,
    output reg [31:0] result_reg_20, result_reg_21, result_reg_22, result_reg_23, result_reg_24,
    output reg [31:0] result_reg_25, result_reg_26, result_reg_27, result_reg_28, result_reg_29,
    output reg [31:0] result_reg_30, result_reg_31,
    // PC
    output [31:0] result_pc,
    // CSR 寄存器
    output reg [31:0] result_csr_misa,
    output reg [31:0] result_csr_mvendorid,
    output reg [31:0] result_csr_marchid,
    output reg [31:0] result_csr_mimpid,
    output reg [31:0] result_csr_mhartid,
    output reg [31:0] result_csr_mstatus,
    output reg [31:0] result_csr_mstatush,
    output reg [31:0] result_csr_mscratch,
    output reg [31:0] result_csr_mtvec,
    output reg [31:0] result_csr_mcounteren,
    output reg [31:0] result_csr_medeleg,
    output reg [31:0] result_csr_mideleg,
    output reg [31:0] result_csr_mip,
    output reg [31:0] result_csr_mie,
    output reg [31:0] result_csr_mepc,
    output reg [31:0] result_csr_mcause,
    output reg [31:0] result_csr_mtval,
    output reg [31:0] result_csr_cycle,
    output reg [31:0] result_csr_scounteren,
    output reg [31:0] result_csr_scause,
    output reg [31:0] result_csr_stvec,
    output reg [31:0] result_csr_sepc,
    output reg [31:0] result_csr_stval,
    output reg [31:0] result_csr_sscratch,
    output reg [31:0] result_csr_satp,
    output reg [31:0] result_csr_pmpcfg0,
    output reg [31:0] result_csr_pmpcfg1,
    output reg [31:0] result_csr_pmpcfg2,
    output reg [31:0] result_csr_pmpcfg3,
    output reg [31:0] result_csr_pmpaddr0,
    output reg [31:0] result_csr_pmpaddr1,
    output reg [31:0] result_csr_pmpaddr2,
    output reg [31:0] result_csr_pmpaddr3,
    output reg [7:0]  result_csr_MXLEN,
    output reg [7:0]  result_csr_IALIGN,
    output reg [7:0]  result_csr_ILEN,
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
    output [5:0]  mem_read_memWidth,
    output [31:0] mem_read_data,
    output        mem_write_valid,
    output [31:0] mem_write_addr,
    output [5:0]  mem_write_memWidth,
    output [31:0] mem_write_data
);
    (* keep *) `rvformal_rand_reg stall;
    //(* keep *) `rvformal_rand_reg [31:0] imem_data;
    (* keep *) `rvformal_rand_reg [31:0] dmem_rdata;
    (* keep *) `rvformal_rand_reg [31:0] irq;

    // NERV_FAULT 条件下的信号
    `ifdef NERV_FAULT
        (* keep *) reg imem_fault;
        (* keep *) reg dmem_fault;
    `else
        wire imem_fault = 0;
        wire dmem_fault = 0;
    `endif

    // 定义指令的掩码和匹配值
    wire [31:0] add_pattern  = 32'b0000000_xxxxx_xxxxx_000_xxxxx_0110011;
    wire [31:0] add_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] sub_pattern  = 32'b0100000_xxxxx_xxxxx_000_xxxxx_0110011;
    wire [31:0] sub_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] sll_pattern  = 32'b0000000_xxxxx_xxxxx_001_xxxxx_0110011;
    wire [31:0] sll_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] slt_pattern  = 32'b0000000_xxxxx_xxxxx_010_xxxxx_0110011;
    wire [31:0] slt_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] sltu_pattern = 32'b0000000_xxxxx_xxxxx_011_xxxxx_0110011;
    wire [31:0] sltu_mask    = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] xor_pattern  = 32'b0000000_xxxxx_xxxxx_100_xxxxx_0110011;
    wire [31:0] xor_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] srl_pattern  = 32'b0000000_xxxxx_xxxxx_101_xxxxx_0110011;
    wire [31:0] srl_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] sra_pattern  = 32'b0100000_xxxxx_xxxxx_101_xxxxx_0110011;
    wire [31:0] sra_mask     = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] or_pattern   = 32'b0000000_xxxxx_xxxxx_110_xxxxx_0110011;
    wire [31:0] or_mask      = 32'b1111111_00000_00000_111_00000_1111111;
    wire [31:0] and_pattern  = 32'b0000000_xxxxx_xxxxx_111_xxxxx_0110011;
    wire [31:0] and_mask     = 32'b1111111_00000_00000_111_00000_1111111;


    initial begin
        assume (reset == 1'b1);
    end

    always @(posedge clk) begin
        assume (
            ((imem_data & add_mask) == (add_pattern & add_mask)) || // ADD
            ((imem_data & sub_mask) == (sub_pattern & sub_mask)) || // SUB
            ((imem_data & sll_mask) == (sll_pattern & sll_mask)) || // SLL
            ((imem_data & slt_mask) == (slt_pattern & slt_mask)) || // SLT
            ((imem_data & sltu_mask) == (sltu_pattern & sltu_mask)) || // SLTU
            ((imem_data & xor_mask) == (xor_pattern & xor_mask)) || // XOR
            ((imem_data & srl_mask) == (srl_pattern & srl_mask)) || // SRL
            ((imem_data & sra_mask) == (sra_pattern & sra_mask)) || // SRA
            ((imem_data & or_mask) == (or_pattern & or_mask)) ||   // OR
            ((imem_data & and_mask) == (and_pattern & and_mask))   // AND
        );
    end

    // 内部信号（从 nerv 引出）
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
    wire [3:0]  rvfi_mem_rmask;
    wire [3:0]  rvfi_mem_wmask;

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
        .irq        (irq),
        .rvfi_valid (inst_valid),
        .rvfi_insn  (inst),
        .imem_addr  (pc),
        .rvfi_rd_addr (rd_addr),
        .rvfi_rd_wdata (rd_wdata),
        .rvfi_mode  (mode),
        .rvfi_mem_rmask (rvfi_mem_rmask),
        .rvfi_mem_wmask (rvfi_mem_wmask),
        .rvfi_csr_mvendorid_rdata (result_csr_mvendorid),
        .rvfi_csr_marchid_rdata (result_csr_marchid),
        .rvfi_csr_mimpid_rdata (result_csr_mimpid),
        .rvfi_csr_mhartid_rdata (result_csr_mhartid),
        .rvfi_csr_mscratch_rdata (result_csr_mscratch),
        .rvfi_csr_mtvec_rdata (result_csr_mtvec),
        //需要在用户态中开启
        .rvfi_csr_mcounteren_rdata (result_csr_mcounteren),
        // .rvfi_csr_medeleg_rdata (result_csr_medeleg),
        // .rvfi_csr_mideleg_rdata (result_csr_mideleg),
        //.rvfi_csr_mip_rdata (result_csr_mip),
        //.rvfi_csr_mie_rdata (result_csr_mie),
        .rvfi_csr_mtval_rdata (result_csr_mtval),
        .rvfi_csr_mepc_rdata (result_csr_mepc),
        //.rvfi_csr_mepc_rdata (event_exceptionPC),
    );

    // 寄存器文件和 CSR 追踪
    reg [31:0] regfile [0:31];
    reg [31:0] csr_mstatus, csr_misa, csr_mvendorid, csr_marchid, csr_mimpid, csr_mhartid;
    reg [31:0] csr_mtvec, csr_mscratch, csr_mepc, csr_m , csr_mtval, csr_mip, csr_mie;
    reg [31:0] csr_mcounteren;

    reg [1:0] cycle_count;

    always @(posedge clock) begin
        if (reset) begin
            cycle_count <= 2'b00;
        end else if (!stall) begin
            cycle_count <= (cycle_count == 2'b10) ? 2'b00 : cycle_count + 1;
        end
    end

    integer i;
    // 内存访问控制逻辑 
    reg mem_read_valid_reg;
    reg mem_write_valid_reg;
    reg [31:0] mem_addr_reg;
    reg [31:0] mem_data_reg;

    // 内存访问宽度计算函数
    function [5:0] get_mem_width;
        input [3:0] mask;
        begin
            case (mask)
                4'b0001: get_mem_width = 6'd8;    // 字节访问
                4'b0011: get_mem_width = 6'd16;   // 半字访问
                4'b1111: get_mem_width = 6'd32;   // 字访问
                default: get_mem_width = 6'd0;     // 无效访问
            endcase
        end
    endfunction

    reg [3:0] captured_rmask;
    reg [3:0] captured_wstrb;

    always @(posedge clock) begin
        if (reset) begin
            mem_read_valid_reg <= 1'b0;
            mem_write_valid_reg <= 1'b0;
            mem_addr_reg <= 32'b0;
            mem_data_reg <= 32'b0;
            captured_rmask <= 4'b0;
            captured_wstrb <= 4'b0;
        end else if (!stall && cycle_count == 2'b10) begin
            //mem_read_valid_reg <= dmem_valid && (dmem_wstrb == 4'b0);   //wstrb写使能信号，标记可以写入的位置
            mem_read_valid_reg <= dmem_valid;
            mem_write_valid_reg <= dmem_valid && (dmem_wstrb != 4'b0);
            mem_addr_reg <= dmem_addr;
            mem_data_reg <= dmem_wstrb != 4'b0 ? dmem_wdata : dmem_rdata;
            
            // Capture the masks at the same time as other signals
            captured_rmask <= rvfi_mem_rmask;
            captured_wstrb <= dmem_wstrb;
        end
    end

    // Calculate widths using captured masks
    wire [5:0] current_read_width = get_mem_width(captured_rmask);
    wire [5:0] current_write_width = get_mem_width(captured_wstrb);


    // 事件信号处理
    reg event_valid_reg;
    always @(posedge clock) begin
        if (reset) begin
            event_valid_reg <= 0;
            result_csr_mstatus <= 32'b0;
            result_csr_mstatush <= 32'b0;
            result_csr_mip <= 32'b0;
            result_csr_mie <= 32'b0;
        end else if(cycle_count == 2'b10) begin
            event_valid_reg <= ~((trap || (irq != 0)) && inst_valid);
            // result_csr_mstatus <= uut.rvfi_csr_mstatus_rdata;
            // result_csr_mstatush <= uut.rvfi_csr_mstatush_rdata;
            result_csr_mstatus <= 32'b0;
            result_csr_mstatush <= 32'b0;
            // result_csr_mip <= uut.rvfi_csr_mip_rdata;
            // result_csr_mie <= uut.rvfi_csr_mie_rdata;
            result_csr_mip <= 32'b0;
            result_csr_mie <= 32'b0;
        end
    end

    reg [31:0] shadow_regfile [0:31]; // 同步用寄存器
    reg [31:0] shadow_regfile_before [0:31]; // 下一周期值
    
    always @(posedge clock) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                shadow_regfile_before[i] <= 32'b0;
            end
        end else if (!stall && cycle_count == 2'b10 && inst_valid) begin
            for (i = 0; i < 32; i = i + 1) begin
                //shadow_regfile_before[i] <= uut.regfile[i];
                shadow_regfile_before[i] <= 32'b0;
            end
        end
    end
    
    // 时序逻辑更新寄存器
    always @(posedge clock) begin 
        for(i = 0; i < 32; i = i + 1) begin
            if (reset) begin
                shadow_regfile[i] <= 32'b0;
            end else if (!stall) begin
                shadow_regfile[i] <= shadow_regfile_before[i];
            end
        end
    end


    // 输出信号连接
    assign instCommit_valid = (!stall && cycle_count == 2'b10 && inst_valid);
    assign instCommit_inst  = inst;
    always @(posedge clock) begin 
        if(cycle_count == 2'b10) begin
            instCommit_pc    <= pc;
            result_pc        <= pc;
        end
    end
    
    assign result_reg_0 = 32'b0;
    assign result_reg_1 = shadow_regfile[1];
    assign result_reg_2 = shadow_regfile[2];
    assign result_reg_3 = shadow_regfile[3];
    assign result_reg_4 = shadow_regfile[4];
    assign result_reg_5 = shadow_regfile[5];
    assign result_reg_6 = shadow_regfile[6];
    assign result_reg_7 = shadow_regfile[7];
    assign result_reg_8 = shadow_regfile[8];
    assign result_reg_9 = shadow_regfile[9];
    assign result_reg_10 = shadow_regfile[10];
    assign result_reg_11 = shadow_regfile[11];
    assign result_reg_12 = shadow_regfile[12];
    assign result_reg_13 = shadow_regfile[13];
    assign result_reg_14 = shadow_regfile[14];
    assign result_reg_15 = shadow_regfile[15];
    assign result_reg_16 = shadow_regfile[16];
    assign result_reg_17 = shadow_regfile[17];
    assign result_reg_18 = shadow_regfile[18];
    assign result_reg_19 = shadow_regfile[19];
    assign result_reg_20 = shadow_regfile[20];
    assign result_reg_21 = shadow_regfile[21];
    assign result_reg_22 = shadow_regfile[22];
    assign result_reg_23 = shadow_regfile[23];
    assign result_reg_24 = shadow_regfile[24];
    assign result_reg_25 = shadow_regfile[25];
    assign result_reg_26 = shadow_regfile[26];
    assign result_reg_27 = shadow_regfile[27];
    assign result_reg_28 = shadow_regfile[28];
    assign result_reg_29 = shadow_regfile[29];
    assign result_reg_30 = shadow_regfile[30];
    assign result_reg_31 = shadow_regfile[31];

    
   
    // CSR寄存器输出
    assign result_csr_misa       = 32'h40001100;
    assign result_csr_medeleg    = uut.rvfi_csr_medeleg_rdata;
    assign result_csr_mideleg    = uut.rvfi_csr_mideleg_rdata;


    // 修改CSR寄存器追踪部分
    // 移除所有imem_fault相关代码，改用RVFI标准信号
    reg [31:0] csr_mcause;

    always @(posedge clock) begin
        if (reset) begin
            csr_mcause <= 32'b0;
        end else if(cycle_count == 2'b10) begin
            // 通过rvfi_trap和rvfi_csr_mcause_rdata检测异常
            if (uut.rvfi_trap && !uut.rvfi_csr_mcause_rdata[31]) begin
                csr_mcause <= uut.csr_mcause_wdata;
            end
            // 中断处理保持不变
            else if (uut.irq_num != 0) begin
                csr_mcause <= {1'b1, 26'b0, uut.irq_num[4:0]};
            end
        end 
    end

    assign result_csr_mcause = 32'b0;
    //assign result_csr_mcause     = uut.rvfi_csr_mcause_rdata;
    //assign result_csr_mtval      = uut.rvfi_csr_mtval_rdata;
    assign result_csr_cycle      = uut.rvfi_csr_cycle_rdata;
    assign result_csr_scounteren = uut.rvfi_csr_scounteren_rdata;
    assign result_csr_scause     = uut.rvfi_csr_scause_rdata;
    assign result_csr_stvec      = uut.rvfi_csr_stvec_rdata;
    assign result_csr_sepc       = uut.rvfi_csr_sepc_rdata;
    assign result_csr_stval      = uut.rvfi_csr_stval_rdata;
    assign result_csr_sscratch   = uut.rvfi_csr_sscratch_rdata;
    assign result_csr_satp       = uut.rvfi_csr_satp_rdata;
    assign result_csr_pmpcfg0    = uut.rvfi_csr_pmpcfg0_rdata;
    assign result_csr_pmpcfg1    = uut.rvfi_csr_pmpcfg1_rdata;
    assign result_csr_pmpcfg2    = uut.rvfi_csr_pmpcfg2_rdata;
    assign result_csr_pmpcfg3    = uut.rvfi_csr_pmpcfg3_rdata;
    assign result_csr_pmpaddr0   = uut.rvfi_csr_pmpaddr0_rdata;
    assign result_csr_pmpaddr1   = uut.rvfi_csr_pmpaddr1_rdata;
    assign result_csr_pmpaddr2   = uut.rvfi_csr_pmpaddr2_rdata;
    assign result_csr_pmpaddr3   = uut.rvfi_csr_pmpaddr3_rdata;
    assign result_csr_MXLEN      = 8'd32;
    assign result_csr_IALIGN     = 8'd32;
    assign result_csr_ILEN       = 8'd32;
    assign result_internal_privilegeMode = mode;

    // 事件信号
    //assign event_valid        = (trap || (irq != 0)) && inst_valid;
    assign event_valid        = 0;
    assign event_intrNO       = irq;
    assign event_cause        = 32'b0;
   
    // 根据异常类型选择PC来源
    // 添加异常类型判断
    wire is_interrupt = uut.rvfi_csr_mcause_rdata[31];
    wire [31:0] exception_pc;

    always @(*) begin
        case (uut.rvfi_trap)
            1'b1: exception_pc = is_interrupt ? 
                                uut.rvfi_pc_rdata :  // 中断返回地址
                                uut.rvfi_csr_mepc_rdata; // 异常指令地址
            default: exception_pc = 32'h0;
        endcase
    end

    assign event_exceptionPC = exception_pc;
    assign event_exceptionInst = 32'b0;

    // Memory access outputs
    assign mem_read_valid = mem_read_valid_reg;
    assign mem_read_addr = mem_addr_reg;
    assign mem_read_memWidth = current_read_width;
    assign mem_read_data = mem_data_reg;

    assign mem_write_valid = mem_write_valid_reg;
    assign mem_write_addr = mem_addr_reg;
    assign mem_write_memWidth = current_write_width;
    assign mem_write_data = mem_data_reg;


endmodule