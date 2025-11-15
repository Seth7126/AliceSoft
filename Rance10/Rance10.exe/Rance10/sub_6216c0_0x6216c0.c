// 函数: sub_6216c0
// 地址: 0x6216c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u>= *(arg1 + 0x14))
    return 0

void var_18
void var_c
int32_t* eax_2 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* eax_3 = *eax_2

if (eax_3 != 0)
    eax_3 = *eax_3

int32_t esi_1 = eax_2[2]
return *(*(eax_3[1] + ((esi_1 u>> 2 & (eax_3[2] - 1)) << 2)) + ((esi_1 & 3) << 2))
