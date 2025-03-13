`include "wrapper.sv"

module nerv_extended_wrapper (
    input         clock,
    input         reset,
    input         stall,
    input  [31:0] io_inst,          // RiscvCore 输入：指令
    input         io_valid,         // RiscvCore 输入：指令有效
    input  [31:0] io_mem_read_data, // RiscvCore 输入：内存读取数据 (32-bit)
    input  [31:0] io_tlb_Anotherread_0_data, // TLB 输入 (简化为 32-bit)
    input  [31:0] io_tlb_Anotherread_1_data,
    input  [31:0] io_tlb_Anotherread_2_data,
    input  [31:0] irq,

    // RiscvCore 输出信号
    output        io_mem_read_valid,
    output [63:0] io_mem_read_addr,
    output [6:0]  io_mem_read_memWidth,
    output        io_mem_write_valid,
    output [63:0] io_mem_write_addr,
    output [6:0]  io_mem_write_memWidth,
    output [63:0] io_mem_write_data,
    output        io_tlb_Anotherread_0_valid,
    output [63:0] io_tlb_Anotherread_0_addr,
    output        io_tlb_Anotherread_1_valid,
    output [63:0] io_tlb_Anotherread_1_addr,
    output        io_tlb_Anotherread_2_valid,
    output [63:0] io_tlb_Anotherread_2_addr,
    output [63:0] io_now_pc,
    output [63:0] io_next_reg_0, io_next_reg_1, io_next_reg_2, io_next_reg_3, io_next_reg_4,
    output [63:0] io_next_reg_5, io_next_reg_6, io_next_reg_7, io_next_reg_8, io_next_reg_9,
    output [63:0] io_next_reg_10, io_next_reg_11, io_next_reg_12, io_next_reg_13, io_next_reg_14,
    output [63:0] io_next_reg_15, io_next_reg_16, io_next_reg_17, io_next_reg_18, io_next_reg_19,
    output [63:0] io_next_reg_20, io_next_reg_21, io_next_reg_22, io_next_reg_23, io_next_reg_24,
    output [63:0] io_next_reg_25, io_next_reg_26, io_next_reg_27, io_next_reg_28, io_next_reg_29,
    output [63:0] io_next_reg_30, io_next_reg_31,
    output [63:0] io_next_csr_misa,
    output [63:0] io_next_csr_mvendorid,
    output [63:0] io_next_csr_marchid,
    output [63:0] io_next_csr_mimpid,
    output [63:0] io_next_csr_mhartid,
    output [63:0] io_next_csr_mstatus,
    output [63:0] io_next_csr_mscratch,
    output [63:0] io_next_csr_mtvec,
    output [63:0] io_next_csr_mcounteren,
    output [63:0] io_next_csr_mip,
    output [63:0] io_next_csr_mie,
    output [63:0] io_next_csr_mepc,
    output [63:0] io_next_csr_mcause,
    output [63:0] io_next_csr_mtval,
    output        io_event_valid,
    output [63:0] io_event_cause,
    output [63:0] io_event_exceptionPC,
    output [63:0] io_event_exceptionInst,

    // RVFI 输出（保留用于调试）
    `RVFI_OUTPUTS
);

    // 实例化原始 nerv 模块
    wire [31:0] imem_addr;
    wire        dmem_valid;
    wire [31:0] dmem_addr;
    wire [3:0]  dmem_wstrb;
    wire [31:0] dmem_wdata;
    wire        trap;

    nerv #(
        .RESET_ADDR(32'h0000_0000),
        .NUMREGS(32)
    ) nerv_inst (
        .clock          (clock),
        .reset          (reset),
        .stall          (stall),
        .trap           (trap),
        .imem_addr      (imem_addr),
        .imem_data      (io_inst),         // 使用 io_inst 作为指令输入
        .dmem_valid     (dmem_valid),
        .dmem_addr      (dmem_addr),
        .dmem_wstrb     (dmem_wstrb),
        .dmem_wdata     (dmem_wdata),
        .dmem_rdata     (io_mem_read_data), // 内存读取数据
        .irq            (irq),
        `RVFI_CONN
    );

    // 寄存器文件状态追踪
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
        end else if (!stall && rvfi_valid && rvfi_rd_addr != 5'b0) begin
            regfile[rvfi_rd_addr] <= rvfi_rd_wdata;
        end
    end

    // CSR 状态追踪
    reg [31:0] csr_mstatus, csr_misa, csr_mvendorid, csr_marchid, csr_mimpid, csr_mhartid;
    reg [31:0] csr_mtvec, csr_mscratch, csr_mepc, csr_mcause, csr_mtval, csr_mip, csr_mie;
    reg [31:0] csr_mcounteren;

    initial begin
        csr_mstatus   = 32'h00001800; // 默认 MPP=11, MIE=0
        csr_misa      = 32'b0;
        csr_mvendorid = 32'b0;
        csr_marchid   = 32'b0;
        csr_mimpid    = 32'b0;
        csr_mhartid   = 32'b0;
        csr_mtvec     = 32'b0;
        csr_mscratch  = 32'b0;
        csr_mepc      = 32'b0;
        csr_mcause    = 32'b0;
        csr_mtval     = 32'b0;
        csr_mip       = 32'b0;
        csr_mie       = 32'b0;
        csr_mcounteren = 32'b0;
    end

    always @(posedge clock) begin
        if (reset) begin
            csr_mstatus   <= 32'h00001800;
            csr_misa      <= 32'b0;
            csr_mvendorid <= 32'b0;
            csr_marchid   <= 32'b0;
            csr_mimpid    <= 32'b0;
            csr_mhartid   <= 32'b0;
            csr_mtvec     <= 32'b0;
            csr_mscratch  <= 32'b0;
            csr_mepc      <= 32'b0;
            csr_mcause    <= 32'b0;
            csr_mtval     <= 32'b0;
            csr_mip       <= 32'b0;
            csr_mie       <= 32'b0;
            csr_mcounteren <= 32'b0;
        end else if (!stall && rvfi_valid) begin
            if (rvfi_csr_mstatus_wmask)  csr_mstatus  <= rvfi_csr_mstatus_wdata;
            if (rvfi_csr_misa_wmask)     csr_misa     <= rvfi_csr_misa_wdata;
            if (rvfi_csr_mvendorid_wmask) csr_mvendorid <= rvfi_csr_mvendorid_wdata;
            if (rvfi_csr_marchid_wmask)  csr_marchid  <= rvfi_csr_marchid_wdata;
            if (rvfi_csr_mimpid_wmask)   csr_mimpid   <= rvfi_csr_mimpid_wdata;
            if (rvfi_csr_mhartid_wmask)  csr_mhartid  <= rvfi_csr_mhartid_wdata;
            if (rvfi_csr_mtvec_wmask)    csr_mtvec    <= rvfi_csr_mtvec_wdata;
            if (rvfi_csr_mscratch_wmask) csr_mscratch <= rvfi_csr_mscratch_wdata;
            if (rvfi_csr_mepc_wmask)     csr_mepc     <= rvfi_csr_mepc_wdata;
            if (rvfi_csr_mcause_wmask)   csr_mcause   <= rvfi_csr_mcause_wdata;
            if (rvfi_csr_mtval_wmask)    csr_mtval    <= rvfi_csr_mtval_wdata;
            if (rvfi_csr_mip_wmask)      csr_mip      <= rvfi_csr_mip_wdata;
            if (rvfi_csr_mie_wmask)      csr_mie      <= rvfi_csr_mie_wdata;
            if (rvfi_csr_mcounteren_wmask) csr_mcounteren <= rvfi_csr_mcounteren_wdata;
        end
    end

    // 内存信号转换
    assign io_mem_read_valid  = dmem_valid & (dmem_wstrb == 4'b0);
    assign io_mem_read_addr   = {{32'b0}, dmem_addr};
    assign io_mem_read_memWidth = (dmem_wstrb == 4'b1111) ? 7'd32 :
                                 (dmem_wstrb == 4'b0011 || dmem_wstrb == 4'b1100) ? 7'd16 : 7'd8;
    assign io_mem_write_valid = dmem_valid & (dmem_wstrb != 4'b0);
    assign io_mem_write_addr  = {{32'b0}, dmem_addr};
    assign io_mem_write_memWidth = io_mem_read_memWidth;
    assign io_mem_write_data  = {{32'b0}, dmem_wdata};

    // TLB 信号（nerv 不支持 TLB，置为无效）
    assign io_tlb_Anotherread_0_valid = 1'b0;
    assign io_tlb_Anotherread_0_addr  = 64'b0;
    assign io_tlb_Anotherread_1_valid = 1'b0;
    assign io_tlb_Anotherread_1_addr  = 64'b0;
    assign io_tlb_Anotherread_2_valid = 1'b0;
    assign io_tlb_Anotherread_2_addr  = 64'b0;

    // 当前 PC
    assign io_now_pc = {{32'b0}, imem_addr};

    // 下一周期寄存器输出
    assign io_next_reg_0  = 64'b0; // x0 恒为 0
    assign io_next_reg_1  = {{32'b0}, regfile[1]};
    assign io_next_reg_2  = {{32'b0}, regfile[2]};
    assign io_next_reg_3  = {{32'b0}, regfile[3]};
    assign io_next_reg_4  = {{32'b0}, regfile[4]};
    assign io_next_reg_5  = {{32'b0}, regfile[5]};
    assign io_next_reg_6  = {{32'b0}, regfile[6]};
    assign io_next_reg_7  = {{32'b0}, regfile[7]};
    assign io_next_reg_8  = {{32'b0}, regfile[8]};
    assign io_next_reg_9  = {{32'b0}, regfile[9]};
    assign io_next_reg_10 = {{32'b0}, regfile[10]};
    assign io_next_reg_11 = {{32'b0}, regfile[11]};
    assign io_next_reg_12 = {{32'b0}, regfile[12]};
    assign io_next_reg_13 = {{32'b0}, regfile[13]};
    assign io_next_reg_14 = {{32'b0}, regfile[14]};
    assign io_next_reg_15 = {{32'b0}, regfile[15]};
    assign io_next_reg_16 = {{32'b0}, regfile[16]};
    assign io_next_reg_17 = {{32'b0}, regfile[17]};
    assign io_next_reg_18 = {{32'b0}, regfile[18]};
    assign io_next_reg_19 = {{32'b0}, regfile[19]};
    assign io_next_reg_20 = {{32'b0}, regfile[20]};
    assign io_next_reg_21 = {{32'b0}, regfile[21]};
    assign io_next_reg_22 = {{32'b0}, regfile[22]};
    assign io_next_reg_23 = {{32'b0}, regfile[23]};
    assign io_next_reg_24 = {{32'b0}, regfile[24]};
    assign io_next_reg_25 = {{32'b0}, regfile[25]};
    assign io_next_reg_26 = {{32'b0}, regfile[26]};
    assign io_next_reg_27 = {{32'b0}, regfile[27]};
    assign io_next_reg_28 = {{32'b0}, regfile[28]};
    assign io_next_reg_29 = {{32'b0}, regfile[29]};
    assign io_next_reg_30 = {{32'b0}, regfile[30]};
    assign io_next_reg_31 = {{32'b0}, regfile[31]};

    // 下一周期 CSR 输出
    assign io_next_csr_misa      = {{32'b0}, csr_misa};
    assign io_next_csr_mvendorid = {{32'b0}, csr_mvendorid};
    assign io_next_csr_marchid   = {{32'b0}, csr_marchid};
    assign io_next_csr_mimpid    = {{32'b0}, csr_mimpid};
    assign io_next_csr_mhartid   = {{32'b0}, csr_mhartid};
    assign io_next_csr_mstatus   = {{32'b0}, csr_mstatus};
    assign io_next_csr_mscratch  = {{32'b0}, csr_mscratch};
    assign io_next_csr_mtvec     = {{32'b0}, csr_mtvec};
    assign io_next_csr_mcounteren = {{32'b0}, csr_mcounteren};
    assign io_next_csr_mip       = {{32'b0}, csr_mip};
    assign io_next_csr_mie       = {{32'b0}, csr_mie};
    assign io_next_csr_mepc      = {{32'b0}, csr_mepc};
    assign io_next_csr_mcause    = {{32'b0}, csr_mcause};
    assign io_next_csr_mtval     = {{32'b0}, csr_mtval};

    // 事件信号
    assign io_event_valid        = trap;
    assign io_event_cause        = {{32'b0}, csr_mcause};
    assign io_event_exceptionPC  = {{32'b0}, csr_mepc};
    assign io_event_exceptionInst = {{32'b0}, io_inst};

endmodule