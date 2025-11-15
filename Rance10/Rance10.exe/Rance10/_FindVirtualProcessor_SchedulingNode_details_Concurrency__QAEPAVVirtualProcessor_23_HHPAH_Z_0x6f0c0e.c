// 函数: ?FindVirtualProcessor@SchedulingNode@details@Concurrency@@QAEPAVVirtualProcessor@23@HHPAH@Z
// 地址: 0x6f0c0e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg2
int32_t result = 0

for (; i s< arg3; i += 1)
    if (result != 0)
        break
    
    result = sub_6efd4d(arg1 + 0x38, i)

*arg4 = i - 1
return result
