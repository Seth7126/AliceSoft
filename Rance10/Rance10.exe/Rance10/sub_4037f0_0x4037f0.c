// 函数: sub_4037f0
// 地址: 0x4037f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[4] u< arg2)
    sub_6d0947("invalid string position")
    noreturn

arg1[4] = arg2

if (arg1[5] u< 0x10)
    *(arg1 + arg2) = 0
    return arg1

(*arg1)[arg2] = 0
return arg1
