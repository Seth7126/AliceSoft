// 函数: sub_4b0330
// 地址: 0x4b0330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx

if (arg2 == 0 || arg3 != 0)
    edx = 0
else
    edx = 1

*(arg1 + 0xd) = arg3
*(arg1 + 0xc) = edx

if (arg4 != 0 && arg5 == 0)
    *(arg1 + 0xe) = 1
    *(arg1 + 0xf) = arg5
    return arg5

*(arg1 + 0xe) = 0
*(arg1 + 0xf) = arg5
return arg5
