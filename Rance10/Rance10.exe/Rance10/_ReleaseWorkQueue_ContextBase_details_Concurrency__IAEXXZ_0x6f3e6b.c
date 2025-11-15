// 函数: ?ReleaseWorkQueue@ContextBase@details@Concurrency@@IAEXXZ
// 地址: 0x6f3e6b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = *(arg1 + 0x20)

if (esi != 0)
    *(arg1 + 0x20) = 0
    
    if (*(esi + 0x50) s<= *(esi + 0x4c))
        if (*(esi + 0x70) == 0)
            *(esi + 0x48) = 0
        else
            Concurrency::details::WorkQueue::LockedSetOwningContext(esi, 0)
        
        sub_6f3f38(*(arg1 + 0x18) + 0x58, esi, *(esi + 0x44), 1)
    else
        Concurrency::details::WorkQueue::LockedSetOwningContext(esi, 0)
        Concurrency::details::ScheduleGroupSegmentBase::DetachActiveWorkQueue(*(arg1 + 0x18), esi)

return sub_6f399e(arg1) __tailcall
