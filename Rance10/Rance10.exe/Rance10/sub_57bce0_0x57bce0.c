// 函数: sub_57bce0
// 地址: 0x57bce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (*arg1 != arg1[1])
    int32_t esi_1 = arg1[3]
    float ebp_1 = arg4
    int32_t edx_2
    
    if (esi_1 s>= 0)
        int32_t eax
        int32_t edx_1
        edx_1:eax = muls.dp.d(0x4da637d, *(ebp_1 i+ 8) - *(ebp_1 i+ 4))
        edx_2 = edx_1 s>> 4
    
    void* const ebx_2
    
    if (esi_1 s< 0 || esi_1 s>= (edx_2 u>> 0x1f) + edx_2)
        ebx_2 = nullptr
    else
        ebx_2 = esi_1 * 0x34c + *(ebp_1 i+ 4)
    
    int32_t eax_4 = arg1[5]
    int32_t ecx_2
    
    if (eax_4 != 0xffffffff)
        ecx_2 = arg1[6]
    
    float xmm3_1
    
    if (eax_4 == 0xffffffff || ecx_2 == 0xffffffff)
        xmm3_1 = arg5
        arg5 = xmm3_1
    else
        xmm3_1 = arg5
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_4))
        arg5 = xmm3_1
        
        if (not(xmm2_2 > xmm3_1))
            float xmm1_2 = _mm_cvtepi32_ps(zx.o(ecx_2))
            
            if (not(xmm3_1 >= xmm1_2))
                xmm3_1 = xmm3_1 f+ arg1[4]
                arg5 = xmm3_1
                
                if (not(xmm3_1 < xmm1_2))
                    xmm3_1 = xmm3_1 - xmm1_2 + xmm2_2
                    arg5 = xmm3_1
    
    void* esi_2 = *(ebx_2 + 0x28c)
    float xmm4_1 = 1f
    float xmm5_1
    
    if (*(esi_2 + 4) != 0)
        sub_579820(ebx_2 + 0x2a4, xmm3_1, &arg4)
        xmm5_1 = arg4
    else
        xmm5_1 = 1f
    
    float xmm7_1
    
    if (*(esi_2 + 0x10) != 0)
        sub_579820(ebx_2 + 0x2c8, xmm3_1, &arg4)
        xmm7_1 = arg4
    else
        xmm7_1 = 1f
    
    float xmm6_1
    
    if (*(esi_2 + 0xc) != 0)
        sub_579820(ebx_2 + 0x2bc, xmm3_1, &arg4)
        xmm6_1 = arg4
    else
        xmm6_1 = 1f
    
    if (*(esi_2 + 8) != 0)
        sub_579820(ebx_2 + 0x2b0, xmm3_1, &arg4)
        xmm4_1 = arg4
    
    bool cond:1_1 = *(esi_2 + 0x1c) != 0
    int32_t* eax_5 = arg10
    float xmm1_5 = eax_5[1] f* xmm6_1 * xmm5_1
    float xmm2_9 = eax_5[2] f* xmm7_1 * xmm5_1
    float var_40 = *eax_5 * xmm4_1 * xmm5_1
    float var_3c_1 = xmm1_5
    float var_38_1 = xmm2_9
    int128_t var_14
    int128_t xmm0_4
    
    if (cond:1_1)
        sub_579760(ebx_2 + 0x2ec, xmm3_1, &var_14)
        xmm0_4 = var_14
    else
        xmm0_4 = data_7e7128
    
    var_14.d = xmm0_4.d * *arg11
    var_14:4.d = arg11[1] f* xmm0_4:4.d
    var_14:8.d = arg11[2] f* xmm0_4:8.d
    var_14:0xc.d = arg11[3] f* xmm0_4:0xc.d
    int128_t var_24
    int128_t xmm0_13
    
    if (*(*(ebx_2 + 0x28c) + 0x20) != 0)
        sub_5796a0(ebx_2 + 0x2f8, arg5, &var_24)
        xmm0_13 = var_24
    else
        xmm0_13 = data_7fd4f4
    
    float xmm3_3 = arg5
    var_24.d = xmm0_13.d + *arg12
    var_24:4.d = arg12[1] f+ xmm0_13:4.d
    var_24:8.d = arg12[2] f+ xmm0_13:8.d
    var_24:0xc.d = arg12[3] f+ xmm0_13:0xc.d
    float xmm2_12
    
    if (*(*(ebx_2 + 0x28c) + 0x18) != 0)
        sub_579820(ebx_2 + 0x2e0, xmm3_3, &arg4)
        xmm2_12 = arg4
    else
        xmm2_12 = 1f
    
    float* ecx_10 = arg6
    float xmm4_3 = arg1[0xa] f- *ecx_10
    float xmm1_7 = arg1[0xb] f- ecx_10[1]
    float xmm0_23 = arg1[0xc] f- ecx_10[2]
    float xmm2_14 = xmm2_12 * arg13
    int32_t** esi_3 = *arg1
    int32_t edi_1 = arg1[1]
    arg10 = xmm2_14
    float* xmm4_6 = xmm4_3 * xmm4_3 + xmm1_7 * xmm1_7 + xmm0_23 * xmm0_23
    arg11 = xmm4_6
    
    while (esi_3 != edi_1)
        result.b = *(ebx_2 + 0x31c)
        arg4.b = result.b
        float* var_8c_1 = ecx_10
        
        if (sub_5ae7c0(*esi_3, arg2, arg3, ebp_1, xmm3_3, xmm4_6, &var_40, xmm2_14, &var_14, 
                &var_24, arg4.b, ecx_10, arg7, arg8, arg9, arg14, arg15, arg16, arg17, arg18, arg19).b == 0)
            result.b = 0
            return result
        
        xmm3_3 = arg5
        esi_3 = &esi_3[1]
        xmm2_14 = arg10
        xmm4_6 = arg11
        ecx_10 = arg6

result.b = 1
return result
