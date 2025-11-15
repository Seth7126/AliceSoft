// 函数: ?DecrementCoreSubscription@SchedulerProxy@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
// 地址: 0x6f6354
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = *(arg2 + 0x28) * 0x34
BOOL result = *(*(arg2 + 0x24) * 0x34 + *(arg1 + 0x10) + 0x30)
bool cond:0 = *(result + esi_1 + 0x18) != 1
*(result + esi_1 + 0x18)
*(result + esi_1 + 0x18) -= 1

if (not(cond:0))
    int32_t eax_3 = *(arg1 + 0x84) - *(arg1 + 0x80)
    void* edx_2 = *(arg1 + 0xc)
    int32_t eax_4 = neg.d(eax_3)
    result = sbb.d(eax_4, eax_4, eax_3 != 0) + 1
    
    if (*(edx_2 + 0x10) u> result)
        return SetEvent(*(edx_2 + 0x50))

return result
