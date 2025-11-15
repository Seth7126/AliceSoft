// 函数: ?IsVirtualProcessorRetired@InternalContextBase@details@Concurrency@@IAE_NXZ
// 地址: 0x6f9631
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xb2) != 0 || *(arg1[0x28] + 0xad) == 0)
    void* result
    result.b = 0
    return result

if (arg1[0x2b] u> 0)
    Concurrency::details::ReferenceCountedQuickBitSet::InterlockedClear(arg1[8] + 0x3c, 
        *(arg1[0x28] + 0x90))

arg1[0x2b] = 0

if (Concurrency::details::InternalContextBase::SwitchOut(arg1, 0) != 0)
    Concurrency::details::InternalContextBase::CleanupDispatchedContextOnCancel(arg1)

return 1
