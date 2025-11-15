// 函数: sub_5505a0
// 地址: 0x5505a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_c4
int32_t var_c = __security_cookie ^ &var_c4
int32_t edi
int32_t var_d0 = edi
float var_b8 = arg1
void* edi_1 = *arg1
int32_t* eax_2

if (edi_1 != 0)
    int32_t* ebx_1 = *(edi_1 + 0x118)
    float var_b4 = ebx_1
    
    if (ebx_1 != 0)
        int32_t xmm1_1 = *(edi_1 + 0x78)
        float xmm5_1 = *(edi_1 + 0x88)
        float xmm4_1 = *(edi_1 + 0x8c)
        int32_t xmm3_1 = *(edi_1 + 0x98)
        float xmm7_1 = *(edi_1 + 0x9c)
        float xmm6_1 = *(edi_1 + 0xac)
        var_c4 = *(edi_1 + 0x7c)
        int32_t xmm0_2 = *(edi_1 + 0xa8)
        int32_t* var_d4_1 = arg1
        int32_t var_1c = xmm1_1
        float var_18_1 = xmm5_1
        int32_t var_14_1 = xmm3_1
        int32_t var_10_1 = xmm0_2
        float* var_90
        sub_551310(&var_c, &var_1c, &var_90, &var_c)
        float* eax_4 = var_90
        float var_2c = *(edi_1 + 0x7c)
        int32_t eax_5 = int.d(fconvert.t(*eax_4))
        float var_28_1 = xmm4_1
        float var_24_1 = xmm7_1
        float var_20_1 = xmm6_1
        sub_551310(&var_1c, &var_2c, &var_90, &var_1c)
        int32_t eax_8 = int.d(fconvert.t(*var_90))
        float* var_8c
        int32_t edx_4 = int.d(fconvert.t(*var_8c)) - eax_8
        eax_2 = int.d(fconvert.t(*var_8c)) - eax_5
        int32_t* var_48_1 = eax_2
        
        if (arg2 s>= eax_5 && arg2 s< eax_2 + eax_5 && arg3 s>= eax_8 && arg3 s< edx_4 + eax_8)
            float ecx_4 = var_b8
            eax_2:1.b = arg4
            eax_2.b = *(ecx_4 i+ 0x15)
            
            if (eax_2.b == 0)
                if (eax_2:1.b == 0)
                label_550739:
                    eax_2.b = 1
                    @__security_check_cookie@4(var_c ^ &var_c4)
                    return eax_2
                
                if (eax_2.b == 0)
                    int32_t eax_11 =
                        sub_551180(ecx_4, arg2, eax_5, var_48_1, arg3, eax_8, edx_4, &var_b4)
                    @__security_check_cookie@4(var_c ^ &var_c4)
                    return eax_11
            
            if (eax_2:1.b == 0)
                float var_d4_3 = ecx_4
                var_90 = *(edi_1 + 0xa8)
                var_1c = *(edi_1 + 0x78)
                int32_t xmm0_6 = *(edi_1 + 0x7c)
                float var_8c_1 = xmm6_1
                int32_t var_88_1 = 0
                int32_t var_38 = xmm3_1
                float var_34_1 = xmm7_1
                int32_t var_30_1 = 0
                var_2c = xmm5_1
                float var_28_2 = xmm4_1
                int32_t var_24_2 = 0
                int32_t var_18_2 = xmm0_6
                var_14_1 = 0
                
                if (sub_527e50(&var_1c, arg3, arg2, &var_1c, &var_2c, &var_38, &var_90).b != 0)
                    goto label_550739
            
            float xmm1_2 = *(edi_1 + 0x80)
            
            if (sub_48b210(xmm1_2 f- *(edi_1 + 0x90)) f>= 9.99999975e-05f)
                edx_4:1.b = 1
            else if (sub_48b210(xmm1_2 f- *(edi_1 + 0xa0)) f>= 9.99999975e-05f)
                edx_4:1.b = 1
            else if (sub_48b210(xmm1_2 f- *(edi_1 + 0xb0)) f>= 9.99999975e-05f)
                edx_4:1.b = 1
            else
                edx_4:1.b = 0
            
            float xmm1_4 = *(edi_1 + 0x98)
            float xmm2_1 = *(edi_1 + 0x78)
            float xmm0_15
            float xmm5_2
            
            if (int.d(xmm2_1) != int.d(xmm1_4))
                xmm0_15 = xmm5_1
                xmm5_2 = var_c4
                edx_4.b = 1
            else
                xmm0_15 = *(edi_1 + 0x88)
                
                if (int.d(xmm0_15) != int.d(fconvert.t(*(edi_1 + 0xa8))))
                    xmm5_2 = var_c4
                    edx_4.b = 1
                else
                    xmm5_2 = *(edi_1 + 0x7c)
                    
                    if (int.d(xmm5_2) != int.d(xmm4_1) || int.d(xmm7_1) != int.d(xmm6_1))
                        edx_4.b = 1
                    else
                        edx_4.b = 0
            
            float xmm0_22 = *(edi_1 + 0x8c)
            float xmm2_3 = xmm5_2 - xmm0_22
            float xmm6_11 = *(edi_1 + 0x88) f- *(edi_1 + 0x78)
            float xmm6_14 = xmm0_22 f* *(edi_1 + 0x78) - *(edi_1 + 0x88) * xmm5_2
            float xmm6_15 = *(edi_1 + 0xac)
            var_b4 = xmm6_15 - xmm7_1
            float xmm0_27 = *(edi_1 + 0xa8)
            float xmm0_30 = *(edi_1 + 0x8c)
            float xmm5_9 = xmm0_30 - xmm6_15
            float xmm5_11 = *(edi_1 + 0xa8) f- *(edi_1 + 0x88)
            float xmm6_17 = xmm6_15 f* *(edi_1 + 0x88) - *(edi_1 + 0xa8) * xmm0_30
            var_b8 = xmm6_11 * xmm7_1 + xmm2_3 * xmm1_4 + xmm6_14
            float xmm1_5 = var_b8
            var_c4 = xmm5_11 * xmm7_1 + xmm5_9 * xmm1_4 + xmm6_17
            
            if (not(9.99999975e-05f > xmm1_5) && not(9.99999975e-05f > var_c4))
                float xmm0_35 = 1f / xmm1_5
                float xmm1_7 = (xmm1_4 - xmm0_15) * xmm0_35
                float xmm3_4 = (xmm4_1 - xmm7_1) * xmm0_35
                float xmm4_4 = (xmm7_1 - xmm5_2) * xmm0_35
                float xmm2_4 = xmm2_3 * xmm0_35
                float xmm1_11 = (xmm2_1 - xmm1_4) * xmm0_35
                float xmm1_15 = xmm6_11 * xmm0_35
                float var_54_1 = 0f
                float var_80_1 = 0f
                float xmm6_18 = (zx.o(0)).d
                int32_t xmm1_18 = (zx.o(0)).d
                float var_84_1 = 0f
                float xmm7_2 = (zx.o(0)).d
                float var_70_1 = 0f
                
                if (edx_4.b != 0)
                    float xmm0_36 = 1f / var_c4
                    var_84_1 = var_b4 * xmm0_36
                    var_54_1 = (xmm0_27 * xmm7_1 - xmm6_15 * xmm1_4) * xmm0_36
                    xmm6_18 = (xmm1_4 - xmm0_27) * xmm0_36
                    xmm7_2 = xmm5_11 * xmm0_36
                    var_70_1 = xmm6_17 * xmm0_36
                    xmm1_18 = var_84_1
                    var_80_1 = xmm5_9 * xmm0_36
                
                float xmm5_31 = var_80_1
                float var_6c_2 = 0f
                float var_58_1 = 0f
                float var_9c_3 = 0f
                var_b4 = 0f
                float var_98_3 = 0f
                var_b8 = 0f
                float var_60_1 = 0f
                var_c4 = 0f
                float var_5c_1 = 0f
                
                if (edx_4:1.b != 0)
                    float xmm1_23 = 1f f/ *(edi_1 + 0x84)
                    var_60_1 = xmm1_23
                    var_6c_2 = xmm1_23 f* *(edi_1 + 0xc4)
                    float xmm5_28 = 1f f/ *(edi_1 + 0x94)
                    var_c4 = xmm5_28
                    var_58_1 = xmm5_28 f* *(edi_1 + 0xcc)
                    float xmm5_30 = 1f f/ *(edi_1 + 0xa4)
                    var_5c_1 = xmm5_30
                    var_9c_3 = xmm5_30 f* *(edi_1 + 0xd4)
                    xmm1_18 = var_84_1
                    var_b4 = xmm1_23 f* *(edi_1 + 0xc8)
                    var_98_3 = var_c4 f* *(edi_1 + 0xd0)
                    xmm5_31 = var_80_1
                    var_b8 = xmm5_30 f* *(edi_1 + 0xd8)
                
                int32_t var_b0_3 = 0
                float var_68_1 = 0f
                
                if (edx_4.b != 0)
                    var_b0_3 = xmm1_18
                    var_68_1 = xmm5_31
                
                float var_a4_2 = 0f
                float var_a0_2 = 0f
                
                if (edx_4:1.b == 0)
                    var_a4_2 = xmm4_4 f* *(edi_1 + 0xcc) + xmm3_4 f* *(edi_1 + 0xc4)
                        + xmm2_4 f* *(edi_1 + 0xd4)
                    var_a0_2 = xmm4_4 f* *(edi_1 + 0xd0) + xmm3_4 f* *(edi_1 + 0xc8)
                        + xmm2_4 f* *(edi_1 + 0xd8)
                
                float var_50_1 = 0f
                float var_4c_1 = 0f
                
                if (edx_4.b != 0)
                    var_50_1 = xmm6_18
                    var_4c_1 = xmm7_2
                
                eax_2 = eax_8
                float xmm1_33 = _mm_cvtepi32_ps(zx.o(eax_2))
                float var_ac_3 = 0f
                float var_a8_3 = 0f
                var_90 = xmm1_33 * xmm1_11 + (xmm1_4 * xmm5_2 - xmm7_1 * xmm2_1) * xmm0_35
                
                if (edx_4.b != 0)
                    var_a8_3 = xmm1_33 * xmm6_18 + var_54_1
                    var_ac_3 = xmm1_33 * xmm7_2 + var_70_1
                
                float xmm5_48 = _mm_cvtepi32_ps(zx.o(eax_5))
                float xmm2_5 = (zx.o(0)).d
                float xmm1_36 = (zx.o(0)).d
                
                if (edx_4.b != 0)
                    xmm1_36 = xmm5_48 * var_84_1
                    xmm2_5 = xmm5_48 * var_80_1
                
                float xmm7_6 = xmm5_48 * xmm4_4 f+ var_90
                void* esi_4 = arg3 i- eax_2
                float xmm3_6 = _mm_cvtepi32_ps(zx.o(esi_4))
                float xmm5_51 = xmm3_6 * xmm1_7 + xmm5_48 * xmm3_4 + xmm1_33 * xmm1_7
                    + (xmm7_1 * xmm0_15 - xmm1_4 * xmm4_1) * xmm0_35
                float xmm4_7 = xmm3_6 * xmm1_11 + xmm7_6
                float xmm7_7 = (zx.o(0)).d
                float xmm3_8 =
                    xmm3_6 * xmm1_15 + xmm5_48 * xmm2_4 + xmm1_33 * xmm1_15 + xmm6_14 * xmm0_35
                float xmm6_25 = (zx.o(0)).d
                
                if (edx_4.b != 0)
                    float xmm7_9 = _mm_cvtepi32_ps(zx.o(esi_4))
                    xmm7_7 = xmm7_9 * var_4c_1 + xmm2_5 + var_ac_3
                    xmm6_25 = xmm7_9 * var_50_1 + xmm1_36 + var_a8_3
                
                float var_bc_3 = 0f
                float xmm2_8 = (zx.o(0)).d
                float var_c0_4 = 0f
                float xmm1_39 = (zx.o(0)).d
                
                if (edx_4:1.b == 0)
                    xmm1_39 = xmm4_7 f* *(edi_1 + 0xcc) + xmm5_51 f* *(edi_1 + 0xc4)
                        + xmm3_8 f* *(edi_1 + 0xd4)
                    var_bc_3 = xmm1_39
                    xmm2_8 = xmm4_7 f* *(edi_1 + 0xd0) + xmm5_51 f* *(edi_1 + 0xc8)
                        + xmm3_8 f* *(edi_1 + 0xd8)
                    var_c0_4 = xmm2_8
                
                int32_t ecx_14 = 0
                
                if (var_48_1 s> 0)
                    while (true)
                        if (edx_4.b == 0 || (not(0 f> xmm4_7) && not(0 f> xmm3_8)
                                && not(0 f> xmm6_25) && 0 f<= xmm7_7))
                            if (eax_5 + ecx_14 == arg2)
                                break
                            
                            xmm5_51 = xmm5_51 + xmm3_4
                            xmm4_7 = xmm4_7 + xmm4_4
                            xmm3_8 = xmm3_8 + xmm2_4
                            
                            if (edx_4.b != 0)
                                xmm7_7 = xmm7_7 + var_68_1
                                xmm6_25 = xmm6_25 f+ var_b0_3
                        else
                            xmm5_51 = xmm5_51 + xmm3_4
                            xmm4_7 = xmm4_7 + xmm4_4
                            xmm3_8 = xmm3_8 + xmm2_4
                            xmm7_7 = xmm7_7 + var_68_1
                            xmm6_25 = xmm6_25 f+ var_b0_3
                        
                        if (edx_4:1.b == 0)
                            xmm2_8 = xmm2_8 + var_a0_2
                            xmm1_39 = xmm1_39 + var_a4_2
                            var_c0_4 = xmm2_8
                            var_bc_3 = xmm1_39
                        
                        ecx_14 += 1
                        
                        if (ecx_14 s>= var_48_1)
                            goto label_550fba
                    
                    if (var_48_1 s> ecx_14)
                        if (arg4 == 0)
                            goto label_550739
                        
                        if (edx_4:1.b != 0)
                            float xmm6_28 =
                                1f / (xmm4_7 * var_c4 + xmm5_51 * var_60_1 + xmm3_8 * var_5c_1)
                            xmm1_39 = (xmm4_7 * var_58_1 + xmm5_51 * var_6c_2 + xmm3_8 * var_9c_3)
                                * xmm6_28
                            xmm2_8 =
                                (xmm4_7 * var_98_3 + xmm5_51 * var_b4 + xmm3_8 * var_b8) * xmm6_28
                            var_bc_3 = xmm1_39
                            var_c0_4 = xmm2_8
                        
                        int32_t edi_5
                        
                        if (*(edi_1 + 0x110) != 1)
                            edi_5 = int.d(xmm1_39)
                            var_b8 = edi_5
                            var_c4 = int.d(xmm2_8)
                        else
                            int32_t eax_14 = *ebx_1
                            var_90 = *(edi_1 + 0x104)
                            var_b4 = *(edi_1 + 0x108)
                            int32_t eax_15 = (*(eax_14 + 0x10))()
                            int32_t eax_18 = *ebx_1
                            edi_5 = mods.dp.d(sx.q(int.d(var_90 * var_bc_3)), eax_15)
                            var_b8 = edi_5
                            int32_t eax_19 = (*(eax_18 + 0x14))()
                            var_c4 = mods.dp.d(sx.q(int.d(var_b4 * var_c0_4)), eax_19)
                        
                        void* eax_25 = (*(*ebx_1 + 0x10))()
                        int32_t edx_9 = *ebx_1
                        var_90 = eax_25 - 1
                        float eax_27 = (*(edx_9 + 0x14))() - 1
                        var_b4 = eax_27
                        float* ebx_2 = &var_b8
                        
                        if (edi_5 s>= eax_25 - 1)
                            ebx_2 = &var_90
                        
                        float* esi_7 = &var_c4
                        
                        if (var_c4 s>= eax_27)
                            esi_7 = &var_b4
                        
                        int32_t eax_29 = (*(*ebx_1 + 0x1c))()
                        float esi_8 = *esi_7
                        float ebx_3 = *ebx_2
                        int32_t eax_31 = (*(*ebx_1 + 8))(0, 0)
                        float ecx_25 = 0f
                        
                        if (esi_8 s> 0)
                            ecx_25 = esi_8
                        
                        float ecx_27 = 0f
                        
                        if (ebx_3 s> 0)
                            ecx_27 = ebx_3
                        
                        int32_t eax_32
                        eax_32.b = *(eax_31 + ecx_25 i* eax_29 + (ecx_27 << 2) + 3) != 0
                        int32_t __saved_esi
                        @__security_check_cookie@4(var_14_1 ^ &__saved_esi)
                        return eax_32

label_550fba:
eax_2.b = 0
@__security_check_cookie@4(var_c ^ &var_c4)
return eax_2
