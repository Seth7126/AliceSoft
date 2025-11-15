// 函数: sub_56c130
// 地址: 0x56c130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float* edi = arg4
float xmm0_1 = *arg5 - *edi
float xmm6_1 = arg2[1] f- arg3[1]
float xmm7 = *arg3
float xmm3_1 = arg5[2] f- edi[2]
float xmm5_1 = arg2[2] f- arg3[2]
int64_t xmm4_1 = *arg2 - xmm7
float xmm2_1 = arg3[1] - edi[1]
float xmm3_3 = xmm7 - *edi
arg5 = arg5[1] f- edi[1]
float xmm1_1 = arg3[2] - edi[2]
float xmm7_4 = xmm4_1.d f* xmm4_1 + xmm6_1 * xmm6_1 + xmm5_1 * xmm5_1
float xmm6_5 = arg5 f* arg5 + xmm0_1 * xmm0_1 + xmm3_1 * xmm3_1
float xmm5_6 = xmm2_1 f* arg5 + xmm3_3 * xmm0_1 + xmm1_1 * xmm3_1
int32_t result
int64_t* ecx
int64_t* edx
int32_t* eax_1
int32_t* ecx_1

if (1.1920929e-07f < xmm7_4)
    float xmm3_6 = xmm3_3 f* xmm4_1 + xmm2_1 * xmm6_1 + xmm1_1 * xmm5_1
    
    if (1.1920929e-07f < xmm6_5)
        int32_t xmm2_4 = (zx.o(0)).d
        float xmm1_6 = xmm0_1 f* xmm4_1 + arg5 * xmm6_1 + xmm3_1 * xmm5_1
        float xmm4_4 = xmm6_5 * xmm7_4 - xmm1_6 * xmm1_6
        xmm4_4 f- 0
        int32_t* eax
        eax:1.b = (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2
            | (xmm4_4 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            eax_1 = arg6
            *eax_1 = 0
        else
            float xmm4_8 = (xmm1_6 * xmm5_6 - xmm3_6 * xmm6_5) / xmm4_4
            
            if (0 f<= xmm4_8)
                eax_1 = arg6
                *eax_1 = __minss_xmmss_memss(xmm4_8, 0x3f800000)
            else
                eax_1 = arg6
                *eax_1 = 0
        
        ecx_1 = arg7
        float xmm0_33 = (*eax_1 * xmm1_6 + xmm5_6) / xmm6_5
        *ecx_1 = xmm0_33
        
        if (not(0f <= xmm0_33))
            *ecx_1 = 0
            float xmm3_10 = (xmm3_6 / xmm7_4) ^ (data_79aad0).d
            
            if (0 f> xmm3_10)
                *eax_1 = xmm2_4
            else
                *eax_1 = _mm_min_ss(xmm3_10, 0x3f800000)
        else if (not(xmm0_33 <= 1f))
            *ecx_1 = 0x3f800000
            float xmm1_8 = (xmm1_6 - xmm3_6) / xmm7_4
            
            if (0 f> xmm1_8)
                *eax_1 = xmm2_4
            else
                *eax_1 = _mm_min_ss(xmm1_8, 0x3f800000)
    else
        ecx_1 = arg7
        *ecx_1 = 0
        int32_t xmm0_20 = (zx.o(0)).d
        int32_t xmm3_8 = (xmm3_6 / xmm7_4) ^ (data_79aad0).d
        
        if (not(0 f> xmm3_8))
            xmm0_20 = __minss_xmmss_memss(xmm3_8, 0x3f800000)
        
        eax_1 = arg6
        *eax_1 = xmm0_20
    
label_56c3f8:
    float xmm0_34 = *eax_1
    edx = arg8
    float xmm0_35 = *ecx_1
    ecx = arg9
    int64_t var_18
    var_18:4.d = xmm5_1 * xmm0_34 + arg3[2]
    *edx = _mm_unpacklo_ps(xmm4_1 f* xmm0_34 + *arg3, xmm0_34 * xmm6_1 + arg3[1])
    edx[1].d = var_18:4.d
    var_18:4.d = xmm3_1 * xmm0_35 + edi[2]
    result = var_18:4.d
    *ecx = _mm_unpacklo_ps(*edi + xmm0_1 * xmm0_35, arg5 f* xmm0_35 + edi[1])
else
    eax_1 = arg6
    *eax_1 = 0
    
    if (1.1920929e-07f < xmm6_5)
        float xmm5_7 = xmm5_6 / xmm6_5
        ecx_1 = arg7
        int32_t xmm0_18 = (zx.o(0)).d
        *ecx_1 = xmm5_7
        
        if (not(0f > xmm5_7))
            xmm0_18 = __minss_xmmss_memss(xmm5_7, 0x3f800000)
        
        *ecx_1 = xmm0_18
        goto label_56c3f8
    
    edx = arg8
    int64_t xmm0_16 = *arg3
    ecx = arg9
    *arg7 = 0
    *edx = xmm0_16
    edx[1].d = arg3[2]
    *ecx = *edi
    result = edi[2]
ecx[1].d = result
*(edx + 4) f- *(ecx + 4)
*edx f- *ecx
edx[1].d f- ecx[1].d
return result
