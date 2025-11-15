// 函数: sub_5af0d0
// 地址: 0x5af0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_1bc = arg1

if (*(arg1 i+ 8) == 4)
    bool cond:0_1 = *(arg1 i+ 0x344) != 1
    float xmm0_1 = *(arg2 + 0x178)
    float var_1d0 = xmm0_1
    
    if (not(cond:0_1))
        if (*(arg2 + 0x174) != 0)
            void* eax_1 = ___std_acquire_shared_mutex_for_instance@4(arg2, *(arg1 i+ 0x348))
            
            if (eax_1 == 0)
                xmm0_1 = (zx.o(0)).d
            else if (*(eax_1 + 0x1e4) == 0)
                xmm0_1 = *(eax_1 + 0x178)
            else
                xmm0_1 = (zx.o(0)).d
        
        var_1d0 = xmm0_1
    
    void var_c8
    sub_57a9b0(&var_c8, *(arg2 + 0x74) ^ 0x80000000, *(arg2 + 0x78) ^ 0x80000000, 
        *(arg2 + 0x7c) ^ 0x80000000)
    float var_1a0
    void var_15c
    float xmm5_8
    int64_t xmm6_3
    uint128_t xmm7_3
    float var_1cc
    void var_148
    float var_118
    float var_114
    float var_110
    void var_108
    float var_d8
    float var_d4
    float var_d0
    float var_88[0x10]
    
    if (var_1bc[0x43] != 4)
    label_5af4fd:
        EnterCriticalSection(*(arg2 + 0x70) + 4)
        int32_t eax_13 = *(arg2 + 0x68)
        var_1d0.q = *(arg2 + 0x60)
        LeaveCriticalSection(*(arg2 + 0x70) + 4)
        int32_t var_1e0_5 = eax_13
        float var_1e4_3 = var_1cc
        float var_1e8_3 = var_1d0
        sub_561770(&var_108)
        float xmm0_41 = *(arg2 + 0xc0)
        float xmm1_13 = arg3[1] f* xmm0_41
        float xmm3_8 = *arg3 * xmm0_41
        float xmm2_12 = arg3[2] f* xmm0_41
        float xmm5_13 = *(arg2 + 0x90) * xmm1_13 + xmm3_8 f* *(arg2 + 0x80)
            + *(arg2 + 0xa0) * xmm2_12 f+ *(arg2 + 0xb0)
        float xmm6_8 = *(arg2 + 0x94) * xmm1_13 + *(arg2 + 0x84) * xmm3_8
            + *(arg2 + 0xa4) * xmm2_12 f+ *(arg2 + 0xb4)
        float xmm7_8 = *(arg2 + 0x98) * xmm1_13 + *(arg2 + 0x88) * xmm3_8
            + *(arg2 + 0xa8) * xmm2_12 f+ *(arg2 + 0xb8)
        float xmm4_10 = *(arg2 + 0x9c) * xmm1_13 + *(arg2 + 0x8c) * xmm3_8
            + *(arg2 + 0xac) * xmm2_12 f+ *(arg2 + 0xbc)
        xmm4_10 - 1f
        int32_t* eax_16
        eax_16:1.b = (xmm4_10 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_10, 1f) ? 1 : 0) << 2
            | (xmm4_10 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm4_10 - 0f
            eax_16:1.b = (xmm4_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_10, 0f) ? 1 : 0) << 2
                | (xmm4_10 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm1_14 = 1f / xmm4_10
                xmm7_8 = xmm7_8 * xmm1_14
                xmm5_13 = xmm5_13 * xmm1_14
                xmm6_8 = xmm6_8 * xmm1_14
        
        float var_1e0_6 = xmm7_8
        float var_1e4_4 = xmm6_8
        float var_1e8_4 = xmm5_13
        sub_561770(&var_148)
        float var_48[0x10]
        float* eax_18 = sub_5b1ca0(&var_c8, &var_48, sub_6cbac0(arg4, &var_88))
        float xmm2_13 = eax_18[3]
        float xmm3_9 = eax_18[7]
        float var_194_3 = xmm2_13
        float var_184_3 = xmm3_9
        var_1a0 = xmm2_13 * var_118 + *eax_18 + xmm2_13 * var_d8
        float var_19c_3 = xmm2_13 * var_114 + eax_18[1] + xmm2_13 * var_d4
        float var_198_3 = xmm2_13 * var_110 + eax_18[2] + xmm2_13 * var_d0
        float var_190_3 = xmm3_9 * var_118 + eax_18[4] + xmm3_9 * var_d8
        float var_18c_3 = xmm3_9 * var_114 + eax_18[5] + xmm3_9 * var_d4
        float xmm0_71 = eax_18[0xb]
        float var_188_3 = xmm3_9 * var_110 + eax_18[6] + xmm3_9 * var_d0
        float xmm7_10 = eax_18[0xb]
        float var_180_3 = xmm0_71 * var_118 + eax_18[8] + xmm0_71 * var_d8
        float var_17c_3 = xmm7_10 * var_114 + eax_18[9] + xmm7_10 * var_d4
        float var_174_2 = xmm7_10
        float var_178_3 = xmm7_10 * var_110 + eax_18[0xa] + xmm7_10 * var_d0
        float xmm1_51 = eax_18[0xf]
        float var_164_3 = xmm1_51
        xmm7_3 = xmm1_51 * var_118 + eax_18[0xc] + xmm1_51 * var_d8
        xmm6_3 = xmm1_51 * var_114 + eax_18[0xd] + xmm1_51 * var_d4
        xmm5_8 = xmm1_51 * var_110 + eax_18[0xe] + xmm1_51 * var_d0
    else
        int32_t ecx_2 = var_1bc[0x100]
        
        if (ecx_2 == 0xffffffff || ecx_2 == *var_1bc)
            goto label_5af4fd
        
        void* eax_3 = *(arg2 + 0x220)
        
        if (eax_3 == 0)
            eax_3.b = 0
            return eax_3
        
        void* eax_4 = sub_59f380(eax_3, ecx_2)
        
        if (eax_4 == 0)
            goto label_5af4fd
        
        int64_t* eax_5 = sub_579230(eax_4, &var_15c)
        float* esi_2 = arg3
        float eax_6 = eax_5[1].d
        var_1d0.q = *eax_5
        float var_1ac = var_1d0 - *esi_2
        float var_1a8_1 = var_1cc - esi_2[1]
        float var_1a4_1 = eax_6 - esi_2[2]
        sub_6ca9e0(&var_1ac, &var_1d0)
        float xmm2_4 = data_7e70e0
        float xmm7_1 = var_1d0
        var_1ac = data_7e70e4 * eax_6 - data_7e70e8 * var_1cc
        float var_1a8_2 = xmm7_1 f* data_7e70e8 - xmm2_4 * eax_6
        float var_1a4_2 = xmm2_4 * var_1cc - xmm7_1 f* data_7e70e4
        float var_1b8
        sub_6ca9e0(&var_1ac, &var_1b8)
        float xmm1_9 = var_1b8
        int32_t var_194_1 = 0
        int32_t var_184_1 = 0
        int32_t var_164_1 = 0x3f800000
        var_1a0 = xmm1_9
        float var_198_1 = xmm7_1
        float var_1b4
        float var_190_1 = var_1b4
        float var_1b0
        float var_19c_1 = var_1cc * var_1b0 - var_1b4 * eax_6
        float var_180_1 = var_1b0
        float var_178_1 = eax_6
        float var_18c_1 = xmm1_9 * eax_6 - xmm7_1 * var_1b0
        float var_188_1 = var_1cc
        int32_t var_174
        var_174.o = zx.o(0)
        float var_17c_1 = xmm7_1 * var_1b4 - xmm1_9 * var_1cc
        int64_t* eax_7 = sub_582750(arg2, &var_1ac)
        int32_t var_1e0_1 = eax_7[1].d
        int32_t var_1e4_1 = *(eax_7 + 4)
        int32_t var_1e8_1 = *eax_7
        sub_561770(&var_108)
        float xmm1_10 = *(arg2 + 0xc0)
        var_1b8 = *esi_2 * xmm1_10
        float var_1b4_1 = esi_2[1] * xmm1_10
        float var_1b0_1 = esi_2[2] * xmm1_10
        float* eax_9 = sub_6ca8d0(&var_1b8, &var_15c, arg2 + 0x80)
        int32_t var_1e0_3 = eax_9[2]
        int32_t var_1e4_2 = eax_9[1]
        float var_1e8_2 = *eax_9
        sub_561770(&var_148)
        float* eax_10 = sub_5b2100(&var_c8, &var_88, &var_1a0)
        int32_t var_194_2 = 0
        int32_t xmm6_2 = eax_10[6]
        int32_t xmm7_2 = eax_10[8]
        int32_t xmm1_11 = eax_10[1]
        int32_t xmm2_10 = eax_10[2]
        int32_t xmm3_6 = eax_10[4]
        int32_t xmm4_5 = eax_10[5]
        var_1d0.q = var_d8 + var_118
        var_1a0 = *eax_10
        int32_t var_17c_2 = eax_10[9]
        xmm5_8 = var_d0 + var_110
        int32_t var_188_2 = xmm6_2
        xmm6_3 = var_d4 + var_114
        int32_t var_180_2 = xmm7_2
        xmm7_3 = zx.o(var_1d0.q)
        int32_t var_19c_2 = xmm1_11
        int32_t var_198_2 = xmm2_10
        int32_t var_190_2 = xmm3_6
        int32_t var_18c_2 = xmm4_5
        int32_t var_184_2 = 0
        int32_t var_178_2 = eax_10[0xa]
        int32_t var_174_1 = 0
        int32_t var_164_2 = 0x3f800000
    int32_t var_170_1 = xmm7_3
    int32_t var_16c_1 = xmm6_3
    float var_168_1 = xmm5_8
    float* eax_19 = sub_6cb8c0(&var_1a0, &var_15c)
    int64_t xmm7_14 = _mm_unpacklo_ps(xmm7_3, xmm6_3)
    int128_t xmm0_83 = *eax_19
    arg5[1].q = xmm7_14
    *(arg5 + 0x18) = xmm5_8
    *arg5 = xmm0_83

float eax
eax.b = 1
return eax
