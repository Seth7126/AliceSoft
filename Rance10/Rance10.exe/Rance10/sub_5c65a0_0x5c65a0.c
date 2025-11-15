// 函数: sub_5c65a0
// 地址: 0x5c65a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_cc
int32_t eax_1 = __security_cookie ^ &var_cc
void var_78
sub_5deb30(&var_78, arg1 + 0x1c, arg1 + 0xd0)
void var_70
void* edx = &var_70
int128_t* eax_3

while (not(*(edx - 4) f* arg2[1] + *(edx - 8) * *arg2 + *edx f* arg2[2] f+ *(edx + 4) f< 0))
    edx += 0x10
    void var_18
    
    if (edx - 8 == &var_18)
        float var_b8[0x4][0x4]
        float (* eax_5)[0x4] = sub_56bca0(arg1 + 0x1c, &var_b8)
        eax_3 = sub_6cb020(eax_5, eax_5, &var_78, arg1 + 0xd0)
        float xmm1_6 = *arg2
        float xmm3_1 = arg2[1]
        float xmm2_1 = arg2[2]
        float xmm5_5 = eax_3[1].d f* xmm3_1 + xmm1_6 f* *eax_3 + eax_3[2].d f* xmm2_1 f+ eax_3[3].d
        float xmm4_5 = *(eax_3 + 4) * xmm1_6 + *(eax_3 + 0x14) * xmm3_1
            + *(eax_3 + 0x24) * xmm2_1 f+ *(eax_3 + 0x34)
        float xmm6_5 = *(eax_3 + 0xc) * xmm1_6 + *(eax_3 + 0x1c) * xmm3_1
            + *(eax_3 + 0x2c) * xmm2_1 f+ *(eax_3 + 0x3c)
        xmm6_5 - 1f
        eax_3:1.b = (xmm6_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm6_5, 1f) ? 1 : 0) << 2
            | (xmm6_5 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm6_5 f- 0
            eax_3:1.b = (xmm6_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_5, 0f) ? 1 : 0) << 2
                | (xmm6_5 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm1_7 = 1f / xmm6_5
                xmm4_5 = xmm4_5 * xmm1_7
                xmm5_5 = xmm5_5 * xmm1_7
        
        if (-1f > xmm5_5 || xmm5_5 >= 1f || -1f > xmm4_5 || xmm4_5 >= 1f)
            break
        
        int32_t xmm2_2[0x4] = zx.o(*(arg1 + 0xcc))
        float xmm1_9 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc8)))
        float var_c8 = (xmm4_5 * -0.5f + 0.5f) * _mm_cvtepi32_ps(xmm2_2)
        var_cc = (xmm5_5 * 0.5f + 0.5f) * xmm1_9
        struct common::CPoint::VTable* var_c4
        struct common::CPoint::VTable** eax_6 = sub_6ca7a0(&var_cc, &var_c4)
        int32_t ecx_5 = eax_6[1]
        *(arg3 + 4) = ecx_5
        *(arg3 + 8) = eax_6[2]
        int32_t eax_9 = *(arg1 + 0xc8) - 1
        
        if (ecx_5 s< 0)
            *(arg3 + 4) = 0
        else if (ecx_5 s> eax_9)
            *(arg3 + 4) = eax_9
        
        int32_t ecx_6 = *(arg3 + 8)
        int32_t eax_11 = *(arg1 + 0xcc) - 1
        
        if (ecx_6 s< 0)
            *(arg3 + 8) = 0
            eax_11.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_cc)
            return eax_11
        
        if (ecx_6 s> eax_11)
            *(arg3 + 8) = eax_11
        
        eax_11.b = 1
        @__security_check_cookie@4(eax_1 ^ &var_cc)
        return eax_11

eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_cc)
return eax_3
