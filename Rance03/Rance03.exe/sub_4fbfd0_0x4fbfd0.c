// 函数: sub_4fbfd0
// 地址: 0x4fbfd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_190
int32_t eax_1 = __security_cookie ^ &var_190
struct partsengine::COriginPosMode::VTable* const edi = arg1
struct partsengine::COriginPosMode::VTable* var_158 = arg12
struct partsengine::COriginPosMode::VTable* const var_144 = edi
struct partsengine::CRect::VTable* var_bc
sub_4fbef0(&var_bc, edi, edi, &edi[0xd])
arg7 - 1f
struct partsengine::CRect::VTable** eax_4
eax_4:1.b =
    (arg7 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg7, 1f) ? 1 : 0) << 2 | (arg7 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t eax_9
int32_t var_b0
int32_t var_ac
int32_t ecx_6

if (p_1)
label_4fc17b:
    
    if (var_b0 s> 0 && var_ac s> 0)
        struct partsengine::COriginPosMode::VTable* const var_138 =
            &partsengine::COriginPosMode::`vftable'
        int32_t var_134_1 = arg6
        int32_t eax_11 = sub_50feb0(&var_138, var_b0)
        var_138 = &partsengine::COriginPosMode::`vftable'
        int32_t var_134_2 = arg6
        float xmm0_20 = _mm_cvtepi32_ps(zx.o(eax_11))
        float xmm0_22 = _mm_cvtepi32_ps(zx.o(sub_50ff00(&var_138, var_ac)))
        void var_90
        sub_48d630(&var_90, arg7, arg8)
        arg10 f- 0
        int32_t* eax_13
        eax_13:1.b = (arg10 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg10, 0f) ? 1 : 0) << 2
            | (arg10 < 0f ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        float var_50
        
        if (p_11)
            int32_t* ecx_10 = &var_50
            EnumC13Lines::EnumC13Lines(ecx_10)
            sub_47b7f0(ecx_10, arg10 ^ 0x80000000)
            sub_47b440(&var_90, &var_50)
        
        arg9 f- 0
        eax_13:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2
            | (arg9 < 0f ? 1 : 0)
        bool p_13 = unimplemented  {test ah, 0x44}
        
        if (p_13)
            int32_t* ecx_12 = &var_50
            EnumC13Lines::EnumC13Lines(ecx_12)
            sub_47b8b0(ecx_12, arg9 ^ 0x80000000)
            sub_47b440(&var_90, &var_50)
        
        arg11 f- 0
        eax_13:1.b = (arg11 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg11, 0f) ? 1 : 0) << 2
            | (arg11 < 0f ? 1 : 0)
        bool p_15 = unimplemented  {test ah, 0x44}
        
        if (p_15)
            int32_t* ecx_14 = &var_50
            EnumC13Lines::EnumC13Lines(ecx_14)
            sub_47b960(ecx_14, arg11 ^ (data_7094c0).d)
            sub_47b440(&var_90, &var_50)
        
        struct partsengine::COriginPosMode::VTable* edx_1 = var_158
        sub_51e0c0(&var_90, edx_1, &var_50, xmm0_20, xmm0_22, &var_90)
        float xmm0_24 = xmm0_20 + _mm_cvtepi32_ps(zx.o(var_b0))
        var_158 = xmm0_24
        float var_40
        sub_51e0c0(&var_90, edx_1, &var_40, xmm0_24, xmm0_22, &var_90)
        float xmm0_26 = xmm0_22 + _mm_cvtepi32_ps(zx.o(var_ac))
        float var_30
        sub_51e0c0(&var_90, edx_1, &var_30, xmm0_20, xmm0_26, &var_90)
        float var_20
        sub_51e0c0(&var_90, edx_1, &var_20, var_158, xmm0_26, &var_90)
        float var_4c
        float xmm2_10 = var_4c + arg5
        float xmm4_2 = var_20 + arg4
        float xmm5_2 = var_50 + arg4
        float xmm7_2 = var_40 + arg4
        float var_3c
        float xmm3_6 = var_3c + arg5
        float var_2c
        float xmm6_2 = var_2c + arg5
        float xmm2_12 = var_30 + arg4
        var_138 = xmm7_2
        float var_1c
        var_190 = var_1c + arg5
        float var_48
        float var_38
        float var_28
        
        if (__andps_xmmxud_memxud(var_48 - var_38, data_709490.o) f>= 9.99999975e-05f)
            edx_1.b = 1
        else
            float var_18
            
            if (__andps_xmmxud_memxud(var_48 - var_28, data_709490.o) f>= 9.99999975e-05f)
                edx_1.b = 1
            else if (__andps_xmmxud_memxud(var_48 - var_18, data_709490.o) f>= 9.99999975e-05f)
                edx_1.b = 1
            else
                edx_1.b = 0
        char var_186_1 = edx_1.b
        
        if (int.d(xmm5_2) != int.d(xmm2_12) || int.d(xmm7_2) != int.d(xmm4_2)
                || int.d(xmm2_10) != int.d(xmm3_6) || int.d(xmm6_2) != int.d(fconvert.t(var_190)))
            eax_9.b = 1
        else
            eax_9.b = 0
        
        float var_130 = xmm2_10
        float var_15c = var_190
        char var_185_1 = eax_9.b
        float var_13c = xmm3_6
        float var_e0 = xmm4_2
        float var_e4 = xmm7_2
        float var_12c = xmm5_2
        float var_c4 = xmm2_12
        float var_148 = xmm6_2
        float xmm3_9 = xmm2_10 - xmm3_6
        float xmm4_12 = xmm7_2 - xmm5_2
        float xmm4_15 = xmm3_6 * xmm5_2 - xmm7_2 * xmm2_10
        int64_t var_100 = var_190 - xmm6_2
        int64_t xmm0_51 = xmm3_6 - var_190
        float var_11c = xmm4_2 * xmm6_2 - var_190 * xmm2_12
        int64_t var_128 = xmm0_51
        float xmm4_22 = xmm4_2 - xmm7_2
        float xmm7_4 = var_190 * xmm7_2 - xmm4_2 * xmm3_6
        float xmm4_28 = xmm6_2 * xmm4_12 + xmm2_12 * xmm3_9 + xmm4_15
        float xmm7_8 = xmm6_2 * xmm4_22 + xmm2_12 f* var_128.d + xmm7_4
        var_158 = xmm7_8
        
        if (not(9.99999975e-05f > xmm4_28) && not(9.99999975e-05f > xmm7_8))
            float xmm0_58 = 1f / xmm4_28
            float xmm4_30 = (xmm2_12 - xmm7_2) * xmm0_58
            int64_t xmm1_25 = (xmm3_6 - xmm6_2) * xmm0_58
            float xmm5_5 = (xmm6_2 - xmm2_10) * xmm0_58
            float xmm3_10 = xmm3_9 * xmm0_58
            float var_e8_1 = xmm1_25
            float xmm4_34 = (xmm5_2 - xmm2_12) * xmm0_58
            float xmm4_38 = xmm4_12 * xmm0_58
            float var_104_1 = 0f
            float var_ec_1 = 0f
            float var_c8_1 = 0f
            float var_f0_1 = 0f
            float var_108_1 = 0f
            float var_118_1 = 0f
            
            if (eax_9.b != 0)
                float xmm0_59 = 1f f/ var_158
                var_158.q = xmm1_25
                float xmm4_44 = var_11c * xmm0_59
                var_100 = _mm_unpacklo_ps(var_100.d f* xmm0_59, (xmm2_12 - xmm4_2) * xmm0_59)
                var_158.q = var_158.q
                var_128 = var_128.d * xmm0_59
                xmm1_25 = var_158.q
                var_158.q = _mm_unpacklo_ps(zx.o(var_128), xmm4_22 * xmm0_59)
                var_c8_1 = xmm4_44
                var_ec_1 = var_100:4.d
                var_104_1 = var_100.d
                var_118_1 = xmm7_4 * xmm0_59
                float var_154
                var_108_1 = var_154
                var_f0_1 = var_158
            
            float var_164_2 = 0f
            var_11c = edi - 1
            float var_d8_1 = 0f
            var_158 = edi - 1
            float var_a8_1 = 0f
            var_100.d = 0
            float var_d0_1 = 0f
            var_128.d = 0
            float var_cc_1 = 0f
            float var_180_2 = 0f
            float var_c0_1 = 0f
            
            if (edx_1.b != 0)
                float var_44
                float xmm0_69 = 1f / var_44
                var_cc_1 = xmm0_69
                var_164_2 = xmm0_69 * 0f
                float var_34
                float xmm0_71 = 1f / var_34
                var_180_2 = xmm0_71
                float var_24
                float xmm0_74 = 1f / var_24
                var_d8_1 = xmm0_71 * _mm_cvtepi32_ps(zx.o(var_b0))
                var_c0_1 = xmm0_74
                var_a8_1 = xmm0_74 * 0f
                var_100.d = var_164_2
                var_d0_1 = var_180_2 * 0f
                var_128.d = xmm0_74 * _mm_cvtepi32_ps(zx.o(var_ac))
            
            struct partsengine::CRect::VTable* const var_a4 = &partsengine::CRect::`vftable'
            float* ecx_24 = &var_e0
            float* esi_4 = &var_e0
            float xmm7_16 = var_138
            
            if (xmm2_12 <= xmm4_2)
                ecx_24 = &var_c4
            
            float* eax_24 = &var_e4
            
            if (xmm5_2 <= xmm7_16)
                eax_24 = &var_12c
            
            float* edx_2 = &var_e4
            
            if (*eax_24 > *ecx_24)
                eax_24 = ecx_24
            
            float* ecx_25 = &var_15c
            int32_t eax_25 = int.d(fconvert.t(*eax_24))
            
            if (xmm4_2 <= xmm2_12)
                esi_4 = &var_c4
            
            if (xmm7_16 <= xmm5_2)
                edx_2 = &var_12c
            
            if (xmm6_2 <= var_190)
                ecx_25 = &var_148
            
            float* eax_26 = &var_13c
            
            if (xmm2_10 <= xmm3_6)
                eax_26 = &var_130
            
            if (*eax_26 > *ecx_25)
                eax_26 = ecx_25
            
            float* ecx_26 = &var_15c
            int32_t eax_27 = int.d(fconvert.t(*eax_26))
            
            if (var_190 <= xmm6_2)
                ecx_26 = &var_148
            
            float* eax_28 = &var_13c
            
            if (xmm3_6 <= xmm2_10)
                eax_28 = &var_130
            
            if (*esi_4 > *edx_2)
                edx_2 = esi_4
            
            int32_t var_a0_1 = eax_25
            int32_t esi_6 = int.d(fconvert.t(*edx_2)) - eax_25
            int32_t var_9c_3 = eax_27
            int32_t var_98_1 = esi_6
            
            if (*ecx_26 > *eax_28)
                eax_28 = ecx_26
            
            int32_t var_94_1 = int.d(fconvert.t(*eax_28)) - eax_27
            int16_t edx_5
            eax_9, edx_5 = sub_512730(&var_a4, arg2, arg3)
            edi = var_144
            
            if (eax_9.b != 0)
                edx_5.b = var_185_1
                float var_16c_2 = 0f
                float var_170_3 = 0f
                
                if (edx_5.b != 0)
                    var_16c_2 = var_104_1
                    var_170_3 = var_f0_1
                
                edx_5:1.b = var_186_1
                float var_17c_2 = 0f
                float var_18c_4 = 0f
                
                if (edx_5:1.b == 0)
                    float xmm1_32 = xmm1_25 f* 0f
                    var_17c_2 = xmm5_5 * _mm_cvtepi32_ps(zx.o(var_b0)) + xmm1_32 + xmm3_10 * 0f
                    xmm1_25 = var_e8_1
                    var_18c_4 = xmm5_5 * 0f + xmm1_32 + xmm3_10 * _mm_cvtepi32_ps(zx.o(var_ac))
                
                var_130 = 0f
                var_148 = 0f
                
                if (edx_5.b != 0)
                    var_130 = var_ec_1
                    var_148 = var_108_1
                
                var_13c = 0f
                var_15c = 0f
                float xmm2_23 = _mm_cvtepi32_ps(zx.o(eax_27))
                var_144 = xmm2_23 * xmm4_30 + (xmm6_2 * xmm7_2 - xmm2_12 * xmm3_6) * xmm0_58
                var_138 = xmm2_23 * xmm4_34 + (xmm2_12 * xmm2_10 - xmm6_2 * xmm5_2) * xmm0_58
                var_12c = xmm2_23 * xmm4_38 + xmm4_15 * xmm0_58
                
                if (edx_5.b != 0)
                    var_13c = xmm2_23 * var_ec_1 + var_c8_1
                    var_15c = xmm2_23 * var_108_1 + var_118_1
                
                float xmm2_24 = (zx.o(0)).d
                float xmm0_108 = _mm_cvtepi32_ps(zx.o(eax_25))
                float xmm3_11 = (zx.o(0)).d
                
                if (edx_5.b != 0)
                    xmm2_24 = xmm0_108 * var_104_1
                    xmm3_11 = xmm0_108 * var_f0_1
                
                float xmm6_6 = xmm0_108 f* xmm1_25 f+ var_144
                float xmm7_21 = xmm0_108 * xmm5_5 f+ var_138
                eax_9 = arg3 - eax_27
                float xmm0_110 = _mm_cvtepi32_ps(zx.o(eax_9))
                float xmm1_39 = xmm0_110 * xmm4_30 + xmm6_6
                float var_178_3 = xmm1_39
                float xmm6_9 = xmm0_110 * xmm4_34 + xmm7_21
                float xmm7_22 = (zx.o(0)).d
                float xmm5_8 = xmm0_110 * xmm4_38 + xmm0_108 * xmm3_10 + var_12c
                var_190 = 0f
                
                if (edx_5.b != 0)
                    float xmm3_13 = xmm3_11 + var_15c
                    float xmm2_26 = xmm2_24 + var_13c
                    float xmm0_114 = _mm_cvtepi32_ps(zx.o(eax_9))
                    xmm7_22 = xmm0_114 * var_130 + xmm2_26
                    var_190 = xmm0_114 * var_148 + xmm3_13
                
                float xmm2_30 = (zx.o(0)).d
                float xmm3_14 = (zx.o(0)).d
                
                if (edx_5:1.b == 0)
                    float xmm1_40 = xmm1_39 * 0f
                    xmm2_30 = xmm6_9 * _mm_cvtepi32_ps(zx.o(var_b0)) + xmm1_40 + xmm5_8 * 0f
                    xmm1_39 = var_178_3
                    xmm3_14 = xmm6_9 * 0f + xmm1_40 + xmm5_8 * _mm_cvtepi32_ps(zx.o(var_ac))
                
                int32_t ecx_29 = 0
                
                if (esi_6 s> 0)
                    while (true)
                        float xmm0_123 = var_190
                        
                        if (edx_5.b == 0 || (not(0 f> xmm6_9) && not(0 f> xmm5_8)
                                && not(0 f> xmm7_22) && 0 f<= xmm0_123))
                            if (eax_25 + ecx_29 == arg2)
                                break
                            
                            xmm1_39 = xmm1_39 + var_e8_1
                            xmm6_9 = xmm6_9 + xmm5_5
                            xmm5_8 = xmm5_8 + xmm3_10
                            var_178_3 = xmm1_39
                            
                            if (edx_5.b != 0)
                                xmm7_22 = xmm7_22 + var_16c_2
                                var_190 = xmm0_123 + var_170_3
                        else
                            xmm1_39 = xmm1_39 + var_e8_1
                            xmm6_9 = xmm6_9 + xmm5_5
                            xmm5_8 = xmm5_8 + xmm3_10
                            var_178_3 = xmm1_39
                            xmm7_22 = xmm7_22 + var_16c_2
                            var_190 = xmm0_123 + var_170_3
                        
                        if (edx_5:1.b == 0)
                            xmm3_14 = xmm3_14 + var_18c_4
                            xmm2_30 = xmm2_30 + var_17c_2
                        
                        ecx_29 += 1
                        
                        if (ecx_29 s>= esi_6)
                            goto label_4fce1c
                    
                    if (esi_6 s> ecx_29)
                        if (edx_5:1.b != 0)
                            float xmm7_25 =
                                1f / (xmm6_9 * var_180_2 + var_178_3 * var_cc_1 + xmm5_8 * var_c0_1)
                            xmm2_30 = (xmm6_9 * var_d8_1 + var_178_3 * var_164_2
                                + xmm5_8 * var_a8_1) * xmm7_25
                            xmm3_14 = (xmm6_9 * var_d0_1 + var_178_3 f* var_100.d
                                + xmm5_8 f* var_128.d) * xmm7_25
                        
                        int32_t eax_33 = int.d(xmm2_30)
                        var_128.d = 0
                        struct partsengine::COriginPosMode::VTable* const* edx_6 = &var_144
                        var_100.d = 0
                        bool cond:11_1 = eax_33 s>= var_11c
                        var_144 = eax_33
                        int32_t eax_34 = int.d(xmm3_14)
                        
                        if (cond:11_1)
                            edx_6 = &var_11c
                        
                        struct partsengine::COriginPosMode::VTable* const* ecx_32 = &var_138
                        bool cond:12_1 = eax_34 s>= var_158
                        var_138 = eax_34
                        struct partsengine::COriginPosMode::VTable* const* eax_35 = &var_128
                        
                        if (cond:12_1)
                            ecx_32 = &var_158
                        
                        if (*ecx_32 s> 0)
                            eax_35 = ecx_32
                        
                        struct partsengine::COriginPosMode::VTable* const* eax_36 = &var_100
                        
                        if (*edx_6 s> 0)
                            eax_36 = edx_6
                        
                        ecx_6 = *eax_35 * edi + *eax_36
                        goto label_4fcf35
else
    arg8 - 1f
    eax_4:1.b =
        (arg8 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg8, 1f) ? 1 : 0) << 2 | (arg8 < 1f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_4fc17b
    
    int32_t ecx_1 = int.d(fconvert.t(arg9))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(ecx_1))
    xmm0_2 - arg9
    eax_4:1.b = (xmm0_2 == arg9 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, arg9) ? 1 : 0) << 2
        | (xmm0_2 < arg9 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_4fc17b
    
    if (sub_4a1f10(ecx_1) != 0)
        goto label_4fc17b
    
    int32_t ecx_2 = int.d(fconvert.t(arg10))
    _mm_cvtepi32_ps(zx.o(ecx_2)) - arg10
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        goto label_4fc17b
    
    if (sub_4a1f10(ecx_2) != 0)
        goto label_4fc17b
    
    int32_t ecx_3 = int.d(fconvert.t(arg11))
    _mm_cvtepi32_ps(zx.o(ecx_3)) - arg11
    bool p_9 = unimplemented  {test ah, 0x44}
    
    if (p_9)
        goto label_4fc17b
    
    if (sub_4a1f10(ecx_3) != 0)
        goto label_4fc17b
    
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(arg2))
    var_144 = &partsengine::COriginPosMode::`vftable'
    int32_t var_140_1 = arg6
    int32_t eax_8 = sub_50feb0(&var_144, var_b0)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg3))
    int32_t var_140_2 = arg6
    var_144 = &partsengine::COriginPosMode::`vftable'
    float xmm2_4 = xmm2_2 - arg4 - _mm_cvtepi32_ps(zx.o(eax_8))
    float xmm1_4 = xmm1_2 - arg5 - _mm_cvtepi32_ps(zx.o(sub_50ff00(&var_144, var_ac)))
    
    if (not(0 f> xmm2_4) && not(0 f> xmm1_4) && not(xmm2_4 f>= _mm_cvtepi32_ps(zx.o(var_b0)))
            && not(xmm1_4 f>= _mm_cvtepi32_ps(zx.o(var_ac))))
        ecx_6 = int.d(_mm_cvtepi32_ps(zx.o(edi)) * xmm1_4 + xmm2_4)
    label_4fcf35:
        
        if (0 s> ecx_6)
            struct partsengine::COriginPosMode::VTable eax_38
            eax_38.vFunc_0.b = *(ecx_6 + edi) != 0
            sub_69a5bc(eax_1 ^ &var_190)
            return eax_38
label_4fce1c:
eax_9.b = 0
sub_69a5bc(eax_1 ^ &var_190)
return eax_9
