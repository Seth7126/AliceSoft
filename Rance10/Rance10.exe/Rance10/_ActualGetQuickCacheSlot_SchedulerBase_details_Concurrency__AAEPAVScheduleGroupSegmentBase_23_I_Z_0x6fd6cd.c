// 函数: ?ActualGetQuickCacheSlot@SchedulerBase@details@Concurrency@@AAEPAVScheduleGroupSegmentBase@23@I@Z
// 地址: 0x6fd6cd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg2 << 7
int32_t result = *(esi_1 + *(arg1 + 0x5c))

if (result u> 1)
    int32_t result_1 = result
    int32_t* ecx_1 = *(arg1 + 0x5c) + esi_1
    
    if (result_1 == *ecx_1)
        *ecx_1 = 1
    else
        result_1 = *ecx_1
    
    if (result == result_1)
        return result

return 0
