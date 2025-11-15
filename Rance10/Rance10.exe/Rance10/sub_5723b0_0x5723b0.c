// 函数: sub_5723b0
// 地址: 0x5723b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
float* edi = arg1
float xmm7 = arg2
int32_t* result = arg1 i+ 0x24
float var_40 = xmm7
int32_t* result_1 = result

do
    if (*result == 0)
        float xmm6_1 = edi[2]
        int32_t edx_3 = mods.dp.d(sx.q(i + 1), 3) * 3
        float xmm2_1 = *(arg1 i+ (edx_3 << 2) + 8) - xmm6_1
        float xmm3_1 = *(arg1 i+ (edx_3 << 2)) - *edi
        float xmm5_3 = xmm2_1 * xmm2_1 + xmm3_1 * xmm3_1
        xmm5_3 f- 0
        float eax_3
        eax_3:1.b = (xmm5_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_3, 0f) ? 1 : 0) << 2
            | (xmm5_3 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            float xmm7_1 = arg4[2]
            float xmm6_2 = *edi
            float xmm1_5 = ((xmm7_1 - xmm6_1) * xmm2_1 + (*arg4 - xmm6_2) * xmm3_1) / xmm5_3
            float xmm0_7
            float xmm1_7
            float xmm5_6
            float xmm6_5
            
            if (not(xmm1_5 f< 0) && not(1f < xmm1_5))
                xmm5_6 = xmm3_1 * xmm1_5 + xmm6_2
                xmm6_5 = xmm2_1 * xmm1_5 + edi[2]
                xmm0_7 = xmm5_6 - *arg4
                xmm1_7 = xmm6_5 - xmm7_1
            
            if (xmm1_5 f< 0 || 1f < xmm1_5 || arg3 f< xmm1_7 * xmm1_7 + xmm0_7 * xmm0_7)
                xmm7 = var_40
            else
                float xmm3_2 = xmm3_1 ^ (data_79aad0).d
                float xmm0_13 = sub_484cc0(xmm2_1 * xmm2_1 + xmm3_2 * xmm3_2)
                xmm0_13 f- 0
                eax_3:1.b = (xmm0_13 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2 | (xmm0_13 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                float xmm0_15
                float xmm1_13
                
                if (not(p_4))
                    xmm0_15 = (zx.o(0)).d
                    xmm1_13 = xmm3_2
                else
                    float xmm1_12 = 1f / xmm0_13
                    xmm2_1 = xmm2_1 * xmm1_12
                    xmm0_15 = xmm1_12 * 0f
                    xmm1_13 = xmm1_12 * xmm3_2
                
                xmm7 = var_40
                *arg4 = _mm_unpacklo_ps(xmm2_1 * xmm7 + xmm5_6, xmm0_15 * xmm7)
                arg4[2] = xmm1_13 * xmm7 + xmm6_5
        
        float xmm6_6 = edi[2]
        float xmm5_7 = *edi
        float xmm3_4 = arg4[2] - xmm6_6
        float xmm2_6 = *arg4 - xmm5_7
        
        if (not(arg3 f< xmm3_4 * xmm3_4 + xmm2_6 * xmm2_6))
            float xmm0_23 = sub_484cc0(xmm3_4 * xmm3_4 + xmm2_6 * xmm2_6)
            xmm0_23 f- 0
            eax_3:1.b = (xmm0_23 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_23, 0f) ? 1 : 0) << 2
                | (xmm0_23 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            float xmm0_25
            
            if (not(p_6))
                xmm0_25 = (zx.o(0)).d
            else
                float xmm1_21 = 1f / xmm0_23
                xmm2_6 = xmm2_6 * xmm1_21
                xmm0_25 = xmm1_21 * 0f
                xmm3_4 = xmm3_4 * xmm1_21
            
            *arg4 = _mm_unpacklo_ps(xmm5_7 + xmm2_6 * xmm7, xmm0_25 * xmm7)
            arg4[2] = xmm6_6 + xmm3_4 * xmm7
        
        float xmm5_10 = *(arg1 i+ (edx_3 << 2))
        float xmm6_8 = *(arg1 i+ (edx_3 << 2) + 8)
        float xmm2_9 = *arg4 - xmm5_10
        float xmm3_7 = arg4[2] - xmm6_8
        
        if (not(arg3 f< xmm3_7 * xmm3_7 + xmm2_9 * xmm2_9))
            float xmm0_33 = sub_484cc0(xmm3_7 * xmm3_7 + xmm2_9 * xmm2_9)
            xmm0_33 f- 0
            float eax_5
            eax_5:1.b = (xmm0_33 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_33, 0f) ? 1 : 0) << 2
                | (xmm0_33 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            float xmm0_35
            
            if (not(p_8))
                xmm0_35 = (zx.o(0)).d
            else
                float xmm1_27 = 1f / xmm0_33
                xmm2_9 = xmm2_9 * xmm1_27
                xmm0_35 = xmm1_27 * 0f
                xmm3_7 = xmm3_7 * xmm1_27
            
            *arg4 = _mm_unpacklo_ps(xmm5_10 + xmm2_9 * xmm7, xmm0_35 * xmm7)
            arg4[2] = xmm6_8 + xmm3_7 * xmm7
        
        result = result_1
    
    i += 1
    result = &result[1]
    edi = &edi[3]
    result_1 = result
while (i s< 3)

return result
