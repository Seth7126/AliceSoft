// 函数: ?GetPseudoRRNonAffineScheduleGroupSegment@SchedulingRing@details@Concurrency@@QAEPAVScheduleGroupSegmentBase@23@PAH@Z
// 地址: 0x6fd8e2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0xb4)
int32_t result = Concurrency::details::SchedulingRing::FindScheduleGroupSegment(edi, 
    *(arg1 + 0xa0), arg2, arg1 + 0x60)

if (result == 0 && edi != 0)
    return Concurrency::details::SchedulingRing::FindScheduleGroupSegment(result, edi, arg2, 
        arg1 + 0x60)

return result
