// 函数: sub_63e240
// 地址: 0x63e240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int64_t* ebx = arg6
int32_t ebp = arg7
float xmm1 = 3.14159274f / _mm_cvtepi32_ps(zx.o(arg5))
int32_t i = 0
int16_t top

if (ebp s> 0)
    if (ebp u>= 2)
        int32_t eax_1 = ebp & 0x80000001
        
        if (eax_1 s< 0)
            eax_1 = ((eax_1 - 1) | 0xfffffffe) + 1
        
        int64_t* edi_1 = ebx
        float ecx_1 = ebp - eax_1
        arg5 = ecx_1
        
        do
            double xmm0_4[0x2]
            arg1, xmm0_4 = j____sse2_cos2(_mm_cvtps_pd(*edi_1))
            i += 2
            edi_1 = &edi_1[1]
            edi_1[-1] = _mm_cvtpd_ps(__mulpd_xmmpd_mempd(xmm0_4, data_709470))
        while (i s< ecx_1)
        
        ebx = arg6
    
    for (; i s< ebp; i += 1)
        double xmm0_9
        arg1, xmm0_9 = ___libm_sse2_cos(_mm_cvtps_pd(*(ebx + (i << 2))))
        top += 1
        *(ebx + (i << 2)) = fconvert.s(xmm0_9 * 2.0)

int32_t edi_2 = 0

if (arg4 s<= 0)
    return 

uint32_t* esi = nullptr
arg1 = *arg2

do
    arg5 = 0.5f
    int16_t x87control_1
    double xmm0_16
    x87control_1, xmm0_16 = ___libm_sse2_cos(_mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(arg1)) * xmm1))
    top += 1
    int32_t eax_5 = 1
    float xmm3_1 = fconvert.s(xmm0_16 * 2.0)
    float xmm0_22
    float xmm4_1
    
    if (ebp s<= 1)
        xmm0_22 = 0.5f
        xmm4_1 = 0.5f
    else
        xmm4_1 = 0.5f
        
        do
            xmm4_1 = xmm4_1 * (xmm3_1 f- *(ebx + (eax_5 << 2) - 4))
            float xmm0_21 = xmm3_1 f- *(ebx + (eax_5 << 2))
            eax_5 += 2
            xmm0_22 = xmm0_21 * arg5
            arg5 = xmm0_22
        while (eax_5 s< ebp)
    
    float xmm1_4
    float xmm2_1
    
    if (eax_5 != ebp)
        xmm2_1 = 2f
        xmm1_4 = (xmm3_1 + 2f) * xmm4_1 * xmm4_1
    else
        float xmm1_2 = xmm3_1 f- *(ebx + (eax_5 << 2) - 4)
        xmm2_1 = 4f
        xmm3_1 = xmm3_1 * xmm3_1
        float xmm1_3 = xmm1_2 * xmm4_1
        xmm1_4 = xmm1_3 * xmm1_3
    
    double xmm1_8 = fconvert.d(xmm1_4 + (xmm2_1 - xmm3_1) * xmm0_22 * xmm0_22)
    edi_2 += 1
    uint32_t edx = arg1
    float xmm1_12 = fconvert.s(___libm_sse2_exp(x87control_1, 
        (_mm_cvtps_pd(arg8) / _mm_sqrt_sd(xmm1_8, xmm1_8) - _mm_cvtps_pd(arg9))
            * 0.1151292473077774))
    *(esi + arg3) = *(esi + arg3) * xmm1_12
    esi = edi_2 << 2
    arg1 = *(esi + arg2)
    
    if (arg1 == edx)
        do
            edi_2 += 1
            *(esi + arg3) = *(esi + arg3) * xmm1_12
            esi = edi_2 << 2
            arg1 = *(esi + arg2)
        while (arg1 == edx)
        
        ebp = arg7
while (edi_2 s< arg4)
