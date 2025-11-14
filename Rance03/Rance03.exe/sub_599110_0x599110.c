// 函数: sub_599110
// 地址: 0x599110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg2

if (edi s< 0)
    return 

int32_t eax
int32_t edx_3
edx_3:eax = muls.dp.d(0x2fa0be83, *(arg1 + 0xc) - *(arg1 + 8))
int32_t edx_4 = edx_3 s>> 5

if (edi s>= (edx_4 u>> 0x1f) + edx_4)
    return 

void* esi_2 = edi * 0xac + *(arg1 + 8)

if (*(esi_2 + 0x50) == 0)
    return 

int64_t var_28
sub_598700(arg1, &var_28, edi)
int32_t* eax_3 = arg3
int32_t i_1 = 0
float xmm0_2 = *eax_3 f+ *(esi_2 + 0xa0)
float xmm0_4 = eax_3[1] f+ *(esi_2 + 0xa4)
float xmm0_6 = eax_3[2] f+ *(esi_2 + 0xa8)
void* esi_3 = arg1
int32_t i

do
    float var_120
    float* eax_4 = sub_598700(esi_3, &var_120, arg2)
    i = eax_4[2]
    var_28 = *eax_4
    float xmm1_2 = var_28:4.d - xmm0_4
    float xmm2_2 = var_28.d - xmm0_2
    float i_2 = i
    float xmm0_9 = i_2 - xmm0_6
    
    if (9.99999975e-06f f>= _mm_sqrt_ss(0, xmm1_2 * xmm1_2 + xmm2_2 * xmm2_2 + xmm0_9 * xmm0_9))
        break
    
    int32_t j
    
    do
        int32_t ecx_1 = *(arg1 + 8)
        edi = *(edi * 0xac + ecx_1 + 8)
        
        if (edi == 0xffffffff)
            break
        
        void* esi_5 = edi * 0xac + ecx_1
        
        if (*(esi_5 + 0x50) == 0)
            break
        
        struct sealengine::CDualQuaternion::VTable* var_148
        struct sealengine::CDualQuaternion::VTable** eax_7 = sub_52c960(arg1 + 4, &var_148, edi)
        int32_t var_108_1 = 0
        int32_t var_f8_1 = 0
        float xmm0_12 = eax_7[2]
        float xmm1_6 = eax_7[1]
        float xmm7_1 = eax_7[3]
        float xmm5_2 = xmm0_12 * xmm0_12
        float xmm0_13 = xmm0_12 * xmm1_6
        float xmm3_2 = xmm7_1 * xmm1_6
        float xmm0_14 = eax_7[4]
        float xmm6_2 = xmm1_6 * xmm1_6
        float xmm4_2 = xmm0_14 * xmm1_6
        float xmm1_8 = xmm7_1 f* eax_7[2]
        float xmm2_5 = xmm7_1 * xmm7_1
        float xmm1_10 = xmm0_14 f* eax_7[2]
        float xmm1_12 = xmm0_14 * xmm7_1
        float xmm7_2 = 1f - (xmm2_5 + xmm5_2) * 2f
        float xmm0_20 = (xmm1_12 + xmm0_13) * 2f
        float var_114 = xmm7_2
        float var_110_1 = xmm0_20
        float xmm0_23 = (xmm3_2 - xmm1_10) * 2f
        float xmm7_5 = (xmm1_10 + xmm3_2) * 2f
        float var_10c_1 = xmm0_23
        float var_f4_1 = xmm7_5
        float xmm0_26 = (xmm0_13 - xmm1_12) * 2f
        float var_104_1 = xmm0_26
        float xmm0_27 = 1f - (xmm2_5 + xmm6_2) * 2f
        float var_100_1 = xmm0_27
        float xmm0_30 = (xmm1_8 - xmm4_2) * 2f
        float xmm2_10 = (xmm1_8 + xmm4_2) * 2f
        float var_f0_1 = xmm0_30
        float var_fc_1 = xmm2_10
        float xmm4_3 = eax_7[5]
        float xmm7_6 = 1f - (xmm5_2 + xmm6_2) * 2f
        float xmm2_11 = eax_7[8]
        int32_t var_e8_1 = 0
        int32_t var_d8_1 = 0x3f800000
        float xmm6_3 = eax_7[6]
        float xmm1_13 = eax_7[7]
        float var_ec_1 = xmm7_6
        float xmm5_10 = (xmm4_3 f* eax_7[4] - xmm2_11 f* eax_7[1] - xmm6_3 f* eax_7[3]
            + xmm1_13 f* eax_7[2]) * 2f
        float var_e4_1 = xmm5_10
        float xmm3_8 = (xmm4_3 f* eax_7[3] - xmm2_11 f* eax_7[2] - xmm1_13 f* eax_7[1]
            + xmm6_3 f* eax_7[4]) * 2f
        float var_e0_1 = xmm3_8
        float xmm6_8 = (xmm6_3 f* eax_7[1] - xmm2_11 f* eax_7[3] + xmm1_13 f* eax_7[4]
            - xmm4_3 f* eax_7[2]) * 2f
        float xmm0_47 = (xmm2_10 + xmm0_23 + xmm7_6) * 0f + xmm6_8
        float var_dc_1 = xmm6_8
        float xmm4_9 = (xmm0_26 + xmm7_2 + xmm7_5) * 0f + xmm5_10
        float xmm6_10 = var_28.d - xmm4_9
        float xmm5_15 = (xmm0_27 + xmm0_20 + xmm0_30) * 0f + xmm3_8
        float xmm3_10 = i_2 - xmm0_47
        float xmm7_8 = var_28:4.d - xmm5_15
        float var_ac_1 = xmm7_8
        float xmm1_18 = xmm7_8 * xmm7_8 + xmm6_10 * xmm6_10 + xmm3_10 * xmm3_10
        float xmm1_19 = _mm_sqrt_ss(xmm1_18, xmm1_18)
        xmm1_19 f- 0
        eax_7:1.b = (xmm1_19 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_19, 0f) ? 1 : 0) << 2
            | (xmm1_19 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float var_10_3
        struct sealengine::CDualQuaternion::VTable** var_c_3
        
        if (not(p_2))
            int64_t xmm0_53 = xmm6_10.q
            var_c_3 = xmm3_10
            arg3 = xmm0_53:4.d
            var_10_3 = xmm0_53.d
        else
            float xmm0_52 = 1f / xmm1_19
            var_10_3 = xmm6_10 * xmm0_52
            arg3 = xmm7_8 * xmm0_52
            var_c_3 = xmm3_10 * xmm0_52
        
        float xmm2_14 = xmm0_2 - xmm4_9
        float xmm3_13 = xmm0_4 - xmm5_15
        float xmm4_11 = xmm0_6 - xmm0_47
        float var_94_1 = xmm3_13
        float xmm1_23 = xmm3_13 * xmm3_13 + xmm2_14 * xmm2_14 + xmm4_11 * xmm4_11
        float xmm1_24 = _mm_sqrt_ss(xmm1_23, xmm1_23)
        xmm1_24 f- 0
        eax_7:1.b = (xmm1_24 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_24, 0f) ? 1 : 0) << 2
            | (xmm1_24 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        float var_1c_2
        float var_14_3
        float var_8_3
        
        if (not(p_4))
            int64_t xmm0_62 = xmm2_14.q
            var_1c_2 = xmm4_11
            var_8_3 = xmm0_62:4.d
            var_14_3 = xmm0_62.d
        else
            float xmm0_61 = 1f / xmm1_24
            var_14_3 = xmm2_14 * xmm0_61
            var_8_3 = xmm3_13 * xmm0_61
            var_1c_2 = xmm4_11 * xmm0_61
        
        void var_164
        int32_t* eax_9 = sub_5b0ec0(&var_114, &var_164)
        float xmm4_17 = eax_9[4] f* arg3 + var_10_3 f* *eax_9 + eax_9[8] f* var_c_3 f+ eax_9[0xc]
        float var_6c_1 = xmm4_17
        float xmm2_20 = eax_9[5] f* arg3 + eax_9[1] f* var_10_3 + eax_9[9] f* var_c_3 f+ eax_9[0xd]
        float var_68_1 = xmm2_20
        float xmm3_19 =
            eax_9[6] f* arg3 + eax_9[2] f* var_10_3 + eax_9[0xa] f* var_c_3 f+ eax_9[0xe]
        float var_64_1 = xmm3_19
        float xmm1_29 =
            eax_9[7] f* arg3 + eax_9[3] f* var_10_3 + eax_9[0xb] f* var_c_3 f+ eax_9[0xf]
        xmm1_29 - 1f
        eax_9:1.b = (xmm1_29 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_29, 1f) ? 1 : 0) << 2
            | (xmm1_29 < 1f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            xmm1_29 f- 0
            eax_9:1.b = (xmm1_29 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_29, 0f) ? 1 : 0) << 2
                | (xmm1_29 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                float xmm0_82 = 1f / xmm1_29
                xmm4_17 = xmm4_17 * xmm0_82
                xmm2_20 = xmm2_20 * xmm0_82
                xmm3_19 = xmm3_19 * xmm0_82
                var_6c_1 = xmm4_17
                float var_68_2 = xmm2_20
                var_64_1 = xmm3_19
        
        float xmm1_33 = xmm4_17 * xmm4_17 + xmm2_20 * xmm2_20 + xmm3_19 * xmm3_19
        float xmm1_34 = _mm_sqrt_ss(xmm1_33, xmm1_33)
        xmm1_34 f- 0
        eax_9:1.b = (xmm1_34 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_34, 0f) ? 1 : 0) << 2
            | (xmm1_34 < 0f ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        float var_10_4
        float var_c_4
        
        if (not(p_10))
            int64_t xmm0_88 = var_6c_1.q
            var_10_4 = var_64_1
            arg3 = xmm0_88:4.d
            var_c_4 = xmm0_88.d
        else
            float xmm0_87 = 1f / xmm1_34
            var_c_4 = xmm0_87 * xmm4_17
            arg3 = xmm2_20 * xmm0_87
            var_10_4 = xmm3_19 * xmm0_87
        
        float eax_11 = sub_5b0ec0(&var_114, &var_164)
        float xmm4_22 = *(eax_11 i+ 0x10) * var_8_3 + var_14_3 f* *eax_11
            + *(eax_11 i+ 0x20) * var_1c_2 f+ *(eax_11 i+ 0x30)
        float var_60_1 = xmm4_22
        float xmm2_26 = *(eax_11 i+ 0x14) * var_8_3 + *(eax_11 i+ 4) * var_14_3
            + *(eax_11 i+ 0x24) * var_1c_2 f+ *(eax_11 i+ 0x34)
        float var_5c_1 = xmm2_26
        float xmm3_25 = *(eax_11 i+ 0x18) * var_8_3 + *(eax_11 i+ 8) * var_14_3
            + *(eax_11 i+ 0x28) * var_1c_2 f+ *(eax_11 i+ 0x38)
        float var_58_1 = xmm3_25
        float xmm7_15 = *(eax_11 i+ 0x1c) * var_8_3 + *(eax_11 i+ 0xc) * var_14_3
            + *(eax_11 i+ 0x2c) * var_1c_2 f+ *(eax_11 i+ 0x3c)
        xmm7_15 - 1f
        eax_11:1.b = (xmm7_15 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_15, 1f) ? 1 : 0) << 2
            | (xmm7_15 < 1f ? 1 : 0)
        bool p_12 = unimplemented  {test ah, 0x44}
        
        if (p_12)
            xmm7_15 f- 0
            eax_11:1.b = (xmm7_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_15, 0f) ? 1 : 0) << 2
                | (xmm7_15 < 0f ? 1 : 0)
            bool p_14 = unimplemented  {test ah, 0x44}
            
            if (p_14)
                float xmm0_108 = 1f / xmm7_15
                xmm4_22 = xmm4_22 * xmm0_108
                xmm2_26 = xmm2_26 * xmm0_108
                xmm3_25 = xmm3_25 * xmm0_108
                var_60_1 = xmm4_22
                float var_5c_2 = xmm2_26
                var_58_1 = xmm3_25
        
        float xmm1_41 = xmm4_22 * xmm4_22 + xmm2_26 * xmm2_26 + xmm3_25 * xmm3_25
        float xmm1_42 = _mm_sqrt_ss(xmm1_41, xmm1_41)
        xmm1_42 f- 0
        eax_11:1.b = (xmm1_42 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_42, 0f) ? 1 : 0) << 2
            | (xmm1_42 < 0f ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        float xmm2_27
        float xmm3_26
        float xmm7_17
        
        if (not(p_16))
            int64_t xmm0_114 = var_60_1.q
            xmm2_27 = xmm0_114:4.d
            xmm7_17 = xmm0_114.d
            xmm3_26 = var_58_1
        else
            float xmm0_113 = 1f / xmm1_42
            xmm2_27 = xmm2_26 * xmm0_113
            xmm7_17 = xmm0_113 * xmm4_22
            xmm3_26 = xmm3_25 * xmm0_113
        
        float xmm2_32 = (xmm2_27 * arg3 + xmm7_17 * var_c_4 + xmm3_26 * var_10_4 + 1f) * 2f
        float xmm2_33 = _mm_sqrt_ss(xmm2_32, xmm2_32)
        xmm2_33 f- 0
        eax_11:1.b = (xmm2_33 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_33, 0f) ? 1 : 0) << 2
            | (xmm2_33 < 0f ? 1 : 0)
        bool p_18 = unimplemented  {test ah, 0x44}
        
        if (p_18)
            float xmm0_123 = 1f / xmm2_33
            int32_t eax_12 = *(esi_5 + 0x28)
            float xmm5_18[0x4] = *(esi_5 + 0x10)
            float xmm1_45 = (xmm2_27 * var_c_4 - xmm7_17 * arg3) * xmm0_123
            float xmm2_34 = xmm2_33 * 0.5f
            float xmm6_23 = (xmm3_26 * arg3 - xmm2_27 * var_10_4) * xmm0_123
            float xmm7_20 = (xmm7_17 * var_10_4 - xmm3_26 * var_c_4) * xmm0_123
            int64_t xmm0_124 = *(esi_5 + 0x20)
            float xmm1_47 = xmm5_18[0] * xmm6_23
            float xmm3_29 = _mm_shuffle_ps(xmm5_18, xmm5_18, 0xff)
            float xmm4_25 = _mm_shuffle_ps(xmm5_18, xmm5_18, 0x55)
            float xmm1_48 = xmm1_47 ^ (data_7094c0).d
            float xmm2_36 = _mm_shuffle_ps(xmm5_18, xmm5_18, 0xaa)
            float var_80_1 = xmm1_48 + xmm3_29 * xmm2_34 + ((xmm4_25 * xmm7_20) ^ (data_7094c0).d)
                + ((xmm2_36 * xmm1_45) ^ (data_7094c0).d)
            float var_8c = xmm5_18[0] * xmm2_34 + xmm3_29 * xmm6_23 + xmm4_25 * xmm1_45
                + ((xmm2_36 * xmm7_20) ^ (data_7094c0).d)
            float var_88_1 = xmm4_25 * xmm2_34 + xmm3_29 * xmm7_20 + xmm2_36 * xmm6_23
                + ((xmm5_18[0] * xmm1_45) ^ (data_7094c0).d)
            float var_84_1 = xmm2_36 * xmm2_34 + xmm3_29 * xmm1_45 + xmm5_18 f* xmm7_20
                + ((xmm4_25 * xmm6_23) ^ (data_7094c0).d)
            int32_t var_44
            sub_5b1e90(&var_44)
            int32_t xmm0_147 = *(esi_5 + 0x54)
            int32_t xmm1_62 = var_44
            
            if (xmm0_147 f> xmm1_62)
                var_44 = xmm0_147
            else
                xmm0_147 = *(esi_5 + 0x60)
                
                if (not(xmm1_62 f<= xmm0_147))
                    var_44 = xmm0_147
            
            int32_t xmm0_148 = *(esi_5 + 0x58)
            int32_t var_40
            
            if (xmm0_148 f> var_40)
                var_40 = xmm0_148
            else
                xmm0_148 = *(esi_5 + 0x64)
                
                if (not(var_40 f<= xmm0_148))
                    var_40 = xmm0_148
            
            int32_t xmm0_149 = *(esi_5 + 0x5c)
            int32_t var_3c
            
            if (xmm0_149 f> var_3c)
                var_3c = xmm0_149
            else
                xmm0_149 = *(esi_5 + 0x68)
                
                if (not(var_3c f<= xmm0_149))
                    var_3c = xmm0_149
            
            sub_5b1670(&var_8c, &var_44)
            *(esi_5 + 0x10) = var_8c.o
            *(esi_5 + 0x20) = xmm0_124
            *(esi_5 + 0x28) = eax_12
            float* eax_15 = sub_535d80(sub_52c960(arg1 + 4, &var_148, arg2), &var_114)
            float xmm4_32 = (eax_15[7] + eax_15[3] + eax_15[0xb]) * 0f + eax_15[0xf]
            float xmm1_69 = (eax_15[4] + *eax_15 + eax_15[8]) * 0f + eax_15[0xc]
            float xmm2_45 = (eax_15[5] + eax_15[1] + eax_15[9]) * 0f + eax_15[0xd]
            xmm4_32 - 1f
            float i_4 = (eax_15[6] + eax_15[2] + eax_15[0xa]) * 0f + eax_15[0xe]
            float var_54_1 = xmm1_69
            eax_15:1.b = (xmm4_32 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_32, 1f) ? 1 : 0) << 2
                | (xmm4_32 < 1f ? 1 : 0)
            float var_50_1 = xmm2_45
            float i_3 = i_4
            bool p_20 = unimplemented  {test ah, 0x44}
            
            if (p_20)
                xmm4_32 f- 0
                eax_15:1.b = (xmm4_32 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm4_32, 0f) ? 1 : 0) << 2 | (xmm4_32 < 0f ? 1 : 0)
                bool p_22 = unimplemented  {test ah, 0x44}
                
                if (p_22)
                    float xmm0_152 = 1f / xmm4_32
                    var_54_1 = xmm1_69 * xmm0_152
                    float var_50_2 = xmm2_45 * xmm0_152
                    i_3 = i_4 * xmm0_152
            
            var_28 = var_54_1.q
            i_2 = i_3
        
        float xmm2_48 = var_28:4.d - xmm0_4
        float xmm1_72 = var_28.d - xmm0_2
        float xmm0_155 = i_2 - xmm0_6
        j = _mm_sqrt_ss(0, xmm2_48 * xmm2_48 + xmm1_72 * xmm1_72 + xmm0_155 * xmm0_155)
    while (9.99999975e-06f f< j)
    esi_3 = arg1
    i = i_1 + 1
    edi = arg2
    i_1 = i
while (i s< 5)
