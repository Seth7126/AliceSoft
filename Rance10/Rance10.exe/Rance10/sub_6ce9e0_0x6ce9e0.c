// 函数: sub_6ce9e0
// 地址: 0x6ce9e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg2
int32_t edx = *(arg1 + 0x55c)
_strcpy_s(arg1 + 0x15c + edx, 0x400 - edx, esi)
char i

do
    i = *esi
    esi = &esi[1]
while (i != 0)
char* esi_2 = arg3
*(arg1 + 0x55c) += esi - &esi[1] + 1
void* eax_4 = *(arg1 + 0x55c)
_strcpy_s(eax_4 + 0x15c + arg1, 0x400 - eax_4, esi_2)
char i_1

do
    i_1 = *esi_2
    esi_2 = &esi_2[1]
while (i_1 != 0)
*(arg1 + 0x55c) += esi_2 - &esi_2[1] + 1
return 1
