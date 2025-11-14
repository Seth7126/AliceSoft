// 函数: sub_5d35f0
// 地址: 0x5d35f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 u>= *(arg1 + 0xc) u>> 2)
    return 0

if (*(arg1 + 0xc) != 0)
    return *(arg1 + 8) + (arg2 << 2)

return arg2 << 2
