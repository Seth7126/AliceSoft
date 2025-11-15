// 函数: sub_403360
// 地址: 0x403360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*arg2 == 0)
    sub_403490(arg1, arg2, nullptr)
    return arg1

char* edx = arg2
char i

do
    i = *edx
    edx = &edx[1]
while (i != 0)
sub_403490(arg1, arg2, edx - &edx[1])
return arg1
