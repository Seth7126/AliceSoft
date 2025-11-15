// 函数: sub_57b1a0
// 地址: 0x57b1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_24c = arg2
int32_t result = arg1[3]

if (result s>= 0)
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x4da637d, *(arg4 + 8) - *(arg4 + 4))
    int32_t ecx_2 = arg1[3]
    int32_t edx_2 = edx_1 s>> 4
    result = (edx_2 u>> 0x1f) + edx_2
    
    if (ecx_2 s< result)
        int32_t eax_3 = ecx_2 * 0x34c
        result = eax_3 + *(arg4 + 4)
        
        if (eax_3 != neg.d(*(arg4 + 4)))
            int32_t ecx_3 = arg1[5]
            
            if (ecx_3 != 0xffffffff)
                int32_t edx_3 = arg1[6]
                
                if (edx_3 != 0xffffffff)
                    float xmm3_1 = _mm_cvtepi32_ps(zx.o(ecx_3))
                    
                    if (not(xmm3_1 f> arg2))
                        float xmm2_2 = _mm_cvtepi32_ps(zx.o(edx_3))
                        
                        if (not(arg2 f>= xmm2_2))
                            int128_t xmm1 = arg2 f+ arg1[4]
                            var_24c = xmm1
                            
                            if (not(xmm1 f< xmm2_2))
                                var_24c = xmm1 f- xmm2_2 + xmm3_1
            
            int64_t var_1c4
            int64_t* eax_4 = sub_579230(result, &var_1c4)
            float eax_5 = eax_4[1].d
            void* eax_6 = *(result + 0x28c)
            int64_t var_1d0 = *eax_4
            int128_t var_120
            
            if (*(eax_6 + 0x14) != 0)
                sub_579560(&var_120, *(result + 0x20))
            else
                var_120 = data_79a970[0x10][0].o
            
            char eax_7 = sub_59f500(arg4, arg1[3], sub_579550)
            void* esi_3 = *arg3
            EnterCriticalSection(*(esi_3 + 0x70) + 4)
            int32_t eax_10 = *(esi_3 + 0x68)
            CRITICAL_SECTION* lpCriticalSection = *(esi_3 + 0x70) + 4
            var_1c4 = *(esi_3 + 0x60)
            LeaveCriticalSection(lpCriticalSection)
            int32_t var_268_3 = eax_10
            int32_t var_26c_1 = var_1c4:4.d
            int32_t var_270_1 = var_1c4.d
            void var_d0
            sub_561770(&var_d0)
            int32_t var_278_1 = *(esi_3 + 0xc8)
            int32_t var_28c_1 = *(esi_3 + 0xc4)
            float var_110
            sub_5868a0(&var_110, *(esi_3 + 0xc0))
            float xmm3_2 = var_110
            float var_160 = *(esi_3 + 0x1c) * xmm3_2
            float var_fc
            float var_15c_1 = *(esi_3 + 0x20) * var_fc
            float var_e8
            float var_158_1 = *(esi_3 + 0x24) * var_e8
            int32_t var_154_1 = *(esi_3 + 0x28)
            float var_150_1 = *(esi_3 + 0x2c) * xmm3_2
            float var_14c_1 = *(esi_3 + 0x30) * var_fc
            float var_148_1 = *(esi_3 + 0x34) * var_e8
            int32_t var_144_1 = *(esi_3 + 0x38)
            float var_140_1 = *(esi_3 + 0x3c) * xmm3_2
            float var_13c_1 = *(esi_3 + 0x40) * var_fc
            float var_138_1 = *(esi_3 + 0x44) * var_e8
            int32_t var_134_1 = *(esi_3 + 0x48)
            float var_130_1 = *(esi_3 + 0x4c) * xmm3_2
            float var_12c_1 = *(esi_3 + 0x50) * var_fc
            float var_128_1 = *(esi_3 + 0x54) * var_e8
            int32_t var_124_1 = *(esi_3 + 0x58)
            float var_90[0x4][0x4]
            float (* ecx_10)[0x4] = &var_90
            float (* eax_13)[0x4] = sub_6cb020(esi_3 + 0x80, &var_160, ecx_10, esi_3 + 0x80)
            float xmm4_1 = (*eax_13)[3]
            float var_1d8_1 = xmm4_1
            float var_a0
            float xmm0_39 = xmm4_1 * var_a0 + *eax_13
            float var_240_1 = xmm0_39
            float var_1b0 = xmm0_39
            float var_9c
            float xmm0_42 = xmm4_1 * var_9c + (*eax_13)[1]
            float var_208_1 = xmm0_42
            float var_98
            float xmm3_5 = xmm4_1 * var_98 + (*eax_13)[2]
            float var_1f8_1 = xmm3_5
            float xmm3_6 = (*eax_13)[7]
            float var_1dc_1 = xmm3_6
            float xmm4_4 = xmm3_6 * var_a0 + eax_13[1][0]
            float var_244_1 = xmm4_4
            float var_1a0_1 = xmm4_4
            float xmm4_7 = xmm3_6 * var_9c + (*eax_13)[5]
            float var_20c_1 = xmm4_7
            float xmm4_10 = xmm3_6 * var_98 + (*eax_13)[6]
            float var_1fc_1 = xmm4_10
            float xmm4_11 = (*eax_13)[0xb]
            float var_1d4_1 = xmm4_11
            float xmm3_9 = xmm4_11 * var_a0 + eax_13[2][0]
            float var_230_1 = xmm3_9
            float var_190_1 = xmm3_9
            float xmm3_12 = xmm4_11 * var_9c + (*eax_13)[9]
            float var_204_1 = xmm3_12
            float xmm4_12 = (*eax_13)[0xf]
            float var_250_1 = xmm4_12
            float xmm3_15 = xmm4_11 * var_98 + (*eax_13)[0xa]
            float var_1f0_1 = xmm3_15
            float xmm3_18 = xmm4_12 * var_a0 + eax_13[3][0]
            float xmm2_9 = xmm4_12 * var_9c + (*eax_13)[0xd]
            float xmm1_7 = xmm4_12 * var_98 + (*eax_13)[0xe]
            float var_220_1 = xmm3_18
            float var_180_1 = xmm3_18
            float var_200_1 = xmm2_9
            float var_1e8_1 = xmm1_7
            
            if (*(result + 4) != 3 && *(result + 0x26c) != 0)
                float (* var_264_6)[0x4][0x4] = &var_90
                ecx_10 = sub_5845f0(*arg3)
                
                if (ecx_10 != 0)
                    int32_t eax_16
                    
                    if ((*ecx_10)[0x69] != 0)
                        float (* eax_15)[0x4]
                        eax_15.b = (*ecx_10)[0x6a].b
                        
                        if (eax_15.b == 0)
                            eax_16 = sub_58ffc0((*ecx_10)[0x69], result + 0x25c)
                        else
                            eax_16 = eax_15 | 0xffffffff
                    else
                        eax_16 = 0xffffffff
                    
                    float var_50[0x4][0x4]
                    float (* eax_18)[0x4]
                    eax_18, ecx_10 = sub_583040(ecx_10, &var_50, eax_16)
                    var_1b0.o = *eax_18
                    var_1a0_1.o = eax_18[1]
                    var_190_1.o = eax_18[2]
                    var_180_1.o = eax_18[3]
                    var_250_1 = xmm4_12
                    var_1e8_1 = xmm1_7
                    var_200_1 = xmm2_9
                    var_220_1 = var_180_1
                    var_1d4_1 = xmm4_11
                    var_1f0_1 = xmm3_15
                    var_204_1 = xmm3_12
                    var_230_1 = var_190_1
                    var_1d8_1 = xmm4_1
                    var_1fc_1 = xmm4_10
                    var_1f8_1 = xmm3_5
                    var_20c_1 = xmm4_7
                    var_208_1 = xmm0_42
                    var_1dc_1 = xmm3_6
                    var_244_1 = var_1a0_1
                    var_240_1 = var_1b0
            
            float (* var_264_9)[0x4] = ecx_10
            sub_57ba60(arg3, result, &var_1d0, var_24c)
            float xmm2_10 = var_1d0:4.d
            float xmm1_8 = var_1d0.d
            *(arg1 + 0x28) = var_1d0
            arg1[0xc] = eax_5
            float xmm4_20 = var_244_1 * xmm2_10 + var_240_1 * xmm1_8 + var_230_1 * eax_5 + var_220_1
            var_1c4.d = xmm4_20
            float xmm5_5 = var_20c_1 * xmm2_10 + var_208_1 * xmm1_8 + var_204_1 * eax_5 + var_200_1
            float xmm6_5 = var_1fc_1 * xmm2_10 + var_1f8_1 * xmm1_8 + var_1f0_1 * eax_5 + var_1e8_1
            var_1c4:4.d = xmm5_5
            float var_1bc_2 = xmm6_5
            float xmm3_34 = var_1dc_1 * xmm2_10 + var_1d8_1 * xmm1_8 + var_1d4_1 * eax_5 + var_250_1
            xmm3_34 - 1f
            float eax_19
            eax_19:1.b = (xmm3_34 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_34, 1f) ? 1 : 0) << 2
                | (xmm3_34 < 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm3_34 - 0f
                eax_19:1.b = (xmm3_34 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm3_34, 0f) ? 1 : 0) << 2 | (xmm3_34 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    float xmm1_11 = 1f / xmm3_34
                    var_1c4.d = xmm1_11 * xmm4_20
                    var_1c4:4.d = xmm1_11 * xmm5_5
                    var_1bc_2 = xmm1_11 * xmm6_5
            
            *(arg1 + 0x34) = var_1c4
            arg1[0xf] = var_1bc_2
            void** esi_5 = *arg1
            int32_t eax_21 = arg1[1]
            int32_t var_250_2 = 0
            uint32_t edi_4 = (eax_21 - esi_5 + 3) u>> 2
            
            if (esi_5 u> eax_21)
                edi_4 = 0
            
            float ecx_13 = arg5
            
            if (edi_4 != 0)
                int32_t eax_23
                
                do
                    sub_5ae270(*esi_5, var_24c, arg3, arg4, &var_1d0, ecx_13, &var_120, &var_1b0, 
                        eax_7.d)
                    esi_5 = &esi_5[1]
                    ecx_13 = arg5
                    eax_23 = var_250_2 + 1
                    var_250_2 = eax_23
                while (eax_23 != edi_4)
            
            int32_t result_1 = 0
            int32_t* esi_6 = arg1[7]
            result = arg1[8]
            uint32_t edi_8 = (result - esi_6 + 3) u>> 2
            
            if (esi_6 u> result)
                edi_8 = 0
            
            if (edi_8 != 0)
                do
                    *esi_6
                    sub_57b1a0(arg3, arg4, ecx_13)
                    esi_6 = &esi_6[1]
                    ecx_13 = arg5
                    result = result_1 + 1
                    result_1 = result
                while (result != edi_8)

return result
