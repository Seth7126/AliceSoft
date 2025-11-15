// 函数: ?IncreaseFullyLoadedSchedulerAllocations@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6eda26
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (*(arg1 + 8) u<= 0)
    return 

do
    void* ebx_1 = *(*(arg1 + 0x54) + (i << 2))
    
    if (*(ebx_1 + 0x21) == 1)
        int32_t eax_1 = Concurrency::details::SchedulerProxy::DesiredHWThreads(*(ebx_1 + 0x10))
        *(ebx_1 + 0x24) =
            Concurrency::details::SchedulerProxy::AdjustAllocationIncrease(*(ebx_1 + 0x10), eax_1)
    
    i += 1
while (i u< *(arg1 + 8))
