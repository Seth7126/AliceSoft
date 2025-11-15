// 函数: ?SetQuickCacheSlot@SchedulerBase@details@Concurrency@@QAEXIPAVScheduleGroupSegmentBase@23@@Z
// 地址: 0x6fbc05
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x5c)
int32_t esi_1 = arg2 << 7

if (*(esi_1 + result) == 0)
    result = 0
    int32_t* ecx_1 = *(arg1 + 0x5c) + esi_1
    
    if (0 != *ecx_1)
        return *ecx_1
    
    *ecx_1 = arg3

return result
