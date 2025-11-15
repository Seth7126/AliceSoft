// 函数: sub_621db0
// 地址: 0x621db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u>= *(arg1 + 0x14))
    int32_t eax
    eax.b = 0
    return eax

void var_18
void var_c
int32_t* eax_2 = sub_622260(sub_44a580(arg1 + 4, &var_c), &var_18, arg2)
int32_t* ebx = *eax_2

if (ebx != 0)
    ebx = *ebx

int32_t edx = eax_2[2]
int32_t edx_1 = edx & 3
int32_t eax_6 = *(ebx[1] + ((edx u>> 2 & (ebx[2] - 1)) << 2))
int32_t* ecx_5 = *(eax_6 + (edx_1 << 2))
int32_t* ebx_1 = eax_6 + (edx_1 << 2)

if (ecx_5 != 0)
    if (ecx_5[7] != 1)
        ecx_5[7] -= 1
        eax_6.b = 1
        return eax_6
    
    if ((*(*ecx_5 + 4))().b != 0)
        int32_t* ecx_6 = *ebx_1
        *ebx_1 = 0
        
        if (ecx_6 != 0)
            (**ecx_6)(1)
        
        sub_405d30(arg1 + 0x1c, arg2)
        int32_t eax_10
        eax_10.b = 1
        return eax_10

eax_6.b = 0
return eax_6
