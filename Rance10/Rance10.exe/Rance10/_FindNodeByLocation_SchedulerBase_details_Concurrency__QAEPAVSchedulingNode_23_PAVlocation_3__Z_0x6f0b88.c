// 函数: ?FindNodeByLocation@SchedulerBase@details@Concurrency@@QAEPAVSchedulingNode@23@PAVlocation@3@@Z
// 地址: 0x6f0b88
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax_2 = (*arg2 & 0xfffffff) - 1

if (eax_2 == 1)
    return *(*(arg1 + 0x20) + (arg2[2] << 2))

if (eax_2 == 2)
    var_8 = arg2[2]
    
    if (sub_6f0b17(arg1 + 0x15c, &var_8, &var_c) != 0)
        return *(*(arg1 + 0x20) + (var_c << 2))

return 0
