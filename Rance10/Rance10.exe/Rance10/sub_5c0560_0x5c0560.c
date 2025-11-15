// 函数: sub_5c0560
// 地址: 0x5c0560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = 0
arg1[2].d = 0
*(arg1 + 0x14) = 0
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
__builtin_memset(arg2 + 0xc, 0, 0x18)
arg1[3].d = 0
*(arg1 + 0x1c) = 0
arg1[4].d = 0
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].d = arg2[4].d
return arg1
