// 函数: ?Initialize@ScheduleGroupSegmentBase@details@Concurrency@@IAEXPAVScheduleGroupBase@23@PAVSchedulingRing@23@PAVlocation@3@@Z
// 地址: 0x6fb26f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
*(arg1 + 0x100) = arg2
*(arg1 + 8) = arg3
Concurrency::location::_Assign(arg1 + 0xc, arg4)
*(arg1 + 0x110) = 0
*(arg1 + 0x11c) = 1
Concurrency::details::QuickBitSet::operator=(arg1 + 0x1c, 
    Concurrency::details::SchedulerBase::GetBitSet(*(arg2 + 4), &var_c, arg4))
_free(arg1)

if ((*arg4 & 0xfffffff) == 3)
    int32_t var_1c_4 = arg4[2]
    *(arg1 + 0x24) = sub_6f7b50(*(arg2 + 4))

return Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Initialize(
    arg1 + 0x34, arg1 + 0x1c)
