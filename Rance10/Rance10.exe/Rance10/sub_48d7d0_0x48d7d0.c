// 函数: sub_48d7d0
// 地址: 0x48d7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg3
float xmm1 = 1f
int32_t* esi = *result
float xmm2 = 1f
void* var_c = arg1
int32_t i_1 = (result[1] - esi) s>> 2
float var_18 = 1f

if (i_1 != 0)
    result = *arg2 - esi
    int32_t* result_1 = result
    int32_t i
    
    do
        float xmm5_1 = *(result + esi)
        float xmm7_1 = *esi
        xmm2 = _mm_min_ss(xmm2 * xmm1, 0x3f800000)
        uint32_t xmm3_2[0x4] = xmm5_1 * xmm2
        uint32_t xmm4_2[0x4] = xmm7_1 * xmm2
        bool cond:0_1 = sub_48b210(xmm3_2) <= sub_48b210(xmm4_2)
        float xmm1_2 = *(arg1 + 8)
        float xmm0_6
        
        if (not(cond:0_1))
            if (not(xmm3_2 f<= xmm1_2))
                xmm0_6 = xmm1_2 / xmm5_1
                goto label_48d8bc
            
            if ((xmm1_2 ^ 0x80000000) f<= xmm3_2)
                goto label_48d906
            
            xmm0_6 = (xmm1_2 / xmm5_1) ^ 0x80000000
            goto label_48d8bc
        
        if (xmm4_2 f<= xmm1_2)
            if (not((xmm1_2 ^ 0x80000000) f<= xmm4_2))
                xmm0_6 = (xmm1_2 / xmm7_1) ^ 0x80000000
                goto label_48d8bc
            
        label_48d906:
            xmm1 = var_18
            *(result + esi) = xmm3_2
            *esi = xmm4_2
        else
            xmm0_6 = xmm1_2 / xmm7_1
        label_48d8bc:
            int32_t mxcsr
            float xmm0_12
            mxcsr, xmm0_12 =
                ___libm_sse2_powf(mxcsr, xmm0_6, 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc))))
            xmm2 = xmm0_6
            result = result_1
            xmm1 = 1f / xmm0_12
            arg1 = var_c
            var_18 = xmm1
            *(result + esi) = xmm5_1 * xmm2
            *esi = *esi * xmm2
        
        esi = &esi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
