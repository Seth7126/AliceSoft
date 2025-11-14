// 函数: sub_52da60
// 地址: 0x52da60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float* esi = arg1
float* edi = arg3
int32_t* eax_1 = arg4
float xmm6_1 = arg2[1] f- esi[1]
float xmm4 = *esi
float xmm5_1 = arg2[2] f- esi[2]
int64_t xmm7_1 = *arg2 - xmm4
float xmm0_1 = *eax_1 - *edi
float xmm3_1 = eax_1[2] f- edi[2]
float xmm2_1 = esi[1] - edi[1]
float xmm3_3 = xmm4 - *edi
arg2 = eax_1[1] f- edi[1]
float xmm1_1 = esi[2] - edi[2]
float xmm4_4 = xmm7_1.d f* xmm7_1 + xmm6_1 * xmm6_1 + xmm5_1 * xmm5_1
float xmm6_5 = arg2 f* arg2 + xmm0_1 * xmm0_1 + xmm3_1 * xmm3_1
float xmm5_7 = xmm2_1 f* arg2 + xmm3_3 * xmm0_1 + xmm1_1 * xmm3_1
int32_t result
int64_t* ecx
int64_t* edx
int32_t* eax_2
float* ecx_1

if (1.1920929e-07f < xmm4_4)
    float xmm3_6 = xmm3_3 f* xmm7_1 + xmm2_1 * xmm6_1 + xmm1_1 * xmm5_1
    
    if (1.1920929e-07f < xmm6_5)
        int32_t xmm2_4 = (zx.o(0)).d
        float xmm1_6 = arg2 * xmm6_1 + xmm0_1 f* xmm7_1 + xmm3_1 * xmm5_1
        float xmm7_4 = xmm6_5 * xmm4_4 - xmm1_6 * xmm1_6
        xmm7_4 f- 0
        eax_1:1.b = (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2
            | (xmm7_4 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            eax_2 = arg5
            *eax_2 = 0
        else
            float xmm4_8 = (xmm1_6 * xmm5_7 - xmm3_6 * xmm6_5) / xmm7_4
            
            if (0 f<= xmm4_8)
                if (not(xmm4_8 <= 1f))
                    xmm4_8 = 1f
                
                eax_2 = arg5
                *eax_2 = xmm4_8
            else
                eax_2 = arg5
                *eax_2 = 0
        
        ecx_1 = arg6
        float xmm0_33 = (*eax_2 * xmm1_6 + xmm5_7) / xmm6_5
        *ecx_1 = xmm0_33
        
        if (not(0f <= xmm0_33))
            *ecx_1 = 0f
            int32_t xmm3_10 = (xmm3_6 / xmm4_4) ^ (data_7094c0).d
            
            if (0 f> xmm3_10)
                *eax_2 = xmm2_4
            else if (xmm3_10 f> 1f)
                *eax_2 = 0x3f800000
            else
                *eax_2 = xmm3_10
        else if (not(xmm0_33 <= 1f))
            *ecx_1 = 1f
            float xmm1_8 = (xmm1_6 - xmm3_6) / xmm4_4
            
            if (0 f> xmm1_8)
                *eax_2 = xmm2_4
            else if (xmm1_8 <= 1f)
                *eax_2 = xmm1_8
            else
                *eax_2 = 0x3f800000
    else
        ecx_1 = arg6
        *ecx_1 = 0f
        int32_t xmm0_21 = (zx.o(0)).d
        int32_t xmm3_8 = (xmm3_6 / xmm4_4) ^ (data_7094c0).d
        
        if (not(0 f> xmm3_8))
            xmm0_21 = 0x3f800000
            
            if (not(xmm3_8 f> 1f))
                xmm0_21 = xmm3_8
        
        eax_2 = arg5
        *eax_2 = xmm0_21
    
label_52dd55:
    float xmm0_34 = *eax_2
    edx = arg7
    float xmm0_35 = *ecx_1
    ecx = arg8
    int64_t var_14
    var_14:4.d = xmm5_1 * xmm0_34 + esi[2]
    *edx = _mm_unpacklo_ps(xmm7_1 f* xmm0_34 + *esi, xmm6_1 * xmm0_34 + esi[1])
    edx[1].d = var_14:4.d
    var_14:4.d = xmm3_1 * xmm0_35 + edi[2]
    result = var_14:4.d
    *ecx = _mm_unpacklo_ps(*edi + xmm0_1 * xmm0_35, arg2 f* xmm0_35 + edi[1])
else
    eax_2 = arg5
    *eax_2 = 0
    
    if (1.1920929e-07f < xmm6_5)
        float xmm5_8 = xmm5_7 / xmm6_5
        ecx_1 = arg6
        float xmm0_19 = (zx.o(0)).d
        *ecx_1 = xmm5_8
        
        if (not(0f > xmm5_8))
            xmm0_19 = 1f
            
            if (not(xmm5_8 > 1f))
                xmm0_19 = xmm5_8
        
        *ecx_1 = xmm0_19
        goto label_52dd55
    
    edx = arg7
    int64_t xmm0_17 = *esi
    ecx = arg8
    *arg6 = 0
    *edx = xmm0_17
    edx[1].d = esi[2]
    *ecx = *edi
    result = edi[2]
ecx[1].d = result
*(edx + 4) f- *(ecx + 4)
*edx f- *ecx
edx[1].d f- ecx[1].d
return result
