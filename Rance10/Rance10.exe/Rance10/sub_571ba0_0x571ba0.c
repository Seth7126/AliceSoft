// 函数: sub_571ba0
// 地址: 0x571ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = arg5
int32_t i_1 = (ecx[1] - *ecx) s>> 2

if (i_1 != 1)
    int64_t xmm0_17 = data_7fd4d8.q
    float eax_3 = data_7fd4e0
    int64_t var_c_1 = xmm0_17
    float var_4_1 = eax_3
    
    if (i_1 s> 0)
        float xmm1_2 = arg2[2]
        float xmm6_7 = arg2[1]
        float xmm7_6 = *arg2
        arg5 = xmm1_2
        float* ecx_4 = *arg6
        int32_t* ebx_2 = *ecx - ecx_4
        int32_t i
        
        do
            int32_t* eax_8 = (*(ebx_2 + ecx_4) << 6) + *arg4
            float xmm5_11 = eax_8[4] f* xmm6_7 + *eax_8 * xmm7_6 + eax_8[8] f* xmm1_2 f+ eax_8[0xc]
            float xmm2_6 =
                eax_8[5] f* xmm6_7 + eax_8[1] f* xmm7_6 + eax_8[9] f* xmm1_2 f+ eax_8[0xd]
            float xmm3_6 =
                eax_8[6] f* xmm6_7 + eax_8[2] f* xmm7_6 + eax_8[0xa] f* xmm1_2 f+ eax_8[0xe]
            float xmm4_11 =
                eax_8[7] f* xmm6_7 + eax_8[3] f* xmm7_6 + eax_8[0xb] f* xmm1_2 f+ eax_8[0xf]
            xmm4_11 - 1f
            eax_8:1.b = (xmm4_11 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_11, 1f) ? 1 : 0) << 2
                | (xmm4_11 < 1f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                xmm4_11 f- 0
                eax_8:1.b = (xmm4_11 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm4_11, 0f) ? 1 : 0) << 2 | (xmm4_11 < 0f ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (p_8)
                    float xmm1_3 = 1f / xmm4_11
                    xmm2_6 = xmm2_6 * xmm1_3
                    xmm5_11 = xmm5_11 * xmm1_3
                    xmm3_6 = xmm3_6 * xmm1_3
            
            float xmm0_35 = *ecx_4
            ecx_4 = &ecx_4[1]
            float xmm2_8 = xmm2_6 * xmm0_35 f+ var_c_1:4.d
            var_c_1.d = xmm0_35 * xmm5_11 f+ var_c_1.d
            xmm1_2 = arg5
            var_c_1:4.d = xmm2_8
            var_4_1 = xmm3_6 * xmm0_35 + var_4_1
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax_3 = var_4_1
        xmm0_17 = var_c_1
    
    *arg3 = xmm0_17
    arg3[2] = eax_3
else
    float xmm3_1 = arg2[1]
    float xmm1_1 = *arg2
    float xmm2_1 = arg2[2]
    int32_t* ecx_3 = (**ecx << 6) + *arg4
    float xmm6_2 = ecx_3[2] f* xmm1_1
    float xmm7_2 = ecx_3[3] f* xmm1_1
    float xmm4_5 = ecx_3[4] f* xmm3_1 + *ecx_3 * xmm1_1 + ecx_3[8] f* xmm2_1 f+ ecx_3[0xc]
    float xmm5_3 = ecx_3[1] f* xmm1_1 + ecx_3[5] f* xmm3_1
    float xmm0_7 = ecx_3[9] f* xmm2_1
    *arg3 = xmm4_5
    float xmm5_5 = xmm5_3 + xmm0_7 f+ ecx_3[0xd]
    float xmm6_4 = xmm6_2 + ecx_3[6] f* xmm3_1 + ecx_3[0xa] f* xmm2_1
    float xmm0_13 = ecx_3[7] f* xmm3_1
    arg3[1] = xmm5_5
    float xmm6_5 = xmm6_4 f+ ecx_3[0xe]
    float xmm0_15 = ecx_3[0xb] f* xmm2_1
    arg3[2] = xmm6_5
    float xmm7_5 = xmm7_2 + xmm0_13 + xmm0_15 f+ ecx_3[0xf]
    xmm7_5 - 1f
    int32_t* eax_1
    eax_1:1.b = (xmm7_5 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 1f) ? 1 : 0) << 2
        | (xmm7_5 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm7_5 - 0f
        eax_1:1.b = (xmm7_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 0f) ? 1 : 0) << 2
            | (xmm7_5 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm0_16 = 1f / xmm7_5
            *arg3 = xmm4_5 * xmm0_16
            arg3[1] = xmm5_5 * xmm0_16
            arg3[2] = xmm6_5 * xmm0_16

return arg3
