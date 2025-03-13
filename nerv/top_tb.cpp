#include "verilated.h"          // Verilator核心头文件
#include "verilated_vcd_c.h"    // 生成VCD波形（可选）
#include "Vtop.h"               // Verilator生成的顶层模块头文件

int main(int argc, char** argv) {
    // 初始化Verilator
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;  // 创建顶层模块实例

    // 波形跟踪（可选）
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);   // 跟踪深度99
    tfp->open("top_wave.vcd");  // 输出波形文件

    // 初始化信号
    top->clock = 0;
    top->reset = 1;

    // 仿真循环
    for (int time = 0; time < 200; time++) {
        // 时钟翻转
        top->clock = !top->clock;

        // 复位逻辑
        if (time == 4) top->reset = 0;  // 在第4个周期释放复位

        // 驱动输入（示例）
        if (!top->reset) {
            // 这里可以添加对dut内部信号的驱动，例如通过暴露的信号
            // 但当前top.sv未暴露imem_data等输入，需修改设计
        }

        // 执行一步仿真
        top->eval();

        // 记录波形
        tfp->dump(time);

        // 打印信号值（调试用）
        if (top->clock) {
            printf("Time=%d, reset=%d, imem_addr=%08x, dmem_valid=%d\n",
                   time, top->reset, top->dut_imem_addr, top->dut_dmem_valid);
        }
    }

    // 清理
    tfp->close();
    top->final();
    delete top;
    delete tfp;

    return 0;
}