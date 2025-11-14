// 函数: sub_6448b0
// 地址: 0x6448b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t i_1 = *arg1
int32_t ebp = arg1[1]
int32_t i_2 = i_1
float xmm2[0x2] = 1f / _mm_cvtepi32_ps(zx.o(i_1))
float xmm0_1[0x2] = _mm_cvtepi32_ps(zx.o(ebp))
double xmm1_2 = _mm_cvtps_pd(xmm2)
uint64_t xmm0_3[0x2] = ___libm_sse2_pow(_mm_cvtps_pd(xmm0_1), xmm1_2)
uint128_t xmm2_1 = 0x4330000000000000
uint64_t xmm4_1[0x2] = _mm_and_pd(-0x8000000000000000, xmm0_3)
uint64_t xmm0_5[0x2] = _mm_cmpeq_sd(_mm_xor_pd(xmm0_3, xmm4_1), xmm2_1, 1)
uint64_t xmm1_3 = xmm0_3[0]
double xmm2_3 = _mm_or_pd(_mm_and_pd(xmm2_1, xmm0_5), xmm4_1)
double xmm1_5 = xmm1_3 f+ xmm2_3 - xmm2_3
int32_t result =
    int.d(xmm1_5 - _mm_and_pd(_mm_cmpeq_sd(xmm1_5 f- xmm0_3, xmm4_1, 6), 0x3ff0000000000000))
int32_t ebx = result + 1

while (true)
    int32_t ecx = 1
    int32_t edx_1 = 1
    
    if (i_1 s> 0)
        int32_t i
        
        do
            ecx *= result
            edx_1 *= ebx
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_1 = i_2
    
    if (ecx s> ebp)
        result -= 1
        ebx -= 1
    else
        if (edx_1 s> ebp)
            break
        
        result += 1
        ebx += 1

return result
