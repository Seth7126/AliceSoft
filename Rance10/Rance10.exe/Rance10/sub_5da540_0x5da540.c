// 函数: sub_5da540
// 地址: 0x5da540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0)
    return 

int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
int32_t edx_4 = edx_3 s>> 6
int32_t edx_5 = arg2

if (edx_5 s>= (edx_4 u>> 0x1f) + edx_4)
    return 

int32_t esi_1 = *arg1
int32_t ecx = edx_5 * 0xd8
int32_t var_15c_1 = ecx

if (*(esi_1 + ecx + 0x7c) == 0)
    return 

float xmm4_2 = *arg3 f+ *(esi_1 + ecx + 0xcc)
float xmm6_2 = *(esi_1 + ecx + 0xd0) f+ arg3[1]
float xmm7_2 = *(esi_1 + ecx + 0xd4) f+ arg3[2]
int32_t i_1 = 0
float var_154_1 = xmm4_2
float var_158_1 = xmm6_2
float var_150_1 = xmm7_2
int32_t i

do
    float xmm3_1[0x4] = *(esi_1 + ecx + 0x6c)
    int64_t xmm1_1 = *(esi_1 + ecx + 0x70)
    float xmm2_1 = *(esi_1 + ecx + 0x74)
    float xmm3_2 = xmm3_1 f- xmm4_2
    float xmm1_2 = xmm1_1 f- xmm6_2
    float xmm2_2 = xmm2_1 - xmm7_2
    int64_t var_16c_1 = _mm_unpacklo_ps(xmm3_1, xmm1_1)
    int32_t var_164_1 = xmm2_1
    
    if (9.99999975e-06f f>= sub_484cc0(xmm3_2 * xmm3_2 + xmm1_2 * xmm1_2 + xmm2_2 * xmm2_2))
        break
    
    bool cond:1_1
    
    do
        edx_5 = *(edx_5 * 0xd8 + esi_1 + 4)
        
        if (edx_5 == 0xffffffff)
            break
        
        int32_t edi_1 = edx_5 * 0xd8
        
        if (*(edi_1 + esi_1 + 0x7c) == 0)
            break
        
        float xmm1_4[0x4] = *(edi_1 + esi_1 + 0x4c)
        float xmm7_3[0x4] = *(edi_1 + esi_1 + 0x3c)
        float xmm2_4[0x4] = *(edi_1 + esi_1 + 0x5c)
        float xmm3_6[0x4] = *(edi_1 + esi_1 + 0x6c)
        float xmm0_6 = xmm1_4[0] f* data_7fd4dc
        float xmm4_4 = xmm7_3[0] f* data_7fd4d8
        float xmm6_5 = _mm_shuffle_ps(xmm7_3, xmm7_3, 0x55) f* data_7fd4d8
        float xmm0_8 = xmm2_4[0] f* data_7fd4e0
        float var_88[0x4] = xmm7_3
        float var_78_1[0x4] = xmm1_4
        float xmm4_7 = xmm4_4 + xmm0_6 + xmm0_8 f+ xmm3_6
        float var_68_1[0x4] = xmm2_4
        float var_188_1 = xmm4_7
        float var_58_1[0x4] = xmm3_6
        float xmm6_8 = xmm6_5 + _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55) f* data_7fd4dc
            + _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55) f* data_7fd4e0
            + _mm_shuffle_ps(xmm3_6, xmm3_6, 0x55)
        float xmm7_5 = _mm_shuffle_ps(xmm7_3, *(edi_1 + esi_1 + 0x3c), 0xaa) f* data_7fd4d8
        float xmm0_20 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa) f* data_7fd4dc
        float xmm1_6 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xff) f* data_7fd4dc
        float xmm0_23 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa) f* data_7fd4e0
        float xmm2_6 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff) f* data_7fd4e0
        float xmm0_25 = _mm_shuffle_ps(xmm3_6, xmm3_6, 0xaa)
        float xmm3_7 = _mm_shuffle_ps(xmm3_6, xmm3_6, 0xff)
        float xmm7_8 = xmm7_5 + xmm0_20 + xmm0_23 + xmm0_25
        float xmm0_26[0x4] = *(edi_1 + esi_1 + 0x3c)
        int64_t xmm0_31 =
            _mm_shuffle_ps(xmm0_26, xmm0_26, 0xff) f* data_7fd4d8 + xmm1_6 + xmm2_6 + xmm3_7
        xmm0_31 f- 1f
        int32_t eax
        eax:1.b = (xmm0_31 f== 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_31, 1f) ? 1 : 0) << 2
            | (xmm0_31 f< 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            float xmm1_7 = xmm0_31.d
            xmm1_7 f- 0
            eax:1.b = (xmm1_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_7, 0f) ? 1 : 0) << 2
                | (xmm1_7 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm0_32 = 1f / xmm1_7
                xmm4_7 = xmm4_7 * xmm0_32
                xmm6_8 = xmm6_8 * xmm0_32
                var_188_1 = xmm4_7
                xmm7_8 = xmm7_8 * xmm0_32
        
        float xmm2_8 = var_16c_1.d - xmm4_7
        float xmm3_9 = var_16c_1:4.d - xmm6_8
        float xmm4_9 = var_164_1 f- xmm7_8
        float var_100_1 = xmm3_9
        float xmm0_37 = sub_484cc0(xmm3_9 * xmm3_9 + xmm2_8 * xmm2_8 + xmm4_9 * xmm4_9)
        xmm0_37 f- 0
        eax:1.b = (xmm0_37 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_37, 0f) ? 1 : 0) << 2
            | (xmm0_37 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        float var_18c_1
        float var_180_1
        float var_17c_1
        
        if (not(p_6))
            int64_t xmm0_38 = xmm2_8.q
            var_17c_1 = xmm4_9
            var_18c_1 = xmm0_38:4.d
            var_180_1 = xmm0_38.d
        else
            float xmm1_13 = 1f / xmm0_37
            var_180_1 = xmm2_8 * xmm1_13
            var_18c_1 = xmm3_9 * xmm1_13
            var_17c_1 = xmm4_9 * xmm1_13
        
        float xmm2_11 = var_154_1 - var_188_1
        float xmm3_12 = var_158_1 - xmm6_8
        float xmm4_12 = var_150_1 - xmm7_8
        float var_e8_1 = xmm3_12
        float xmm0_46 = sub_484cc0(xmm3_12 * xmm3_12 + xmm2_11 * xmm2_11 + xmm4_12 * xmm4_12)
        xmm0_46 f- 0
        eax:1.b = (xmm0_46 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_46, 0f) ? 1 : 0) << 2
            | (xmm0_46 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        float var_188_2
        float var_160_1
        int64_t var_120_1
        
        if (not(p_8))
            int64_t xmm0_47 = xmm2_11.q
            var_120_1.d = xmm4_12
            var_188_2 = xmm0_47:4.d
            var_160_1 = xmm0_47.d
        else
            float xmm1_18 = 1f / xmm0_46
            var_160_1 = xmm2_11 * xmm1_18
            var_188_2 = xmm3_12 * xmm1_18
            var_120_1.d = xmm4_12 * xmm1_18
        
        void var_48
        int32_t* eax_6 = sub_6cb130(&var_88, &var_48)
        float xmm2_17 =
            eax_6[4] f* var_18c_1 + var_180_1 f* *eax_6 + eax_6[8] f* var_17c_1 f+ eax_6[0xc]
        float var_148_1 = xmm2_17
        float xmm3_18 =
            eax_6[5] f* var_18c_1 + eax_6[1] f* var_180_1 + eax_6[9] f* var_17c_1 f+ eax_6[0xd]
        float var_144_1 = xmm3_18
        float xmm4_18 =
            eax_6[6] f* var_18c_1 + eax_6[2] f* var_180_1 + eax_6[0xa] f* var_17c_1 f+ eax_6[0xe]
        float var_140_1 = xmm4_18
        float xmm7_13 =
            eax_6[7] f* var_18c_1 + eax_6[3] f* var_180_1 + eax_6[0xb] f* var_17c_1 f+ eax_6[0xf]
        xmm7_13 - 1f
        eax_6:1.b = (xmm7_13 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_13, 1f) ? 1 : 0) << 2
            | (xmm7_13 < 1f ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        
        if (p_10)
            xmm7_13 f- 0
            eax_6:1.b = (xmm7_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_13, 0f) ? 1 : 0) << 2
                | (xmm7_13 < 0f ? 1 : 0)
            bool p_12 = unimplemented  {test ah, 0x44}
            
            if (p_12)
                float xmm0_67 = 1f / xmm7_13
                xmm2_17 = xmm2_17 * xmm0_67
                xmm3_18 = xmm3_18 * xmm0_67
                xmm4_18 = xmm4_18 * xmm0_67
                var_148_1 = xmm2_17
                float var_144_2 = xmm3_18
                var_140_1 = xmm4_18
        
        float xmm0_72 = sub_484cc0(xmm3_18 * xmm3_18 + xmm2_17 * xmm2_17 + xmm4_18 * xmm4_18)
        xmm0_72 f- 0
        eax_6:1.b = (xmm0_72 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_72, 0f) ? 1 : 0) << 2
            | (xmm0_72 < 0f ? 1 : 0)
        bool p_14 = unimplemented  {test ah, 0x44}
        float var_184_2
        float var_180_2
        float var_17c_2
        
        if (not(p_14))
            int64_t xmm0_73 = var_148_1.q
            var_180_2 = var_140_1
            var_17c_2 = xmm0_73:4.d
            var_184_2 = xmm0_73.d
        else
            float xmm1_24 = 1f / xmm0_72
            var_184_2 = xmm2_17 * xmm1_24
            var_17c_2 = xmm3_18 * xmm1_24
            var_180_2 = xmm4_18 * xmm1_24
        
        eax = sub_6cb130(&var_88, &var_48)
        float xmm6_12 = var_120_1.d
        float xmm3_24 =
            *(eax + 0x10) * var_188_2 + *eax * var_160_1 + *(eax + 0x20) * xmm6_12 f+ *(eax + 0x30)
        float var_13c_1 = xmm3_24
        float xmm2_23 = *(eax + 0x14) * var_188_2 + *(eax + 4) * var_160_1
            + *(eax + 0x24) * xmm6_12 f+ *(eax + 0x34)
        float var_138_1 = xmm2_23
        float xmm4_24 = *(eax + 0x18) * var_188_2 + *(eax + 8) * var_160_1
            + *(eax + 0x28) * xmm6_12 f+ *(eax + 0x38)
        float var_134_1 = xmm4_24
        float xmm7_18 = *(eax + 0x1c) * var_188_2 + *(eax + 0xc) * var_160_1
            + *(eax + 0x2c) * xmm6_12 f+ *(eax + 0x3c)
        xmm7_18 - 1f
        eax:1.b = (xmm7_18 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_18, 1f) ? 1 : 0) << 2
            | (xmm7_18 < 1f ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        
        if (p_16)
            xmm7_18 f- 0
            eax:1.b = (xmm7_18 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_18, 0f) ? 1 : 0) << 2
                | (xmm7_18 < 0f ? 1 : 0)
            bool p_18 = unimplemented  {test ah, 0x44}
            
            if (p_18)
                float xmm0_93 = 1f / xmm7_18
                xmm3_24 = xmm3_24 * xmm0_93
                xmm2_23 = xmm2_23 * xmm0_93
                xmm4_24 = xmm4_24 * xmm0_93
                var_13c_1 = xmm3_24
                float var_138_2 = xmm2_23
                var_134_1 = xmm4_24
        
        float xmm0_98 = sub_484cc0(xmm2_23 * xmm2_23 + xmm3_24 * xmm3_24 + xmm4_24 * xmm4_24)
        xmm0_98 f- 0
        eax:1.b = (xmm0_98 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_98, 0f) ? 1 : 0) << 2
            | (xmm0_98 < 0f ? 1 : 0)
        bool p_20 = unimplemented  {test ah, 0x44}
        float xmm2_24
        float xmm3_25
        float xmm4_25
        
        if (not(p_20))
            int64_t xmm0_99 = var_13c_1.q
            xmm2_24 = xmm0_99:4.d
            xmm3_25 = xmm0_99.d
            xmm4_25 = var_134_1
        else
            float xmm1_30 = 1f / xmm0_98
            xmm3_25 = xmm3_24 * xmm1_30
            xmm2_24 = xmm2_23 * xmm1_30
            xmm4_25 = xmm4_24 * xmm1_30
        
        var_120_1.d = xmm4_25 * var_17c_2 - xmm2_24 * var_180_2
        float xmm2_27 = xmm2_24 * var_17c_2 + xmm3_25 * var_184_2 + xmm4_25 * var_180_2
        float xmm0_109 = sub_484cc0(xmm2_27 + xmm2_27 + 2f)
        xmm0_109 f- 0
        eax:1.b = (xmm0_109 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_109, 0f) ? 1 : 0) << 2
            | (xmm0_109 < 0f ? 1 : 0)
        bool p_22 = unimplemented  {test ah, 0x44}
        
        if (not(p_22))
            ecx = var_15c_1
        else
            float xmm7_24 = 1f / xmm0_109
            int32_t eax_8 = *(edi_1 + esi_1 + 0x20)
            float xmm5_4[0x4] = *(edi_1 + esi_1 + 8)
            float xmm2_31 = xmm0_109 * 0.5f
            float xmm0_111 = xmm7_24 f* var_120_1.d
            int64_t xmm1_35 = *(edi_1 + esi_1 + 0x18)
            float xmm6_15 = xmm7_24 * (xmm3_25 * var_180_2 - xmm4_25 * var_184_2)
            float xmm7_25 = xmm7_24 * (xmm2_24 * var_184_2 - xmm3_25 * var_17c_2)
            float xmm1_37 = xmm5_4[0] * xmm0_111
            float xmm3_28 = _mm_shuffle_ps(xmm5_4, xmm5_4, 0xff)
            float xmm4_28 = _mm_shuffle_ps(xmm5_4, xmm5_4, 0x55)
            float xmm1_38 = xmm1_37 ^ (data_79aad0).d
            float xmm2_33 = _mm_shuffle_ps(xmm5_4, xmm5_4, 0xaa)
            float var_bc_1[0x4] = xmm5_4
            float var_124_1 = xmm1_38 + xmm3_28 * xmm2_31 + ((xmm4_28 * xmm6_15) ^ (data_79aad0).d)
                + ((xmm2_33 * xmm7_25) ^ (data_79aad0).d)
            float var_130 = xmm5_4[0] * xmm2_31 + xmm3_28 * xmm0_111 + xmm4_28 * xmm7_25
                + ((xmm2_33 * xmm6_15) ^ (data_79aad0).d)
            float var_12c_1 = xmm4_28 * xmm2_31 + xmm3_28 * xmm6_15 + xmm2_33 * xmm0_111
                + ((xmm5_4[0] * xmm7_25) ^ (data_79aad0).d)
            float var_128_1 = xmm2_33 * xmm2_31 + xmm3_28 * xmm7_25 + xmm5_4 f* xmm6_15
                + ((xmm4_28 * xmm0_111) ^ (data_79aad0).d)
            int32_t var_178
            sub_6cbea0(&var_178)
            int32_t xmm0_134 = *(edi_1 + esi_1 + 0x80)
            int32_t xmm1_52 = var_178
            
            if (xmm0_134 f> xmm1_52)
                var_178 = xmm0_134
            else
                xmm0_134 = *(edi_1 + esi_1 + 0x8c)
                
                if (not(xmm1_52 f<= xmm0_134))
                    var_178 = xmm0_134
            
            int32_t xmm0_135 = *(edi_1 + esi_1 + 0x84)
            int32_t var_174
            
            if (xmm0_135 f> var_174)
                var_174 = xmm0_135
            else
                xmm0_135 = *(edi_1 + esi_1 + 0x90)
                
                if (not(var_174 f<= xmm0_135))
                    var_174 = xmm0_135
            
            int32_t xmm0_136 = *(edi_1 + esi_1 + 0x88)
            int32_t var_170
            
            if (xmm0_136 f> var_170)
                var_170 = xmm0_136
            else
                xmm0_136 = *(edi_1 + esi_1 + 0x94)
                
                if (not(var_170 f<= xmm0_136))
                    var_170 = xmm0_136
            
            sub_6cbc40(&var_130, &var_178)
            ecx = var_15c_1
            *(edi_1 + esi_1 + 8) = var_130.o
            *(edi_1 + esi_1 + 0x18) = xmm1_35
            *(edi_1 + esi_1 + 0x20) = eax_8
            esi_1 = *arg1
            int32_t xmm0_140 = *(esi_1 + ecx + 0x74)
            var_16c_1 = _mm_unpacklo_ps(*(esi_1 + ecx + 0x6c), *(esi_1 + ecx + 0x70))
            var_164_1 = xmm0_140
        
        xmm6_2 = var_158_1
        float xmm2_41 = var_16c_1:4.d - xmm6_2
        xmm4_2 = var_154_1
        float xmm0_142 = var_16c_1.d - xmm4_2
        xmm7_2 = var_150_1
        float xmm1_57 = var_164_1 f- xmm7_2
        cond:1_1 = 9.99999975e-06f
            < sub_484cc0(xmm0_142 * xmm0_142 + xmm2_41 * xmm2_41 + xmm1_57 * xmm1_57)
    while (cond:1_1)
    edx_5 = arg2
    i = i_1 + 1
    i_1 = i
while (i s< 5)
