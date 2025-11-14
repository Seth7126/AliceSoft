// 函数: sub_58e590
// 地址: 0x58e590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
char eax = sub_525870(arg1 + 0x30, arg3)

if (eax != 0)
    sub_525980(arg1 + 0x30, arg2, arg3)
    return arg2

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = eax
sub_401ff0(arg2, arg3, 0, 0xffffffff)
return arg2
