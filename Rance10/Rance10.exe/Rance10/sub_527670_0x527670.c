// 函数: sub_527670
// 地址: 0x527670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 == 0)
    *(arg1 + 0x88) = 0xff
    *(arg1 + 0x84) = 0xff
    arg1[8].d = 0xff

if (arg4 == 0)
    *(arg1 + 0x94) = 0
    arg1[9].d = 0
    *(arg1 + 0x8c) = 0

if (arg6 == 0)
    *(arg1 + 0x98) = 0

if (arg3 == 0)
    *(arg1 + 0xa4) = 0xff

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5].q = arg2[5].q
return arg2
