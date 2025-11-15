// 函数: ?SafelyDeleteDetachedWorkQueue@ScheduleGroupSegmentBase@details@Concurrency@@IAE_NPAVWorkQueue@23@@Z
// 地址: 0x6fb687
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_6fb501(arg1 + 0xa8, arg2 + 0x2c, *(arg2 + 0x2c), 0) != 0)
    if (*(arg2 + 0x50) s<= *(arg2 + 0x4c))
        Concurrency::details::WorkQueue::RetireAtSafePoint(arg2, arg1)
        return 1
    
    Concurrency::details::WorkQueue::RedetachFromScheduleGroupAtSafePoint(arg2, arg1)

return 0
