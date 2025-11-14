// 函数: sub_584d10
// 地址: 0x584d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_80
int32_t* eax = sub_5b0b90(&var_80, arg1 + 0x98)
float xmm4 = eax[1]
float xmm1 = *eax
float xmm3 = eax[2]
float xmm2 = eax[3]
float xmm6 = *(arg1 + 0x84)
float xmm5_4 =
    *(arg1 + 0x58) * xmm1 + *(arg1 + 0x68) * xmm4 + *(arg1 + 0x78) * xmm3 + *(arg1 + 0x88) * xmm2
float xmm5_9 =
    *(arg1 + 0x5c) * xmm1 + *(arg1 + 0x6c) * xmm4 + *(arg1 + 0x7c) * xmm3 + *(arg1 + 0x8c) * xmm2
float xmm5_14 =
    *(arg1 + 0x60) * xmm1 + *(arg1 + 0x70) * xmm4 + *(arg1 + 0x80) * xmm3 + *(arg1 + 0x90) * xmm2
float xmm5_15 = *(arg1 + 0x64)
float xmm4_1 = *(arg1 + 0x94)
float xmm3_1 = eax[7]
float xmm2_1 = eax[5]
float xmm1_4 = xmm5_15 * xmm1 + *(arg1 + 0x74) * xmm4 + xmm6 * xmm3 + xmm4_1 * xmm2
float xmm0_26 = eax[4]
float xmm1_5 = eax[6]
float xmm7_5 = xmm0_26 f* *(arg1 + 0x58) + xmm2_1 f* *(arg1 + 0x68) + xmm1_5 f* *(arg1 + 0x78)
    + xmm3_1 f* *(arg1 + 0x88)
float xmm7_10 = xmm0_26 f* *(arg1 + 0x5c) + xmm2_1 f* *(arg1 + 0x6c) + xmm1_5 f* *(arg1 + 0x7c)
    + xmm3_1 f* *(arg1 + 0x8c)
float xmm7_14 = xmm0_26 f* *(arg1 + 0x60) + xmm2_1 f* *(arg1 + 0x70) + xmm1_5 f* *(arg1 + 0x80)
    + xmm3_1 f* *(arg1 + 0x90)
float xmm2_3 = eax[9]
float xmm1_7 = eax[0xa]
float xmm0_51 = xmm0_26 * xmm5_15 + xmm2_1 f* *(arg1 + 0x74) + xmm1_5 * xmm6 + xmm3_1 * xmm4_1
float xmm3_3 = eax[0xb]
float xmm0_52 = eax[8]
float xmm7_19 = xmm0_52 f* *(arg1 + 0x58) + xmm2_3 f* *(arg1 + 0x68) + xmm1_7 f* *(arg1 + 0x78)
    + xmm3_3 f* *(arg1 + 0x88)
float xmm7_24 = xmm0_52 f* *(arg1 + 0x5c) + xmm2_3 f* *(arg1 + 0x6c) + xmm1_7 f* *(arg1 + 0x7c)
    + xmm3_3 f* *(arg1 + 0x8c)
float xmm7_28 = xmm0_52 f* *(arg1 + 0x60) + xmm2_3 f* *(arg1 + 0x70) + xmm1_7 f* *(arg1 + 0x80)
    + xmm3_3 f* *(arg1 + 0x90)
float xmm2_5 = eax[0xd]
float xmm1_9 = eax[0xe]
float xmm0_77 = xmm0_52 * xmm5_15 + xmm2_3 f* *(arg1 + 0x74) + xmm1_7 * xmm6 + xmm3_3 * xmm4_1
float xmm3_5 = eax[0xf]
float xmm0_78 = eax[0xc]
float xmm7_33 = xmm0_78 f* *(arg1 + 0x58) + xmm2_5 f* *(arg1 + 0x68) + xmm1_9 f* *(arg1 + 0x78)
    + xmm3_5 f* *(arg1 + 0x88)
float xmm7_38 = xmm0_78 f* *(arg1 + 0x5c) + xmm2_5 f* *(arg1 + 0x6c) + xmm1_9 f* *(arg1 + 0x7c)
    + xmm3_5 f* *(arg1 + 0x8c)
float xmm7_42 = xmm0_78 f* *(arg1 + 0x60) + xmm2_5 f* *(arg1 + 0x70) + xmm1_9 f* *(arg1 + 0x80)
    + xmm3_5 f* *(arg1 + 0x90)
float xmm0_103 = xmm0_78 * xmm5_15 + xmm2_5 f* *(arg1 + 0x74) + xmm1_9 * xmm6 + xmm3_5 * xmm4_1
void var_40
int32_t* eax_1 = sub_5b0b20(&var_40, arg1 + 0x4c)
float xmm0_111 = eax_1[1] f* xmm5_4
*arg2 = xmm5_9 f* eax_1[4] + *eax_1 * xmm5_4 + xmm5_14 f* eax_1[8] + xmm1_4 f* eax_1[0xc]
float xmm7_43 = eax_1[6]
float xmm6_1 = eax_1[0xa]
float xmm0_117 = eax_1[2] f* xmm5_4
float xmm5_17 = eax_1[3]
arg2[1] = xmm5_9 f* eax_1[5] + xmm0_111 + xmm5_14 f* eax_1[9] + xmm1_4 f* eax_1[0xd]
float xmm4_3 = eax_1[0xf]
float xmm3_8 = eax_1[7]
float xmm2_8 = eax_1[0xb]
arg2[2] = xmm5_9 * xmm7_43 + xmm0_117 + xmm5_14 * xmm6_1 + xmm1_4 f* eax_1[0xe]
float xmm0_129 = xmm7_10 f* eax_1[4]
arg2[3] = xmm5_9 * xmm3_8 + xmm5_17 * xmm5_4 + xmm5_14 * xmm2_8 + xmm1_4 * xmm4_3
float xmm0_135 = xmm7_10 f* eax_1[5]
arg2[4] = xmm7_5 f* *eax_1 + xmm0_129 + xmm7_14 f* eax_1[8] + xmm0_51 f* eax_1[0xc]
arg2[5] = xmm7_5 f* eax_1[1] + xmm0_135 + xmm7_14 f* eax_1[9] + xmm0_51 f* eax_1[0xd]
arg2[6] = xmm7_5 f* eax_1[2] + xmm7_10 * xmm7_43 + xmm7_14 * xmm6_1 + xmm0_51 f* eax_1[0xe]
float xmm0_153 = xmm7_24 f* eax_1[4]
arg2[7] = xmm7_5 * xmm5_17 + xmm7_10 * xmm3_8 + xmm7_14 * xmm2_8 + xmm0_51 * xmm4_3
float xmm0_159 = xmm7_24 f* eax_1[5]
arg2[8] = xmm7_19 f* *eax_1 + xmm0_153 + xmm7_28 f* eax_1[8] + eax_1[0xc] f* xmm0_77
arg2[9] = xmm7_19 f* eax_1[1] + xmm0_159 + xmm7_28 f* eax_1[9] + eax_1[0xd] f* xmm0_77
arg2[0xa] = xmm7_19 f* eax_1[2] + xmm7_24 * xmm7_43 + xmm7_28 * xmm6_1 + eax_1[0xe] f* xmm0_77
float xmm0_177 = eax_1[4] f* xmm7_38
arg2[0xb] = xmm7_19 * xmm5_17 + xmm7_24 * xmm3_8 + xmm7_28 * xmm2_8 + xmm4_3 * xmm0_77
float xmm0_183 = eax_1[5] f* xmm7_38
arg2[0xc] = *eax_1 * xmm7_33 + xmm0_177 + eax_1[8] f* xmm7_42 + eax_1[0xc] f* xmm0_103
arg2[0xd] = eax_1[1] f* xmm7_33 + xmm0_183 + eax_1[9] f* xmm7_42 + eax_1[0xd] f* xmm0_103
arg2[0xe] = eax_1[2] f* xmm7_33 + xmm7_43 * xmm7_38 + xmm6_1 * xmm7_42 + eax_1[0xe] f* xmm0_103
arg2[0xf] = xmm5_17 * xmm7_33 + xmm3_8 * xmm7_38 + xmm2_8 * xmm7_42 + xmm4_3 * xmm0_103
return arg2
