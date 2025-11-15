// 函数: sub_42cf20
// 地址: 0x42cf20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 2)
    return 1

if (arg1 == 3)
    return 2

if (arg1 == 4)
    return arg1

if (arg1 != 1)
    return 0

if (sub_407560(arg2, "true") != 0)
    return 3

int32_t ecx_2
ecx_2.b = sub_407560(arg2, "false") == 0
return (ecx_2 << 1) + 3
