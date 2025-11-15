// 函数: ?RemoveScheduleGroupSegment@SchedulingRing@details@Concurrency@@AAEXPAVScheduleGroupSegmentBase@23@@Z
// 地址: 0x6fa49a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SLIST_HEADER* ecx

if ((*(arg2 + 0xc) & 0xfffffff) != 0)
    ecx = arg1 + 0x10
else
    ecx = arg1 + 0x60

return sub_6fa398(ecx, arg2, *(arg2 + 0xf8), 1)
