// 函数: sub_401f60
// 地址: 0x401f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*arg2 == 0)
    sub_402110(arg1, arg2, nullptr)
    return arg1

char* edx = arg2
char i

do
    i = *edx
    edx = &edx[1]
while (i != 0)
sub_402110(arg1, arg2, edx - &edx[1])
return arg1
