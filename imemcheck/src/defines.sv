`define RISCV_FORMAL
`define RISCV_FORMAL_NRET 1
`define RISCV_FORMAL_XLEN 32
`define RISCV_FORMAL_ILEN 32
`define NERV_RVFI
`define NERV_FAIRNESS  # Required to make k-induction work
`define RISCV_FORMAL_ALIGNED_MEM
`include "rvfi_macros.vh"
