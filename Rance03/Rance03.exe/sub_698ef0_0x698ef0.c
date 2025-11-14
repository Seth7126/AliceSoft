// 函数: sub_698ef0
// 地址: 0x698ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x5c) u>= 0x10)
    j__free(*(arg1 + 0x48))

*(arg1 + 0x5c) = 0xf
*(arg1 + 0x58) = 0
*(arg1 + 0x48) = 0

if (*(arg1 + 0x44) u>= 0x10)
    j__free(*(arg1 + 0x30))

*(arg1 + 0x44) = 0xf
*(arg1 + 0x40) = 0
*(arg1 + 0x30) = 0
j__free(arg1)
return arg1
