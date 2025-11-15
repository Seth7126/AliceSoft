// 函数: ?ClearQuickCacheSlotIf@SchedulerBase@details@Concurrency@@QAEXIPAVScheduleGroupSegmentBase@23@@Z
// 地址: 0x6fadf8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg2 << 7

if (*(esi_1 + *(arg1 + 0x5c)) == arg3)
    int32_t* ecx_1 = *(arg1 + 0x5c) + esi_1
    
    if (arg3 != *ecx_1)
        return *ecx_1
    
    *ecx_1 = 0

return arg3
