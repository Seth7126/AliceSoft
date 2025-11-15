// 函数: ?GetNextScheduleGroupSegment@SchedulingRing@details@Concurrency@@AAEPAVScheduleGroupSegmentBase@23@PAHHPAV?$ListArray@VScheduleGroupSegmentBase@details@Concurrency@@@23@@Z
// 地址: 0x6f1161
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = *arg1 + 1

if (edx_1 s> arg2)
    int32_t result = Concurrency::details::SchedulingRing::FindScheduleGroupSegment(edx_1, 
        *(arg3 + 0x40), arg1, arg3)
    edx_1 = 0
    
    if (result != 0)
        return result

return Concurrency::details::SchedulingRing::FindScheduleGroupSegment(edx_1, arg2, arg1, arg3)
