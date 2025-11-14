// 函数: sub_698820
// 地址: 0x698820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t uIDEvent = *(arg1 + 4)

if (uIDEvent != 0)
    KillTimer(*(arg1 + 8), uIDEvent)
    *(arg1 + 4) = 0

*(arg1 + 8) = arg2
*(arg1 + 4) = SetTimer(arg2, 1, arg3, nullptr)
uint32_t result
result.b = 1
return result
