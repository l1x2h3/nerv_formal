module counter_props (
    input wire clk,
    input wire reset,
    input wire enable,
    input wire [3:0] count
);

    // 假设 reset 信号在初始时为高电平（复位状态）
    initial assume (reset == 1'b1);

    // // 假设 reset 信号在第一个周期后为低电平
    // always @(posedge clk) begin
    //     if ($past(reset)) begin
    //         assume (reset == 1'b0);
    //     end
    // end

    // // 假设 enable 信号在复位后随机变化
    // always @(posedge clk) begin
    //     if (!reset) begin
    //         assume (enable == $anyseq); // enable 可以是任意值
    //     end
    // end

    // // 属性 1：复位时计数器应为 0
    // always @(posedge clk) begin
    //     if (reset) begin
    //         assert (count == 0); // 复位时计数器必须为 0
    //     end
    // end

    // 属性 2：使能时计数器应递增
    // 属性 2：使能时计数器应递增
    always @(posedge clk) begin
        if (!reset && enable) begin
            if ($past(!reset) && $past(enable)) begin
                if ($past(count) != 4'b1111) begin
                    assert (count == ($past(count) + 1)); // 使能时计数器递增
                end else begin
                    assert (count == 4'b0000); // 计数器溢出后回绕
                end
            end
        end
    end

endmodule