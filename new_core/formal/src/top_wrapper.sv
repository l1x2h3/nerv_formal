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

module wrapper_for_final (
   input clock,
);
    //input
    wire stall = 0;
	(* keep *) reg [31:0] imem_data;
	(* keep *) reg [31:0] dmem_rdata;
	(* keep *) reg [31:0] irq;

    reg reset = 1;
	always @(posedge clock)
		reset <= 0;

    always @(posedge clk) begin
        assume (
            // R-type 指令 (ADD/SUB/SLL/SLT/SLTU/XOR/SRL/SRA/OR/AND)
            ((imem_data & 32'hFE00707F) == 32'h00000033) ||  // ADD/AND/OR/XOR/SLL/SRL/SLT/SLTU
            ((imem_data & 32'hFE00707F) == 32'h40000033) ||  // SUB/SRA
            // I-type 指令
            ((imem_data & 32'h7007F) == 32'h0000013)       // ADDI
            // ((imem_data & 32'h7007F) == 32'h2000013) ||      // SLTI
            // ((imem_data & 32'h7007F) == 32'h3000013) ||      // SLTIU
            // ((imem_data & 32'h7007F) == 32'h4000013) ||      // XORI
            // ((imem_data & 32'h7007F) == 32'h6000013) ||      // ORI
            // ((imem_data & 32'h7007F) == 32'h7000013)       // ANDI
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

    //output
    wire trap;
    wire         rvfi_valid;   //reg类型，注意信号对齐
	wire  [63:0] rvfi_order;   //reg类型，注意信号对齐
	wire  [31:0] rvfi_insn;   //reg类型，注意信号对齐
	wire         rvfi_trap;   //reg类型，注意信号对齐
	wire         rvfi_halt;   //reg类型，注意信号对齐
	wire         rvfi_intr;   //reg类型，注意信号对齐
	wire  [ 1:0] rvfi_mode;   //reg类型，注意信号对齐
	wire  [ 1:0] rvfi_ixl;   //reg类型，注意信号对齐
	wire  [ 4:0] rvfi_rs1_addr;   //reg类型，注意信号对齐
	wire  [ 4:0] rvfi_rs2_addr;   //reg类型，注意信号对齐
	wire  [31:0] rvfi_rs1_rdata;   //reg类型，注意信号对齐
	wire  [31:0] rvfi_rs2_rdata;   //reg类型，注意信号对齐
	wire  [ 4:0] rvfi_rd_addr;   //reg类型，注意信号对齐
	wire  [31:0] rvfi_rd_wdata;   //reg类型，注意信号对齐
	wire  [31:0] rvfi_pc_rdata;   //reg类型，注意信号对齐
	wire  [31:0] rvfi_pc_wdata;   //reg类型，注意信号对齐
    //csr都要晚一个周
    wire  [31:0] rvfi_mem_addr;  //reg类型
	wire  [ 3:0] rvfi_mem_rmask;  //reg类型
	wire  [ 3:0] rvfi_mem_wmask;  //reg类型
	wire  [31:0] rvfi_mem_rdata;  //reg类型
	wire  [31:0] rvfi_mem_wdata;  //reg类型
    wire  [31:0] imem_addr;
    wire         dmem_valid;
	wire  [31:0] dmem_addr;
	wire  [ 3:0] dmem_wstrb;
	wire  [31:0] dmem_wdata;



    // Instantiate the core module
    nerv nerv_inst (
        .clock(clock),
        .reset(reset),
        .stall(stall),
        .imem_data(imem_data),
        .dmem_rdata(dmem_rdata),
        .irq(irq),
        .trap(trap),
        .rvfi_valid(rvfi_valid),    
        .rvfi_order(rvfi_order),
        .rvfi_insn(rvfi_insn),
        .rvfi_trap(rvfi_trap),
        .rvfi_halt(rvfi_halt),
        .rvfi_intr(rvfi_intr),
        .rvfi_mode(rvfi_mode),
        .rvfi_ixl(rvfi_ixl),
        .rvfi_rs1_addr(rvfi_rs1_addr),
        .rvfi_rs2_addr(rvfi_rs2_addr),
        .rvfi_rs1_rdata(rvfi_rs1_rdata),
        .rvfi_rs2_rdata(rvfi_rs2_rdata),
        .rvfi_rd_addr(rvfi_rd_addr),
        .rvfi_rd_wdata(rvfi_rd_wdata),
        .rvfi_pc_rdata(rvfi_pc_rdata),
        .rvfi_pc_wdata(rvfi_pc_wdata),
        .rvfi_mem_addr(rvfi_mem_addr),
        .rvfi_mem_rmask(rvfi_mem_rmask),
        .rvfi_mem_wmask(rvfi_mem_wmask),
        .rvfi_mem_rdata(rvfi_mem_rdata),
        .rvfi_mem_wdata(rvfi_mem_wdata),
        .imem_addr(imem_addr),
        .dmem_valid(dmem_valid),
        .dmem_addr(dmem_addr),
        .dmem_wstrb(dmem_wstrb),
        .dmem_wdata(dmem_wdata)
    );
    

    //信号转换
    wire         io_instCommit_valid ;
    wire  [31:0] io_instCommit_inst ;
    wire  [31:0] io_instCommit_pc ;

    assign io_instCommit_valid = rvfi_valid;
    assign io_instCommit_inst = rvfi_insn;
    assign io_instCommit_pc = rvfi_pc_rdata;
    
    wire  [31:0] io_result_reg_0 ;
    wire  [31:0] io_result_reg_1 ;
    wire  [31:0] io_result_reg_2 ;
    wire  [31:0] io_result_reg_3 ;
    wire  [31:0] io_result_reg_4 ;
    wire  [31:0] io_result_reg_5 ;
    wire  [31:0] io_result_reg_6 ;
    wire  [31:0] io_result_reg_7 ;
    wire  [31:0] io_result_reg_8 ;
    wire  [31:0] io_result_reg_9 ;
    wire  [31:0] io_result_reg_10 ;
    wire  [31:0] io_result_reg_11 ;
    wire  [31:0] io_result_reg_12 ;
    wire  [31:0] io_result_reg_13 ;
    wire  [31:0] io_result_reg_14 ;
    wire  [31:0] io_result_reg_15 ;
    wire  [31:0] io_result_reg_16 ;
    wire  [31:0] io_result_reg_17 ;
    wire  [31:0] io_result_reg_18 ;
    wire  [31:0] io_result_reg_19 ;
    wire  [31:0] io_result_reg_20 ;
    wire  [31:0] io_result_reg_21 ;
    wire  [31:0] io_result_reg_22 ;
    wire  [31:0] io_result_reg_23 ;
    wire  [31:0] io_result_reg_24 ;
    wire  [31:0] io_result_reg_25;
    wire  [31:0] io_result_reg_26;
    wire  [31:0] io_result_reg_27;
    wire  [31:0] io_result_reg_28;
    wire  [31:0] io_result_reg_29;
    wire  [31:0] io_result_reg_30;
    wire  [31:0] io_result_reg_31;

    wire  [31:0] io_result_pc;

    assign io_result_pc = rvfi_pc_wdata;

    wire  [31:0] result_csr_misa;
    assign result_csr_misa = 32'h40001100;

    wire  [31:0] result_csr_mvendorid;
    wire  [31:0] result_csr_marchid;
    wire  [31:0] result_csr_mimpid;
    wire  [31:0] result_csr_mhartid;
    assign  result_csr_marchid = 0;
    assign result_csr_mhartid = 0;
    assign result_csr_mimpid = 0;
    assign result_csr_mvendorid = 0;

    wire  [31:0] result_csr_mstatus;
    wire  [31:0] result_csr_mstatush;
    wire  [31:0] result_csr_mscratch;
    assign result_csr_mscratch = 0;
    assign result_csr_mstatus = 0;
    wire  [31:0] result_csr_mtvec;
    assign result_csr_mtvec = 0;

    wire  [31:0] result_csr_mcounteren;
    assign result_csr_mcounteren = 0;

    wire  [31:0] result_csr_medeleg;
    wire  [31:0] result_csr_mideleg;

    wire  [31:0] result_csr_mip;
    wire  [31:0] result_csr_mie;
    assign result_csr_mie = 0;
    assign result_csr_mip = 0;

    wire  [31:0] result_csr_mepc;
    assign result_csr_mepc = 0;
    wire  [31:0] result_csr_mcause;
    assign result_csr_mcause = 0;

    wire  [31:0] result_csr_mtval;
    assign result_csr_mtval = 0;
    
    wire  [31:0] result_csr_cycle;
    wire  [31:0] result_csr_scounteren;
    wire  [31:0] result_csr_scause;
    wire  [31:0] result_csr_stvec;
    wire  [31:0] result_csr_sepc;
    wire  [31:0] result_csr_stval;
    wire  [31:0] result_csr_sscratch;
    wire  [31:0] result_csr_satp;
    wire  [31:0] result_csr_pmpcfg0;
    wire  [31:0] result_csr_pmpcfg1;
    wire  [31:0] result_csr_pmpcfg2;
    wire  [31:0] result_csr_pmpcfg3;
    wire  [31:0] result_csr_pmpaddr0;
    wire  [31:0] result_csr_pmpaddr1;
    wire  [31:0] result_csr_pmpaddr2;
    wire  [31:0] result_csr_pmpaddr3;
    wire  [7:0]  result_csr_MXLEN;
    wire  [7:0]  result_csr_IALIGN;
    wire  [7:0]  result_csr_ILEN;
    wire  [1:0]  result_internal_privilegeMode;

    wire         io_event_valid;
    wire  [31:0] io_event_intrNO;
    wire  [31:0] io_event_cause;
    wire  [31:0] io_event_exceptionPC;
    wire  [31:0] io_event_exceptionInst;

    assign io_event_valid = 1'b0; // 未支持
    assign io_event_intrNO = 32'b0; // 未支持
    assign io_event_cause = 32'b0; // 未支持
    assign io_event_exceptionPC = 32'b0; // 未支持
    assign io_event_exceptionInst = 32'b0; // 未支持

    wire         io_mem_read_valid;
    wire  [31:0] io_mem_read_addr;
    wire  [5:0]  io_mem_read_memWidth;
    wire  [31:0] io_mem_read_data;
    wire         io_mem_write_valid;
    wire  [31:0] io_mem_write_addr;
    wire  [5:0]  io_mem_write_memWidth;
    wire  [31:0] io_mem_write_data;

    assign io_mem_read_valid = dmem_valid && uut.mem_rd_enable;
    assign io_mem_read_addr = dmem_addr;
    assign io_mem_read_memWidth = dmem_wstrb;
    assign io_mem_read_data = dmem_wdata;

    assign io_mem_write_valid = dmem_valid && uut.mem_wr_enable;
    assign io_mem_write_addr = dmem_addr;
    assign io_mem_write_memWidth = dmem_wstrb;
    assign io_mem_write_data = dmem_wdata;

    //值的连接
    // assign io_result_reg_0 = uut.dbg_reg_x0;
    // assign io_result_reg_1 = uut.dbg_reg_x1;
    // assign io_result_reg_2 = uut.dbg_reg_x2;
    // assign io_result_reg_3 = uut.dbg_reg_x3;
    // assign io_result_reg_4 = uut.dbg_reg_x4;
    // assign io_result_reg_5 = uut.dbg_reg_x5;
    // assign io_result_reg_6 = uut.dbg_reg_x6;
    // assign io_result_reg_7 = uut.dbg_reg_x7;
    // assign io_result_reg_8 = uut.dbg_reg_x8;
    // assign io_result_reg_9 = uut.dbg_reg_x9;
    // assign io_result_reg_10 = uut.dbg_reg_x10;
    // assign io_result_reg_11 = uut.dbg_reg_x11;
    // assign io_result_reg_12 = uut.dbg_reg_x12;
    // assign io_result_reg_13 = uut.dbg_reg_x13;
    // assign io_result_reg_14 = uut.dbg_reg_x14;
    // assign io_result_reg_15 = uut.dbg_reg_x15;
    // assign io_result_reg_16 = uut.dbg_reg_x16;
    // assign io_result_reg_17 = uut.dbg_reg_x17;
    // assign io_result_reg_18 = uut.dbg_reg_x18;
    // assign io_result_reg_19 = uut.dbg_reg_x19;
    // assign io_result_reg_20 = uut.dbg_reg_x20;
    // assign io_result_reg_21 = uut.dbg_reg_x21;
    // assign io_result_reg_22 = uut.dbg_reg_x22;
    // assign io_result_reg_23 = uut.dbg_reg_x23;
    // assign io_result_reg_24 = uut.dbg_reg_x24;
    // assign io_result_reg_25 = uut.dbg_reg_x25;
    // assign io_result_reg_26 = uut.dbg_reg_x26;
    // assign io_result_reg_27 = uut.dbg_reg_x27;
    // assign io_result_reg_28 = uut.dbg_reg_x28;
    // assign io_result_reg_29 = uut.dbg_reg_x29;
    // assign io_result_reg_30 = uut.dbg_reg_x30;
    // assign io_result_reg_31 = uut.dbg_reg_x31;
    integer i;
    wire [31:0] shadow_regfile [0:31]; // 同步用寄存器
    wire [4:0] insn_rd;
    assign insn_rd = io_instCommit_inst[11:7];  // 提取 insn_rd（5 位） 
    
    always @(*) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                shadow_regfile[i] = 32'h0;
            end
        end else  begin
            shadow_regfile[insn_rd] = uut.regfile[insn_rd];
        end
    end

    assign io_result_reg_0 =  32'h0;
    assign io_result_reg_1 =  shadow_regfile[1 ];
    assign io_result_reg_2 =  shadow_regfile[2 ];
    assign io_result_reg_3 =  shadow_regfile[3 ];
    assign io_result_reg_4 =  shadow_regfile[4 ];
    assign io_result_reg_5 =  shadow_regfile[5 ];
    assign io_result_reg_6 =  shadow_regfile[6 ];
    assign io_result_reg_7 =  shadow_regfile[7 ];
    assign io_result_reg_8 =  shadow_regfile[8 ];
    assign io_result_reg_9 =  shadow_regfile[9 ];
    assign io_result_reg_10 = shadow_regfile[10 ];
    assign io_result_reg_11 = shadow_regfile[11 ];
    assign io_result_reg_12 = shadow_regfile[12 ];
    assign io_result_reg_13 = shadow_regfile[13 ];
    assign io_result_reg_14 = shadow_regfile[14 ];
    assign io_result_reg_15 = shadow_regfile[15 ];
    assign io_result_reg_16 = shadow_regfile[16 ];
    assign io_result_reg_17 = shadow_regfile[17 ];
    assign io_result_reg_18 = shadow_regfile[18 ];
    assign io_result_reg_19 = shadow_regfile[19 ];
    assign io_result_reg_20 = shadow_regfile[20 ];
    assign io_result_reg_21 = shadow_regfile[21 ];
    assign io_result_reg_22 = shadow_regfile[22 ];
    assign io_result_reg_23 = shadow_regfile[23 ];
    assign io_result_reg_24 = shadow_regfile[24 ];
    assign io_result_reg_25 = shadow_regfile[25 ];
    assign io_result_reg_26 = shadow_regfile[26 ];
    assign io_result_reg_27 = shadow_regfile[27 ];
    assign io_result_reg_28 = shadow_regfile[28 ];
    assign io_result_reg_29 = shadow_regfile[29 ];
    assign io_result_reg_30 = shadow_regfile[30 ];
    assign io_result_reg_31 = shadow_regfile[31 ];



    CheckerWrapper checker_inst (
            .clock(clock),
            .reset(reset),
            .io_instCommit_valid(io_instCommit_valid),
            .io_instCommit_inst(io_instCommit_inst),
            .io_instCommit_pc(io_instCommit_pc),
            .io_result_reg_0(io_result_reg_0),
            .io_result_reg_1(io_result_reg_1),
            .io_result_reg_2(io_result_reg_2),
            .io_result_reg_3(io_result_reg_3),
            .io_result_reg_4(io_result_reg_4),
            .io_result_reg_5(io_result_reg_5),
            .io_result_reg_6(io_result_reg_6),
            .io_result_reg_7(io_result_reg_7),
            .io_result_reg_8(io_result_reg_8),
            .io_result_reg_9(io_result_reg_9),
            .io_result_reg_10(io_result_reg_10),
            .io_result_reg_11(io_result_reg_11),
            .io_result_reg_12(io_result_reg_12),
            .io_result_reg_13(io_result_reg_13),
            .io_result_reg_14(io_result_reg_14),
            .io_result_reg_15(io_result_reg_15),
            .io_result_reg_16(io_result_reg_16),
            .io_result_reg_17(io_result_reg_17),
            .io_result_reg_18(io_result_reg_18),
            .io_result_reg_19(io_result_reg_19),
            .io_result_reg_20(io_result_reg_20),
            .io_result_reg_21(io_result_reg_21),
            .io_result_reg_22(io_result_reg_22),
            .io_result_reg_23(io_result_reg_23),
            .io_result_reg_24(io_result_reg_24),
            .io_result_reg_25(io_result_reg_25),
            .io_result_reg_26(io_result_reg_26),
            .io_result_reg_27(io_result_reg_27),
            .io_result_reg_28(io_result_reg_28),
            .io_result_reg_29(io_result_reg_29),
            .io_result_reg_30(io_result_reg_30),
            .io_result_reg_31(io_result_reg_31),
            .io_result_pc(result_pc),
            .io_result_csr_misa(result_csr_misa),
            .io_result_csr_mvendorid(32'h0),
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
            .io_event_valid(io_event_valid),
            .io_event_intrNO(io_event_intrNO), // 未支持中断号
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