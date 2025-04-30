#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnerv.h"

#include <iostream>
#include <iomanip>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vnerv* top = new Vnerv;
    
    // Initialize trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("waveform.vcd");

    // Initialize inputs
    top->clock = 0;
    top->reset = 1;  // Start with reset active
    top->stall = 0;
    top->irq = 0;
    
    // Initialize memory contents (simple program with 3 ADDI and 3 SUBI instructions)
    uint32_t imem_data[16] = {
        0x00100093,  // ADDI x1, x0, 1   (x1 = 1)
        0x00200113,  // ADDI x2, x0, 2   (x2 = 2)
        0x00300193,  // ADDI x3, x0, 3   (x3 = 3)
        0xfff08213,  // SUBI x4, x1, -1 (x4 = x1 - (-1) = 2)
        0x00110293,  // SUBI x5, x2, 1   (x5 = x2 - 1 = 1)
        0x00218313,  // SUBI x6, x3, 2   (x6 = x3 - 2 = 1)
        0x00000000,  // NOP
        0x00000000,  // NOP
        // Rest are zeros
    };

    // Simulation loop
    for (int cycle = 0; cycle < 20; cycle++) {
        // Toggle clock
        top->clock = !top->clock;
        
        // Deassert reset after first cycle
        if (cycle > 0) {
            top->reset = 0;
        }
        
        // Provide instruction memory data
        if (!top->clock) {  // On negative edge to avoid races
            top->imem_data = imem_data[top->imem_addr >> 2];
        }
        
        // Evaluate model
        top->eval();
        
        // Dump trace
        tfp->dump(cycle);
        
        // Print some debug info
        if (top->clock) {  // On positive edge
            std::cout << "Cycle " << std::setw(2) << (cycle/2) << ": ";
            std::cout << "PC=0x" << std::hex << std::setw(8) << std::setfill('0') << top->rvfi_pc_rdata;
            std::cout << " x1=0x" << std::hex << std::setw(8) << std::setfill('0') << top->dbg_reg_x1;
            std::cout << " x2=0x" << std::hex << std::setw(8) << std::setfill('0') << top->dbg_reg_x2;
            std::cout << " x3=0x" << std::hex << std::setw(8) << std::setfill('0') << top->dbg_reg_x3;
            std::cout << std::endl;
        }
    }

    // Cleanup
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
}