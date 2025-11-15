// 函数: sub_5f1840
// 地址: 0x5f1840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg3
int32_t* ebp = arg4
int32_t eax_3 = (ebp - arg3) s/ 0x14
int32_t eax_30

if (eax_3 s<= 0x28)
    if (*arg2 s< *arg3)
        int32_t ecx_7 = arg2[4]
        int128_t xmm1_9 = *arg2
        *arg2 = *arg3
        arg2[4] = arg3[4]
        *arg3 = xmm1_9
        arg3[4] = ecx_7
    
    eax_30 = *ebp
    
    if (eax_30 s< *arg2)
        int32_t ecx_8 = ebp[4]
        int128_t xmm1_10 = *ebp
        *ebp = *arg2
        ebp[4] = arg2[4]
        *arg2 = xmm1_10
        arg2[4] = ecx_8
        eax_30 = *arg2
        
        if (eax_30 s< *arg3)
            *arg2 = *arg3
            eax_30 = arg3[4]
            arg2[4] = eax_30
            *arg3 = xmm1_10
            arg3[4] = ecx_8
else
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(eax_3 + 1)
    int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
    int32_t ecx_1 = eax_7 * 0x14
    int32_t esi_3 = eax_7 * 0x28
    var_4 = esi_3
    arg4 = ecx_1
    
    if (*(ecx_1 + arg3) s< *arg3)
        int128_t xmm1_1 = *(ecx_1 + arg3)
        int32_t ecx_2 = *(ecx_1 + arg3 + 0x10)
        *(arg4 + arg3) = *arg3
        *(arg4 + arg3 + 0x10) = arg3[4]
        *arg3 = xmm1_1
        arg3[4] = ecx_2
        ecx_1 = arg4
        esi_3 = var_4
    
    if (*(esi_3 + arg3) s< *(ecx_1 + arg3))
        int32_t edx_4 = *(esi_3 + arg3 + 0x10)
        int128_t xmm1_2 = *(esi_3 + arg3)
        *(esi_3 + arg3) = *(ecx_1 + arg3)
        *(esi_3 + arg3 + 0x10) = *(ecx_1 + arg3 + 0x10)
        *(ecx_1 + arg3) = xmm1_2
        *(ecx_1 + arg3 + 0x10) = edx_4
        
        if (*(ecx_1 + arg3) s< *arg3)
            *(ecx_1 + arg3) = *arg3
            *(ecx_1 + arg3 + 0x10) = arg3[4]
            *arg3 = xmm1_2
            arg3[4] = edx_4
    
    void* edx_6 = arg2 - ecx_1
    
    if (*arg2 s< *edx_6)
        int32_t ecx_3 = arg2[4]
        int128_t xmm1_3 = *arg2
        *arg2 = *edx_6
        arg2[4] = *(edx_6 + 0x10)
        *edx_6 = xmm1_3
        *(edx_6 + 0x10) = ecx_3
        ecx_1 = arg4
    
    if (*(ecx_1 + arg2) s< *arg2)
        int32_t esi_5 = *(ecx_1 + arg2 + 0x10)
        int128_t xmm1_4 = *(ecx_1 + arg2)
        *(ecx_1 + arg2) = *arg2
        *(ecx_1 + arg2 + 0x10) = arg2[4]
        *arg2 = xmm1_4
        arg2[4] = esi_5
        
        if (*arg2 s< *edx_6)
            *arg2 = *edx_6
            arg2[4] = *(edx_6 + 0x10)
            *edx_6 = xmm1_4
            *(edx_6 + 0x10) = esi_5
    
    int32_t* esi_7 = ebp - var_4
    int32_t* edx_8 = ebp - ecx_1
    
    if (*edx_8 s< *esi_7)
        int32_t ecx_4 = edx_8[4]
        int128_t xmm1_5 = *edx_8
        *edx_8 = *esi_7
        edx_8[4] = esi_7[4]
        *esi_7 = xmm1_5
        esi_7[4] = ecx_4
        ecx_1 = arg4
    
    if (*ebp s< *edx_8)
        var_4 = ebp[4]
        int128_t xmm1_6 = *ebp
        *ebp = *edx_8
        ebp[4] = edx_8[4]
        *edx_8 = xmm1_6
        edx_8[4] = var_4
        
        if (*edx_8 s< *esi_7)
            *edx_8 = *esi_7
            edx_8[4] = esi_7[4]
            *esi_7 = xmm1_6
            esi_7[4] = var_4
    
    if (*arg2 s< *(ecx_1 + arg3))
        int32_t ecx_5 = arg2[4]
        int128_t xmm1_7 = *arg2
        *arg2 = *(arg4 + arg3)
        arg2[4] = *(arg4 + arg3 + 0x10)
        *(arg4 + arg3) = xmm1_7
        *(arg4 + arg3 + 0x10) = ecx_5
        ecx_1 = arg4
    
    eax_30 = *edx_8
    
    if (eax_30 s< *arg2)
        int32_t esi_9 = edx_8[4]
        int128_t xmm1_8 = *edx_8
        *edx_8 = *arg2
        edx_8[4] = arg2[4]
        *arg2 = xmm1_8
        arg2[4] = esi_9
        eax_30 = *arg2
        
        if (eax_30 s< *(ecx_1 + arg3))
            *arg2 = *(ecx_1 + arg3)
            int32_t eax_31 = *(ecx_1 + arg3 + 0x10)
            arg2[4] = eax_31
            *(ecx_1 + arg3) = xmm1_8
            *(ecx_1 + arg3 + 0x10) = esi_9
            return eax_31

return eax_30
