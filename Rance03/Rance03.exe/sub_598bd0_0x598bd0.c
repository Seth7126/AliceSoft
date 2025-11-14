// 函数: sub_598bd0
// 地址: 0x598bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 5
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t ebp_1 = 0
    
    do
        void* esi_2 = *(arg1 + 8) + ebp_1
        
        if (*(esi_2 + 0x50) != 0)
            struct sealengine::CDualQuaternion::VTable* var_28
            struct sealengine::CDualQuaternion::VTable** eax_3 = sub_52c960(arg1 + 4, &var_28, ebx)
            float xmm0_1 = eax_3[2]
            float xmm1 = eax_3[1]
            float xmm7_1 = eax_3[3]
            float xmm5_2 = xmm0_1 * xmm0_1
            float xmm0_2 = xmm0_1 * xmm1
            float xmm4_2 = xmm7_1 * xmm1
            float xmm0_3 = eax_3[4]
            float xmm6_2 = xmm1 * xmm1
            float xmm3_2 = xmm0_3 * xmm1
            float xmm1_2 = xmm7_1 f* eax_3[2]
            float xmm2_2 = xmm7_1 * xmm7_1
            float xmm1_4 = xmm0_3 f* eax_3[2]
            float xmm1_6 = xmm0_3 * xmm7_1
            float xmm6_3 = eax_3[6]
            float xmm3_3 = eax_3[8]
            float xmm5_5 = eax_3[5]
            float xmm1_10 = eax_3[7]
            float xmm0_36 =
                (1f - (xmm2_2 + xmm6_2) * 2f + (xmm1_6 + xmm0_2) * 2f + (xmm1_2 - xmm3_2) * 2f) * 0f
                + (xmm5_5 f* eax_3[3] - xmm3_3 f* eax_3[2] - xmm1_10 f* eax_3[1]
                + xmm6_3 f* eax_3[4]) * 2f
            float xmm3_9 =
                ((xmm0_2 - xmm1_6) * 2f + 1f - (xmm2_2 + xmm5_2) * 2f + (xmm1_4 + xmm4_2) * 2f) * 0f
                + (xmm5_5 f* eax_3[4] - xmm3_3 f* eax_3[1] - xmm6_3 f* eax_3[3]
                + xmm1_10 f* eax_3[2]) * 2f
            float xmm2_11 = 1f / arg2
            float xmm4_10 = xmm2_11 * (xmm3_9 f- *(esi_2 + 0xa0))
            float xmm1_16 =
                ((xmm1_2 + xmm3_2) * 2f + (xmm4_2 - xmm1_4) * 2f + 1f - (xmm5_2 + xmm6_2) * 2f) * 0f
                + (xmm6_3 f* eax_3[1] - xmm3_3 f* eax_3[3] + xmm1_10 f* eax_3[4]
                - xmm5_5 f* eax_3[2]) * 2f
            float xmm3_12 = xmm2_11 * (xmm0_36 f- *(esi_2 + 0xa4))
            float var_34_1 = xmm4_10
            float var_30_1 = xmm3_12
            float xmm2_12 = xmm2_11 * (xmm1_16 f- *(esi_2 + 0xa8))
            float var_2c_1 = xmm2_12
            
            if (*(esi_2 + 0x98) != 0)
                float xmm0_38 = *(esi_2 + 0x9c)
                var_34_1 = xmm4_10 * xmm0_38
                float var_30_2 = xmm3_12 * xmm0_38
                var_2c_1 = xmm2_12 * xmm0_38
            
            *(esi_2 + 0x8c) = var_34_1.q
            *(esi_2 + 0x94) = var_2c_1
        
        ebx += 1
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
        ebp_1 += 0xac
        int32_t edx_5 = edx_4 s>> 5
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
