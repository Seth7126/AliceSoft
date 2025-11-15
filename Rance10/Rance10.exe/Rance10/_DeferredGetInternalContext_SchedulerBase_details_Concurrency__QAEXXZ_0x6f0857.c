// 函数: ?DeferredGetInternalContext@SchedulerBase@details@Concurrency@@QAEXXZ
// 地址: 0x6f0857
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x1e4)
*(arg1 + 0x1e4) += 1
BOOL result = eax + 1

if (result != 1)
    return result

return SetEvent(*(arg1 + 0x1d8))
