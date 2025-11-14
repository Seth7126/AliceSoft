// 函数: sub_53f820
// 地址: 0x53f820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0x40) + 4)
int32_t var_84 = *(arg1 + 0x38)
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x40) + 4
int64_t var_8c = *(arg1 + 0x30)
LeaveCriticalSection(lpCriticalSection)
float var_d0
EnumC13Lines::EnumC13Lines(&var_d0)
sub_47b960(&var_d0, *(arg1 + 0x58))
float var_110
EnumC13Lines::EnumC13Lines(&var_110)
sub_47b8b0(&var_110, *(arg1 + 0x54))
float var_150
EnumC13Lines::EnumC13Lines(&var_150)
sub_47b7f0(&var_150, *(arg1 + 0x50))
void var_80
int32_t* eax_4 = sub_5b0b90(&var_80, arg1 + 0x5c)
float xmm2 = eax_4[1]
float xmm1_3 = *eax_4
float xmm3 = eax_4[2]
float xmm4 = eax_4[3]
float var_14c
float var_13c
float var_12c
float var_11c
float xmm5_4 = var_14c * xmm1_3 + var_13c * xmm2 + var_12c * xmm3 + var_11c * xmm4
float var_140
float var_130
float var_120
float xmm7_4 = xmm1_3 * var_150 + xmm2 * var_140 + xmm3 * var_130 + xmm4 * var_120
float var_148
float var_138
float var_128
float var_118
float xmm6_4 = var_148 * xmm1_3 + var_138 * xmm2 + var_128 * xmm3 + var_118 * xmm4
float var_144
float var_134
float var_124
float var_114
float xmm5_9 = var_144 * xmm1_3 + var_134 * xmm2 + var_124 * xmm3 + var_114 * xmm4
float xmm3_1 = eax_4[4]
float xmm4_1 = eax_4[7]
float var_100
float var_f0
float var_e0
float xmm2_5 = var_110 * xmm7_4 + var_100 * xmm5_4 + var_f0 * xmm6_4 + var_e0 * xmm5_9
float var_10c
float var_fc
float var_ec
float var_dc
float xmm2_10 = var_10c * xmm7_4 + var_fc * xmm5_4 + var_ec * xmm6_4 + var_dc * xmm5_9
float var_108
float var_f8
float var_e8
float var_d8
float xmm2_15 = var_108 * xmm7_4 + var_f8 * xmm5_4 + var_e8 * xmm6_4 + var_d8 * xmm5_9
float xmm1_5 = eax_4[5]
float var_104
float var_f4
float var_e4
float var_d4
float xmm2_20 = var_104 * xmm7_4 + var_f4 * xmm5_4 + var_e4 * xmm6_4 + var_d4 * xmm5_9
float xmm2_21 = eax_4[6]
float xmm5_14 = var_13c * xmm1_5 + var_14c * xmm3_1 + var_12c * xmm2_21 + var_11c * xmm4_1
float xmm7_9 = xmm1_5 * var_140 + xmm3_1 * var_150 + xmm2_21 * var_130 + xmm4_1 * var_120
float xmm6_9 = var_138 * xmm1_5 + var_148 * xmm3_1 + var_128 * xmm2_21 + var_118 * xmm4_1
float xmm4_2 = eax_4[0xb]
float xmm5_19 = var_134 * xmm1_5 + var_144 * xmm3_1 + var_124 * xmm2_21 + var_114 * xmm4_1
float xmm3_6 = var_110 * xmm7_9 + var_100 * xmm5_14 + var_f0 * xmm6_9 + var_e0 * xmm5_19
float xmm3_11 = var_10c * xmm7_9 + var_fc * xmm5_14 + var_ec * xmm6_9 + var_dc * xmm5_19
float xmm3_12 = eax_4[8]
float xmm2_29 = var_108 * xmm7_9 + var_f8 * xmm5_14 + var_e8 * xmm6_9 + var_d8 * xmm5_19
float xmm1_7 = eax_4[9]
float xmm2_34 = var_104 * xmm7_9 + var_f4 * xmm5_14 + var_e4 * xmm6_9 + var_d4 * xmm5_19
float xmm2_35 = eax_4[0xa]
float xmm5_24 = var_13c * xmm1_7 + var_14c * xmm3_12 + var_12c * xmm2_35 + var_11c * xmm4_2
float xmm7_14 = xmm1_7 * var_140 + xmm3_12 * var_150 + xmm2_35 * var_130 + xmm4_2 * var_120
float xmm6_14 = var_138 * xmm1_7 + var_148 * xmm3_12 + var_128 * xmm2_35 + var_118 * xmm4_2
float xmm5_29 = var_134 * xmm1_7 + var_144 * xmm3_12 + var_124 * xmm2_35 + var_114 * xmm4_2
float xmm2_40 = var_110 * xmm7_14 + var_100 * xmm5_24 + var_f0 * xmm6_14 + var_e0 * xmm5_29
float xmm2_45 = var_10c * xmm7_14 + var_fc * xmm5_24 + var_ec * xmm6_14 + var_dc * xmm5_29
float xmm2_50 = var_108 * xmm7_14 + var_f8 * xmm5_24 + var_e8 * xmm6_14 + var_d8 * xmm5_29
float xmm3_13 = eax_4[0xc]
float xmm1_9 = eax_4[0xd]
float xmm4_3 = eax_4[0xf]
float xmm2_55 = var_104 * xmm7_14 + var_f4 * xmm5_24 + var_e4 * xmm6_14 + var_d4 * xmm5_29
float xmm2_56 = eax_4[0xe]
float xmm5_34 = var_13c * xmm1_9 + var_14c * xmm3_13 + xmm2_56 * var_12c + xmm4_3 * var_11c
float xmm5_39 = xmm1_9 * var_140 + xmm3_13 * var_150 + xmm2_56 * var_130 + xmm4_3 * var_120
float xmm5_43 = var_138 * xmm1_9 + var_148 * xmm3_13 + var_128 * xmm2_56 + xmm4_3 * var_118
float xmm1_13 = var_134 * xmm1_9 + var_144 * xmm3_13 + var_124 * xmm2_56 + var_114 * xmm4_3
float xmm2_59 = var_110 * xmm5_39 + var_100 * xmm5_34
float var_18c = xmm2_59
float xmm2_60 = xmm2_59 + xmm5_43 * var_f0
float var_18c_1 = xmm2_60
float xmm2_61 = xmm2_60 + xmm1_13 * var_e0
float xmm2_65 = var_10c * xmm5_39 + var_fc * xmm5_34 + var_ec * xmm5_43
float var_16c = xmm2_65
float xmm2_66 = xmm2_65 + xmm1_13 * var_dc
float xmm2_71 = var_108 * xmm5_39 + var_f8 * xmm5_34 + var_e8 * xmm5_43 + var_d8 * xmm1_13
float xmm2_76 = var_104 * xmm5_39 + var_f4 * xmm5_34 + var_e4 * xmm5_43 + var_d4 * xmm1_13
float var_c0
float var_b0
float var_a0
float xmm1_18 = var_c0 * xmm2_10 + var_d0 * xmm2_5 + var_b0 * xmm2_15 + var_a0 * xmm2_20
float var_cc
float var_bc
float var_ac
float var_9c
float xmm1_23 = var_bc * xmm2_10 + var_cc * xmm2_5 + var_ac * xmm2_15 + var_9c * xmm2_20
float var_c8
float var_b8
float var_a8
float var_98
float xmm1_28 = var_b8 * xmm2_10 + var_c8 * xmm2_5 + var_a8 * xmm2_15 + var_98 * xmm2_20
float var_c4
float var_b4
float var_a4
float var_94
float xmm2_80 = var_b4 * xmm2_10 + var_c4 * xmm2_5 + var_a4 * xmm2_15 + var_94 * xmm2_20
float xmm2_85 = var_c0 * xmm3_11 + var_d0 * xmm3_6 + var_b0 * xmm2_29 + var_a0 * xmm2_34
float xmm2_90 = var_bc * xmm3_11 + var_cc * xmm3_6 + var_ac * xmm2_29 + var_9c * xmm2_34
float xmm2_95 = var_b8 * xmm3_11 + var_c8 * xmm3_6 + var_a8 * xmm2_29 + var_98 * xmm2_34
float xmm7_20 = var_b4 * xmm3_11 + var_c4 * xmm3_6 + var_a4 * xmm2_29 + var_94 * xmm2_34
float xmm7_25 = var_c0 * xmm2_45 + var_d0 * xmm2_40 + var_b0 * xmm2_50 + var_a0 * xmm2_55
float xmm7_32 = var_bc * xmm2_45 + var_cc * xmm2_40 + var_ac * xmm2_50 + var_9c * xmm2_55
float xmm7_37 = var_b8 * xmm2_45 + var_c8 * xmm2_40 + var_a8 * xmm2_50 + var_98 * xmm2_55
float xmm7_41 = var_b4 * xmm2_45 + var_c4 * xmm2_40 + var_a4 * xmm2_50 + var_94 * xmm2_55
float xmm7_46 = var_c0 * xmm2_66 + var_d0 * xmm2_61 + var_b0 * xmm2_71 + xmm2_76 * var_a0
float xmm0_280 = var_bc * xmm2_66 + var_cc * xmm2_61 + var_ac * xmm2_71 + var_9c * xmm2_76
float xmm0_285 = var_b8 * xmm2_66 + var_c8 * xmm2_61 + var_a8 * xmm2_71 + var_98 * xmm2_76
float xmm0_290 = var_b4 * xmm2_66 + var_c4 * xmm2_61 + var_a4 * xmm2_71 + var_94 * xmm2_76
void var_40
int32_t* eax_5 = sub_5b0b20(&var_40, &var_8c)
float xmm7_53 = eax_5[6]
float xmm6_19 = eax_5[0xa]
float xmm0_298 = eax_5[1] f* xmm1_18
*arg2 = eax_5[4] f* xmm1_23 + *eax_5 * xmm1_18 + eax_5[8] f* xmm1_28 + eax_5[0xc] f* xmm2_80
float xmm0_304 = eax_5[2] f* xmm1_18
float xmm5_50 = eax_5[3]
arg2[1] = eax_5[5] f* xmm1_23 + xmm0_298 + eax_5[9] f* xmm1_28 + eax_5[0xd] f* xmm2_80
float xmm4_9 = eax_5[0xf]
float xmm3_19 = eax_5[7]
float xmm2_101 = eax_5[0xb]
arg2[2] = xmm7_53 * xmm1_23 + xmm0_304 + xmm6_19 * xmm1_28 + eax_5[0xe] f* xmm2_80
float xmm0_316 = eax_5[4] f* xmm2_90
arg2[3] = xmm3_19 * xmm1_23 + xmm5_50 * xmm1_18 + xmm2_101 * xmm1_28 + xmm4_9 * xmm2_80
float xmm0_322 = eax_5[5] f* xmm2_90
arg2[4] = *eax_5 * xmm2_85 + xmm0_316 + eax_5[8] f* xmm2_95 + eax_5[0xc] f* xmm7_20
arg2[5] = eax_5[1] f* xmm2_85 + xmm0_322 + eax_5[9] f* xmm2_95 + eax_5[0xd] f* xmm7_20
arg2[6] = eax_5[2] f* xmm2_85 + xmm7_53 * xmm2_90 + xmm6_19 * xmm2_95 + eax_5[0xe] f* xmm7_20
float xmm0_340 = eax_5[4] f* xmm7_32
arg2[7] = xmm5_50 * xmm2_85 + xmm3_19 * xmm2_90 + xmm2_101 * xmm2_95 + xmm4_9 * xmm7_20
float xmm0_346 = eax_5[5] f* xmm7_32
arg2[8] = *eax_5 * xmm7_25 + xmm0_340 + eax_5[8] f* xmm7_37 + eax_5[0xc] f* xmm7_41
arg2[9] = eax_5[1] f* xmm7_25 + xmm0_346 + eax_5[9] f* xmm7_37 + eax_5[0xd] f* xmm7_41
arg2[0xa] = eax_5[2] f* xmm7_25 + xmm7_53 * xmm7_32 + xmm6_19 * xmm7_37 + eax_5[0xe] f* xmm7_41
arg2[0xb] = xmm5_50 * xmm7_25 + xmm3_19 * xmm7_32 + xmm2_101 * xmm7_37 + xmm4_9 * xmm7_41
float xmm0_370 = eax_5[5] f* xmm0_280
arg2[0xc] = *eax_5 * xmm7_46 + eax_5[4] f* xmm0_280 + eax_5[8] f* xmm0_285 + eax_5[0xc] f* xmm0_290
float xmm1_102 = eax_5[1] f* xmm7_46 + xmm0_370
float xmm0_372 = eax_5[9] f* xmm0_285
arg2[0xf] = xmm5_50 * xmm7_46 + xmm3_19 * xmm0_280 + xmm2_101 * xmm0_285 + xmm4_9 * xmm0_290
float xmm0_376 = eax_5[0xe] f* xmm0_290
arg2[0xd] = xmm1_102 + xmm0_372 + eax_5[0xd] f* xmm0_290
arg2[0xe] = eax_5[2] f* xmm7_46 + xmm7_53 * xmm0_280 + xmm6_19 * xmm0_285 + xmm0_376
return arg2
