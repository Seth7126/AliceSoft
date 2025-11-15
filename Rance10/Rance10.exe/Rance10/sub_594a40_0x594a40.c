// 函数: sub_594a40
// 地址: 0x594a40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3
int32_t* ebp = arg4
int32_t eax_3 = (ebp - arg3) s/ 0xc
int32_t eax_30

if (eax_3 s<= 0x28)
    if (*arg2 s< *arg3)
        int64_t xmm1_9 = *arg2
        int32_t ecx_7 = arg2[2]
        *arg2 = *arg3
        arg2[2] = arg3[2]
        *arg3 = xmm1_9
        arg3[2] = ecx_7
    
    eax_30 = *ebp
    
    if (eax_30 s< *arg2)
        int64_t xmm1_10 = *ebp
        int32_t ecx_8 = ebp[2]
        *ebp = *arg2
        ebp[2] = arg2[2]
        *arg2 = xmm1_10
        arg2[2] = ecx_8
        eax_30 = *arg2
        
        if (eax_30 s< *arg3)
            *arg2 = *arg3
            eax_30 = arg3[2]
            arg2[2] = eax_30
            *arg3 = xmm1_10
            arg3[2] = ecx_8
else
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
    int32_t ecx_1 = eax_7 * 0xc
    int32_t esi_3 = eax_7 * 0x18
    var_4 = esi_3
    arg4 = ecx_1
    
    if (*(ecx_1 + arg3) s< *arg3)
        int64_t xmm1_1 = *(ecx_1 + arg3)
        int32_t ecx_2 = *(ecx_1 + arg3 + 8)
        *(arg4 + arg3) = *arg3
        *(arg4 + arg3 + 8) = arg3[2]
        *arg3 = xmm1_1
        arg3[2] = ecx_2
        ecx_1 = arg4
        esi_3 = var_4
    
    if (*(esi_3 + arg3) s< *(ecx_1 + arg3))
        int64_t xmm1_2 = *(esi_3 + arg3)
        int32_t edx_4 = *(esi_3 + arg3 + 8)
        *(esi_3 + arg3) = *(ecx_1 + arg3)
        *(esi_3 + arg3 + 8) = *(ecx_1 + arg3 + 8)
        *(ecx_1 + arg3) = xmm1_2
        *(ecx_1 + arg3 + 8) = edx_4
        
        if (*(ecx_1 + arg3) s< *arg3)
            *(ecx_1 + arg3) = *arg3
            *(ecx_1 + arg3 + 8) = arg3[2]
            *arg3 = xmm1_2
            arg3[2] = edx_4
    
    void* edx_6 = arg2 - ecx_1
    
    if (*arg2 s< *edx_6)
        int32_t ecx_3 = arg2[2]
        int64_t xmm1_3 = *arg2
        *arg2 = *edx_6
        arg2[2] = *(edx_6 + 8)
        *edx_6 = xmm1_3
        *(edx_6 + 8) = ecx_3
        ecx_1 = arg4
    
    if (*(ecx_1 + arg2) s< *arg2)
        int64_t xmm1_4 = *(ecx_1 + arg2)
        int32_t esi_5 = *(ecx_1 + arg2 + 8)
        *(ecx_1 + arg2) = *arg2
        *(ecx_1 + arg2 + 8) = arg2[2]
        *arg2 = xmm1_4
        arg2[2] = esi_5
        
        if (*arg2 s< *edx_6)
            *arg2 = *edx_6
            arg2[2] = *(edx_6 + 8)
            *edx_6 = xmm1_4
            *(edx_6 + 8) = esi_5
    
    int32_t* esi_7 = ebp - var_4
    int32_t* edx_8 = ebp - ecx_1
    
    if (*edx_8 s< *esi_7)
        int32_t ecx_4 = edx_8[2]
        int64_t xmm1_5 = *edx_8
        *edx_8 = *esi_7
        edx_8[2] = esi_7[2]
        *esi_7 = xmm1_5
        esi_7[2] = ecx_4
        ecx_1 = arg4
    
    if (*ebp s< *edx_8)
        int32_t eax_23 = ebp[2]
        int64_t xmm1_6 = *ebp
        *ebp = *edx_8
        ebp[2] = edx_8[2]
        *edx_8 = xmm1_6
        edx_8[2] = eax_23
        
        if (*edx_8 s< *esi_7)
            *edx_8 = *esi_7
            edx_8[2] = esi_7[2]
            *esi_7 = xmm1_6
            esi_7[2] = eax_23
    
    if (*arg2 s< *(ecx_1 + arg3))
        int32_t ecx_5 = arg2[2]
        int64_t xmm1_7 = *arg2
        *arg2 = *(arg4 + arg3)
        arg2[2] = *(arg4 + arg3 + 8)
        *(arg4 + arg3) = xmm1_7
        *(arg4 + arg3 + 8) = ecx_5
        ecx_1 = arg4
    
    eax_30 = *edx_8
    
    if (eax_30 s< *arg2)
        int64_t xmm1_8 = *edx_8
        int32_t esi_9 = edx_8[2]
        *edx_8 = *arg2
        edx_8[2] = arg2[2]
        *arg2 = xmm1_8
        arg2[2] = esi_9
        eax_30 = *arg2
        
        if (eax_30 s< *(ecx_1 + arg3))
            *arg2 = *(ecx_1 + arg3)
            int32_t eax_31 = *(ecx_1 + arg3 + 8)
            arg2[2] = eax_31
            *(ecx_1 + arg3) = xmm1_8
            *(ecx_1 + arg3 + 8) = esi_9
            return eax_31

return eax_30
