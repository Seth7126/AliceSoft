// 函数: ?FindSegment@FairScheduleGroup@details@Concurrency@@MAEPAVScheduleGroupSegmentBase@23@PAVlocation@3@PAVSchedulingRing@23@@Z
// 地址: 0x6fbc3a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = (*(arg1 + 0x30) & 4) == 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0

if (cond:0)
    return *(arg1 + 0x38)

return Concurrency::details::ScheduleGroupBase::FindSegment(arg1, &var_14, arg2)
