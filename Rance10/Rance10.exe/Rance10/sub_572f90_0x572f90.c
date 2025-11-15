// 函数: sub_572f90
// 地址: 0x572f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_8 = 3.40282347e+38f
int32_t* esi_1 = *arg1
float** i_1 = *esi_1

while (i_1 != esi_1)
    int32_t edx_1 = 0
    int32_t* i = 0x24
    int32_t var_4_1 = 0
    float* esi_2 = nullptr
    float* i_2
    
    do
        if (*(i + i_1[4]) == 0)
            int32_t eax_2 = mods.dp.d(sx.q(edx_1 + 1), 3) * 3
            float xmm2_1 = *arg2
            float xmm7_2 = *arg3 - xmm2_1
            int32_t edx_6 = i_1[4]
            float xmm4_2 = *(edx_6 + (eax_2 << 2) + 8) f- *(esi_2 + edx_6 + 8)
            float xmm3_2 = *(edx_6 + (eax_2 << 2)) f- *(esi_2 + edx_6)
            float xmm1_2 = arg3[2] f- arg2[2]
            float xmm5_3 = xmm7_2 * xmm4_2 - xmm1_2 * xmm3_2
            xmm5_3 f- 0
            i_2:1.b = (xmm5_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_3, 0f) ? 1 : 0) << 2
                | (xmm5_3 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                i_2 = arg2
                float xmm2_2 = xmm2_1 f- *(esi_2 + edx_6)
                float xmm1_3 = 1f / xmm5_3
                float xmm5_5 = i_2[2] f- *(esi_2 + edx_6 + 8)
                float xmm6_4 = (xmm5_5 * xmm3_2 - xmm2_2 * xmm4_2) * xmm1_3
                float xmm5_8 = (xmm5_5 * xmm7_2 - xmm2_2 * xmm1_2) * xmm1_3
                
                if (not(0 f> xmm6_4) && not(xmm6_4 > 1f) && not(0 f> xmm5_8) && not(xmm5_8 > 1f))
                    float xmm2_4 = i_2[2]
                    float xmm0_8 = xmm1_2 * xmm6_4 + xmm2_4
                    float xmm7_4 = xmm7_2 * xmm6_4 + *i_2
                    float xmm0_9 = xmm0_8 - xmm2_4
                    float xmm2_6 = xmm7_4 - *i_2
                    float xmm2_8 = xmm2_6 * xmm2_6 + xmm0_9 * xmm0_9
                    
                    if (not(var_8 <= xmm2_8))
                        float xmm3_3 = xmm3_2 ^ (data_79aad0).d
                        float xmm0_15 = sub_484cc0(xmm3_3 * xmm3_3 + xmm4_2 * xmm4_2)
                        xmm0_15 f- 0
                        i_2:1.b = (xmm0_15 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_15, 0f) ? 1 : 0) << 2 | (xmm0_15 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        float xmm0_17
                        
                        if (not(p_4))
                            xmm0_17 = (zx.o(0)).d
                        else
                            float xmm1_6 = 1f / xmm0_15
                            xmm4_2 = xmm4_2 * xmm1_6
                            xmm0_17 = xmm1_6 * 0f
                            xmm3_3 = xmm3_3 * xmm1_6
                        
                        var_8 = xmm2_8
                        *arg5 = _mm_unpacklo_ps(xmm4_2 * arg4 + xmm7_4, xmm0_17 * arg4)
                        arg5[1].d = xmm3_3 * arg4 f+ xmm0_8
        
        var_4_1 += 1
        i = &i[1]
        edx_1 = var_4_1
        esi_2 = &esi_2[3]
    while (i s< 0x30)
    
    if (*(i_1 + 0xd) == 0)
        float** i_3 = i_1[2]
        
        if (*(i_3 + 0xd) != 0)
            i_2 = i_1[1]
            
            if (*(i_2 + 0xd) == 0)
                while (i_1 == i_2[2])
                    i_1 = i_2
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0xd) != 0)
                        break
            
            i_1 = i_2
        else
            i_1 = i_3
            i_2 = *i_1
            
            while (*(i_2 + 0xd) == 0)
                i_1 = i_2
                i_2 = *i_1
