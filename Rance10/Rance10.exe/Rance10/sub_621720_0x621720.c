// 函数: sub_621720
// 地址: 0x621720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_6215c0(arg1, arg2) == 0)
    return 0

void var_18
void var_c
int32_t* eax_3 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* eax_4 = *eax_3

if (eax_4 != 0)
    eax_4 = *eax_4

int32_t esi_2 = eax_3[2]
return *(*(eax_4[1] + ((esi_2 u>> 2 & (eax_4[2] - 1)) << 2)) + ((esi_2 & 3) << 2))
