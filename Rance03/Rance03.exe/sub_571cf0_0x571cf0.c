// 函数: sub_571cf0
// 地址: 0x571cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (*(arg1 + 0x21c) == 1 && *(arg4 + 0x128) != 0)
    eax = sub_541c40(arg4, **(arg1 + 0x220))
    
    if (eax == 0)
        arg2 = zx.o(0)
    else if (*(eax + 0x19c) == 0)
        arg2 = *(eax + 0x12c)
    else
        arg2 = zx.o(0)

float xmm0 = *(arg1 + 0x2b4)
float xmm2_1 = arg2.d - xmm0

if (*(arg1 + 0xc) u> 3)
    *(arg1 + 0x274) = 0
else if (*(arg1 + 0x38) == 0 || (not(xmm0 f> arg2) && arg2 f< *(arg1 + 0x2b8)))
    eax.b = 1
    *(arg1 + 0x274) = 1
else
    eax.b = 0
    *(arg1 + 0x274) = 0

if (*(arg1 + 0x274) != 0)
    if (arg3 != 0)
        int32_t eax_2 = *(arg1 + 0x38)
        float var_1a4_1
        float xmm2_2
        
        if (eax_2 s> 0)
            xmm2_2 = xmm2_1 / _mm_cvtepi32_ps(zx.o(eax_2))
            var_1a4_1 = xmm2_2
        
        if (eax_2 s<= 0 || 0f > xmm2_2)
            var_1a4_1 = (zx.o(0)).d
        else if (not(xmm2_2 <= 1f))
            var_1a4_1 = 1f
        
        eax = *(arg1 + 0xbc)
        
        if (eax u> 5)
            eax.b = 0
            return eax
        
        float var_1c8
        float var_1c4
        float var_1c0
        int64_t var_1bc
        int64_t var_1b0
        char var_1a0_1
        float var_19c
        float var_fc
        float var_bc
        float* eax_15
        void* eax_20
        int32_t eax_23
        int64_t xmm0_31
        float xmm1_12
        
        switch (eax)
            case 0
                var_1a0_1 = 0
                int32_t var_1a8_1 = arg14[1].d
                var_1b0 = *arg14
                int32_t eax_6 = arg15[2]
                var_1bc = *arg15
                int32_t var_1b4_1 = eax_6
                xmm0_31 = *arg13
                eax_23 = arg13[1].d
            case 1
            label_571fe8:
                int32_t var_1a8_4 = arg14[1].d
                eax_15 = arg15
                var_1b0 = *arg14
            label_57222d:
                int32_t eax_27 = eax_15[2]
                var_1bc = *eax_15
                int32_t var_1b4_6 = eax_27
            label_57223a:
                var_1a0_1 = 1
                xmm0_31 = *arg13
                eax_23 = arg13[1].d
            case 2
                float xmm0_6 = *(arg1 + 0x2c0)
                xmm0_6 f- 0
                eax:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
                    | (xmm0_6 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    float xmm0_7 = *(arg1 + 0x2c4)
                    xmm0_7 f- 0
                    eax:1.b = (xmm0_7 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2 | (xmm0_7 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        float xmm0_8 = *(arg1 + 0x2c8)
                        xmm0_8 f- 0
                        eax:1.b = (xmm0_8 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_6))
                            goto label_571fe8
                
                float* eax_7 = sub_5409e0(arg4, &var_fc)
                float var_7c
                sub_47b190(sub_59f780(arg1 + 0x2c0, &var_7c), &var_1c8, eax_7)
                float xmm7_1 = arg16[1]
                float xmm6_1 = arg16[2]
                float xmm5_1 = *arg16
                var_1b0.d = xmm7_1 * var_1c0 - xmm6_1 * var_1c4
                var_1b0:4.d = xmm6_1 * var_1c8 - xmm5_1 * var_1c0
                float var_1a8_2 = xmm5_1 * var_1c4 - xmm7_1 * var_1c8
                float var_58
                float* eax_9 = sub_59f780(&var_1b0, &var_58)
                float eax_10 = eax_9[2]
                var_1bc = *eax_9
                float xmm6_2 = xmm6_1 f* var_1bc.d
                float xmm7_2 = xmm7_1 f* var_1bc.d
                var_1c8 = xmm6_1 f* var_1bc:4.d - xmm7_1 * eax_10
                float var_1c4_1 = xmm5_1 * eax_10 - xmm6_2
                float var_1c0_1 = xmm7_2 - xmm5_1 f* var_1bc:4.d
                float var_40
                float* eax_11 = sub_59f780(&var_1c8, &var_40)
                int32_t eax_12 = eax_11[2]
                var_1b0 = *eax_11
                int32_t var_1a8_3 = eax_12
                goto label_57223a
            case 3
                float xmm0_19 = *(arg1 + 0x2c0)
                xmm0_19 f- 0
                eax:1.b = (xmm0_19 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_19, 0f) ? 1 : 0) << 2
                    | (xmm0_19 < 0f ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                
                if (not(p_8))
                    float xmm0_20 = *(arg1 + 0x2c4)
                    xmm0_20 f- 0
                    eax:1.b = (xmm0_20 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_20, 0f) ? 1 : 0) << 2 | (xmm0_20 < 0f ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_10))
                        float xmm0_21 = *(arg1 + 0x2c8)
                        xmm0_21 f- 0
                        eax:1.b = (xmm0_21 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_21, 0f) ? 1 : 0) << 2 | (xmm0_21 < 0f ? 1 : 0)
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_12))
                            goto label_571fe8
                
                float* eax_16 = sub_5409e0(arg4, &var_bc)
                float var_28
                sub_47b190(sub_59f780(arg1 + 0x2c0, &var_28), &var_1c8, eax_16)
                float var_1a8_5 = var_1c0
                var_1b0 = var_1c8.q
                float var_64
                float* eax_19 = sub_59f780(arg1 + 0xac, &var_64)
                float xmm2_9 = var_1c8
                xmm1_12 = var_1c0 * eax_19[1] - var_1c4 * eax_19[2]
                void var_70
                eax_20 = &var_70
                float var_1b4_3 = var_1c4 * *eax_19 - xmm2_9 * eax_19[1]
                var_1bc:4.d = xmm2_9 * eax_19[2] - var_1c0 * *eax_19
            label_57221e:
                var_1bc.d = xmm1_12
                eax_15 = sub_59f780(&var_1bc, eax_20)
                goto label_57222d
            case 4
                var_1b0 = _mm_unpacklo_ps(zx.o(0), 0x3f800000)
                int32_t var_1a8_6 = 0
                int32_t var_1b4_4 = 0
                eax = *(arg1 + 0x30c)
                var_1a0_1 = 1
                var_1bc = _mm_unpacklo_ps(0x3f800000, 0)
                
                if (eax == 0xffffffff)
                    xmm0_31 = *arg13
                    eax_23 = arg13[1].d
                else
                    void* ecx_10 = *(arg4 + 0x1d8)
                    
                    if (ecx_10 == 0)
                        eax.b = 0
                        return eax
                    
                    void* eax_21 = sub_561670(ecx_10, eax)
                    
                    if (eax_21 == 0)
                        xmm0_31 = *arg13
                        eax_23 = arg13[1].d
                    else
                        struct sealengine::CEmitterPos::VTable* var_1c
                        struct sealengine::CEmitterPos::VTable** eax_22 =
                            sub_537660(&var_1c, *(eax_21 + 0x20))
                        xmm0_31 = *(eax_22 + 4)
                        eax_23 = eax_22[3]
            case 5
                float xmm0_32 = *(arg1 + 0x2c0)
                xmm0_32 f- 0
                eax:1.b = (xmm0_32 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_32, 0f) ? 1 : 0) << 2
                    | (xmm0_32 < 0f ? 1 : 0)
                bool p_14 = unimplemented  {test ah, 0x44}
                
                if (not(p_14))
                    float xmm0_33 = *(arg1 + 0x2c4)
                    xmm0_33 f- 0
                    eax:1.b = (xmm0_33 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_33, 0f) ? 1 : 0) << 2 | (xmm0_33 < 0f ? 1 : 0)
                    bool p_16 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_16))
                        float xmm0_34 = *(arg1 + 0x2c8)
                        xmm0_34 f- 0
                        eax:1.b = (xmm0_34 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_34, 0f) ? 1 : 0) << 2 | (xmm0_34 < 0f ? 1 : 0)
                        bool p_18 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_18))
                            goto label_571fe8
                
                float* eax_24 = sub_5409e0(arg4, &var_19c)
                float var_34
                sub_47b190(sub_59f780(arg1 + 0x2c0, &var_34), &var_1c8, eax_24)
                float xmm6_3 = *(arg1 + 0x2d0)
                float xmm5_6 = *(arg1 + 0x2d4)
                float xmm4_3 = *(arg1 + 0x2cc)
                float xmm6_4 = xmm6_3 * var_1c8
                float var_1a8_7 = var_1c0
                void var_4c
                eax_20 = &var_4c
                var_1b0 = var_1c8.q
                xmm1_12 = xmm6_3 * var_1c0 - xmm5_6 * var_1c4
                var_1bc:4.d = xmm5_6 * var_1c8 - xmm4_3 * var_1c0
                float var_1b4_5 = xmm4_3 * var_1c4 - xmm6_4
                goto label_57221e
        
        var_1c8.q = xmm0_31
        float xmm0_41 = *(arg1 + 0x2ec)
        int32_t var_1c0_2 = eax_23
        float xmm1_18 = (*(arg1 + 0x2f0) - xmm0_41) * var_1a4_1 + xmm0_41
        float xmm0_42 = *(arg1 + 0x2f4)
        float xmm1_22 = (*(arg1 + 0x2f8) - xmm0_42) * var_1a4_1 + xmm0_42
        float xmm0_43 = *(arg1 + 0x2fc)
        float xmm1_26 = (*(arg1 + 0x300) - xmm0_43) * var_1a4_1 + xmm0_43
        float xmm0_44 = *(arg1 + 0x278)
        float xmm0_45 = *(arg1 + 0x280)
        float xmm1_32 = ((*(arg1 + 0x27c) - xmm0_44) * var_1a4_1 + xmm0_44) * arg6 f* *(arg4 + 0x5c)
        float xmm0_46 = *(arg1 + 0x288)
        float xmm1_37 = ((*(arg1 + 0x284) - xmm0_45) * var_1a4_1 + xmm0_45) * arg7
        float xmm0_47 = *(arg1 + 0x304)
        float xmm1_42 = ((*(arg1 + 0x28c) - xmm0_46) * var_1a4_1 + xmm0_46) * arg8
        float xmm1_43 = (zx.o(0)).d
        xmm0_47 f- 0
        eax_23:1.b = (xmm0_47 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_47, 0f) ? 1 : 0) << 2
            | (xmm0_47 < 0f ? 1 : 0)
        bool p_20 = unimplemented  {test ah, 0x44}
        float xmm2_14
        
        if (not(p_20) || xmm0_47 <= xmm2_1)
            float xmm4_6 = *(arg1 + 0x308)
            xmm4_6 f- 0
            eax_23:1.b = (xmm4_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_6, 0f) ? 1 : 0) << 2
                | (xmm4_6 < 0f ? 1 : 0)
            bool p_22 = unimplemented  {test ah, 0x44}
            float xmm2_16
            
            if (p_22)
                xmm2_16 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
            
            if (p_22 && not(xmm2_1 < xmm2_16 - xmm4_6))
                xmm2_14 = (xmm2_16 - xmm2_1) / xmm4_6
                goto label_5723b3
            
            xmm1_43 = 1f
        else
            xmm2_14 = xmm2_1 / xmm0_47
        label_5723b3:
            
            if (not(0 f> xmm2_14))
                xmm1_43 = xmm2_14 <= 1f ? xmm2_14 : 1f
        float xmm1_44 = xmm1_43 * arg9
        EnumC13Lines::EnumC13Lines(&var_19c)
        sub_47b960(&var_19c, *(arg4 + 0x58))
        float var_15c
        EnumC13Lines::EnumC13Lines(&var_15c)
        sub_47b8b0(&var_15c, *(arg4 + 0x54))
        EnumC13Lines::EnumC13Lines(&var_bc)
        int32_t ecx_22 = sub_47b7f0(&var_bc, *(arg4 + 0x50))
        float xmm4_7 = var_bc
        float var_158
        float var_148
        float var_138
        float var_128
        float var_b8
        float var_b4
        float var_b0
        float xmm5_13 = var_158 * xmm4_7 + var_148 * var_b8 + var_138 * var_b4 + var_128 * var_b0
        float var_14c
        float var_13c
        float var_12c
        float xmm7_8 = xmm4_7 * var_15c + var_b8 * var_14c + var_b4 * var_13c + var_b0 * var_12c
        float var_154
        float var_144
        float var_134
        float var_124
        float xmm6_9 = var_154 * xmm4_7 + var_144 * var_b8 + var_134 * var_b4 + var_124 * var_b0
        float var_150
        float var_140
        float var_130
        float var_120
        float xmm5_18 = var_150 * xmm4_7 + var_140 * var_b8 + var_130 * var_b4 + var_120 * var_b0
        float var_18c
        float var_17c
        float var_16c
        var_fc = xmm7_8 * var_19c + xmm5_13 * var_18c + xmm6_9 * var_17c + var_16c * xmm5_18
        float var_198
        float var_188
        float var_178
        float var_168
        float var_f8_1 = xmm7_8 * var_198 + xmm5_13 * var_188 + xmm6_9 * var_178 + var_168 * xmm5_18
        float var_194
        float var_184
        float var_174
        float var_164
        float var_f4_1 = xmm7_8 * var_194 + xmm5_13 * var_184 + xmm6_9 * var_174 + var_164 * xmm5_18
        float var_190
        float var_180
        float var_170
        float var_160
        float var_f0_1 = xmm7_8 * var_190 + xmm5_13 * var_180 + xmm6_9 * var_170 + var_160 * xmm5_18
        float var_ac
        float var_a8
        float var_a4
        float var_a0
        float xmm6_15 = var_ac * var_15c + var_a8 * var_14c + var_a4 * var_13c + var_a0 * var_12c
        float xmm5_23 = var_ac * var_158 + var_a8 * var_148 + var_a4 * var_138 + var_a0 * var_128
        float xmm4_12 = var_ac * var_154 + var_a8 * var_144 + var_a4 * var_134 + var_a0 * var_124
        float xmm7_17 = var_ac * var_150 + var_a8 * var_140 + var_a4 * var_130 + var_a0 * var_120
        float var_ec_1 =
            var_18c * xmm5_23 + var_19c * xmm6_15 + var_17c * xmm4_12 + var_16c * xmm7_17
        float var_e8_1 =
            var_188 * xmm5_23 + var_198 * xmm6_15 + var_178 * xmm4_12 + var_168 * xmm7_17
        float var_e4_1 =
            var_184 * xmm5_23 + var_194 * xmm6_15 + var_174 * xmm4_12 + var_164 * xmm7_17
        float var_e0_1 =
            var_180 * xmm5_23 + var_190 * xmm6_15 + var_170 * xmm4_12 + var_160 * xmm7_17
        float var_9c
        float var_98
        float var_94
        float var_90
        float xmm6_20 = var_9c * var_15c + var_98 * var_14c + var_94 * var_13c + var_90 * var_12c
        float xmm5_28 = var_9c * var_158 + var_98 * var_148 + var_94 * var_138 + var_90 * var_128
        float xmm4_17 = var_9c * var_154 + var_98 * var_144 + var_94 * var_134 + var_90 * var_124
        float xmm7_22 = var_9c * var_150 + var_98 * var_140 + var_94 * var_130 + var_90 * var_120
        float var_dc_1 =
            var_19c * xmm6_20 + var_18c * xmm5_28 + var_17c * xmm4_17 + var_16c * xmm7_22
        float var_d8_1 =
            var_198 * xmm6_20 + var_188 * xmm5_28 + var_178 * xmm4_17 + var_168 * xmm7_22
        float var_d4_1 =
            var_184 * xmm5_28 + var_194 * xmm6_20 + var_174 * xmm4_17 + var_164 * xmm7_22
        float var_d0_1 =
            var_180 * xmm5_28 + var_190 * xmm6_20 + var_170 * xmm4_17 + var_160 * xmm7_22
        float var_8c
        float var_88
        float var_84
        float var_80
        float xmm6_25 = var_8c * var_15c + var_88 * var_14c + var_84 * var_13c + var_80 * var_12c
        float xmm5_33 = var_8c * var_158 + var_88 * var_148 + var_84 * var_138 + var_80 * var_128
        int32_t eax_29 = *(arg1 + 0xc)
        float xmm4_22 = var_8c * var_154 + var_88 * var_144 + var_84 * var_134 + var_80 * var_124
        float xmm7_27 = var_8c * var_150 + var_88 * var_140 + var_84 * var_130 + var_80 * var_120
        float var_cc_1 =
            var_18c * xmm5_33 + var_19c * xmm6_25 + var_17c * xmm4_22 + var_16c * xmm7_27
        float var_c8_1 =
            var_188 * xmm5_33 + var_198 * xmm6_25 + var_178 * xmm4_22 + var_168 * xmm7_27
        float var_c4_1 =
            var_184 * xmm5_33 + var_194 * xmm6_25 + var_174 * xmm4_22 + var_164 * xmm7_27
        float var_c0_1 =
            var_180 * xmm5_33 + var_190 * xmm6_25 + var_170 * xmm4_22 + var_160 * xmm7_27
        
        if (eax_29 == 0)
            int32_t var_1e4_6 = ecx_22
            int32_t var_1ec_2 = ecx_22
            sub_5573b0(arg1 + 0x31c, xmm2_1, arg1 + 0x310, &var_fc, var_1a0_1, &var_1b0, &var_1bc, 
                arg16, xmm1_37 * xmm1_32, xmm1_42 * xmm1_32, *(arg1 + 0x290), *(arg1 + 0x294), 
                xmm1_18, xmm1_22, xmm1_26, arg10, arg11, xmm1_44, arg12, arg5, arg19)
            int32_t eax_33
            eax_33.b = 1
            return eax_33
        
        if (eax_29 == 1)
            int32_t var_1f0_1 = ecx_22
            eax = sub_575660(arg1, arg4, arg1 + 0x310, &var_fc, *(arg1 + 0xbc), &var_1c8, &var_1b0, 
                &var_1bc, xmm1_32, xmm1_37 * xmm1_32, xmm1_42 * xmm1_32, xmm1_18, xmm1_22, xmm1_26, 
                arg10, arg11, xmm1_44, arg17, arg18, arg20, arg21)
            
            if (eax.b == 0)
                eax.b = 0
                return eax
    else
        *(arg1 + 0x274) = 0

eax.b = 1
return eax
