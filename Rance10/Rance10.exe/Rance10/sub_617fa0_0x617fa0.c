// 函数: sub_617fa0
// 地址: 0x617fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* edx = (*(**(data_7fcbb8 + 0x20) + 4))()
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0

if (*edx == 0)
    sub_403490(arg1, edx, nullptr)
    return arg1

char* ecx_2 = edx
char* eax_2

do
    eax_2.b = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax_2.b != 0)
sub_403490(arg1, edx, ecx_2 - &ecx_2[1])
return arg1
