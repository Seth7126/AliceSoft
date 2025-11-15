// 函数: sub_590620
// 地址: 0x590620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = 0

if (0f < arg2)
    int32_t eax_15 = int.d(arg2)
    
    if (eax_15 s>= 0)
        int32_t ecx_9 = *(arg1 + 0x24)
        
        if (eax_15 s>= ecx_9)
            eax_15 = ecx_9 - 1
    else
        eax_15 = 0
    
    int32_t ecx_10 = eax_15 + 1
    
    if (ecx_10 s>= 0)
        int32_t edx_9 = *(arg1 + 0x24)
        
        if (ecx_10 s>= edx_9)
            ecx_10 = edx_9 - 1
    else
        ecx_10 = 0
    
    int32_t var_24_1 = ecx_10
    sub_590960(arg1, arg3, eax_15, ecx_10, arg2 - _mm_cvtepi32_ps(zx.o(eax_15)))
    return arg3

int32_t eax
int32_t edx_3
edx_3:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_4 = edx_3 s>> 3
int128_t* var_c
sub_592330(&var_c, (edx_4 u>> 0x1f) + edx_4)
int32_t i = 0
int32_t eax_4
int32_t edx_5
edx_5:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
int32_t edx_6 = edx_5 s>> 3

if ((edx_6 u>> 0x1f) + edx_6 s> 0)
    int128_t* esi_1 = var_c
    int32_t edi_1 = 0
    int32_t edx_8
    
    do
        int32_t ecx_3 = *(arg1 + 0x28)
        int128_t* eax_8 = *(edi_1 + ecx_3 + 0x24)
        int32_t eax_9
        
        if (eax_8 == *(edi_1 + ecx_3 + 0x28))
            int64_t xmm1_1 = data_7fd4d8.q
            eax_9 = data_7fd4e0
            *esi_1 = data_79a970[0x10][0].o
            esi_1[1].q = xmm1_1
        else
            *esi_1 = *eax_8
            esi_1[1].q = eax_8[1].q
            eax_9 = *(eax_8 + 0x18)
        
        *(esi_1 + 0x18) = eax_9
        i += 1
        edi_1 += 0x30
        int32_t eax_10
        int32_t edx_7
        edx_7:eax_10 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x2c) - *(arg1 + 0x28))
        esi_1 += 0x1c
        edx_8 = edx_7 s>> 3
    while (i s< (edx_8 u>> 0x1f) + edx_8)

*arg3 = var_c
int32_t var_8
arg3[1] = var_8
int32_t var_4
arg3[2] = var_4
return arg3
