// 函数: ?InternalReference@ScheduleGroupBase@details@Concurrency@@IAEJXZ
// 地址: 0x6f1ff2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 0x30) & 4) != 0)
    return 0

int32_t eax = *(arg1 + 0x14)
*(arg1 + 0x14) += 1
return eax + 1
