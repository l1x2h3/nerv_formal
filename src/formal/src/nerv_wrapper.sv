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
    output         reset,
    // 指令提交信号
    output        instCommit_valid,
    //output [31:0] instCommit_inst,
    //output reg [31:0] instCommit_pc,
    // 寄存器文件
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
    //output [31:0] a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31,
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
    // 1.信号赋值与限制范围
    (* keep *) `rvformal_rand_reg stall;
    reg [31:0] imem_data;
    (* keep *) `rvformal_rand_reg [31:0] dmem_rdata;
    (* keep *) `rvformal_rand_reg [31:0] irq;
    reg reset = 1;
	always @(posedge clock)
		reset <= 0;

    (* keep *) wire        dmem_valid;
	(* keep *) wire [31:0] dmem_addr;
	(* keep *) wire [ 3:0] dmem_wstrb;
	(* keep *) wire [31:0] dmem_wdata;

    (* keep *) wire [31:0] imem_addr;

    wire [31:0] dmem_rdata;


    always @(posedge clk) begin
        assume (
            // R-type 指令 (ADD/SUB/SLL/SLT/SLTU/XOR/SRL/SRA/OR/AND)
            ((imem_data & 32'hFE00707F) == 32'h00000033) ||  // ADD/AND/OR/XOR/SLL/SRL/SLT/SLTU
            ((imem_data & 32'hFE00707F) == 32'h40000033)  // SUB/SRA
            // I-type 指令
            // ((imem_data & 32'h7007F) == 32'h0000013) ||      // ADDI
            // ((imem_data & 32'h7007F) == 32'h2000013) ||      // SLTI
            // ((imem_data & 32'h7007F) == 32'h3000013) ||      // SLTIU
            // ((imem_data & 32'h7007F) == 32'h4000013) ||      // XORI
            // ((imem_data & 32'h7007F) == 32'h6000013) ||      // ORI
            // ((imem_data & 32'h7007F) == 32'h7000013)       // ANDI

            // I-type 指令 (ADDI/SLTI/SLTIU/XORI/ORI/ANDI)
            //((imem_data & 32'hFC00707F) == 32'h00000013)   // 基础I型指令
            // // SLLI/SRLI/SRAI (严格限制shamt[4:0], funct7=0x00或0x20)
            //  (
            //      ((imem_data & 32'hFC00707F) == 32'h00001013) &&  // SLLI
            //      (imem_data[24:20] <= 5'd31)                     // shamt[4:0] ≤ 31
            //  ) ||
            //  (
            //     ((imem_data & 32'hFC00707F) == 32'h00005013) &&  // SRLI
            //     (imem_data[24:20] <= 5'd31)                     // shamt[4:0] ≤ 31
            // ) ||
            // (
            //     ((imem_data & 32'hFC00707F) == 32'h40005013) &&  // SRAI
            //     (imem_data[24:20] <= 5'd31)                      // shamt[4:0] ≤ 31
            // ) 

            // // Load/Store 指令 (LB/LH/LW/LBU/LHU/SB/SH/SW)
            // ((imem_data & 32'h0000707F) == 32'h00000003) ||      // Load
            // ((imem_data & 32'h0000707F) == 32'h00000023)      // Store

            // // B-type 分支指令 (BEQ/BNE/BLT/BGE/BLTU/BGEU)
            // ((imem_data & 32'h0000707F) == 32'h00000063) ||

            // // JAL 和 JALR
            // ((imem_data & 32'h0000007F) == 32'h0000006F) ||     // JAL
            // ((imem_data & 32'h0000707F) == 32'h00000067) ||      // JALR

            // // U-type 指令 (LUI/AUIPC)
            // ((imem_data & 32'h0000007F) == 32'h00000037) //||      // LUI
            //((imem_data & 32'h0000007F) == 32'h00000017)         // AUIPC
        );

        // 额外约束：确保立即数符号扩展合理（可选）
        assume (
            (imem_data[6:0] != 7'b0010011) ||  // 如果不是I-type指令，跳过
            (
                (imem_data[14:12] != 3'b001) &&  // 非移位指令
                (imem_data[14:12] != 3'b101)     // 非移位指令
            ) || (
                (imem_data[31:20] <= 12'h7FF)    // 其他I-type立即数在±2047范围内
            )
        );
    end

    reg [31:0] imem_addr_q;

	always @(posedge clock) begin
		imem_addr_q <= imem_addr;
	end

    always @* begin
		if (!reset && !stall) begin
			if (imem_addr_q == imem_addr)
				assume(imem_data[15:0] == imem_data);
			if (imem_addr_q+2 == imem_addr)
				assume(imem_data[31:16] == imem_data);
		end
	end

    // 2.内部信号（从 nerv 引出） 初步定义
    wire [31:0] inst;
    assign inst = imem_data;
    wire        inst_valid;

    wire [4:0]  rd_addr;
    wire [31:0] rd_wdata;
    wire        trap;
   
    wire [1:0]  mode;
    wire [3:0]  rvfi_mem_rmask;
    wire [3:0]  rvfi_mem_wmask;

    wire [15:0] check_imem_data;
    wire [31:0] check_imem_addr;
    wire [31:0] instCommit_pc;
    wire [31:0] instCommit_inst;

    (* keep *) wire  [31:0] result_reg_0, result_reg_1, result_reg_2, result_reg_3, result_reg_4;
    (* keep *) wire  [31:0] result_reg_5, result_reg_6, result_reg_7, result_reg_8, result_reg_9;
    (* keep *) wire  [31:0] result_reg_10, result_reg_11, result_reg_12, result_reg_13, result_reg_14;
    (* keep *) wire  [31:0] result_reg_15, result_reg_16, result_reg_17, result_reg_18, result_reg_19;
    (* keep *) wire  [31:0] result_reg_20, result_reg_21, result_reg_22, result_reg_23, result_reg_24;
    (* keep *) wire  [31:0] result_reg_25, result_reg_26, result_reg_27, result_reg_28, result_reg_29;
    (* keep *) wire  [31:0] result_reg_30, result_reg_31;

    assign result_csr_mcounteren = 32'b0;
    // 寄存器文件和 CSR 追踪
    reg [31:0] regfile [0:31];
    wire [31:0] tempreg [0:31];
    reg [31:0] csr_mstatus, csr_misa, csr_mvendorid, csr_marchid, csr_mimpid, csr_mhartid;
    reg [31:0] csr_mtvec, csr_mscratch, csr_mepc, csr_m , csr_mtval, csr_mip, csr_mie;
    reg [31:0] csr_mcounteren;

    reg [1:0] cycle_count;

    integer i;

    // 3.内存访问控制信号
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
        end else if (!stall) begin
            mem_read_valid_reg <= dmem_valid && (dmem_wstrb == 4'b0);   //wstrb写使能信号，标记可以写入的位置
            //mem_read_valid_reg <= dmem_valid;
            mem_write_valid_reg <= dmem_valid && (dmem_wstrb != 4'b0);
            mem_addr_reg <= dmem_addr;
            mem_data_reg <= dmem_wstrb != 4'b0 ? dmem_wdata : dmem_rdata;
            
            // Capture the masks at the same time as other signals
            captured_rmask <= rvfi_mem_rmask;
            captured_wstrb <= dmem_wstrb;
        end
    end
    assign mem_read_valid = dmem_valid && uut.mem_rd_enable_q;
    assign mem_read_addr = dmem_addr;
    assign mem_read_memWidth = get_mem_width(uut.rvfi_mem_rmask);
    assign mem_read_data = dmem_rdata;

    assign mem_write_valid = dmem_valid && uut.mem_wr_enable_q;
    assign mem_write_addr = dmem_addr;
    assign mem_write_memWidth = get_mem_width(dmem_wstrb);
    assign mem_write_data = dmem_wdata;

    // Calculate widths using captured masks
    wire [5:0] current_read_width = get_mem_width(captured_rmask);
    wire [5:0] current_write_width = get_mem_width(captured_wstrb);
    wire [31:0] test1;
    wire [31:0] mem_rdata1;


    // 4. 事件信号处理
    reg event_valid_reg;
    always @(posedge clock) begin
        if (reset) begin
            event_valid_reg <= 0;
            result_csr_mstatus <= 32'h0;
            result_csr_mstatush <= 32'h0;
            result_csr_mip <= 32'h0;
            result_csr_mie <= 32'h0;
        end else if(event_valid) begin
            event_valid_reg <= ~((trap || (irq != 0)) && inst_valid);
            result_csr_mstatus <= uut.rvfi_csr_mstatus_rdata;
            result_csr_mstatush <= uut.rvfi_csr_mstatush_rdata;
            result_csr_mip <= 32'h0;
            result_csr_mie <= 32'h0;
        end
    end

    // 事件信号，暂时不添加
    //assign event_valid        = (trap || (irq != 0)) && inst_valid;
    assign event_valid        = 0;
    assign event_intrNO       = 0;
    assign event_cause        = 32'h0;
   
    // 根据异常类型选择PC来源
    // 添加异常类型判断
    wire is_interrupt = uut.rvfi_csr_mcause_rdata[31];
    wire [31:0] exception_pc;


    assign event_exceptionPC = uut.rvfi_csr_mepc_rdata;
    assign event_exceptionInst = exception_pc;
    // 输出信号连接
    assign instCommit_valid = inst_valid;
    //assign result_pc = uut.rvfi_pc_rdata;
    
    assign instCommit_inst = imem_data;

    assign result_csr_misa       = 32'h40001100;
    assign result_csr_medeleg    = uut.rvfi_csr_medeleg_rdata;
    assign result_csr_mideleg    = uut.rvfi_csr_mideleg_rdata;

    // 5. 寄存器文件输出
    wire [31:0] shadow_regfile [0:31]; // 同步用寄存器
    wire [4:0] insn_rd;
    assign insn_rd = instCommit_inst[11:7];  // 提取 insn_rd（5 位） 
    
    always @(*) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                shadow_regfile[i] = 32'h0;
            end
        end else  begin
            shadow_regfile[insn_rd] = uut.regfile[insn_rd];
        end
    end

    // assign result_reg_1 = uut.regfile[1];
    // assign result_reg_2 = uut.regfile[2];
    // assign result_reg_3 = uut.regfile[3];     
    // assign result_reg_4 = uut.regfile[4];
    // assign result_reg_5 = uut.regfile[5];
    // assign result_reg_6 = uut.regfile[6];
    // assign result_reg_7 = uut.regfile[7];
    // assign result_reg_8 = uut.regfile[8];
    // assign result_reg_9 = uut.regfile[9];
    // assign result_reg_10 = uut.regfile[10];
    // assign result_reg_11 = uut.regfile[11];
    // assign result_reg_12 = uut.regfile[12];
    // assign result_reg_13 = uut.regfile[13];
    // assign result_reg_14 = uut.regfile[14];
    // assign result_reg_15 = uut.regfile[15];       
    // assign result_reg_16 = uut.regfile[16];
    // assign result_reg_17 = uut.regfile[17];
    // assign result_reg_18 = uut.regfile[18];
    // assign result_reg_19 = uut.regfile[19];
    // assign result_reg_20 = uut.regfile[20];
    // assign result_reg_21 = uut.regfile[21];
    // assign result_reg_22 = uut.regfile[22];
    // assign result_reg_23 = uut.regfile[23];
    // assign result_reg_24 = uut.regfile[24];
    // assign result_reg_25 = uut.regfile[25];
    // assign result_reg_26 = uut.regfile[26];
    // assign result_reg_27 = uut.regfile[27];
    // assign result_reg_28 = uut.regfile[28];
    // assign result_reg_29 = uut.regfile[29];
    // assign result_reg_30 = uut.regfile[30];
    // assign result_reg_31 = uut.regfile[31];

    

    assign result_reg_0 =   32'b0;
    assign result_reg_1 =   shadow_regfile[1];
    assign result_reg_2 =   shadow_regfile[2];
    assign result_reg_3 =   shadow_regfile[3];
    assign result_reg_4 =   shadow_regfile[4];
    assign result_reg_5 =   shadow_regfile[5];
    assign result_reg_6 =   shadow_regfile[6];
    assign result_reg_7 =   shadow_regfile[7];
    assign result_reg_8 =   shadow_regfile[8];
    assign result_reg_9 =   shadow_regfile[9];
    assign result_reg_10 =   shadow_regfile[10];
    assign result_reg_11 =   shadow_regfile[11];
    assign result_reg_12 =   shadow_regfile[12];
    assign result_reg_13 =   shadow_regfile[13];
    assign result_reg_14 =   shadow_regfile[14];
    assign result_reg_15 =   shadow_regfile[15];
    assign result_reg_16 =   shadow_regfile[16];
    assign result_reg_17 =   shadow_regfile[17];
    assign result_reg_18 =   shadow_regfile[18];
    assign result_reg_19 =   shadow_regfile[19];
    assign result_reg_20 =   shadow_regfile[20];
    assign result_reg_21 =   shadow_regfile[21];
    assign result_reg_22 =   shadow_regfile[22];
    assign result_reg_23 =   shadow_regfile[23];
    assign result_reg_24 =   shadow_regfile[24];
    assign result_reg_25 =   shadow_regfile[25];
    assign result_reg_26 =   shadow_regfile[26];
    assign result_reg_27 =   shadow_regfile[27];
    assign result_reg_28 =   shadow_regfile[28];
    assign result_reg_29 =   shadow_regfile[29];
    assign result_reg_30 =   shadow_regfile[30];
    assign result_reg_31 =   shadow_regfile[31];
    
    // 6. CSR 寄存器输出
    reg [31:0] csr_mcause;

    always @(posedge clock) begin
        if (reset) begin
            csr_mcause <= 32'h0;
        end else if(event_valid) begin
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

    assign result_csr_mcause = csr_mcause;
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
    //assign instCommit_pc = uut.rvfi_pc_rdata;



    // 8.实例化 nerv 模块
    nerv uut (
        .clock      (clock),
        .reset      (reset),
        .stall      (stall),

        .imem_addr  (imem_addr),
        .imem_data  (imem_data),

        .dmem_valid (dmem_valid),
        .dmem_addr  (dmem_addr),
        .dmem_wstrb (dmem_wstrb),
        .dmem_wdata (dmem_wdata),
        .dmem_rdata (dmem_rdata),

        .irq        (irq),

        .rvfi_trap  (trap),
        .rvfi_valid (inst_valid),
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
        .rvfi_pc_rdata(instCommit_pc),
        .rvfi_pc_rdata(result_pc),
        //需要在用户态中开启
        //.rvfi_csr_mcounteren_rdata (result_csr_mcounteren),
        // .rvfi_csr_medeleg_rdata (result_csr_medeleg),
        // .rvfi_csr_mideleg_rdata (result_csr_mideleg),
        //.rvfi_csr_mip_rdata (result_csr_mip),
        //.rvfi_csr_mie_rdata (result_csr_mie),
        .rvfi_csr_mtval_rdata (result_csr_mtval),
        .rvfi_csr_mepc_rdata (result_csr_mepc),
        //.rvfi_csr_mepc_rdata (event_exceptionPC),
        // .dbg_reg_x0  (result_reg_0 ),
        // .dbg_reg_x1  (result_reg_1 ),
        // .dbg_reg_x2  (result_reg_2 ),
        // .dbg_reg_x3  (result_reg_3 ),
        // .dbg_reg_x4  (result_reg_4 ),
        // .dbg_reg_x5  (result_reg_5 ),
        // .dbg_reg_x6  (result_reg_6 ),
        // .dbg_reg_x7  (result_reg_7 ),
        // .dbg_reg_x8  (result_reg_8 ),
        // .dbg_reg_x9  (result_reg_9 ),
        // .dbg_reg_x10 (result_reg_10),
        // .dbg_reg_x11 (result_reg_11),
        // .dbg_reg_x12 (result_reg_12),
        // .dbg_reg_x13 (result_reg_13),
        // .dbg_reg_x14 (result_reg_14),
        // .dbg_reg_x15 (result_reg_15),
        // .dbg_reg_x16 (result_reg_16),
        // .dbg_reg_x17 (result_reg_17),
        // .dbg_reg_x18 (result_reg_18),
        // .dbg_reg_x19 (result_reg_19),
        // .dbg_reg_x20 (result_reg_20),
        // .dbg_reg_x21 (result_reg_21),
        // .dbg_reg_x22 (result_reg_22),
        // .dbg_reg_x23 (result_reg_23),
        // .dbg_reg_x24 (result_reg_24),
        // .dbg_reg_x25 (result_reg_25),
        // .dbg_reg_x26 (result_reg_26),
        // .dbg_reg_x27 (result_reg_27),
        // .dbg_reg_x28 (result_reg_28),
        // .dbg_reg_x29 (result_reg_29),
        // .dbg_reg_x30 (result_reg_30),
        // .dbg_reg_x31 (result_reg_31),
        .test (test1),
        .mem_rdata (mem_rdata1)
    );

    

    // 7.与checker连接
    CheckerWrapper checker_inst (
        .clock(clock),
        .reset(reset),
        .io_instCommit_valid(instCommit_valid),
        .io_instCommit_inst(instCommit_inst),
        .io_instCommit_pc(instCommit_pc),
        .io_result_reg_0(result_reg_0),
        .io_result_reg_1(result_reg_1),
        .io_result_reg_2(result_reg_2),
        .io_result_reg_3(result_reg_3),
        .io_result_reg_4(result_reg_4),
        .io_result_reg_5(result_reg_5),
        .io_result_reg_6(result_reg_6),
        .io_result_reg_7(result_reg_7),
        .io_result_reg_8(result_reg_8),
        .io_result_reg_9(result_reg_9),
        .io_result_reg_10(result_reg_10),
        .io_result_reg_11(result_reg_11),
        .io_result_reg_12(result_reg_12),
        .io_result_reg_13(result_reg_13),
        .io_result_reg_14(result_reg_14),
        .io_result_reg_15(result_reg_15),
        .io_result_reg_16(result_reg_16),
        .io_result_reg_17(result_reg_17),
        .io_result_reg_18(result_reg_18),
        .io_result_reg_19(result_reg_19),
        .io_result_reg_20(result_reg_20),
        .io_result_reg_21(result_reg_21),
        .io_result_reg_22(result_reg_22),
        .io_result_reg_23(result_reg_23),
        .io_result_reg_24(result_reg_24),
        .io_result_reg_25(result_reg_25),
        .io_result_reg_26(result_reg_26),
        .io_result_reg_27(result_reg_27),
        .io_result_reg_28(result_reg_28),
        .io_result_reg_29(result_reg_29),
        .io_result_reg_30(result_reg_30),
        .io_result_reg_31(result_reg_31),
        .io_result_pc(result_pc),
        .io_result_csr_misa(result_csr_misa),
        .io_result_csr_mvendorid(result_csr_mvendorid),
        .io_result_csr_marchid(result_csr_marchid),
        .io_result_csr_mimpid(result_csr_mimpid),
        .io_result_csr_mhartid(result_csr_mhartid),
        .io_result_csr_mstatus(result_csr_mstatus),
        .io_result_csr_mstatush(32'h0), // 未支持
        .io_result_csr_mscratch(result_csr_mscratch),
        .io_result_csr_mtvec(result_csr_mtvec),
        .io_result_csr_mcounteren(result_csr_mcounteren),
        .io_result_csr_medeleg(32'h0), // 未支持
        .io_result_csr_mideleg(32'h0), // 未支持
        .io_result_csr_mip(result_csr_mip),
        .io_result_csr_mie(result_csr_mie),
        .io_result_csr_mepc(result_csr_mepc),
        .io_result_csr_mcause(result_csr_mcause),
        .io_result_csr_mtval(result_csr_mtval),
        .io_result_csr_cycle(32'h0), // 未支持
        .io_result_csr_scounteren(32'h0), // 未支持
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
        .io_event_valid(event_valid),
        .io_event_intrNO(event_intrNO), // 未支持中断号
        .io_event_cause(event_cause),
        .io_event_exceptionPC(event_exceptionPC),
        .io_event_exceptionInst(event_exceptionInst),

        .io_mem_read_valid(mem_read_valid),
        .io_mem_read_addr(mem_read_addr),
        .io_mem_read_memWidth(mem_read_memWidth),
        .io_mem_read_data(mem_read_data),

        .io_mem_write_valid(mem_write_valid),
        .io_mem_write_addr(mem_write_addr),
        .io_mem_write_memWidth(mem_write_memWidth),
        .io_mem_write_data(mem_write_data)
    );


endmodule