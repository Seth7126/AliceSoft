// 函数: ?FindSegment@ScheduleGroupBase@details@Concurrency@@MAEPAVScheduleGroupSegmentBase@23@PAVlocation@3@PAVSchedulingRing@23@@Z
// 地址: 0x6fb0d5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = *arg2 & 0xfffffff
int32_t eax_2 = neg.d(eax_1)
void* i = *((sbb.d(eax_2, eax_2, eax_1 != 0) & 0xfffffffc) + arg1 + 0x10)
void var_14
sub_6f887a(*(arg3 + 4), &var_14)

for (; i != 0; i = *(i + 0x104))
    if (Concurrency::location::operator==(i + 0xc, arg2) != 0 && *(i + 8) == arg3)
        break

return i
