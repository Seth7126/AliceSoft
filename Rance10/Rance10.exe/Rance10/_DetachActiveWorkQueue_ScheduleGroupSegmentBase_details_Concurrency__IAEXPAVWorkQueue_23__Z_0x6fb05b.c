// 函数: ?DetachActiveWorkQueue@ScheduleGroupSegmentBase@details@Concurrency@@IAEXPAVWorkQueue@23@@Z
// 地址: 0x6fb05b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 0x100)

if ((*(eax + 0x30) & 4) == 0)
    *(eax + 0x14) += 1

Concurrency::details::WorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::MarkDetachment(
    arg2 + 0x4c)
*(arg2 + 0x38) = 1
return sub_6fa8b8(arg1 + 0xa8, arg2 + 0x2c)
