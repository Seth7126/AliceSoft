// 函数: sub_498430
// 地址: 0x498430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
char* edx = (*(*(arg1 + 0x18) + 4))()
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0

if (*edx == 0)
    sub_403490(arg2, edx, nullptr)
    return arg2

char* ecx_3 = edx
char* eax_1

do
    eax_1.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax_1.b != 0)
sub_403490(arg2, edx, ecx_3 - &ecx_3[1])
return arg2
