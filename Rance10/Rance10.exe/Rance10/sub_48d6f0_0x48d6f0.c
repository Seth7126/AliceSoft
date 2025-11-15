// 函数: sub_48d6f0
// 地址: 0x48d6f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1
float xmm5 = 1f
void* result_1 = result
float xmm1 = 1f
int32_t edi = arg2[1]

for (int32_t* i = *arg2; i != edi; i = &i[1])
    float xmm2_1 = *i
    float xmm3_1 = *(result + 8)
    xmm1 = _mm_min_ss(xmm1 * xmm5, 0x3f800000)
    float xmm4_2 = xmm2_1 * xmm1
    float xmm0_2
    
    if (xmm4_2 <= xmm3_1)
        if (not((xmm3_1 ^ 0x80000000) f<= xmm4_2))
            xmm0_2 = (xmm3_1 / xmm2_1) ^ 0x80000000
            goto label_48d783
        
        *i = xmm4_2
    else
        xmm0_2 = xmm3_1 / xmm2_1
    label_48d783:
        int32_t mxcsr
        float xmm0_6
        mxcsr, xmm0_6 =
            ___libm_sse2_powf(mxcsr, xmm0_2, 1f / _mm_cvtepi32_ps(zx.o(*(result + 0xc))))
        xmm1 = xmm0_2
        result = result_1
        xmm5 = 1f / xmm0_6
        *i = xmm2_1 * xmm1

return result
