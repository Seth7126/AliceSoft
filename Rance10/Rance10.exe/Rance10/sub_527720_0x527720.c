// 函数: sub_527720
// 地址: 0x527720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg6 != 0)
    arg1[8].d = *(arg2 + 0x80)
    *(arg1 + 0x84) = *(arg2 + 0x84)
    *(arg1 + 0x88) = *(arg2 + 0x88)

if (arg5 != 0)
    *(arg1 + 0x8c) = *(arg2 + 0x8c)
    arg1[9].d = *(arg2 + 0x90)
    *(arg1 + 0x94) = *(arg2 + 0x94)

if (arg7 != 0)
    *(arg1 + 0x98) = *(arg2 + 0x98)

if (arg4 != 0)
    *(arg1 + 0xa4) = *(arg2 + 0xa4)

*arg1 = *arg3
arg1[1] = arg3[1]
arg1[2] = arg3[2]
arg1[3] = arg3[3]
arg1[4] = arg3[4]
arg1[5].q = arg3[5].q
return arg3
