// 函数: ?FindScheduleGroupSegment@SchedulingRing@details@Concurrency@@AAEPAVScheduleGroupSegmentBase@23@HHPAHPAV?$ListArray@VScheduleGroupSegmentBase@details@Concurrency@@@23@@Z
// 地址: 0x6f0be3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg1
int32_t result = 0

for (; i s< arg2; i += 1)
    if (result != 0)
        break
    
    result = sub_6efd4d(arg4, i)

*arg3 = i - 1
return result
