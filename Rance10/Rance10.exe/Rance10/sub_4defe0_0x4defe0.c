// 函数: sub_4defe0
// 地址: 0x4defe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 0x68)

if (eax == 0)
    eax.b = 0
    return eax

int32_t ecx = *(eax + 0x48)
*(eax + 0x4c) = 0

if (arg2 s>= ecx)
    *(arg1 + 0x13a) = 1
    *(arg1 + 0x13c) = arg2 - ecx
    int32_t eax_3
    eax_3.b = 1
    return eax_3

int32_t var_8 = arg2
sub_4daf50(*(arg1 + 0x68))
*(arg1 + 0x138) = 1
void* eax_2
eax_2.b = 1
return eax_2
