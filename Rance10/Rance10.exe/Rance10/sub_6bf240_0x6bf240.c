// 函数: sub_6bf240
// 地址: 0x6bf240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t i_1 = *arg1
int32_t ebp = arg1[1]
int32_t i_2 = i_1
float xmm2[0x2] = 1f / _mm_cvtepi32_ps(zx.o(i_1))
float xmm0_1[0x2] = _mm_cvtepi32_ps(zx.o(ebp))
double xmm1_2 = _mm_cvtps_pd(xmm2)
uint32_t xmm0_3[0x4] = ___libm_sse2_pow(_mm_cvtps_pd(xmm0_1), xmm1_2)
uint128_t xmm2_1 = 0x4330000000000000
uint32_t xmm4_1[0x4] = _mm_and_ps(-0x8000000000000000, xmm0_3)
uint32_t xmm0_5[0x4] = _mm_cmpeq_sd(xmm0_3[0].q ^ xmm4_1[0].q, xmm2_1, 1)
double xmm1_3 = xmm0_3[0].q
double xmm2_3 = _mm_or_ps(_mm_and_ps(xmm2_1, xmm0_5), xmm4_1)
double xmm1_5 = xmm1_3 + xmm2_3 - xmm2_3
int32_t result =
    int.d(xmm1_5 - _mm_and_ps(_mm_cmpeq_sd(xmm1_5 f- xmm0_3, xmm4_1, 6), 0x3ff0000000000000))

while (true)
    int32_t ecx = 1
    int32_t esi_1 = 1
    
    if (i_1 s> 0)
        int32_t i
        
        do
            ecx *= result
            esi_1 *= result + 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_1 = i_2
    
    if (ecx s<= ebp && esi_1 s> ebp)
        return result
    
    int32_t result_1 = result + 1
    result -= 1
    
    if (ecx s<= ebp)
        result = result_1
