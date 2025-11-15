// 函数: sub_5b0f10
// 地址: 0x5b0f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (not(0f >= arg4))
    int64_t xmm0_1 = data_7e70e0.q
    float xmm3 = xmm0_1:4.d
    float xmm5_1 = xmm0_1.d
    float xmm0_3 = *arg2 * xmm5_1
    float var_54_1 = data_7e70e8
    float xmm2_1 = arg2[1] f* xmm3
    float xmm1_2 = arg2[2] f* var_54_1
    float xmm0_8 = sub_484cc0(xmm0_3 + xmm0_3 + xmm2_1 + xmm2_1 + xmm1_2 + xmm1_2 + 2f)
    xmm0_8 f- 0
    float eax
    eax:1.b = (xmm0_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2
        | (xmm0_8 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    float var_50
    
    if (p_2)
        float xmm7_1 = arg2[1]
        float xmm0_16 = 1f / xmm0_8
        float xmm1_7 = (*arg2 * var_54_1 - arg2[2] f* xmm5_1) * xmm0_16
        float xmm7_4 = (xmm7_1 * xmm5_1 - *arg2 * xmm3) * xmm0_16
        var_50 = (arg2[2] f* xmm3 - xmm7_1 * var_54_1) * xmm0_16
        float var_4c_1 = xmm1_7
        float var_48_1 = xmm7_4
        float var_44_1 = xmm0_8 * 0.5f
    else
        var_50.o = data_79a970[0x10][0].o
    
    int32_t xmm0_18 = sub_48ca30()
    
    for (int32_t i = 0; i s< 0x64; i += 1)
        float var_68
        sub_5b0690(&var_68, arg6)
        float var_64
        float var_60
        
        if (var_68 * xmm0_1.d + var_64 * xmm0_1:4.d + var_54_1 * var_60 f>= xmm0_18)
            float xmm2_8 = var_60 * arg5
            float var_40[0x10]
            float* eax_3 = sub_6cbac0(&var_50, &var_40)
            float xmm5_3 = eax_3[2] * var_68
            float xmm2_10 = eax_3[3] * var_68
            float xmm3_7 = eax_3[4] * var_64 + *eax_3 * var_68 + eax_3[8] * xmm2_8 + eax_3[0xc]
            float xmm4_5 = eax_3[1] * var_68 + eax_3[5] * var_64 + eax_3[9] * xmm2_8
            float xmm0_33 = eax_3[6] * var_64
            *arg3 = xmm3_7
            float xmm4_6 = xmm4_5 + eax_3[0xd]
            float xmm5_5 = xmm5_3 + xmm0_33 + eax_3[0xa] * xmm2_8
            float xmm0_37 = eax_3[7] * var_64
            *(arg3 + 4) = xmm4_6
            float xmm5_6 = xmm5_5 + eax_3[0xe]
            arg3[1].d = xmm5_6
            float xmm2_13 = xmm2_10 + xmm0_37 + eax_3[0xb] * xmm2_8 + eax_3[0xf]
            xmm2_13 - 1f
            eax_3:1.b = (xmm2_13 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_13, 1f) ? 1 : 0) << 2
                | (xmm2_13 < 1f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                xmm2_13 - 0f
                eax_3:1.b = (xmm2_13 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm2_13, 0f) ? 1 : 0) << 2 | (xmm2_13 < 0f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (p_6)
                    float xmm1_13 = 1f / xmm2_13
                    *arg3 = xmm1_13 * xmm3_7
                    *(arg3 + 4) = xmm1_13 * xmm4_6
                    arg3[1].d = xmm1_13 * xmm5_6
            
            return arg3

int32_t eax_1 = arg2[2]
*arg3 = *arg2
arg3[1].d = eax_1
return arg3
