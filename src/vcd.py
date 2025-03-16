from vcdvcd import VCDVCD

# 加载 VCD 文件
vcd = VCDVCD('formal/engine_0/trace.vcd')

# 打印所有信号
for signal in vcd.signals:
    print(signal)

# 获取某个信号的值变化
# signal_name = 'top.module.signal_name'
# if signal_name in vcd.data:
#     for timestamp, value in vcd.data[signal_name].tv:
#         print(f"Time: {timestamp}, Value: {value}")