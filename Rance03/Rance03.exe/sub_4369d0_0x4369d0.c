// 函数: sub_4369d0
// 地址: 0x4369d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (arg3 s< 0)
    sub_401f60(arg2, 0x6da0d2)
    return arg2

if ((*(arg1 + 0x7c) - *(arg1 + 0x78)) s>> 6 s<= arg3)
    sub_401f60(arg2, 0x6da0d3)
    return arg2

void** ecx_7 = (arg3 << 6) + *(arg1 + 0x78) + 0x28
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_401ff0(arg2, ecx_7, 0, 0xffffffff)
return arg2
