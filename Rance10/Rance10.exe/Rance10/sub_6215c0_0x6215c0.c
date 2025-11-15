// 函数: sub_6215c0
// 地址: 0x6215c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char result = sub_621560(arg1, arg2)

if (result == 0)
    return result

void var_18
void var_c
int32_t* eax_1 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* esi_1 = *eax_1

if (esi_1 != 0)
    esi_1 = *esi_1

int32_t edx = eax_1[2]
int32_t eax_7 = *(*(*(esi_1[1] + ((edx u>> 2 & (esi_1[2] - 1)) << 2)) + ((edx & 3) << 2)) + 4)

if (eax_7 != 0 && eax_7 != 1 && eax_7 != 3 && eax_7 != 4)
    return 0

return 1
