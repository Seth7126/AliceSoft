// 函数: sub_5621e0
// 地址: 0x5621e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, arg5[1] - *arg5)
int32_t edx_1 = edx s>> 1
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t edx_2 = 0

if (result s> 0)
    float* ecx = nullptr
    int32_t esi_2 = *arg5
    float xmm7_1 = 1f / _mm_cvtepi32_ps(zx.o(result))
    
    do
        float xmm3_1 = arg4[1]
        int32_t xmm5_1[0x4] = zx.o(edx_2)
        edx_2 += 1
        float xmm5_3 = _mm_cvtepi32_ps(xmm5_1) * xmm7_1
        float xmm6_1 = 1f - xmm5_3
        float xmm5_4 = xmm5_3 * xmm5_3
        float xmm4_3 = (xmm5_3 + xmm5_3) * xmm6_1
        float xmm6_2 = xmm6_1 * xmm6_1
        float xmm2_4 = arg4[2] * xmm5_4 + arg2[2] * xmm4_3 + arg3[2] * xmm6_2
        float xmm1_3 = *arg4 * xmm5_4 + *arg2 * xmm4_3
        float xmm0_14 = *arg3 * xmm6_2
        *(ecx + esi_2 + 4) = xmm3_1 * xmm5_4 + xmm4_3 * arg2[1] + arg3[1] * xmm6_2
        *(ecx + esi_2 + 8) = xmm2_4
        *(ecx + esi_2) = xmm1_3 + xmm0_14
        ecx = &ecx[3]
    while (edx_2 s< result)

return result
