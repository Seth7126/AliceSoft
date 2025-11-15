// 函数: ?ClearQuickCacheSlot@SchedulerBase@details@Concurrency@@QAEXI@Z
// 地址: 0x6f79da
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg2 << 7

if (*(esi_1 + *(arg1 + 0x5c)) == 1)
    int32_t* ecx_1 = *(arg1 + 0x5c) + esi_1
    
    if (1 != *ecx_1)
        return *ecx_1
    
    *ecx_1 = 0

return 1
