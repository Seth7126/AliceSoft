// 函数: ?UpdateWorkState@VirtualProcessor@details@Concurrency@@QAEX_N0@Z
// 地址: 0x6f836a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t ebx
ebx.b = arg2
void* result = **(arg1 + 0x50)

if (*(arg1 + 0x60) == 0)
    if (ebx.b != 0)
        Concurrency::details::ReferenceCountedQuickBitSet::InterlockedClear(result + 0x48, 
            *(arg1 + 0x90))
else if (ebx.b == 0)
    int32_t esi_1 = *(arg1 + 0x90)
    *(arg1 + 0x62) = 1
    Concurrency::details::ReferenceCountedQuickBitSet::InterlockedSet(result + 0x48, esi_1)
    Concurrency::details::SchedulerBase::ClearQuickCacheSlot(result, esi_1)

result.b = arg3
*(arg1 + 0x60) = ebx.b
*(arg1 + 0x61) = result.b
return result
