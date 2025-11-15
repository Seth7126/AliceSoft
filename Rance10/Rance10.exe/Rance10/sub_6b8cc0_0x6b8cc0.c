// 函数: sub_6b8cc0
// 地址: 0x6b8cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg7
float xmm1 = 3.14159274f / _mm_cvtepi32_ps(zx.o(arg5))
int32_t i = 0
int16_t top

if (ebp s> 0)
    if (ebp u>= 2)
        int32_t eax_1 = ebp & 0x80000001
        
        if (eax_1 s< 0)
            eax_1 = ((eax_1 - 1) | 0xfffffffe) + 1
        
        do
            double xmm0_4[0x2]
            arg1, xmm0_4 = j____sse2_cos2(_mm_cvtps_pd(*(arg6 + (i << 2))))
            *(arg6 + (i << 2)) = _mm_cvtpd_ps(__mulpd_xmmpd_mempd(xmm0_4, data_79aa50))
            i += 2
        while (i s< ebp - eax_1)
    
    for (; i s< ebp; i += 1)
        double xmm0_9
        arg1, xmm0_9 = ___libm_sse2_cos(_mm_cvtps_pd(*(arg6 + (i << 2))))
        top += 1
        *(arg6 + (i << 2)) = fconvert.s(xmm0_9 * 2.0)

int32_t edi_3 = 0

if (arg4 s<= 0)
    return 

uint32_t* esi = nullptr
arg1 = *arg2

do
    int16_t x87control_1
    double xmm0_16
    x87control_1, xmm0_16 = ___libm_sse2_cos(_mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(arg1)) * xmm1))
    top += 1
    int32_t eax_5 = 1
    float xmm3_1 = 0.5f
    float xmm4_1 = 0.5f
    float xmm2_1 = fconvert.s(xmm0_16 * 2.0)
    
    if (ebp s> 1)
        do
            xmm3_1 = xmm3_1 * (xmm2_1 f- *(arg6 + (eax_5 << 2) - 4))
            float xmm0_21 = xmm2_1 f- *(arg6 + (eax_5 << 2))
            eax_5 += 2
            xmm4_1 = xmm4_1 * xmm0_21
        while (eax_5 s< ebp)
    
    float xmm1_5
    float xmm3_2
    
    if (eax_5 != ebp)
        xmm1_5 = (xmm2_1 + 2f) * xmm3_1 * xmm3_1
        xmm3_2 = 2f
    else
        float xmm1_3 = xmm2_1 f- *(arg6 + (eax_5 << 2) - 4)
        xmm2_1 = xmm2_1 * xmm2_1
        float xmm1_4 = xmm1_3 * xmm3_1
        xmm3_2 = 4f
        xmm1_5 = xmm1_4 * xmm1_4
    
    double xmm0_23 = _mm_cvtps_pd(arg8)
    int64_t xmm1_8 = _mm_cvtps_pd((xmm3_2 - xmm2_1) * xmm4_1 * xmm4_1 + xmm1_5)
    edi_3 += 1
    uint32_t edx = arg1
    float xmm1_12 = fconvert.s(___libm_sse2_exp(x87control_1, 
        (xmm0_23 / _mm_sqrt_sd(xmm1_8, xmm1_8) - _mm_cvtps_pd(arg9)) * 0.1151292473077774))
    *(esi + arg3) = *(esi + arg3) * xmm1_12
    esi = edi_3 << 2
    arg1 = *(esi + arg2)
    
    if (arg1 == edx)
        do
            edi_3 += 1
            *(esi + arg3) = *(esi + arg3) * xmm1_12
            esi = edi_3 << 2
            arg1 = *(esi + arg2)
        while (arg1 == edx)
        
        ebp = arg7
while (edi_3 s< arg4)
