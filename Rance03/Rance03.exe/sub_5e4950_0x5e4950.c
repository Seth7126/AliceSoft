// 函数: sub_5e4950
// 地址: 0x5e4950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char* edx = (*(*(arg1 + 0x18) + 4))()
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0

if (*edx == 0)
    sub_402110(arg2, edx, nullptr)
    return arg2

char* ecx_3 = edx
char* eax_1

do
    eax_1.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax_1.b != 0)
sub_402110(arg2, edx, ecx_3 - &ecx_3[1])
return arg2
