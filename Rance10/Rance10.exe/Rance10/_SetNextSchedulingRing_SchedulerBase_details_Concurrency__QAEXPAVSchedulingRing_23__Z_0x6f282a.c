// 函数: ?SetNextSchedulingRing@SchedulerBase@details@Concurrency@@QAEXPAVSchedulingRing@23@@Z
// 地址: 0x6f282a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0xc) == 1)
    *(arg1 + 0x178) =
        Concurrency::details::SchedulerBase::GetNextValidSchedulingRingIndex(arg1, *(arg2 + 0xb8))
