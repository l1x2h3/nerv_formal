// counter_top.sv
module counter_top (
    input wire clk,
    input wire reset,
    input wire enable
);

    wire [3:0] count;


    // 实例化计数器
    counter u_counter (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .count(count)
    );

    // 实例化属性模块
    counter_props u_props (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .count(count)
    );

endmodule