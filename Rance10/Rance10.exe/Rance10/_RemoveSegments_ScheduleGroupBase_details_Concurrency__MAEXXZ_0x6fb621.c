// 函数: ?RemoveSegments@ScheduleGroupBase@details@Concurrency@@MAEXXZ
// 地址: 0x6fb621
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t i_2 = *(arg1 + 0x10)

if (i_2 != 0)
    uint32_t i
    
    do
        i = *(i_2 + 0x104)
        Concurrency::details::ScheduleGroupSegmentBase::Remove(i_2)
        i_2 = i
    while (i != 0)

uint32_t i_3 = *(arg1 + 0xc)

if (i_3 != 0)
    uint32_t i_1
    
    do
        i_1 = *(i_3 + 0x104)
        Concurrency::details::ScheduleGroupSegmentBase::Remove(i_3)
        i_3 = i_1
    while (i_1 != 0)

*(arg1 + 0x10) = 0
*(arg1 + 0xc) = 0
