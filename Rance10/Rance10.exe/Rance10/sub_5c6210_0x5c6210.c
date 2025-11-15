// 函数: sub_5c6210
// 地址: 0x5c6210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg2 + 4)
void* eax

if (ecx s>= 0 && ecx s< *(arg1 + 0xc8))
    eax = *(arg2 + 8)
    
    if (eax s>= 0 && eax s< *(arg1 + 0xcc))
        uint128_t xmm0 = zx.o(*(arg1 + 0xc8))
        float xmm1_1 = _mm_cvtepi32_ps(zx.o(ecx))
        float xmm1_4 = (xmm1_1 + xmm1_1) / _mm_cvtepi32_ps(xmm0) - 1f
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xcc)))
        float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax))
        float xmm0_4 = 1f - (xmm1_6 + xmm1_6) / xmm0_3
        float var_88[0x4][0x4]
        int128_t* var_104_1 = sub_56bd40(arg1 + 0x1c, &var_88)
        void var_48
        int32_t* eax_2 = sub_6cb130(arg1 + 0xd0, &var_48)
        float var_c8
        sub_6cb020(eax_2, eax_2, &var_c8, var_104_1)
        float var_b8
        float xmm3_2 = var_b8 * xmm0_4 + var_c8 * xmm1_4
        float var_c4
        float var_b4
        float xmm4_2 = var_b4 * xmm0_4 + var_c4 * xmm1_4
        float var_a8
        float var_98
        float xmm7_2 = xmm3_2 + var_a8 + var_98
        float var_a4
        float var_94
        float xmm0_11 = xmm4_2 + var_a4 + var_94
        float var_e8 = xmm7_2
        float var_e4 = xmm0_11
        float var_c0
        float var_b0
        float xmm5_2 = var_b0 * xmm0_4 + var_c0 * xmm1_4
        float var_a0
        float var_90
        float xmm0_16 = xmm5_2 + var_a0 + var_90
        float var_e0 = xmm0_16
        float var_bc
        float var_ac
        float xmm6_2 = var_ac * xmm0_4 + var_bc * xmm1_4
        float var_9c
        float var_8c
        float xmm0_21 = xmm6_2 + var_9c + var_8c
        xmm0_21 - 1f
        float (* eax_3)[0x4]
        eax_3:1.b = (xmm0_21 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_21, 1f) ? 1 : 0) << 2
            | (xmm0_21 < 1f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            xmm0_21 f- 0
            eax_3:1.b = (xmm0_21 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_21, 0f) ? 1 : 0) << 2
                | (xmm0_21 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                float xmm0_22 = 1f / xmm0_21
                var_e8 = xmm7_2 * xmm0_22
                float var_e4_1 = xmm0_11 * xmm0_22
                var_e0 = xmm0_16 * xmm0_22
        
        float xmm1_13 = var_9c * 0f + xmm6_2 + var_8c
        float xmm3_6 = var_a8 * 0f + xmm3_2 + var_98
        xmm1_13 - 1f
        float xmm4_6 = var_a4 * 0f + xmm4_2 + var_94
        float xmm5_6 = var_a0 * 0f + xmm5_2 + var_90
        eax_3:1.b = (xmm1_13 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_13, 1f) ? 1 : 0) << 2
            | (xmm1_13 < 1f ? 1 : 0)
        float var_f4 = xmm3_6
        float var_f0 = xmm4_6
        float var_ec = xmm5_6
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            xmm1_13 f- 0
            eax_3:1.b = (xmm1_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_13, 0f) ? 1 : 0) << 2
                | (xmm1_13 < 0f ? 1 : 0)
            bool p_7 = unimplemented  {test ah, 0x44}
            
            if (p_7)
                float xmm2_1 = 1f / xmm1_13
                var_f4 = xmm3_6 * xmm2_1
                float var_f0_1 = xmm4_6 * xmm2_1
                var_ec = xmm5_6 * xmm2_1
        
        *(arg3 + 4) = var_f4.q
        *(arg3 + 0xc) = var_ec
        *(arg3 + 0x10) = var_e8.q
        *(arg3 + 0x18) = var_e0
        float eax_5
        eax_5.b = 1
        return eax_5

eax.b = 0
return eax
