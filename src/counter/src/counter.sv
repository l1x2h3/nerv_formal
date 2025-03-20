module counter (
    input wire clk,       // 时钟信号
    input wire reset,     // 复位信号（高电平有效）
    input wire enable,    // 使能信号（高电平有效）
    output reg [3:0] count // 4 位计数器输出
);

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            count <= 4'b0; // 复位时计数器清零
        end else if (enable) begin
            count <= count + 1; // 使能时计数器加 1
        end
    end

endmodule