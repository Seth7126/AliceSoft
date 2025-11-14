// 函数: sub_52b680
// 地址: 0x52b680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float* eax

if (*(arg1 + 8) == 0 && *(arg2 + 8) == 0)
    struct sealengine::CDualQuaternion::VTable* var_a4
    float var_80[0x10]
    float* eax_2 = sub_535d80(sub_52c960(arg3, &var_a4, *(arg1 + 0x28)), &var_80)
    float xmm1_1 = *(arg1 + 0xc)
    float xmm3_1 = *(arg1 + 0x10)
    float xmm2_1 = *(arg1 + 0x14)
    float xmm4_5 = eax_2[4] * xmm3_1 + xmm1_1 * *eax_2 + eax_2[8] * xmm2_1 + eax_2[0xc]
    float var_ec_1 = xmm4_5
    float xmm5_5 = eax_2[1] * xmm1_1 + eax_2[5] * xmm3_1 + eax_2[9] * xmm2_1 + eax_2[0xd]
    float var_e4_1 = xmm5_5
    float xmm6_5 = eax_2[2] * xmm1_1 + eax_2[6] * xmm3_1 + eax_2[0xa] * xmm2_1 + eax_2[0xe]
    float var_e8_1 = xmm6_5
    float xmm7_5 = eax_2[3] * xmm1_1 + eax_2[7] * xmm3_1 + eax_2[0xb] * xmm2_1 + eax_2[0xf]
    xmm7_5 - 1f
    eax_2:1.b = (xmm7_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 1f) ? 1 : 0) << 2
        | (xmm7_5 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm7_5 f- 0
        eax_2:1.b = (xmm7_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 0f) ? 1 : 0) << 2
            | (xmm7_5 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm0_17 = 1f / xmm7_5
            var_ec_1 = xmm4_5 * xmm0_17
            var_e4_1 = xmm5_5 * xmm0_17
            var_e8_1 = xmm6_5 * xmm0_17
    
    int32_t var_100_2 = *(arg2 + 0x28)
    var_a4 = &sealengine::CDualQuaternion::`vftable'
    struct sealengine::CDualQuaternion::VTable* var_c8
    float var_40[0x10]
    eax = sub_535d80(sub_52c960(arg3, &var_c8, var_100_2), &var_40)
    float xmm3_2 = *(arg2 + 0x10)
    float xmm1_2 = *(arg2 + 0xc)
    float xmm2_2 = *(arg2 + 0x14)
    float xmm4_11 = eax[4] * xmm3_2 + *eax * xmm1_2 + eax[8] * xmm2_2 + eax[0xc]
    float xmm5_11 = eax[1] * xmm1_2 + eax[5] * xmm3_2 + eax[9] * xmm2_2 + eax[0xd]
    float xmm6_11 = eax[2] * xmm1_2 + eax[6] * xmm3_2 + eax[0xa] * xmm2_2 + eax[0xe]
    float xmm7_10 = eax[3] * xmm1_2 + eax[7] * xmm3_2 + eax[0xb] * xmm2_2 + eax[0xf]
    xmm7_10 - 1f
    eax:1.b = (xmm7_10 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_10, 1f) ? 1 : 0) << 2
        | (xmm7_10 < 1f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        xmm7_10 f- 0
        eax:1.b = (xmm7_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_10, 0f) ? 1 : 0) << 2
            | (xmm7_10 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            float xmm0_34 = 1f / xmm7_10
            xmm4_11 = xmm4_11 * xmm0_34
            xmm5_11 = xmm5_11 * xmm0_34
            xmm6_11 = xmm6_11 * xmm0_34
    
    float xmm3_4 = var_e4_1 - xmm5_11
    float xmm2_4 = var_ec_1 - xmm4_11
    float xmm5_12 = *(arg2 + 0x24)
    float xmm4_13 = var_e8_1 - xmm6_11
    var_c8 = &sealengine::CDualQuaternion::`vftable'
    float xmm5_13 = xmm5_12 f+ *(arg1 + 0x24)
    float xmm0_39 = _mm_sqrt_ss(0, xmm2_4 * xmm2_4 + xmm3_4 * xmm3_4 + xmm4_13 * xmm4_13)
    
    if (not(xmm0_39 > xmm5_13))
        float var_e0 = xmm2_4
        float var_dc = xmm3_4
        float var_d8 = xmm4_13
        float xmm5_14 = xmm5_13 - xmm0_39
        float var_d4
        float* eax_4 = sub_59f780(&var_e0, &var_d4)
        float xmm0_41 = eax_4[2] * xmm5_14
        *arg4 = _mm_unpacklo_ps(*eax_4 * xmm5_14, eax_4[1] * xmm5_14)
        arg4[1].d = xmm0_41
        float eax_5
        eax_5.b = 1
        return eax_5

eax.b = 0
return eax
