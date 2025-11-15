// 函数: sub_528370
// 地址: 0x528370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *(arg13 + 0x14)
float xmm5 = *(arg13 + 0x54)
float xmm3 = *(arg13 + 0x50)
int32_t var_98 = 0
int32_t var_9c = (xmm5 * arg5) ^ (data_79aad0).d
int32_t var_a0 = (xmm3 * arg4) ^ (data_79aad0).d
void var_48
sub_561770(&var_48)
float xmm0_7 = arg3[3]
float xmm4_6 = arg3[7]
float xmm4_9 = arg3[0xf]
float var_18
float xmm0_15 = (var_18 * xmm0_7 + *arg3) * xmm3
float xmm4_11 = xmm4_9 * var_18 + arg3[0xc]
float xmm0_17 = (xmm4_6 * var_18 + arg3[4]) * xmm5
float var_14
float xmm0_19 = (var_14 * xmm0_7 + arg3[1]) * xmm3
float xmm0_21 = (xmm4_6 * var_14 + arg3[5]) * xmm5
float xmm4_14 = xmm4_9 * var_14 + arg3[0xd]
float var_10
float xmm1_6 = xmm4_9 * var_10 + arg3[0xe]
float xmm0_23 = (var_10 * xmm0_7 + arg3[2]) * xmm3
float xmm0_25 = (xmm4_6 * var_10 + arg3[6]) * xmm5
float xmm0_27 = xmm0_7 * xmm3
float* ecx_1 = *(arg13 + 4)
float xmm2_1 = *arg2
float xmm0_29 = *(arg13 + 0x2c) * arg4
float xmm7_1 = arg2[1]
float xmm3_2 = xmm4_6 * xmm5
float xmm0_32 = (*(arg13 + 0x30) * arg5) ^ (data_79aad0).d
float xmm5_1 = 1f / (xmm2_1 * xmm0_27 + xmm7_1 * xmm3_2 + xmm4_9)
float xmm6_6 = (xmm2_1 * xmm0_23 + xmm7_1 * xmm0_25 + xmm1_6) * xmm5_1 + xmm0
float xmm4_20 = (xmm2_1 * xmm0_19 + xmm7_1 * xmm0_21 + xmm4_14) * xmm5_1 * ecx_1[5]
float xmm1_13 = xmm6_6 * ecx_1[0xb] + ecx_1[0xf]
float xmm0_44 = (xmm2_1 * xmm0_15 + xmm7_1 * xmm0_17 + xmm4_11) * xmm5_1 * *ecx_1
float xmm3_5 = ecx_1[0xa] * xmm6_6 + ecx_1[0xe]
arg9[3] = xmm1_13
arg9[2] = xmm3_5
*arg9 = xmm0_44 + xmm1_13 * xmm0_29
arg9[1] = xmm1_13 * xmm0_32 + xmm4_20
float xmm2_3 = *arg6
float xmm6_7 = arg6[1]
float xmm5_4 = 1f / (xmm2_3 * xmm0_27 + xmm6_7 * xmm3_2 + xmm4_9)
float xmm7_8 = (xmm2_3 * xmm0_23 + xmm6_7 * xmm0_25 + xmm1_6) * xmm5_4 + xmm0
float xmm4_26 = (xmm2_3 * xmm0_19 + xmm6_7 * xmm0_21 + xmm4_14) * xmm5_4 * ecx_1[5]
float xmm3_8 = ecx_1[0xa] * xmm7_8 + ecx_1[0xe]
float xmm2_6 = xmm7_8 * ecx_1[0xb] + ecx_1[0xf]
float xmm0_61 = (xmm2_3 * xmm0_15 + xmm6_7 * xmm0_17 + xmm4_11) * xmm5_4 * *ecx_1
arg10[3] = xmm2_6
arg10[2] = xmm3_8
*arg10 = xmm0_61 + xmm2_6 * xmm0_29
arg10[1] = xmm2_6 * xmm0_32 + xmm4_26
float xmm2_7 = *arg7
float xmm6_9 = arg7[1]
float xmm5_7 = 1f / (xmm2_7 * xmm0_27 + xmm6_9 * xmm3_2 + xmm4_9)
float xmm1_23 = ecx_1[0xe]
float xmm7_14 = (xmm2_7 * xmm0_23 + xmm6_9 * xmm0_25 + xmm1_6) * xmm5_7 + xmm0
float xmm4_32 = (xmm2_7 * xmm0_19 + xmm6_9 * xmm0_21 + xmm4_14) * xmm5_7 * ecx_1[5]
float xmm2_10 = xmm7_14 * ecx_1[0xb] + ecx_1[0xf]
float xmm3_10 = ecx_1[0xa] * xmm7_14
float xmm0_78 = (xmm2_7 * xmm0_15 + xmm6_9 * xmm0_17 + xmm4_11) * xmm5_7 * *ecx_1
arg11[3] = xmm2_10
arg11[2] = xmm3_10 + xmm1_23
*arg11 = xmm0_78 + xmm2_10 * xmm0_29
arg11[1] = xmm2_10 * xmm0_32 + xmm4_32
float xmm5_10 = arg8[1]
float xmm7_15 = *arg8
float xmm2_11 = 1f / (xmm7_15 * xmm0_27 + xmm5_10 * xmm3_2 + xmm4_9)
float xmm6_16 = (xmm7_15 * xmm0_23 + xmm5_10 * xmm0_25 + xmm1_6) * xmm2_11 + xmm0
float xmm2_14 = xmm6_16 * ecx_1[0xb] + ecx_1[0xf]
float xmm4_38 = (xmm7_15 * xmm0_19 + xmm5_10 * xmm0_21 + xmm4_14) * xmm2_11 * ecx_1[5]
float xmm7_20 = (xmm7_15 * xmm0_15 + xmm5_10 * xmm0_17 + xmm4_11) * xmm2_11 * *ecx_1
arg12[2] = ecx_1[0xa] * xmm6_16 + ecx_1[0xe]
arg12[3] = xmm2_14
*arg12 = xmm7_20 + xmm2_14 * xmm0_29
arg12[1] = xmm2_14 * xmm0_32 + xmm4_38
return arg12
