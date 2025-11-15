// 函数: ?GetPseudoRRAffineScheduleGroupSegment@SchedulingRing@details@Concurrency@@QAEPAVScheduleGroupSegmentBase@23@PAH@Z
// 地址: 0x6fd8a7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0xb0)
int32_t result = Concurrency::details::SchedulingRing::FindScheduleGroupSegment(edi, 
    *(arg1 + 0x50), arg2, arg1 + 0x10)

if (result == 0 && edi != 0)
    return Concurrency::details::SchedulingRing::FindScheduleGroupSegment(result, edi, arg2, 
        arg1 + 0x10)

return result
