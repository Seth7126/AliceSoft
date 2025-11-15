// 函数: sub_6ba270
// 地址: 0x6ba270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg2
int32_t var_30 = ebx
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx)
int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
int32_t var_54 = edi_1 << 2
int32_t eax_2 = sub_705e22()
int32_t var_58 = (edi_1 + ebx) << 2
int32_t eax_3 = sub_705e22()
float xmm0_1[0x2] = _mm_cvtepi32_ps(zx.o(ebx))
float var_38 = xmm0_1
uint128_t xmm2 = 0x4330000000000000
uint32_t xmm5_2[0x4] = ___libm_sse2_log(_mm_cvtps_pd(xmm0_1)) * 1.4426950408889634 + 0.5
arg1[3] = eax_2
int32_t esi_2 = 0
*arg1 = ebx
arg1[2] = eax_3
uint32_t xmm3_1[0x4] = _mm_and_ps(-0x8000000000000000, xmm5_2)
double xmm1 = xmm5_2[0].q
double xmm2_2 =
    _mm_or_ps(_mm_and_ps(xmm2, _mm_cmpeq_sd(xmm5_2[0].q ^ xmm3_1[0].q, xmm2, 1)), xmm3_1)
double xmm1_2 = xmm1 + xmm2_2 - xmm2_2
int32_t eax_6 =
    int.d(xmm1_2 - _mm_and_ps(_mm_cmpeq_sd(xmm1_2 f- xmm5_2, xmm3_1, 6), 0x3ff0000000000000))
char var_10 = eax_6.b
arg1[1] = eax_6
int16_t top

if (edi_1 s> 0)
    int32_t var_40_1 = 1
    float xmm2_3 = 3.14159274f / var_38
    int32_t ebx_1 = 0
    float* edi_3 = eax_3 + (ebx s>> 1 << 2)
    float var_18_1 = xmm2_3
    float xmm1_4 = 3.14159274f / _mm_cvtepi32_ps(zx.o(ebx * 2))
    
    do
        int64_t xmm0_16 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ebx_1)) * xmm2_3)
        int32_t var_28
        var_28.q = xmm0_16
        *(eax_3 + (esi_2 << 3)) = fconvert.s(___libm_sse2_cos(xmm0_16))
        *(eax_3 + (esi_2 << 3) + 4) = fconvert.s(___libm_sse2_sin(zx.o(var_28.q)) ^ (data_79aac0).q)
        int64_t xmm0_25 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(var_40_1)) * xmm1_4)
        var_28.q = xmm0_25
        *edi_3 = fconvert.s(___libm_sse2_cos(xmm0_25))
        top += 4
        var_40_1 += 2
        edi_3 = &edi_3[2]
        xmm2_3 = var_18_1
        esi_2 += 1
        ebx_1 += 4
        edi_3[-1] = fconvert.s(___libm_sse2_sin(zx.o(var_28.q)))
    while (esi_2 s< edi_1)
    
    ebx = var_30

int32_t eax_12
int32_t edx_2
edx_2:eax_12 = sx.q(ebx)
int32_t i_2 = ((edx_2 & 7) + eax_12) s>> 3
int32_t i_4 = i_2

if (i_2 s> 0)
    float xmm1_7 = 3.14159274f / var_38
    int32_t edi_4 = 2
    int32_t i_5 = i_2
    float* esi_3 = eax_3 + (var_30 << 2)
    float var_1c_2 = xmm1_7
    int32_t i
    
    do
        int64_t xmm0_33 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(edi_4)) * xmm1_7)
        i_5.q = xmm0_33
        *esi_3 = fconvert.s(___libm_sse2_cos(xmm0_33) * 0.5)
        top += 2
        esi_3 = &esi_3[2]
        edi_4 += 4
        xmm1_7 = var_1c_2
        esi_3[-1] = fconvert.s(___libm_sse2_sin(zx.o(i_5.q)) * -0.5)
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_4

int32_t esi_4 = 0
int32_t result = (1 << (var_10 - 1)) - 1
int32_t i_3 = 1 << (var_10 - 2)
int32_t result_1 = result

if (i_2 s> 0)
    do
        int32_t edx_5 = 0
        int32_t ecx_6 = 0
        
        if (i_3 != 0)
            int32_t i_1 = i_3
            
            do
                if ((esi_4 & i_1) != 0)
                    edx_5 |= 1 << (ecx_6 u% 0x20)
                
                ecx_6 += 1
                i_1 = i_3 s>> ecx_6.b
            while (i_1 != 0)
        
        result = (not.d(edx_5) & result_1) - 1
        *(eax_2 + (esi_4 << 3)) = result
        *(eax_2 + (esi_4 << 3) + 4) = edx_5
        esi_4 += 1
    while (esi_4 s< i_2)

arg1[4] = 4f / var_38
return result
