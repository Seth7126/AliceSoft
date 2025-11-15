// 函数: sub_5d88e0
// 地址: 0x5d88e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm5 = arg1[0xa]
float xmm6 = arg1[9]
float xmm4 = arg1[8]
float xmm2 = arg1[2]
float xmm1_2 = arg1[5] * xmm5 - arg1[6] * xmm6
float xmm3_2 = arg1[4] * xmm5 - xmm4 * arg1[6]
float xmm3_3 = xmm3_2 ^ (data_79aad0).d
float xmm7_2 = arg1[4] * xmm6 - xmm4 * arg1[5]
float xmm7_3 = 1f / (*arg1 * xmm1_2 + arg1[1] * xmm3_3 + xmm2 * xmm7_2)
float xmm1_8 = arg1[1] * xmm5
*arg2 = xmm7_3 * xmm1_2
float xmm0_15 = xmm2 * arg1[5]
float xmm2_2 = xmm7_3 * -0f
float xmm1_11 = ((xmm1_8 - xmm2 * xmm6) ^ (data_79aad0).d) * xmm7_3
arg2[3] = xmm2_2
arg2[7] = xmm2_2
arg2[1] = xmm1_11
float xmm1_15 = (arg1[1] * arg1[6] - xmm0_15) * xmm7_3
arg2[4] = xmm7_3 * xmm3_3
float xmm0_18 = arg1[2]
arg2[2] = xmm1_15
float xmm0_21 = arg1[2] * arg1[4]
arg2[5] = (*arg1 * xmm5 - xmm0_18 * xmm4) * xmm7_3
float xmm1_24 = ((*arg1 * arg1[6] - xmm0_21) ^ (data_79aad0).d) * xmm7_3
arg2[8] = xmm7_3 * xmm7_2
float xmm0_24 = arg1[1]
arg2[6] = xmm1_24
float xmm1_26 = *arg1 * xmm6
float xmm6_1 = arg1[0xe]
arg2[0xb] = xmm2_2
float xmm4_2 = xmm6_1 * arg1[9]
float xmm0_27 = arg1[1] * arg1[4]
float xmm3_5 = xmm6_1 * arg1[8]
arg2[9] = ((xmm1_26 - xmm0_24 * xmm4) ^ (data_79aad0).d) * xmm7_3
float xmm7_4 = arg1[0xd]
float xmm2_4 = xmm7_4 * arg1[8]
float xmm5_1 = arg1[0xc]
arg2[0xa] = (*arg1 * arg1[5] - xmm0_27) * xmm7_3
float xmm4_3 = xmm4_2 - xmm7_4 * xmm5
float xmm3_6 = xmm3_5 - xmm5_1 * arg1[0xa]
float xmm2_5 = xmm2_4 - xmm5_1 * arg1[9]
float xmm3_8 = arg1[2]
float xmm0_39 = xmm7_4 * arg1[6]
float xmm7_5 = xmm7_4 * arg1[4]
float xmm4_7 = (xmm4_3 * *arg1 - xmm3_6 * arg1[1] + xmm2_5 * xmm3_8) * xmm7_3
arg2[0xc] = ((xmm4_3 * arg1[4] - xmm3_6 * arg1[5] + xmm2_5 * arg1[6]) ^ (data_79aad0).d) * xmm7_3
float xmm6_2 = xmm6_1 * arg1[4]
float xmm1_42 = xmm6_1 * arg1[5] - xmm0_39
arg2[0xd] = xmm4_7
float xmm4_8 = *arg1
float xmm0_42 = arg1[1]
arg2[0xe] = ((xmm1_42 * xmm4_8 - (xmm6_2 - xmm5_1 * arg1[6]) * xmm0_42
    + (xmm7_5 - xmm5_1 * arg1[5]) * xmm3_8) ^ (data_79aad0).d) * xmm7_3
arg2[0xf] = (xmm4_8 * xmm1_2 - xmm0_42 * xmm3_2 + xmm3_8 * xmm7_2) * xmm7_3
return arg2
