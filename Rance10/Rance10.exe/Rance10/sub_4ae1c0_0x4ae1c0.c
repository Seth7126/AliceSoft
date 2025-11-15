// 函数: sub_4ae1c0
// 地址: 0x4ae1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = &arg2

if (arg2 s>= *(arg1 + 0x18))
    esi = arg1 + 0x18

int32_t* edx_1 = &arg3
int32_t eax = *esi
int32_t esi_1 = 0x32

if (eax s> 0x32)
    esi_1 = eax

int32_t result = arg3

if (result s>= *(arg1 + 0x1c))
    edx_1 = arg1 + 0x1c

int32_t ecx_1 = 0x18

if (*edx_1 s> 0x18)
    ecx_1 = *edx_1

if (*(arg1 + 0x10) == esi_1 && *(arg1 + 0x14) == ecx_1)
    return result

bool cond:1_1 = *(arg1 + 0x70) != 0
int32_t eax_1 = 0x18
*(arg1 + 0x10) = esi_1
*(arg1 + 0x14) = ecx_1

if (not(cond:1_1))
    eax_1 = *(arg1 + 8)

return sub_4ae160(arg1, *(arg1 + 4), eax_1)
