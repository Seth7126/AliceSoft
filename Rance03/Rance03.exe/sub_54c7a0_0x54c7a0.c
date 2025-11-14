// 函数: sub_54c7a0
// 地址: 0x54c7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
int32_t edx_3 = edx_2 s>> 3

if ((arg3[1] - *arg3) s>> 5 != (edx_3 u>> 0x1f) + edx_3)
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
    int32_t edx_5 = edx_4 s>> 3
    sub_54b4f0(arg3, (edx_5 u>> 0x1f) + edx_5)

if (0 f< arg2)
    int32_t eax_19 = int.d(arg2)
    
    if (eax_19 s>= 0)
        int32_t ecx_11 = *(arg1 + 0x2c)
        
        if (eax_19 s>= ecx_11)
            eax_19 = ecx_11 - 1
    else
        eax_19 = 0
    
    int32_t ecx_12 = eax_19 + 1
    
    if (ecx_12 s>= 0)
        int32_t edx_10 = *(arg1 + 0x2c)
        
        if (ecx_12 s>= edx_10)
            ecx_12 = edx_10 - 1
    else
        ecx_12 = 0
    
    int32_t var_3c_2 = ecx_12
    return sub_54cb70(arg1, arg3, eax_19, ecx_12, arg2 - _mm_cvtepi32_ps(zx.o(eax_19)))

int32_t ebp_1 = 0
int32_t eax_8
int32_t edx_6
edx_6:eax_8 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
int32_t edx_7 = edx_6 s>> 3
int32_t eax_11 = (edx_7 u>> 0x1f) + edx_7

if (eax_11 s<= 0)
    return eax_11

int32_t ebx_1 = 0
int32_t esi_3 = 0
int32_t eax_18

do
    int32_t ecx_5 = *(arg1 + 0x30)
    void* eax_12 = *(esi_3 + ecx_5 + 0x24)
    
    if (eax_12 == *(esi_3 + ecx_5 + 0x28))
        uint128_t xmm1_1 = data_7091c0
        int32_t var_14_1 = 0
        int32_t ecx_8 = *arg3
        int32_t var_18_1 = 0
        int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 0xc)
        *(ecx_8 + ebx_1 + 4) = 0.o
        *(ecx_8 + ebx_1 + 0x14) = xmm1_1.12:4.q
        *(ecx_8 + ebx_1 + 0x1c) = xmm1_2
    else
        int32_t ecx_7 = *arg3
        *(ecx_7 + ebx_1 + 4) = *(eax_12 + 4)
        *(ecx_7 + ebx_1 + 0x14) = *(eax_12 + 0x14)
        *(ecx_7 + ebx_1 + 0x1c) = *(eax_12 + 0x1c)
    
    ebp_1 += 1
    int32_t eax_15
    int32_t edx_8
    edx_8:eax_15 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x34) - *(arg1 + 0x30))
    esi_3 += 0x30
    ebx_1 += 0x20
    int32_t edx_9 = edx_8 s>> 3
    eax_18 = (edx_9 u>> 0x1f) + edx_9
while (ebp_1 s< eax_18)

return eax_18
