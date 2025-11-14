// 函数: sub_572e40
// 地址: 0x572e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_28c[0x10]
int32_t eax_1 = __security_cookie ^ &var_28c
float result

if (*(arg1 + 0xc) != 2)
    result.b = 1
else
    int32_t var_78_1 = *(arg2 + 0x12c)
    int32_t xmm0_2 = (zx.o(0)).d
    
    if (*(arg1 + 0x21c) == 1 && *(arg2 + 0x128) != 0)
        void* eax_3 = sub_541c40(arg2, **(arg1 + 0x220))
        
        if (eax_3 != 0 && *(eax_3 + 0x19c) == 0)
            xmm0_2 = *(eax_3 + 0x12c)
        
        var_78_1 = xmm0_2
    
    float var_114
    EnumC13Lines::EnumC13Lines(&var_114)
    sub_47b960(&var_114, *(arg2 + 0x58) ^ (data_7094c0).d)
    float var_d4
    EnumC13Lines::EnumC13Lines(&var_d4)
    sub_47b8b0(&var_d4, *(arg2 + 0x54) ^ (data_7094c0).d)
    float var_17c
    EnumC13Lines::EnumC13Lines(&var_17c)
    sub_47b7f0(&var_17c, *(arg2 + 0x50) ^ (data_7094c0).d)
    float xmm4_1 = var_17c
    float var_178
    float var_174
    float var_170
    float var_d0
    float var_c0
    float var_b0
    float var_a0
    float xmm7_5 = var_d0 * xmm4_1 + var_c0 * var_178 + var_b0 * var_174 + var_a0 * var_170
    float var_c4
    float var_b4
    float var_a4
    float xmm5_5 = xmm4_1 * var_d4 + var_178 * var_c4 + var_174 * var_b4 + var_170 * var_a4
    float var_cc
    float var_bc
    float var_ac
    float var_9c
    float xmm6_5 = var_cc * xmm4_1 + var_bc * var_178 + var_ac * var_174 + var_9c * var_170
    float var_c8
    float var_b8
    float var_a8
    float var_98
    float xmm5_10 = var_c8 * xmm4_1 + var_b8 * var_178 + var_a8 * var_174 + var_98 * var_170
    float var_104
    float var_f4
    float var_e4
    float xmm1_12 = xmm5_5 * var_114 + xmm7_5 * var_104 + xmm6_5 * var_f4 + xmm5_10 * var_e4
    float var_4c = xmm1_12
    float var_110
    float var_100
    float var_f0
    float var_e0
    float xmm1_17 = xmm5_5 * var_110 + xmm7_5 * var_100 + xmm6_5 * var_f0 + xmm5_10 * var_e0
    float var_48_1 = xmm1_17
    float var_10c
    float var_fc
    float var_ec
    float var_dc
    float xmm1_22 = xmm5_5 * var_10c + xmm7_5 * var_fc + xmm6_5 * var_ec + xmm5_10 * var_dc
    float var_108
    float var_f8
    float var_e8
    float var_d8
    float xmm2_6 = xmm5_5 * var_108 + xmm7_5 * var_f8 + xmm6_5 * var_e8 + xmm5_10 * var_d8
    float var_40_1 = xmm2_6
    float var_44_1 = xmm1_22
    float var_16c
    float var_168
    float var_164
    float var_160
    float xmm5_16 = var_16c * var_d0 + var_168 * var_c0 + var_164 * var_b0 + var_160 * var_a0
    float xmm4_6 = var_16c * var_d4 + var_168 * var_c4 + var_164 * var_b4 + var_160 * var_a4
    float xmm4_11 = var_16c * var_cc + var_168 * var_bc + var_164 * var_ac + var_160 * var_9c
    float xmm6_11 = var_16c * var_c8 + var_168 * var_b8 + var_164 * var_a8 + var_160 * var_98
    float xmm1_29 = xmm4_6 * var_114 + xmm5_16 * var_104 + xmm4_11 * var_f4 + xmm6_11 * var_e4
    float var_3c_1 = xmm1_29
    float xmm1_34 = xmm4_6 * var_110 + xmm5_16 * var_100 + xmm4_11 * var_f0 + xmm6_11 * var_e0
    float var_38_1 = xmm1_34
    float xmm1_39 = xmm4_6 * var_10c + xmm5_16 * var_fc + xmm4_11 * var_ec + xmm6_11 * var_dc
    float xmm2_13 = xmm4_6 * var_108 + xmm5_16 * var_f8 + xmm4_11 * var_e8 + xmm6_11 * var_d8
    float var_30_1 = xmm2_13
    float var_34_1 = xmm1_39
    float var_15c
    float var_158
    float var_154
    float var_150
    float xmm5_22 = var_15c * var_d0 + var_158 * var_c0 + var_154 * var_b0 + var_150 * var_a0
    float xmm4_17 = var_15c * var_d4 + var_158 * var_c4 + var_154 * var_b4 + var_150 * var_a4
    float xmm4_22 = var_15c * var_cc + var_158 * var_bc + var_154 * var_ac + var_150 * var_9c
    float xmm6_17 = var_15c * var_c8 + var_158 * var_b8 + var_154 * var_a8 + var_150 * var_98
    float xmm1_46 = xmm4_17 * var_114 + xmm5_22 * var_104 + xmm4_22 * var_f4 + xmm6_17 * var_e4
    float var_2c_1 = xmm1_46
    float xmm1_51 = xmm4_17 * var_110 + xmm5_22 * var_100 + xmm4_22 * var_f0 + xmm6_17 * var_e0
    float var_28_1 = xmm1_51
    float xmm1_56 = xmm4_17 * var_10c + xmm5_22 * var_fc + xmm4_22 * var_ec + xmm6_17 * var_dc
    float xmm2_20 = xmm4_17 * var_108 + xmm5_22 * var_f8 + xmm4_22 * var_e8 + xmm6_17 * var_d8
    float var_20_1 = xmm2_20
    float var_24_1 = xmm1_56
    float var_14c
    float var_148
    float var_144
    float var_140
    float xmm5_28 = var_14c * var_d0 + var_148 * var_c0 + var_144 * var_b0 + var_140 * var_a0
    float xmm4_28 = var_14c * var_d4 + var_148 * var_c4 + var_144 * var_b4 + var_140 * var_a4
    float xmm4_33 = var_14c * var_cc + var_148 * var_bc + var_144 * var_ac + var_140 * var_9c
    float xmm6_23 = var_14c * var_c8 + var_148 * var_b8 + var_144 * var_a8 + var_140 * var_98
    float xmm1_63 = xmm4_28 * var_114 + xmm5_28 * var_104 + xmm4_33 * var_f4 + xmm6_23 * var_e4
    float xmm1_68 = xmm4_28 * var_110 + xmm5_28 * var_100 + xmm4_33 * var_f0 + xmm6_23 * var_e0
    float xmm1_73 = xmm4_28 * var_10c + xmm5_28 * var_fc + xmm4_33 * var_ec + xmm6_23 * var_dc
    float xmm2_27 = xmm4_28 * var_108 + xmm5_28 * var_f8 + xmm4_33 * var_e8 + xmm6_23 * var_d8
    float var_10_1 = xmm2_27
    EnumC13Lines::EnumC13Lines(&var_114)
    sub_47b960(&var_114, *(arg2 + 0x58))
    EnumC13Lines::EnumC13Lines(&var_d4)
    sub_47b8b0(&var_d4, *(arg2 + 0x54))
    EnumC13Lines::EnumC13Lines(&var_17c)
    sub_47b7f0(&var_17c, *(arg2 + 0x50))
    float xmm4_35 = var_17c
    float xmm7_12 = var_d0 * xmm4_35 + var_c0 * var_178 + var_b0 * var_174 + var_a0 * var_170
    float xmm5_34 = xmm4_35 * var_d4 + var_178 * var_c4 + var_174 * var_b4 + var_170 * var_a4
    float xmm6_29 = var_cc * xmm4_35 + var_bc * var_178 + var_ac * var_174 + var_9c * var_170
    float xmm5_39 = var_c8 * xmm4_35 + var_b8 * var_178 + var_a8 * var_174 + var_98 * var_170
    float xmm2_33 = xmm5_34 * var_114 + xmm7_12 * var_104 + xmm6_29 * var_f4 + var_e4 * xmm5_39
    float var_20c = xmm2_33
    float xmm2_38 = xmm5_34 * var_110 + xmm7_12 * var_100 + xmm6_29 * var_f0 + var_e0 * xmm5_39
    float var_208_1 = xmm2_38
    float xmm2_43 = xmm5_34 * var_10c + xmm7_12 * var_fc + xmm6_29 * var_ec + var_dc * xmm5_39
    float xmm1_82 = xmm5_34 * var_108 + xmm7_12 * var_f8 + xmm6_29 * var_e8 + var_d8 * xmm5_39
    float var_204_1 = xmm2_43
    float var_200_1 = xmm1_82
    float xmm6_35 = var_16c * var_d0 + var_168 * var_c0 + var_164 * var_b0 + var_160 * var_a0
    float xmm5_44 = var_16c * var_d4 + var_168 * var_c4 + var_164 * var_b4 + var_160 * var_a4
    float xmm4_40 = var_16c * var_cc + var_168 * var_bc + var_164 * var_ac + var_160 * var_9c
    float xmm7_18 = var_16c * var_c8 + var_168 * var_b8 + var_164 * var_a8 + var_160 * var_98
    float xmm1_89 = var_114 * xmm5_44 + var_104 * xmm6_35 + var_f4 * xmm4_40 + var_e4 * xmm7_18
    float var_1fc_1 = xmm1_89
    float xmm1_94 = var_110 * xmm5_44 + var_100 * xmm6_35 + var_f0 * xmm4_40 + var_e0 * xmm7_18
    float var_1f8_1 = xmm1_94
    float xmm1_99 = var_10c * xmm5_44 + var_fc * xmm6_35 + var_ec * xmm4_40 + var_dc * xmm7_18
    float var_1f4_1 = xmm1_99
    float xmm6_40 = var_15c * var_d0 + var_158 * var_c0 + var_154 * var_b0 + var_150 * var_a0
    float xmm5_49 = var_15c * var_d4 + var_158 * var_c4 + var_154 * var_b4 + var_150 * var_a4
    float xmm4_45 = var_15c * var_cc + var_158 * var_bc + var_154 * var_ac + var_150 * var_9c
    float xmm7_23 = var_15c * var_c8 + var_158 * var_b8 + var_154 * var_a8 + var_150 * var_98
    float xmm1_111 = var_114 * xmm5_49 + var_104 * xmm6_40 + var_f4 * xmm4_45 + var_e4 * xmm7_23
    float var_1ec_1 = xmm1_111
    float xmm1_116 = var_110 * xmm5_49 + var_100 * xmm6_40 + var_f0 * xmm4_45 + var_e0 * xmm7_23
    float var_1e8_1 = xmm1_116
    float xmm1_121 = var_10c * xmm5_49 + var_fc * xmm6_40 + var_ec * xmm4_45 + var_dc * xmm7_23
    float var_1e4_1 = xmm1_121
    float xmm1_126 = var_108 * xmm5_49 + var_f8 * xmm6_40 + var_e8 * xmm4_45 + var_d8 * xmm7_23
    float var_1e0_1 = xmm1_126
    float xmm6_45 = var_14c * var_d0 + var_148 * var_c0 + var_144 * var_b0 + var_140 * var_a0
    float xmm5_54 = var_14c * var_d4 + var_148 * var_c4 + var_144 * var_b4 + var_140 * var_a4
    float xmm4_50 = var_14c * var_cc + var_148 * var_bc + var_144 * var_ac + var_140 * var_9c
    float xmm7_28 = var_14c * var_c8 + var_148 * var_b8 + var_144 * var_a8 + var_140 * var_98
    float xmm1_133 = var_114 * xmm5_54 + var_104 * xmm6_45 + var_f4 * xmm4_50 + var_e4 * xmm7_28
    float var_1dc_1 = xmm1_133
    float xmm1_138 = var_110 * xmm5_54 + var_100 * xmm6_45 + var_f0 * xmm4_50 + var_e0 * xmm7_28
    float var_1d8_1 = xmm1_138
    float xmm1_143 = var_10c * xmm5_54 + var_fc * xmm6_45 + var_ec * xmm4_50 + var_dc * xmm7_28
    float var_1d4_1 = xmm1_143
    float xmm1_148 = var_108 * xmm5_54 + var_f8 * xmm6_45 + var_e8 * xmm4_50 + var_d8 * xmm7_28
    float var_1d0_1 = xmm1_148
    void var_24c
    float var_18c
    int64_t var_188
    float var_128
    
    if (*(arg1 + 0xbc) != 4)
    label_574548:
        EnterCriticalSection(*(arg2 + 0x40) + 4)
        int32_t var_180_3 = *(arg2 + 0x38)
        CRITICAL_SECTION* lpCriticalSection = *(arg2 + 0x40) + 4
        var_188 = *(arg2 + 0x30)
        LeaveCriticalSection(lpCriticalSection)
        float xmm0_348 = *(arg2 + 0x5c)
        float xmm3_20 = xmm0_348 * *arg3
        float xmm1_157 = arg3[1] * xmm0_348
        float xmm2_60 = arg3[2] * xmm0_348
        float xmm4_58 = xmm1_89 * xmm1_157 + xmm2_33 * xmm3_20 + xmm1_111 * xmm2_60 + xmm1_133
        var_128 = xmm4_58
        float xmm5_60 = xmm1_94 * xmm1_157 + xmm2_38 * xmm3_20 + xmm1_116 * xmm2_60 + xmm1_138
        float xmm6_51 = xmm1_99 * xmm1_157 + xmm2_43 * xmm3_20 + xmm1_121 * xmm2_60 + xmm1_143
        float var_124_1 = xmm5_60
        float var_120_2 = xmm6_51
        float xmm0_365 =
            (var_108 * xmm5_44 + var_f8 * xmm6_35 + var_e8 * xmm4_40 + var_d8 * xmm7_18) * xmm1_157
            + xmm1_82 * xmm3_20 + xmm1_126 * xmm2_60 + xmm1_148
        xmm0_365 - 1f
        float* eax_19
        eax_19:1.b = (xmm0_365 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_365, 1f) ? 1 : 0) << 2
            | (xmm0_365 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            xmm0_365 f- 0
            eax_19:1.b = (xmm0_365 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_365, 0f) ? 1 : 0) << 2
                | (xmm0_365 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm1_162 = 1f / xmm0_365
                var_128 = xmm1_162 * xmm4_58
                float var_124_2 = xmm1_162 * xmm5_60
                float var_120_3 = xmm1_162 * xmm6_51
        
        float* eax_20 = sub_47c420(arg4, &var_28c)
        float xmm5_61 = eax_20[2]
        float xmm6_52 = eax_20[0xa]
        float xmm3_21 = eax_20[7]
        float xmm1_168 =
            xmm1_12 * *eax_20 + xmm1_17 * eax_20[4] + xmm1_22 * eax_20[8] + xmm2_6 * eax_20[0xc]
        float xmm1_173 =
            xmm1_12 * eax_20[1] + xmm1_17 * eax_20[5] + xmm1_22 * eax_20[9] + xmm2_6 * eax_20[0xd]
        float xmm4_60 = eax_20[0xf]
        float xmm2_62 = eax_20[0xb]
        float xmm1_178 =
            xmm1_12 * xmm5_61 + xmm1_17 * eax_20[6] + xmm1_22 * xmm6_52 + xmm2_6 * eax_20[0xe]
        float xmm1_179 = eax_20[3]
        float xmm0_392 =
            xmm1_12 * xmm1_179 + xmm1_17 * xmm3_21 + xmm1_22 * xmm2_62 + xmm2_6 * xmm4_60
        float xmm7_41 =
            xmm1_29 * *eax_20 + xmm1_34 * eax_20[4] + xmm1_39 * eax_20[8] + xmm2_13 * eax_20[0xc]
        float xmm7_45 =
            xmm1_29 * eax_20[1] + xmm1_34 * eax_20[5] + xmm1_39 * eax_20[9] + xmm2_13 * eax_20[0xd]
        float xmm7_49 =
            xmm1_29 * xmm5_61 + xmm1_34 * eax_20[6] + xmm1_39 * xmm6_52 + xmm2_13 * eax_20[0xe]
        float xmm0_419 =
            xmm1_29 * xmm1_179 + xmm1_34 * xmm3_21 + xmm1_39 * xmm2_62 + xmm2_13 * xmm4_60
        float xmm7_60 =
            xmm1_46 * *eax_20 + xmm1_51 * eax_20[4] + xmm1_56 * eax_20[8] + xmm2_20 * eax_20[0xc]
        float xmm7_65 =
            xmm1_46 * eax_20[1] + xmm1_51 * eax_20[5] + xmm1_56 * eax_20[9] + xmm2_20 * eax_20[0xd]
        float xmm7_69 =
            xmm1_46 * xmm5_61 + xmm1_51 * eax_20[6] + xmm1_56 * xmm6_52 + xmm2_20 * eax_20[0xe]
        float xmm0_444 =
            xmm1_46 * xmm1_179 + xmm1_51 * xmm3_21 + xmm1_56 * xmm2_62 + xmm2_20 * xmm4_60
        float xmm7_80 =
            xmm1_63 * *eax_20 + xmm1_68 * eax_20[4] + xmm1_73 * eax_20[8] + xmm2_27 * eax_20[0xc]
        float xmm7_85 =
            xmm1_63 * eax_20[1] + xmm1_68 * eax_20[5] + xmm1_73 * eax_20[9] + xmm2_27 * eax_20[0xd]
        float xmm5_65 =
            xmm1_63 * xmm5_61 + xmm1_68 * eax_20[6] + xmm1_73 * xmm6_52 + xmm2_27 * eax_20[0xe]
        float xmm0_469 =
            xmm1_63 * xmm1_179 + xmm1_68 * xmm3_21 + xmm1_73 * xmm2_62 + xmm2_27 * xmm4_60
        int32_t* eax_21 = sub_5b0b20(&var_24c, &var_128)
        float xmm2_67 = xmm1_168 f* *eax_21 + xmm1_173 f* eax_21[4] + xmm1_178 f* eax_21[8]
            + xmm0_392 f* eax_21[0xc]
        float xmm2_72 = xmm1_168 f* eax_21[1] + xmm1_173 f* eax_21[5] + xmm1_178 f* eax_21[9]
            + xmm0_392 f* eax_21[0xd]
        float xmm5_67 = eax_21[2]
        float xmm6_55 = eax_21[0xa]
        float xmm3_23 = eax_21[7]
        float xmm4_62 = eax_21[0xf]
        float xmm1_183 = eax_21[3]
        float xmm2_77 = xmm1_168 * xmm5_67 + xmm1_173 f* eax_21[6] + xmm1_178 * xmm6_55
            + xmm0_392 f* eax_21[0xe]
        float xmm2_78 = eax_21[0xb]
        float xmm7_92 =
            xmm1_168 * xmm1_183 + xmm1_173 * xmm3_23 + xmm1_178 * xmm2_78 + xmm0_392 * xmm4_62
        float xmm7_97 = xmm7_41 f* *eax_21 + xmm7_45 f* eax_21[4] + xmm7_49 f* eax_21[8]
            + xmm0_419 f* eax_21[0xc]
        float xmm7_101 = xmm7_41 f* eax_21[1] + xmm7_45 f* eax_21[5] + xmm7_49 f* eax_21[9]
            + xmm0_419 f* eax_21[0xd]
        float xmm7_105 =
            xmm7_41 * xmm5_67 + xmm7_45 f* eax_21[6] + xmm7_49 * xmm6_55 + xmm0_419 f* eax_21[0xe]
        float xmm7_110 =
            xmm7_41 * xmm1_183 + xmm7_45 * xmm3_23 + xmm7_49 * xmm2_78 + xmm0_419 * xmm4_62
        float xmm7_115 = xmm7_60 f* *eax_21 + xmm7_65 f* eax_21[4] + xmm7_69 f* eax_21[8]
            + xmm0_444 f* eax_21[0xc]
        float xmm7_120 = xmm7_60 f* eax_21[1] + xmm7_65 f* eax_21[5] + xmm7_69 f* eax_21[9]
            + xmm0_444 f* eax_21[0xd]
        float xmm7_125 =
            xmm7_60 * xmm5_67 + xmm7_65 f* eax_21[6] + xmm7_69 * xmm6_55 + xmm0_444 f* eax_21[0xe]
        float xmm7_130 =
            xmm7_60 * xmm1_183 + xmm7_65 * xmm3_23 + xmm7_69 * xmm2_78 + xmm0_444 * xmm4_62
        float xmm7_135 = xmm7_80 f* *eax_21 + xmm7_85 f* eax_21[4] + xmm5_65 f* eax_21[8]
            + xmm0_469 f* eax_21[0xc]
        float xmm7_140 = xmm7_80 f* eax_21[1] + xmm7_85 f* eax_21[5] + xmm5_65 f* eax_21[9]
            + xmm0_469 f* eax_21[0xd]
        float xmm7_145 =
            xmm7_80 * xmm5_67 + xmm7_85 f* eax_21[6] + xmm5_65 * xmm6_55 + xmm0_469 f* eax_21[0xe]
        float xmm6_60 =
            xmm7_80 * xmm1_183 + xmm7_85 * xmm3_23 + xmm5_65 * xmm2_78 + xmm0_469 * xmm4_62
        int32_t* eax_22 = sub_5b0b20(&var_17c, &var_188)
        float xmm6_61 = eax_22[2]
        float xmm7_146 = eax_22[0xa]
        float xmm0_587 = xmm2_72 f* eax_22[5]
        var_4c = xmm2_67 f* *eax_22 + xmm2_72 f* eax_22[4] + xmm2_77 f* eax_22[8]
            + xmm7_92 f* eax_22[0xc]
        float var_48_2 =
            xmm2_67 f* eax_22[1] + xmm0_587 + xmm2_77 f* eax_22[9] + xmm7_92 f* eax_22[0xd]
        float xmm4_64 = eax_22[7]
        float var_44_2 =
            xmm2_67 * xmm6_61 + xmm2_72 f* eax_22[6] + xmm2_77 * xmm7_146 + xmm7_92 f* eax_22[0xe]
        float xmm2_80 = eax_22[3]
        float xmm3_25 = eax_22[0xb]
        float xmm5_71 = eax_22[0xf]
        float var_40_2 =
            xmm2_67 * xmm2_80 + xmm2_72 * xmm4_64 + xmm2_77 * xmm3_25 + xmm7_92 * xmm5_71
        float var_3c_2 = xmm7_97 f* *eax_22 + xmm7_101 f* eax_22[4] + xmm7_105 f* eax_22[8]
            + xmm7_110 f* eax_22[0xc]
        float var_38_2 = xmm7_97 f* eax_22[1] + xmm7_101 f* eax_22[5] + xmm7_105 f* eax_22[9]
            + xmm7_110 f* eax_22[0xd]
        float var_34_2 = xmm7_97 * xmm6_61 + xmm7_101 f* eax_22[6] + xmm7_105 * xmm7_146
            + xmm7_110 f* eax_22[0xe]
        float var_30_2 =
            xmm7_97 * xmm2_80 + xmm7_101 * xmm4_64 + xmm7_105 * xmm3_25 + xmm7_110 * xmm5_71
        float var_2c_2 = xmm7_115 f* *eax_22 + xmm7_120 f* eax_22[4] + xmm7_125 f* eax_22[8]
            + xmm7_130 f* eax_22[0xc]
        float var_28_2 = xmm7_115 f* eax_22[1] + xmm7_120 f* eax_22[5] + xmm7_125 f* eax_22[9]
            + xmm7_130 f* eax_22[0xd]
        float var_24_2 = xmm7_115 * xmm6_61 + xmm7_120 f* eax_22[6] + xmm7_125 * xmm7_146
            + xmm7_130 f* eax_22[0xe]
        float var_20_2 =
            xmm7_115 * xmm2_80 + xmm7_120 * xmm4_64 + xmm7_125 * xmm3_25 + xmm7_130 * xmm5_71
        float xmm7_153[0x4] = xmm7_135 f* *eax_22 + xmm7_140 f* eax_22[4] + xmm7_145 f* eax_22[8]
            + xmm6_60 f* eax_22[0xc]
        int32_t var_1c_2 = xmm7_153
        int64_t xmm6_68 = xmm7_135 f* eax_22[1] + xmm7_140 f* eax_22[5] + xmm7_145 f* eax_22[9]
            + xmm6_60 f* eax_22[0xd]
        int32_t var_18_2 = xmm6_68
        float xmm5_77 = xmm7_135 f* eax_22[2] + xmm7_140 f* eax_22[6] + xmm7_145 f* eax_22[0xa]
            + xmm6_60 f* eax_22[0xe]
        float var_14_2 = xmm5_77
        float var_10_2 =
            xmm7_135 * xmm2_80 + xmm7_140 * xmm4_64 + xmm7_145 * xmm3_25 + xmm6_60 f* eax_22[0xf]
        float* eax_23 = sub_47c1a0(&var_4c, &var_18c)
        int64_t xmm7_154 = _mm_unpacklo_ps(xmm7_153, xmm6_68)
        *(arg5 i+ 4) = *eax_23
        *(arg5 i+ 0x14) = xmm7_154
        *(arg5 i+ 0x1c) = xmm5_77
        result.b = 1
    else
        result = *(arg1 + 0x30c)
        
        if (result == 0xffffffff)
            goto label_574548
        
        void* ecx_13 = *(arg2 + 0x1d8)
        
        if (ecx_13 != 0)
            void* eax_4 = sub_561670(ecx_13, result)
            
            if (eax_4 == 0)
                goto label_574548
            
            struct sealengine::CEmitterPos::VTable* var_194
            struct sealengine::CEmitterPos::VTable** eax_5 = sub_537660(&var_194, *(eax_4 + 0x20))
            float eax_6 = eax_5[3]
            var_128.q = *(eax_5 + 4)
            float var_1a4 = var_128 - *arg3
            float var_124
            float var_1a0_1 = var_124 - arg3[1]
            float var_19c_1 = eax_6 - arg3[2]
            sub_59f780(&var_1a4, &var_128)
            float xmm7_29 = var_128
            float xmm2_52 = var_124 * 0f
            var_1a4 = eax_6 - xmm2_52
            float var_19c_2 = xmm2_52 - xmm7_29
            float var_1a0_2 = xmm7_29 * 0f - eax_6 * 0f
            sub_59f780(&var_1a4, &var_188)
            float xmm5_55 = var_188:4.d
            int32_t var_170_1 = 0
            float xmm1_152 = var_188.d
            int32_t var_160_1 = 0
            int32_t var_140_1 = 0x3f800000
            var_17c = xmm1_152
            float var_180
            float var_178_1 = var_124 * var_180 - xmm5_55 * eax_6
            float var_174_1 = xmm7_29
            float var_16c_1 = xmm5_55
            float var_15c_1 = var_180
            float xmm1_153 = *(arg2 + 0x5c)
            float var_168_1 = xmm1_152 * eax_6 - xmm7_29 * var_180
            float var_164_1 = var_124
            var_150.o = zx.o(0)
            float var_158_1 = xmm7_29 * xmm5_55 - xmm1_152 * var_124
            float var_154_1 = eax_6
            var_188.d = xmm1_153 * *arg3
            var_188:4.d = xmm1_153 * arg3[1]
            float var_180_1 = xmm1_153 * arg3[2]
            int32_t* eax_8 = sub_5b0b20(&var_114, sub_53e950(arg2, &var_1a4))
            int32_t* eax_10 = sub_5b0b20(&var_d4, sub_47b190(&var_188, &var_128, &var_20c))
            int32_t* eax_12 = sub_52d060(&var_17c, &var_4c, &var_24c, &var_17c)
            float* eax_13 = sub_52d060(eax_12, eax_12, &var_28c, eax_10)
            sub_52d060(eax_13, eax_13, &var_4c, eax_8)
            int128_t xmm0_345 = *sub_47c1a0(&var_4c, &var_18c)
            int64_t xmm2_58 = _mm_unpacklo_ps(xmm1_63, xmm1_68)
            *(arg5 i+ 4) = xmm0_345
            *(arg5 i+ 0x14) = xmm2_58
            *(arg5 i+ 0x1c) = xmm1_73
            result.b = 1
        else
            result.b = 0

sub_69a5bc(eax_1 ^ &var_28c)
return result
