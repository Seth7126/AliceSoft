// 函数: sub_621560
// 地址: 0x621560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u>= *(arg1 + 0x14))
    int32_t eax
    eax.b = 0
    return eax

void var_18
void var_c
int32_t* eax_2 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* esi = *eax_2

if (esi != 0)
    esi = *esi

int32_t edx = eax_2[2]
int32_t eax_6
eax_6.b = *(*(esi[1] + ((edx u>> 2 & (esi[2] - 1)) << 2)) + ((edx & 3) << 2)) != 0
return eax_6
