// 函数: sub_5ff7e0
// 地址: 0x5ff7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x2c)

if (eax s>= *(arg1 + 0x30))
    eax.b = 0
    return eax

int32_t ecx

if (*(arg1 + 0x14) != 0)
    ecx = *(arg1 + 0x10)
else
    ecx = 0

*arg2 = *(ecx + eax * 0xc)
int32_t ecx_2

if (*(arg1 + 0x14) != 0)
    ecx_2 = *(arg1 + 0x10)
else
    ecx_2 = 0

*arg3 = *(ecx_2 + *(arg1 + 0x2c) * 0xc + 4)
int32_t ecx_4

if (*(arg1 + 0x14) != 0)
    ecx_4 = *(arg1 + 0x10)
else
    ecx_4 = 0

*arg4 = *(ecx_4 + *(arg1 + 0x2c) * 0xc + 8)
int32_t* eax_8
eax_8.b = 1
*(arg1 + 0x2c) += 1
return eax_8
