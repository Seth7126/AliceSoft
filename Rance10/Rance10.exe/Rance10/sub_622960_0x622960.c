// 函数: sub_622960
// 地址: 0x622960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_621560(arg1, arg2) == 0)
    return 0

void var_18
void var_c
int32_t* eax_3 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* edi_1 = *eax_3

if (edi_1 != 0)
    edi_1 = *edi_1

int32_t edx = eax_3[2]

if (*(*(*(edi_1[1] + ((edx u>> 2 & (edi_1[2] - 1)) << 2)) + ((edx & 3) << 2)) + 4) == 5)
    return *sub_622160(arg2)

return 0
