// 函数: ?IncrementCoreSubscription@SchedulerProxy@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
// 地址: 0x6f68f5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = *(arg2 + 0x28) * 0x34
int32_t edx_1 = *(*(arg2 + 0x24) * 0x34 + *(arg1 + 0x10) + 0x30)
int32_t eax_2 = *(edx_1 + esi_1 + 0x18)
*(edx_1 + esi_1 + 0x18) += 1
BOOL result = eax_2 + 1

if (result == 1)
    int32_t eax_4 = *(arg1 + 0x84) - *(arg1 + 0x80)
    void* edx_2 = *(arg1 + 0xc)
    int32_t eax_5 = neg.d(eax_4)
    result = sbb.d(eax_5, eax_5, eax_4 != 0) + 1
    
    if (*(edx_2 + 0x10) u> result)
        return SetEvent(*(edx_2 + 0x50))

return result
