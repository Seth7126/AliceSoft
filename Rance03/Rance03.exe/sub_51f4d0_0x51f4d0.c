// 函数: sub_51f4d0
// 地址: 0x51f4d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg5
int32_t* result
int32_t edx
edx:result = muls.dp.d(0x2aaaaaab, edi[1] - *edi)
int32_t edx_1 = edx s>> 1
int32_t ecx_2 = (edx_1 u>> 0x1f) + edx_1
int32_t edx_2 = 0

if (ecx_2 s> 0)
    arg5 = nullptr
    float xmm7_1 = 1f / _mm_cvtepi32_ps(zx.o(ecx_2))
    
    do
        float xmm3_1 = arg4[1]
        int32_t xmm5_1[0x4] = zx.o(edx_2)
        edx_2 += 1
        float xmm5_2 = _mm_cvtepi32_ps(xmm5_1)
        result = *edi + arg5
        arg5 = &arg5[3]
        float xmm5_3 = xmm5_2 * xmm7_1
        float xmm6_1 = 1f - xmm5_3
        float xmm5_4 = xmm5_3 * xmm5_3
        float xmm4_3 = xmm5_3 * 2f * xmm6_1
        float xmm6_2 = xmm6_1 * xmm6_1
        float xmm2_4 = arg4[2] * xmm5_4 + arg2[2] * xmm4_3 + arg3[2] * xmm6_2
        float xmm1_3 = *arg2 * xmm4_3 + *arg4 * xmm5_4
        float xmm0_14 = *arg3 * xmm6_2
        result[1] = xmm3_1 * xmm5_4 + xmm4_3 * arg2[1] + arg3[1] * xmm6_2
        result[2] = xmm2_4
        *result = xmm1_3 + xmm0_14
    while (edx_2 s< ecx_2)

return result
