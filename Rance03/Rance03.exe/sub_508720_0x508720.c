// 函数: sub_508720
// 地址: 0x508720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c16d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *(arg1 + 4)
void* eax_3

if (edx != 0)
    int32_t* esi_1 = *(edx + 0xd8)
    
    if (esi_1 != 0)
        struct chipmunk::CRect::VTable* const var_34
        
        if (*(edx + 0x30) != 0)
            float xmm0_1 = *(edx + 0x40)
            xmm0_1 f- 0
            float xmm5_1 = 1f
            eax_3:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                xmm5_1 = 1f / xmm0_1
            
            int32_t eax_18 = *(edx + 0x78)
            float xmm3_4 = _mm_cvtepi32_ps(zx.o(*(edx + 0x74))) * 0.5f * xmm5_1 f* *(edx + 0x34)
            float xmm3_8 = _mm_cvtepi32_ps(zx.o(neg.d(eax_18))) * 0.5f * *(edx + 0x38) * xmm5_1
            float xmm0_6 = *(edx + 0x50)
            xmm0_6 f- 0
            int32_t eax_19
            eax_19:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
                | (xmm0_6 < 0f ? 1 : 0)
            float xmm3_10 = *(edx + 0x3c) * xmm5_1
            float xmm5_2 = 1f
            float var_d8 = xmm0_6
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                xmm5_2 = 1f / xmm0_6
            
            int32_t eax_20 = *(edx + 0x78)
            float xmm6_4 = _mm_cvtepi32_ps(zx.o(*(edx + 0x74))) * 0.5f * xmm5_2 f* *(edx + 0x44)
            float xmm6_8 = _mm_cvtepi32_ps(zx.o(neg.d(eax_20))) * 0.5f * *(edx + 0x48) * xmm5_2
            float xmm0_12 = *(edx + 0x4c) * xmm5_2
            float xmm5_3 = 1f
            float xmm0_13 = *(edx + 0x60)
            xmm0_13 f- 0
            int32_t eax_21
            eax_21:1.b = (xmm0_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2
                | (xmm0_13 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                xmm5_3 = 1f / xmm0_13
            
            int32_t eax_23 = neg.d(*(edx + 0x78))
            float xmm6_12 = _mm_cvtepi32_ps(zx.o(*(edx + 0x74))) * 0.5f * *(edx + 0x54) * xmm5_3
            float xmm7_4 = _mm_cvtepi32_ps(zx.o(eax_23)) * 0.5f * *(edx + 0x58) * xmm5_3
            float xmm0_19 = *(edx + 0x5c) * xmm5_3
            float xmm5_4 = 1f
            float var_e0 = xmm7_4
            float xmm0_20 = *(edx + 0x70)
            xmm0_20 f- 0
            eax_23:1.b = (xmm0_20 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_20, 0f) ? 1 : 0) << 2
                | (xmm0_20 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                xmm5_4 = 1f / xmm0_20
            
            int32_t eax_25 = neg.d(*(edx + 0x78))
            float xmm1_4 = _mm_cvtepi32_ps(zx.o(*(edx + 0x74))) * 0.5f * *(edx + 0x64) * xmm5_4
            float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_25)) * 0.5f * *(edx + 0x68) * xmm5_4
            float xmm0_29 = *(edx + 0x6c) * xmm5_4
            char var_122_1
            
            if (_mm_and_ps(xmm3_10 - xmm0_12, 0x7fffffff) f>= 9.99999975e-05f)
                var_122_1 = 1
            else if (_mm_and_ps(xmm3_10 - xmm0_19, 0x7fffffff) f>= 9.99999975e-05f)
                var_122_1 = 1
            else
                var_122_1 = 0
                
                if (not(_mm_and_ps(xmm3_10 - xmm0_29, 0x7fffffff) f< 9.99999975e-05f))
                    var_122_1 = 1
            
            if (int.d(xmm3_4) != int.d(xmm6_12) || int.d(xmm6_4) != int.d(xmm1_4)
                    || int.d(xmm3_8) != int.d(xmm6_8)
                    || int.d(xmm7_4) != int.d(fconvert.t(xmm4_2)))
                eax_3.b = 1
            else
                eax_3.b = 0
            
            float var_3c = xmm1_4
            float var_dc = xmm4_2
            float xmm1_6 = *(edx + 0x7c)
            float xmm1_7 = *(edx + 0x80)
            float xmm1_8 = *(edx + 0x84)
            float xmm1_9 = *(edx + 0x88)
            float xmm1_10 = *(edx + 0x8c)
            float xmm1_11 = *(edx + 0x90)
            float var_e4 = xmm6_8
            char var_121_1 = eax_3.b
            float var_64 = xmm3_4
            float var_ec = xmm3_8
            float var_38 = xmm6_4
            float var_40 = xmm6_12
            float var_e8 = xmm7_4
            float xmm1_23 = xmm3_8 - xmm6_8
            float xmm1_25 = xmm6_4 - xmm3_4
            float xmm1_28 = xmm6_8 * xmm3_4 - xmm3_8 * xmm6_4
            int64_t var_80 = xmm4_2 - xmm7_4
            float xmm4_10 = xmm1_4 - xmm6_4
            float xmm5_6 = (xmm6_8 - xmm4_2).d
            float xmm4_13 = xmm4_2 * xmm6_4 - xmm6_8 * xmm1_4
            float xmm1_33 = xmm1_25 * xmm7_4 + xmm1_23 * xmm6_12 + xmm1_28
            float xmm1_37 = xmm4_10 * xmm7_4 + xmm5_6 * xmm6_12 + xmm4_13
            
            if (not(9.99999975e-05f > xmm1_33) && not(9.99999975e-05f > xmm1_37))
                float var_88_1 = 0f
                float var_b4_1 = 0f
                float var_6c_1 = 0f
                float var_b8_1 = 0f
                float var_ac_1 = 0f
                float var_5c_1 = 0f
                float xmm0_59 = 1f / xmm1_33
                float xmm4_16 = (xmm6_8 - xmm7_4) * xmm0_59
                float xmm3_16 = xmm1_23 * xmm0_59
                float xmm4_18 = (xmm6_12 - xmm6_4) * xmm0_59
                float xmm3_18 = xmm1_25 * xmm0_59
                float xmm4_22 = (xmm7_4 - xmm3_8) * xmm0_59
                float xmm4_24 = (xmm3_4 - xmm6_12) * xmm0_59
                
                if (eax_3.b != 0)
                    float xmm0_60 = 1f / xmm1_37
                    int64_t xmm1_40 =
                        _mm_unpacklo_ps(var_80.d f* xmm0_60, (xmm6_12 - xmm1_4) * xmm0_60)
                    var_6c_1 = (xmm7_4 * xmm1_4 - xmm4_2 * xmm6_12) * xmm0_60
                    var_b4_1 = xmm1_40:4.d
                    var_88_1 = xmm1_40.d
                    var_80 = _mm_unpacklo_ps(xmm5_6 * xmm0_60, xmm4_10 * xmm0_60)
                    var_5c_1 = xmm4_13 * xmm0_60
                    var_ac_1 = var_80:4.d
                    var_b8_1 = var_80.d
                
                int32_t eax_30 = (*(*esi_1 + 0x10))(eax_2)
                void* edx_4 = *esi_1
                float var_b0 = eax_30 - 1
                float var_20 = eax_30 - 1
                int32_t eax_33 = (*(edx_4 + 0x14))() - 1
                float var_cc_2 = 0f
                int64_t var_50_1
                var_50_1.d = eax_33
                var_80.d = eax_33
                float var_60_1 = 0f
                float var_c0_2 = 0f
                float var_108_3 = 0f
                float var_fc_3 = 0f
                float var_11c_5 = 0f
                float var_54_1 = 0f
                float var_58_1 = 0f
                float var_68_1 = 0f
                
                if (var_122_1 != 0)
                    float xmm1_43 = 1f / xmm0_1
                    var_54_1 = xmm1_43
                    var_cc_2 = xmm1_43 * xmm1_6
                    float xmm2_7 = 1f / var_d8
                    float xmm0_67 = 1f / xmm0_13
                    var_108_3 = xmm1_43 * xmm1_7
                    var_60_1 = xmm2_7 * xmm1_8
                    var_68_1 = xmm0_67
                    var_58_1 = xmm2_7
                    var_c0_2 = xmm0_67 * xmm1_10
                    var_fc_3 = xmm2_7 * xmm1_9
                    var_11c_5 = xmm0_67 * xmm1_11
                
                int32_t* ecx_19 = &var_3c
                int32_t* esi_2 = &var_3c
                var_34 = &partsengine::CRect::`vftable'
                
                if (xmm6_12 <= xmm1_4)
                    ecx_19 = &var_40
                
                float* eax_34 = &var_38
                
                if (xmm3_4 <= xmm6_4)
                    eax_34 = &var_64
                
                int32_t* edx_6 = &var_38
                
                if (*eax_34 f> *ecx_19)
                    eax_34 = ecx_19
                
                float* ecx_20 = &var_dc
                int32_t eax_35 = int.d(fconvert.t(*eax_34))
                float xmm1_48 = var_e0
                
                if (xmm1_4 <= xmm6_12)
                    esi_2 = &var_40
                
                if (xmm6_4 <= xmm3_4)
                    edx_6 = &var_64
                
                if (xmm1_48 <= xmm4_2)
                    ecx_20 = &var_e8
                
                float* eax_36 = &var_e4
                
                if (xmm3_8 <= xmm6_8)
                    eax_36 = &var_ec
                
                if (*eax_36 > *ecx_20)
                    eax_36 = ecx_20
                
                float* ecx_21 = &var_dc
                int32_t edi_5 = int.d(fconvert.t(*eax_36))
                
                if (xmm4_2 <= xmm1_48)
                    ecx_21 = &var_e8
                
                float* eax_37 = &var_e4
                
                if (xmm6_8 <= xmm3_8)
                    eax_37 = &var_ec
                
                int32_t var_2c_3 = edi_5
                
                if (*esi_2 f> *edx_6)
                    edx_6 = esi_2
                
                int32_t var_30_2 = eax_35
                void* esi_4 = int.d(fconvert.t(*edx_6)) - eax_35
                void* var_28_2 = esi_4
                
                if (*ecx_21 > *eax_37)
                    eax_37 = ecx_21
                
                int32_t var_24_2 = int.d(fconvert.t(*eax_37)) - edi_5
                int16_t edx_8
                eax_3, edx_8 = sub_512730(&var_34, arg2, arg3)
                
                if (eax_3.b != 0)
                    edx_8.b = var_121_1
                    float var_10c_2 = 0f
                    float var_118_2 = 0f
                    
                    if (edx_8.b != 0)
                        var_10c_2 = var_88_1
                        var_118_2 = var_b8_1
                    
                    edx_8:1.b = var_122_1
                    float var_114_3 = 0f
                    float var_110_3 = 0f
                    
                    if (edx_8:1.b == 0)
                        var_114_3 = xmm4_22 * xmm1_8 + xmm4_16 * xmm1_6 + xmm3_16 * xmm1_10
                        var_110_3 = xmm4_22 * xmm1_9 + xmm4_16 * xmm1_7 + xmm3_16 * xmm1_11
                    
                    var_ec = 0f
                    var_e8 = 0f
                    
                    if (edx_8.b != 0)
                        var_ec = var_b4_1
                        var_e8 = var_ac_1
                    
                    eax_3 = edi_5
                    var_e4 = 0f
                    var_dc = 0f
                    float xmm1_58 = _mm_cvtepi32_ps(zx.o(eax_3))
                    var_e0 = xmm1_58 * xmm4_18 + (xmm7_4 * xmm6_4 - xmm6_8 * xmm6_12) * xmm0_59
                    var_d8 = xmm1_58 * xmm3_18 + xmm1_28 * xmm0_59
                    
                    if (edx_8.b != 0)
                        var_e4 = xmm1_58 * var_b4_1 + var_6c_1
                        var_dc = xmm1_58 * var_ac_1 + var_5c_1
                    
                    float xmm0_99 = _mm_cvtepi32_ps(zx.o(eax_35))
                    float xmm2_11 = (zx.o(0)).d
                    float xmm1_61 = (zx.o(0)).d
                    
                    if (edx_8.b != 0)
                        xmm1_61 = xmm0_99 * var_88_1
                        xmm2_11 = xmm0_99 * var_b8_1
                    
                    float xmm7_9 = xmm0_99 * xmm4_16 + var_e0
                    void* edi_8 = arg3 - eax_3
                    float xmm0_101 = _mm_cvtepi32_ps(zx.o(edi_8))
                    float xmm4_31 = xmm0_101 * xmm4_24 + xmm0_99 * xmm4_22 + xmm1_58 * xmm4_24
                        + (xmm3_8 * xmm6_12 - xmm7_4 * xmm3_4) * xmm0_59
                    float xmm6_18 = xmm0_101 * xmm4_18 + xmm7_9
                    float xmm7_10 = (zx.o(0)).d
                    float xmm3_35 = xmm0_101 * xmm3_18 + xmm0_99 * xmm3_16 + var_d8
                    float var_128_3 = 0f
                    
                    if (edx_8.b != 0)
                        float xmm2_13 = xmm2_11 + var_dc
                        float xmm1_63 = xmm1_61 + var_e4
                        float xmm0_105 = _mm_cvtepi32_ps(zx.o(edi_8))
                        xmm7_10 = xmm0_105 * var_ec + xmm1_63
                        var_128_3 = xmm0_105 * var_e8 + xmm2_13
                    
                    float xmm1_67 = (zx.o(0)).d
                    float xmm2_14 = (zx.o(0)).d
                    
                    if (edx_8:1.b == 0)
                        xmm1_67 = xmm4_31 * xmm1_8 + xmm6_18 * xmm1_6 + xmm3_35 * xmm1_10
                        xmm2_14 = xmm4_31 * xmm1_9 + xmm6_18 * xmm1_7 + xmm3_35 * xmm1_11
                    
                    int32_t ecx_23 = 0
                    
                    if (esi_4 s> 0)
                        while (true)
                            if (edx_8.b == 0 || (not(0 f> xmm4_31) && not(0 f> xmm3_35)
                                    && not(0 f> xmm7_10) && 0 f<= var_128_3))
                                if (eax_35 + ecx_23 == arg2)
                                    break
                                
                                xmm6_18 = xmm6_18 + xmm4_16
                                xmm4_31 = xmm4_31 + xmm4_22
                                xmm3_35 = xmm3_35 + xmm3_16
                                
                                if (edx_8.b != 0)
                                    xmm7_10 = xmm7_10 + var_10c_2
                                    var_128_3 = var_128_3 + var_118_2
                            else
                                xmm6_18 = xmm6_18 + xmm4_16
                                xmm4_31 = xmm4_31 + xmm4_22
                                xmm3_35 = xmm3_35 + xmm3_16
                                xmm7_10 = xmm7_10 + var_10c_2
                                var_128_3 = var_128_3 + var_118_2
                            
                            if (edx_8:1.b == 0)
                                xmm2_14 = xmm2_14 + var_110_3
                                xmm1_67 = xmm1_67 + var_114_3
                            
                            ecx_23 += 1
                            
                            if (ecx_23 s>= esi_4)
                                goto label_5094a9
                        
                        if (esi_4 s> ecx_23)
                            if (arg4 == 0)
                                goto label_508897
                            
                            if (edx_8:1.b != 0)
                                float xmm5_9 = 1f / (xmm4_31 * var_58_1 + xmm6_18 * var_54_1
                                    + xmm3_35 * var_68_1)
                                xmm1_67 = (xmm4_31 * var_60_1 + xmm6_18 * var_cc_2
                                    + xmm3_35 * var_c0_2) * xmm5_9
                                xmm2_14 = (xmm4_31 * var_fc_3 + xmm6_18 * var_108_3
                                    + xmm3_35 * var_11c_5) * xmm5_9
                            
                            int32_t eax_41 = int.d(xmm1_67)
                            int32_t var_d0_3 = 0
                            float* ecx_26 = &var_e0
                            int32_t var_d4_3 = 0
                            float* edi_10 = &var_b0
                            bool cond:10 = eax_41 s>= var_b0
                            var_e0 = eax_41
                            float eax_42 = int.d(xmm2_14)
                            
                            if (cond:10)
                                ecx_26 = &var_20
                            
                            var_d8 = ecx_26
                            var_b0 = eax_42
                            
                            if (eax_42 s>= var_50_1.d)
                                edi_10 = &var_80
                            
                            int32_t eax_45 = (*(*esi_1 + 0x1c))()
                            int32_t eax_47 = (*(*esi_1 + 8))(0, 0)
                            float* ecx_29 = &var_dc
                            
                            if (*edi_10 s> 0)
                                ecx_29 = edi_10
                            
                            float* ecx_30 = &var_d8
                            float eax_48 = var_e0
                            
                            if (*eax_48 s> 0)
                                ecx_30 = eax_48
                            
                            int32_t eax_49
                            eax_49.b = *(*ecx_29 i* eax_45 + eax_47 + (*ecx_30 << 2) + 3) != 0
                            fsbase->NtTib.ExceptionList = xmm0_1
                            return eax_49
        else
            int32_t eax_4 = int.d(fconvert.t(*(edx + 0xc)))
            int32_t edi_1 = int.d(fconvert.t(*(edx + 0x10)))
            
            if (arg2 s>= eax_4 && arg3 s>= edi_1 && arg2 s< (*(*esi_1 + 0x10))(eax_2) + eax_4
                    && arg3 s< edi_1 + (*(*esi_1 + 0x14))())
                var_34 = &chipmunk::CRect::`vftable'
                eax_3 = *(arg1 + 4) + 0xc4
                int32_t ecx_3 = *(eax_3 + 8)
                int32_t edi_2 = *(eax_3 + 4)
                int32_t var_2c_1 = ecx_3
                int32_t ecx_4 = *(eax_3 + 0xc)
                int32_t var_28_1 = ecx_4
                int32_t ecx_5 = *(eax_3 + 0x10)
                int32_t var_30_1 = edi_2
                int32_t var_24_1 = ecx_5
                int32_t var_c_1 = 0
                
                if (ecx_4 s<= 0 && ecx_5 s<= 0)
                label_50885d:
                    
                    if (arg4 == 0)
                    label_508897:
                        eax_3.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_3
                    
                    if ((*(*esi_1 + 0x28))().b == 0)
                        goto label_508897
                    
                    if (*((*(*esi_1 + 8))(edi_2 - eax_4 + arg2, ecx_3 - edi_1 + arg3) + 3) != 0)
                        goto label_508897
                else if (arg2 s< eax_4 + ecx_4 && arg3 s< edi_1 + ecx_5)
                    goto label_50885d

label_5094a9:
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
