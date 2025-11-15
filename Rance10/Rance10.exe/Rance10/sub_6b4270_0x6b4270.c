// 函数: sub_6b4270
// 地址: 0x6b4270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = *(arg1 + 0x28)
int32_t i_2 = i_1
int32_t eax = sub_6b2e10(arg2, *(arg1 + 0x24))
int32_t result
int32_t ebp_2

if (eax s< 0)
    ebp_2 = *(arg1 + 8)
    result = 0
else
    int32_t ecx_2 = *(*(arg1 + 0x20) + (eax << 2))
    
    if (ecx_2 s>= 0)
        int32_t edx_1 = arg2[4]
        int32_t ebx_2 = *arg2
        int32_t edi_1 = sx.d(*(*(arg1 + 0x1c) + ecx_2 - 1)) + arg2[1]
        
        if (ebx_2 s> edx_1 - ((edi_1 + 7) s>> 3))
            arg2[3] = 0
            *arg2 = edx_1
            arg2[1] = 1
            return ecx_2 - 1
        
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(edi_1)
        arg2[1] = edi_1 & 7
        int32_t eax_9 = (eax_7 + (edx_2 & 7)) s>> 3
        arg2[3] += eax_9
        *arg2 = eax_9 + ebx_2
        return ecx_2 - 1
    
    result = ecx_2 s>> 0xf & 0x7fff
    ebp_2 = *(arg1 + 8) - (ecx_2 & 0x7fff)

int32_t edx_5 = sub_6b2e10(arg2, i_1)

if (edx_5 s>= 0)
label_6b4359:
    int32_t edx_7 = rol.d(edx_5, 0x10)
    int32_t ecx_12 = ((edx_7 u>> 8 ^ edx_7 << 8) & 0xff00ff) ^ edx_7 << 8
    int32_t edx_13 = ((ecx_12 u>> 4 ^ ecx_12 << 4) & 0xf0f0f0f) ^ ecx_12 << 4
    int32_t ecx_18 = ((edx_13 u>> 2 ^ edx_13 << 2) & 0x33333333) ^ edx_13 << 2
    int32_t edx_18 = ((ecx_18 u>> 1 ^ (ecx_18 * 2)) & 0x55555555) ^ (ecx_18 * 2)
    int32_t i = ebp_2 - result
    
    if (i s> 1)
        do
            int32_t edx_20 = i s>> 1
            int32_t ecx_20 =
                neg.d(sbb.d(ecx_18, ecx_18, edx_18 u< *(*(arg1 + 0x14) + ((edx_20 + result) << 2))))
            ecx_18 = neg.d(ecx_20) & edx_20
            ebp_2 -= ecx_18
            result += (ecx_20 - 1) & edx_20
            i = ebp_2 - result
        while (i s> 1)
        
        i_1 = i_2
    
    int32_t edx_22 = arg2[4]
    int32_t eax_29 = sx.d(*(*(arg1 + 0x1c) + result))
    
    if (eax_29 s<= i_1)
        int32_t ebp_3 = *arg2
        int32_t edi_5 = arg2[1] + eax_29
        
        if (ebp_3 s> edx_22 - ((edi_5 + 7) s>> 3))
            arg2[3] = 0
            *arg2 = edx_22
            arg2[1] = 1
            return result
        
        int32_t eax_34
        int32_t edx_23
        edx_23:eax_34 = sx.q(edi_5)
        int32_t eax_36 = (eax_34 + (edx_23 & 7)) s>> 3
        arg2[3] += eax_36
        arg2[1] = edi_5 & 7
        *arg2 = eax_36 + ebp_3
        return result
    
    int32_t ebx_4 = arg2[1] + i_1
    int32_t edi_7 = *arg2
    
    if (edi_7 s> edx_22 - ((ebx_4 + 7) s>> 3))
        arg2[3] = 0
        *arg2 = edx_22
        arg2[1] = 1
        return 0xffffffff
    
    int32_t eax_42
    int32_t edx_25
    edx_25:eax_42 = sx.q(ebx_4)
    int32_t eax_44 = (eax_42 + (edx_25 & 7)) s>> 3
    arg2[3] += eax_44
    *arg2 = eax_44 + edi_7
    arg2[1] = ebx_4 & 7
else
    while (i_1 s> 1)
        i_1 -= 1
        i_2 = i_1
        edx_5 = sub_6b2e10(arg2, i_1)
        
        if (edx_5 s>= 0)
            goto label_6b4359
    
    if (edx_5 s>= 0)
        goto label_6b4359

return 0xffffffff
