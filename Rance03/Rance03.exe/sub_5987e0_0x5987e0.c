// 函数: sub_5987e0
// 地址: 0x5987e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 5
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        struct sealengine::CDualQuaternion::VTable* var_28
        struct sealengine::CDualQuaternion::VTable** eax_3 = sub_52c960(arg1 + 4, &var_28, ebx)
        float xmm0_1 = eax_3[2]
        float xmm1_1 = eax_3[1]
        float xmm7_1 = eax_3[3]
        float xmm5_2 = xmm0_1 * xmm0_1
        float xmm0_2 = xmm0_1 * xmm1_1
        float xmm4_2 = xmm7_1 * xmm1_1
        float xmm0_3 = eax_3[4]
        float xmm6_2 = xmm1_1 * xmm1_1
        float xmm3_2 = xmm0_3 * xmm1_1
        float xmm1_3 = xmm7_1 f* eax_3[2]
        float xmm2_2 = xmm7_1 * xmm7_1
        float xmm1_5 = xmm0_3 f* eax_3[2]
        float xmm1_7 = xmm0_3 * xmm7_1
        float xmm6_3 = eax_3[6]
        float xmm3_3 = eax_3[8]
        float xmm5_5 = eax_3[5]
        float xmm1_11 = eax_3[7]
        int32_t ecx_1 = *(arg1 + 8)
        ebx += 1
        float xmm3_9[0x4] =
            ((xmm0_2 - xmm1_7) * 2f + 1f - (xmm2_2 + xmm5_2) * 2f + (xmm1_5 + xmm4_2) * 2f) * 0f
            + (xmm5_5 f* eax_3[4] - xmm3_3 f* eax_3[1] - xmm6_3 f* eax_3[3] + xmm1_11 f* eax_3[2])
            * 2f
        float xmm0_36 =
            ((xmm1_3 + xmm3_2) * 2f + (xmm4_2 - xmm1_5) * 2f + 1f - (xmm5_2 + xmm6_2) * 2f) * 0f
            + (xmm6_3 f* eax_3[1] - xmm3_3 f* eax_3[3] + xmm1_11 f* eax_3[4] - xmm5_5 f* eax_3[2])
            * 2f
        int64_t xmm1_17 =
            (1f - (xmm2_2 + xmm6_2) * 2f + (xmm1_7 + xmm0_2) * 2f + (xmm1_3 - xmm3_2) * 2f) * 0f
            + (xmm5_5 f* eax_3[3] - xmm3_3 f* eax_3[2] - xmm1_11 f* eax_3[1] + xmm6_3 f* eax_3[4])
            * 2f
        *(edi_1 + ecx_1 + 0xa0) = _mm_unpacklo_ps(xmm3_9, xmm1_17)
        *(edi_1 + ecx_1 + 0xa8) = xmm0_36
        edi_1 += 0xac
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        int32_t edx_5 = edx_4 s>> 5
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
