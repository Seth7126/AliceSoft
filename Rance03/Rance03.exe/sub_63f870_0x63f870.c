// 函数: sub_63f870
// 地址: 0x63f870
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg2
int32_t var_28 = ebx
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx)
int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
int32_t eax_2 = _malloc(edi_1 << 2)
int32_t eax_3 = _malloc((edi_1 + ebx) << 2)
float xmm0_1[0x2] = _mm_cvtepi32_ps(zx.o(ebx))
float var_30 = xmm0_1
double xmm5_1 = ___libm_sse2_log(_mm_cvtps_pd(xmm0_1)) / ___libm_sse2_log(0x4000000000000000)
arg1[3] = eax_2
int32_t esi_2 = 0
*arg1 = ebx
arg1[2] = eax_3
uint64_t xmm5_2[0x2] = xmm5_1 + 0.5
uint128_t xmm2 = 0x4330000000000000
uint64_t xmm3_1[0x2] = _mm_and_pd(-0x8000000000000000, xmm5_2)
int64_t xmm0_7 = _mm_xor_pd(xmm5_2, xmm3_1)
uint64_t xmm1 = xmm5_2[0]
double xmm2_2 = _mm_or_pd(_mm_and_pd(xmm2, _mm_cmpeq_sd(xmm0_7, xmm2, 1)), xmm3_1)
double xmm1_2 = xmm1 f+ xmm2_2 - xmm2_2
int32_t eax_6 =
    int.d(xmm1_2 - _mm_and_pd(_mm_cmpeq_sd(xmm1_2 f- xmm5_2, xmm3_1, 6), 0x3ff0000000000000))
double var_14
var_14.d = eax_6
arg1[1] = eax_6
int16_t top

if (edi_1 s> 0)
    int32_t var_38_1 = 1
    float xmm2_3 = 3.14159274f / var_30
    int32_t ebx_1 = 0
    float* edi_3 = eax_3 + (ebx s>> 1 << 2)
    float var_18_1 = xmm2_3
    float xmm1_4 = 3.14159274f / _mm_cvtepi32_ps(zx.o(ebx * 2))
    
    do
        float xmm0_17[0x2] = _mm_cvtepi32_ps(zx.o(ebx_1)) * xmm2_3
        *(eax_3 + (esi_2 << 3)) = fconvert.s(___libm_sse2_cos(_mm_cvtps_pd(xmm0_17)))
        *(eax_3 + (esi_2 << 3) + 4) =
            fconvert.s(__xorpd_xmmxuq_memxuq(___libm_sse2_sin(_mm_cvtps_pd(xmm0_17)), data_7094b0))
        float xmm0_28[0x2] = _mm_cvtepi32_ps(zx.o(var_38_1)) * xmm1_4
        *edi_3 = fconvert.s(___libm_sse2_cos(_mm_cvtps_pd(xmm0_28)))
        top += 4
        var_38_1 += 2
        edi_3 = &edi_3[2]
        xmm2_3 = var_18_1
        esi_2 += 1
        ebx_1 += 4
        edi_3[-1] = fconvert.s(___libm_sse2_sin(_mm_cvtps_pd(xmm0_28)))
    while (esi_2 s< edi_1)
    
    ebx = var_28

int32_t eax_12
int32_t edx_2
edx_2:eax_12 = sx.q(ebx)
int32_t i_2 = ((edx_2 & 7) + eax_12) s>> 3
int32_t i_4 = i_2

if (i_2 s> 0)
    float xmm1_5 = 3.14159274f / var_30
    int32_t edi_4 = 2
    int32_t i_5 = i_2
    float* esi_3 = eax_3 + (var_28 << 2)
    float var_1c_2 = xmm1_5
    int32_t i
    
    do
        float xmm0_38[0x2] = _mm_cvtepi32_ps(zx.o(edi_4)) * xmm1_5
        *esi_3 = fconvert.s(___libm_sse2_cos(_mm_cvtps_pd(xmm0_38)) * 0.5)
        top += 2
        esi_3 = &esi_3[2]
        edi_4 += 4
        xmm1_5 = var_1c_2
        esi_3[-1] = fconvert.s(___libm_sse2_sin(_mm_cvtps_pd(xmm0_38)) * -0.5)
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_4

char edx_4 = var_14.b
int32_t esi_4 = 0
int32_t result = (1 << (edx_4 - 1)) - 1
int32_t i_3 = 1 << (edx_4 - 2)
var_14.d = result

if (i_2 s> 0)
    do
        int32_t edx_5 = 0
        int32_t ecx_6 = 0
        
        if (i_3 != 0)
            int32_t i_1 = i_3
            
            do
                if ((esi_4 & i_1) != 0)
                    edx_5 |= 1 << ecx_6.b
                
                ecx_6 += 1
                i_1 = i_3 s>> ecx_6.b
            while (i_1 != 0)
        
        result = (not.d(edx_5) & var_14.d) - 1
        *(eax_2 + (esi_4 << 3)) = result
        *(eax_2 + (esi_4 << 3) + 4) = edx_5
        esi_4 += 1
    while (esi_4 s< i_2)

arg1[4] = 4f / var_30
return result
