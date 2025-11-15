// 函数: sub_6c96d0
// 地址: 0x6c96d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 0xc)
char* edx = *(arg1 + 4)
void* eax
eax.b = ecx != 0

if (eax + 1 + edx u> *(arg1 + 8))
    void* eax_2
    eax_2.b = 0
    return eax_2

if (ecx == 0)
    ecx.b = *edx
    *arg2 = ecx.b
    char* eax_3
    eax_3.b = 1
    *(arg1 + 4) += 1
    return eax_3

char eax_4 = *edx << ecx.b
ecx.b = 8
*arg2 = eax_4
*(arg1 + 4) += 1
ecx.b = 8 - *(arg1 + 0xc)
*arg2 |= **(arg1 + 4) u>> ecx.b
return 1
