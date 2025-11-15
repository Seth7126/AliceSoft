// 函数: sub_546070
// 地址: 0x546070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_12c
int32_t eax_1 = __security_cookie ^ &var_12c
struct common::CRect::VTable* var_88
sub_545fb0(&var_88, *(arg1 + 0x2c), *(arg1 + 0x30), arg1 + 0x34)
int32_t var_74
int32_t var_70
struct common::CRect::VTable** eax_3

if (var_74 s> 0 && var_70 s> 0)
    int32_t eax_4 = sub_555b20(*(arg4 + 0x7c), var_74)
    int32_t ecx_1 = *(arg4 + 0x7c)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_4))
    int32_t eax_5 = sub_555b60(ecx_1, var_70)
    void* esi_1 = *(arg4 + 0xbc)
    void* edi_2 = data_7fcba0
    void* edx_2 = edi_2
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_5))
    var_12c = xmm0_2
    
    if (esi_1 != 0)
        edx_2 = *(esi_1 + 8)
    
    float var_50
    float* eax_6 = sub_561190(eax_5, edx_2, &var_50, xmm1_2, xmm0_2, arg4 + 8)
    void* edx_3 = edi_2
    
    if (esi_1 != 0)
        edx_3 = *(esi_1 + 8)
    
    float xmm3_2 = var_12c
    float xmm0_4 = xmm1_2 + _mm_cvtepi32_ps(zx.o(var_74))
    float var_120 = xmm0_4
    float var_40
    float* eax_7 = sub_561190(eax_6, edx_3, &var_40, xmm0_4, xmm3_2, arg4 + 8)
    void* edx_4 = edi_2
    
    if (esi_1 != 0)
        edx_4 = *(esi_1 + 8)
    
    float xmm0_6 = var_12c + _mm_cvtepi32_ps(zx.o(var_70))
    var_12c = xmm0_6
    float var_30
    float* eax_8 = sub_561190(eax_7, edx_4, &var_30, xmm1_2, xmm0_6, arg4 + 8)
    
    if (esi_1 != 0)
        edi_2 = *(esi_1 + 8)
    
    float var_20
    sub_561190(eax_8, edi_2, &var_20, var_120, var_12c, arg4 + 8)
    float var_48
    float var_38
    void* ebx_2
    float var_28
    
    if (sub_48b210(var_48 - var_38) f>= 9.99999975e-05f)
        ebx_2:1.b = 1
    else
        float var_18
        
        if (sub_48b210(var_48 - var_28) f>= 9.99999975e-05f)
            ebx_2:1.b = 1
        else if (sub_48b210(var_48 - var_18) f>= 9.99999975e-05f)
            ebx_2:1.b = 1
        else
            ebx_2:1.b = 0
    float xmm7_1 = var_30
    float var_2c
    float xmm6_1 = var_2c
    float xmm0_15 = var_40
    float xmm3_5 = var_20
    float var_4c
    float var_3c
    float var_1c
    
    if (int.d(fconvert.t(var_50)) != int.d(xmm7_1) || int.d(xmm0_15) != int.d(xmm3_5)
            || int.d(var_4c) != int.d(var_3c) || int.d(xmm6_1) != int.d(var_1c))
        ebx_2.b = 1
    else
        ebx_2.b = 0
    
    float var_ec = var_50
    float var_a0 = xmm0_15
    float var_118 = xmm3_5
    float var_108 = var_4c
    float var_104 = var_3c
    float var_e8 = var_1c
    float var_11c = xmm7_1
    float var_e4 = xmm6_1
    float xmm0_19 = var_50 - xmm7_1
    float xmm3_7 = var_4c - var_3c
    float xmm2_13 = var_4c * xmm7_1 - xmm6_1 * var_50
    float xmm0_23 = var_4c * var_40
    var_12c = var_40 - var_50
    float xmm2_18 = var_3c * var_50 - xmm0_23
    float xmm2_22 = xmm7_1 - var_20
    float xmm2_25 = xmm6_1 * var_20 - var_1c * xmm7_1
    float xmm0_27 = var_3c - var_1c
    float xmm2_27 = var_20 - var_40
    float xmm2_30 = var_1c * var_40 - var_3c * var_20
    float xmm2_34 = xmm6_1 * var_12c + xmm7_1 * xmm3_7 + xmm2_18
    float xmm4_5 = xmm6_1 * xmm2_27 + xmm7_1 * xmm0_27 + xmm2_30
    var_120 = xmm4_5
    
    if (not(9.99999975e-05f > xmm2_34) && not(9.99999975e-05f > xmm4_5))
        float xmm0_34 = 1f / xmm2_34
        float xmm4_7 = (xmm7_1 - xmm0_15) * xmm0_34
        float xmm1_12 = (var_3c - xmm6_1) * xmm0_34
        float xmm5_4 = (xmm6_1 - var_4c) * xmm0_34
        float xmm4_9 = (xmm6_1 * xmm0_15 - var_3c * xmm7_1) * xmm0_34
        float xmm3_8 = xmm3_7 * xmm0_34
        float var_bc_1 = xmm1_12
        float xmm4_11 = xmm0_19 * xmm0_34
        var_12c = var_12c * xmm0_34
        float var_c4_1 = 0f
        float var_d0_1 = 0f
        float var_a8_1 = 0f
        float var_c0_1 = 0f
        float var_d4_1 = 0f
        float var_a4_1 = 0f
        
        if (ebx_2.b != 0)
            float xmm0_35 = 1f / var_120
            var_c4_1 = (var_1c - xmm6_1) * xmm0_35
            var_d0_1 = xmm2_22 * xmm0_35
            var_a8_1 = xmm2_25 * xmm0_35
            var_c0_1 = xmm0_27 * xmm0_35
            var_d4_1 = xmm2_27 * xmm0_35
            var_a4_1 = xmm2_30 * xmm0_35
        
        float var_124_3 = 0f
        float var_ac_1 = 0f
        float var_e0_2 = 0f
        int32_t eax_10 = *(arg1 + 0x2c) - 1
        float var_d8_2 = 0f
        int32_t var_b8 = eax_10
        int32_t var_94 = eax_10
        int32_t eax_12 = *(arg1 + 0x30) - 1
        float var_dc_2 = 0f
        int32_t var_90 = eax_12
        var_120 = 0f
        float var_b4_1 = 0f
        float var_10c_2 = 0f
        float var_b0_1 = 0f
        
        if (ebx_2:1.b != 0)
            float var_44
            float xmm0_36 = 1f / var_44
            var_b4_1 = xmm0_36
            var_124_3 = xmm0_36 * 0f
            float var_34
            float xmm0_38 = 1f / var_34
            var_10c_2 = xmm0_38
            float var_24
            float xmm0_41 = 1f / var_24
            var_ac_1 = xmm0_38 * _mm_cvtepi32_ps(zx.o(var_74))
            xmm6_1 = var_2c
            var_b0_1 = xmm0_41
            var_e0_2 = xmm0_41 * 0f
            var_d8_2 = var_124_3
            var_dc_2 = var_10c_2 * 0f
            var_120 = xmm0_41 * _mm_cvtepi32_ps(zx.o(var_70))
        
        float* ecx_10 = &var_118
        float* esi_2 = &var_118
        float xmm2_54 = var_40
        
        if (xmm7_1 <= var_20)
            ecx_10 = &var_11c
        
        float* eax_13 = &var_a0
        
        if (var_50 <= xmm2_54)
            eax_13 = &var_ec
        
        float* edx_6 = &var_a0
        
        if (*eax_13 > *ecx_10)
            eax_13 = ecx_10
        
        float* ecx_11 = &var_e8
        int32_t eax_14 = int.d(fconvert.t(*eax_13))
        
        if (var_20 <= xmm7_1)
            esi_2 = &var_11c
        
        if (xmm2_54 <= var_50)
            edx_6 = &var_ec
        
        if (xmm6_1 <= var_1c)
            ecx_11 = &var_e4
        
        float* eax_15 = &var_104
        
        if (var_4c <= var_3c)
            eax_15 = &var_108
        
        if (*eax_15 > *ecx_11)
            eax_15 = ecx_11
        
        float* ecx_12 = &var_e8
        int32_t eax_16 = int.d(fconvert.t(*eax_15))
        
        if (var_1c <= xmm6_1)
            ecx_12 = &var_e4
        
        float* eax_17 = &var_104
        
        if (var_3c <= var_4c)
            eax_17 = &var_108
        
        if (*esi_2 > *edx_6)
            edx_6 = esi_2
        
        int32_t esi_4 = int.d(fconvert.t(*edx_6)) - eax_14
        
        if (*ecx_12 > *eax_17)
            eax_17 = ecx_12
        
        struct common::CRect::VTable* var_6c
        
        if (sub_404ad0(
                sub_4049d0(&var_6c, eax_14, eax_16, esi_4, int.d(fconvert.t(*eax_17)) - eax_16), 
                arg2, arg3).b != 0)
            var_11c = 0f
            var_118 = 0f
            
            if (ebx_2.b != 0)
                var_11c = var_c4_1
                var_118 = var_c0_1
            
            float var_114_2 = 0f
            float var_110_2 = 0f
            
            if (ebx_2:1.b == 0)
                float xmm1_13 = xmm1_12 * 0f
                var_114_2 = xmm5_4 * _mm_cvtepi32_ps(zx.o(var_74)) + xmm1_13 + xmm3_8 * 0f
                xmm1_12 = var_bc_1
                var_110_2 = xmm5_4 * 0f + xmm1_13 + xmm3_8 * _mm_cvtepi32_ps(zx.o(var_70))
            
            float var_100_1 = 0f
            var_108 = 0f
            
            if (ebx_2.b != 0)
                var_100_1 = var_d0_1
                var_108 = var_d4_1
            
            float var_fc_2 = 0f
            var_104 = 0f
            float xmm2_65 = _mm_cvtepi32_ps(zx.o(eax_16))
            var_e4 = xmm2_65 * xmm4_7 + xmm4_9
            var_e8 = xmm2_65 * xmm4_11 + xmm2_13 * xmm0_34
            var_ec = xmm2_65 * var_12c + xmm2_18 * xmm0_34
            
            if (ebx_2.b != 0)
                var_fc_2 = xmm2_65 * var_d0_1 + var_a8_1
                var_104 = xmm2_65 * var_d4_1 + var_a4_1
            
            float xmm2_66 = (zx.o(0)).d
            float xmm0_75 = _mm_cvtepi32_ps(zx.o(eax_14))
            float xmm3_9 = (zx.o(0)).d
            
            if (ebx_2.b != 0)
                xmm2_66 = xmm0_75 * var_c4_1
                xmm3_9 = xmm0_75 * var_c0_1
            
            float xmm6_7 = xmm0_75 * xmm1_12 + var_e4
            float xmm7_6 = xmm0_75 * xmm5_4 + var_e8
            eax_3 = arg3 - eax_16
            float xmm0_77 = _mm_cvtepi32_ps(zx.o(eax_3))
            float xmm1_20 = xmm0_77 * xmm4_7 + xmm6_7
            float var_128_3 = xmm1_20
            float xmm6_10 = xmm0_77 * xmm4_11 + xmm7_6
            float xmm7_7 = (zx.o(0)).d
            float xmm5_7 = xmm0_77 * var_12c + xmm0_75 * xmm3_8 + var_ec
            var_12c = 0f
            
            if (ebx_2.b != 0)
                float xmm3_11 = xmm3_9 + var_104
                float xmm0_81 = _mm_cvtepi32_ps(zx.o(eax_3))
                xmm7_7 = xmm0_81 * var_100_1 + xmm2_66 + var_fc_2
                var_12c = xmm0_81 * var_108 + xmm3_11
            
            float xmm2_72 = (zx.o(0)).d
            float xmm3_12 = (zx.o(0)).d
            
            if (ebx_2:1.b == 0)
                float xmm1_21 = xmm1_20 * 0f
                xmm2_72 = xmm6_10 * _mm_cvtepi32_ps(zx.o(var_74)) + xmm1_21 + xmm5_7 * 0f
                xmm1_20 = var_128_3
                xmm3_12 = xmm6_10 * 0f + xmm1_21 + xmm5_7 * _mm_cvtepi32_ps(zx.o(var_70))
            
            void* ecx_17 = nullptr
            
            if (esi_4 s> 0)
                do
                    float xmm0_90 = var_12c
                    
                    if (ebx_2.b == 0 || (not(0 f> xmm6_10) && not(0 f> xmm5_7) && not(0 f> xmm7_7)
                            && 0 f<= xmm0_90))
                        if (ecx_17 + eax_14 == arg2)
                            if (esi_4 s> ecx_17)
                                if (ebx_2:1.b != 0)
                                    float xmm7_10 = 1f / (xmm6_10 * var_10c_2 + var_128_3 * var_b4_1
                                        + xmm5_7 * var_b0_1)
                                    xmm2_72 = (xmm6_10 * var_ac_1 + var_128_3 * var_124_3
                                        + xmm5_7 * var_e0_2) * xmm7_10
                                    xmm3_12 = (xmm6_10 * var_dc_2 + var_128_3 * var_d8_2
                                        + xmm5_7 * var_120) * xmm7_10
                                
                                int32_t eax_22 = int.d(xmm2_72)
                                int32_t* edx_9 = &var_120
                                bool cond:8_1 = eax_22 s>= var_b8
                                var_120 = eax_22
                                
                                if (cond:8_1)
                                    edx_9 = &var_94
                                
                                int32_t* ecx_20 = &var_b8
                                int32_t eax_23 = int.d(xmm3_12)
                                var_b8 = eax_23
                                
                                if (eax_23 s>= eax_12)
                                    ecx_20 = &var_90
                                
                                int32_t eax_24 = *ecx_20
                                int32_t ecx_21 = *edx_9
                                int32_t edx_10 = 0
                                
                                if (eax_24 s> 0)
                                    edx_10 = eax_24
                                
                                int32_t eax_25 = 0
                                
                                if (ecx_21 s> 0)
                                    eax_25 = ecx_21
                                
                                int32_t edx_12 = edx_10 * *(arg1 + 0x2c) + eax_25
                                
                                if (*(arg1 + 0x24) - *(arg1 + 0x20) s> edx_12)
                                    int32_t eax_27
                                    eax_27.b = *(edx_12 + *(arg1 + 0x20)) != 0
                                    @__security_check_cookie@4(eax_1 ^ &var_12c)
                                    return eax_27
                            
                            break
                        
                        xmm1_20 = xmm1_20 + var_bc_1
                        xmm6_10 = xmm6_10 + xmm5_4
                        xmm5_7 = xmm5_7 + xmm3_8
                        var_128_3 = xmm1_20
                        
                        if (ebx_2.b != 0)
                            xmm7_7 = xmm7_7 + var_11c
                            var_12c = xmm0_90 + var_118
                    else
                        xmm1_20 = xmm1_20 + var_bc_1
                        xmm6_10 = xmm6_10 + xmm5_4
                        xmm5_7 = xmm5_7 + xmm3_8
                        var_128_3 = xmm1_20
                        xmm7_7 = xmm7_7 + var_11c
                        var_12c = xmm0_90 + var_118
                    
                    if (ebx_2:1.b == 0)
                        xmm3_12 = xmm3_12 + var_110_2
                        xmm2_72 = xmm2_72 + var_114_2
                    
                    ecx_17 += 1
                while (ecx_17 s< esi_4)

eax_3.b = 0
@__security_check_cookie@4(eax_1 ^ &var_12c)
return eax_3
