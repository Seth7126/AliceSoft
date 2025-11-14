// 函数: sub_598410
// 地址: 0x598410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_3 = edx_2 s>> 5

if ((arg2[1] - *arg2) s>> 6 != (edx_3 u>> 0x1f) + edx_3)
    int32_t eax_1
    int32_t edx_4
    edx_4:eax_1 = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
    int32_t edx_5 = edx_4 s>> 5
    sub_544300(arg2, (edx_5 u>> 0x1f) + edx_5)

sub_52c8e0(arg1 + 4)
int32_t esi_3 = 0
int32_t result = arg2[1] - *arg2

if ((result & 0xffffffc0) s> 0)
    int32_t ebp_1 = 0
    int32_t* edi_1 = arg2
    
    do
        struct sealengine::CDualQuaternion::VTable* var_64
        struct sealengine::CDualQuaternion::VTable** eax_6 = sub_52c960(arg1 + 4, &var_64, esi_3)
        int32_t var_34_1 = 0
        int32_t var_24_1 = 0
        int32_t var_14_1 = 0
        float xmm2_1 = eax_6[1]
        float xmm4_1 = eax_6[2]
        float xmm1_1 = eax_6[3]
        float xmm0_2 = xmm2_1 * xmm2_1
        float xmm5_2 = xmm1_1 * xmm1_1
        float xmm3_2 = xmm4_1 * xmm2_1
        arg2 = xmm4_1 * xmm4_1
        float xmm0_6 = xmm1_1 * xmm2_1
        float xmm6_2 = xmm1_1 * xmm4_1
        float xmm0_7 = eax_6[4]
        float xmm7_2 = xmm0_7 * xmm2_1
        float xmm2_3 = xmm0_7 * xmm1_1
        float xmm4_3 = xmm0_7 f* eax_6[2]
        float xmm2_4 = eax_6[7]
        float var_3c_1 = (xmm2_3 + xmm3_2) * 2f
        float var_38_1 = (xmm0_6 - xmm4_3) * 2f
        float xmm5_5 = eax_6[5]
        float var_2c_1 = 1f - (xmm5_2 + xmm0_2) * 2f
        float xmm4_6 = eax_6[6]
        float xmm3_5 = eax_6[8]
        float var_28_1 = (xmm6_2 + xmm7_2) * 2f
        float var_1c_1 = (xmm6_2 - xmm7_2) * 2f
        float xmm6_5 = eax_6[4]
        float var_18_1 = 1f - (arg2 f+ xmm0_2) * 2f
        esi_3 += 1
        int32_t var_4_1 = 0x3f800000
        float xmm7_3 = eax_6[3]
        float xmm1_14 =
            (xmm5_5 * xmm6_5 - xmm3_5 f* eax_6[1] - xmm4_6 * xmm7_3 + xmm2_4 f* eax_6[2]) * 2f
        float xmm5_6 = xmm5_5 f* eax_6[2]
        int128_t* eax_8 = *edi_1 + ebp_1
        ebp_1 += 0x40
        float xmm1_19 = xmm5_5 * xmm7_3 - xmm3_5 f* eax_6[2] - xmm2_4 f* eax_6[1] + xmm4_6 * xmm6_5
        float xmm4_9 = xmm4_6 f* eax_6[1] - xmm3_5 * xmm7_3 + xmm2_4 * xmm6_5
        *eax_8 = (1f - (xmm5_2 f+ arg2) * 2f).o
        eax_8[1] = ((xmm3_2 - xmm2_3) * 2f).o
        eax_8[2] = ((xmm4_3 + xmm0_6) * 2f).o
        float var_c_1 = xmm1_19 * 2f
        float var_8_1 = (xmm4_9 - xmm5_6) * 2f
        eax_8[3] = xmm1_14.o
        result = (edi_1[1] - *edi_1) s>> 6
    while (esi_3 s< result)

return result
