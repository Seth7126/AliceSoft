// 函数: ?GetNextSchedulingNode@SchedulerBase@details@Concurrency@@QAEPAVSchedulingNode@23@PAHH@Z
// 地址: 0x6fd858
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t ecx
ecx.b = arg3 != 0xffffffff
int32_t edi = *(arg1 + 0x2c)
int32_t esi = 0

if (edi s> 0)
    do
        int32_t temp1_1 = mods.dp.d(sx.q(esi + ecx + *arg2), edi)
        
        if (temp1_1 == arg3)
            break
        
        int32_t result = *(*(arg1 + 0x20) + (temp1_1 << 2))
        
        if (result != 0)
            *arg2 = temp1_1
            return result
        
        esi += 1
    while (esi s< edi)

return 0
