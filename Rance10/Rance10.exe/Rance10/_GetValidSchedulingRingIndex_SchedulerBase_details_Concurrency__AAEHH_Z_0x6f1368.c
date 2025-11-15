// 函数: ?GetValidSchedulingRingIndex@SchedulerBase@details@Concurrency@@AAEHH@Z
// 地址: 0x6f1368
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(*(*(arg1 + 0x24) + (arg2 << 2)) + 0xbc) != 0)
    return arg2

return Concurrency::details::SchedulerBase::GetNextValidSchedulingRingIndex(arg1, arg2)
