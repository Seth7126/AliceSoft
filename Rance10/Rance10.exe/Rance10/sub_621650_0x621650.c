// 函数: sub_621650
// 地址: 0x621650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = sub_621560(arg1, arg2)

if (eax == 0)
    return eax

void var_18
void var_c
int32_t* eax_2 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* esi_1 = *eax_2

if (esi_1 != 0)
    esi_1 = *esi_1

int32_t edx = eax_2[2]
void* eax_7
eax_7.b = *(*(*(esi_1[1] + ((edx u>> 2 & (esi_1[2] - 1)) << 2)) + ((edx & 3) << 2)) + 4) == 3
return eax_7
