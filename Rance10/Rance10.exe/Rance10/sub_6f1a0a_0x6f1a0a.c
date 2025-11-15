// 函数: sub_6f1a0a
// 地址: 0x6f1a0a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 0x30) & 4) != 0)
    return 0

int32_t ebx = *(arg1 + 0x14)
*(arg1 + 0x14) -= 1

if (ebx == 1)
    int32_t esi_1 = *(*arg1 + 0x1c)
    j_sub_4033e0()
    esi_1()
    Concurrency::details::SchedulerBase::RemoveScheduleGroup(*(arg1 + 4), arg1)

return ebx - 1
