// 函数: sub_621d30
// 地址: 0x621d30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u>= *(arg1 + 0x14))
    int32_t eax
    eax.b = 0
    return eax

void var_18
void var_c
int32_t* eax_2 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* edi = *eax_2

if (edi != 0)
    edi = *edi

int32_t edx = eax_2[2]

if (*(*(edi[1] + ((edx u>> 2 & (edi[2] - 1)) << 2)) + ((edx & 3) << 2)) == 0)
    int32_t eax_6
    eax_6.b = 0
    return eax_6

void* eax_8 = *sub_622160(arg2)
*(eax_8 + 0x1c) += 1
eax_8.b = 1
return eax_8
