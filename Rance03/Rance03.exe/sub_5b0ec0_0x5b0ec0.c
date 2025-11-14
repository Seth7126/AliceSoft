// 函数: sub_5b0ec0
// 地址: 0x5b0ec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm2 = arg1[0xe]
float xmm3 = arg1[0xf]
float xmm7 = arg1[0xb]
float xmm4 = arg1[0xd]
float xmm5 = arg1[0xc]
float xmm0_10 = (arg1[0xa] * xmm3 - xmm2 * xmm7) * arg1[5]
    - (arg1[9] * xmm3 - xmm4 * xmm7) * arg1[6] + (arg1[9] * xmm2 - xmm4 * arg1[0xa]) * arg1[7]
float xmm7_3 = (arg1[0xa] * xmm3 - xmm2 * xmm7) * arg1[4] - (arg1[8] * xmm3 - xmm5 * xmm7) * arg1[6]
    + (arg1[8] * xmm2 - arg1[0xa] * xmm5) * arg1[7]
float xmm7_4 = xmm7_3 ^ (data_7094c0).d
float xmm7_10 = (arg1[9] * xmm3 - xmm4 * arg1[0xb]) * arg1[4]
    - (arg1[8] * xmm3 - xmm5 * arg1[0xb]) * arg1[5] + (arg1[8] * xmm4 - arg1[9] * xmm5) * arg1[7]
float xmm6 = arg1[1]
float xmm7_17 = ((arg1[9] * xmm2 - xmm4 * arg1[0xa]) * arg1[4]
    - (arg1[8] * xmm2 - xmm5 * arg1[0xa]) * arg1[5] + (arg1[8] * xmm4 - arg1[9] * xmm5) * arg1[6])
    ^ (data_7094c0).d
float xmm7_18 = arg1[2]
float xmm2_1 = arg1[0xa]
float xmm4_7 = ((arg1[0xa] * xmm3 - xmm2 * arg1[0xb]) * xmm6
    - (arg1[9] * xmm3 - arg1[0xd] * arg1[0xb]) * xmm7_18
    + (arg1[9] * xmm2 - xmm2_1 * arg1[0xd]) * arg1[3]) ^ (data_7094c0).d
float xmm4_8 = *arg1
float xmm2_6 = (xmm2_1 * xmm3 - arg1[0xe] * arg1[0xb]) * xmm4_8
    - (arg1[8] * xmm3 - xmm5 * arg1[0xb]) * xmm7_18
    + (arg1[8] * arg1[0xe] - arg1[0xa] * xmm5) * arg1[3]
float xmm2_13 = ((arg1[9] * xmm3 - arg1[0xd] * arg1[0xb]) * xmm4_8
    - (arg1[8] * xmm3 - xmm5 * arg1[0xb]) * xmm6
    + (arg1[8] * arg1[0xd] - arg1[9] * xmm5) * arg1[3]) ^ (data_7094c0).d
float xmm2_18 = (arg1[9] * arg1[0xe] - arg1[0xd] * arg1[0xa]) * xmm4_8
    - (arg1[8] * arg1[0xe] - xmm5 * arg1[0xa]) * xmm6
float xmm2_19 = xmm2_18 + (arg1[8] * arg1[0xd] - arg1[9] * xmm5) * xmm7_18
float xmm2_25 = (arg1[6] * xmm3 - arg1[0xe] * arg1[7]) * xmm6
    - (arg1[5] * xmm3 - arg1[0xd] * arg1[7]) * xmm7_18
    + (arg1[5] * arg1[0xe] - arg1[6] * arg1[0xd]) * arg1[3]
float xmm2_32 = ((arg1[6] * xmm3 - arg1[0xe] * arg1[7]) * xmm4_8
    - (arg1[4] * xmm3 - xmm5 * arg1[7]) * xmm7_18
    + (arg1[4] * arg1[0xe] - arg1[6] * xmm5) * arg1[3]) ^ (data_7094c0).d
float xmm3_1 = arg1[3]
float xmm2_38 = (arg1[5] * xmm3 - arg1[0xd] * arg1[7]) * xmm4_8
    - (arg1[4] * xmm3 - xmm5 * arg1[7]) * xmm6 + (arg1[4] * arg1[0xd] - arg1[5] * xmm5) * xmm3_1
float xmm2_43 = (arg1[5] * arg1[0xe] - arg1[0xd] * arg1[6]) * xmm4_8
    - (arg1[4] * arg1[0xe] - xmm5 * arg1[6]) * xmm6
float xmm2_45 = (xmm2_43 + (arg1[4] * arg1[0xd] - arg1[5] * xmm5) * xmm7_18) ^ 0x80000000
float xmm2_50 = (arg1[6] * arg1[0xb] - arg1[0xa] * arg1[7]) * xmm6
    - (arg1[5] * arg1[0xb] - arg1[9] * arg1[7]) * xmm7_18
float xmm2_52 = (xmm2_50 + (arg1[5] * arg1[0xa] - arg1[6] * arg1[9]) * xmm3_1) ^ 0x80000000
float xmm2_57 = (arg1[6] * arg1[0xb] - arg1[0xa] * arg1[7]) * xmm4_8
    - (arg1[4] * arg1[0xb] - arg1[8] * arg1[7]) * xmm7_18
float xmm2_58 = xmm2_57 + (arg1[4] * arg1[0xa] - arg1[6] * arg1[8]) * xmm3_1
float xmm2_63 = (arg1[5] * arg1[0xb] - arg1[9] * arg1[7]) * xmm4_8
    - (arg1[4] * arg1[0xb] - arg1[8] * arg1[7]) * xmm6
float xmm2_65 = (xmm2_63 + (arg1[4] * arg1[9] - arg1[5] * arg1[8]) * xmm3_1) ^ 0x80000000
float xmm5_1 = arg1[4]
float xmm2_70 = (arg1[5] * arg1[0xa] - arg1[9] * arg1[6]) * xmm4_8
    - (xmm5_1 * arg1[0xa] - arg1[8] * arg1[6]) * xmm6
float xmm2_71 = xmm2_70 + (xmm5_1 * arg1[9] - arg1[5] * arg1[8]) * xmm7_18
float xmm0_101 = 1f / (xmm4_8 * xmm0_10 + xmm6 * xmm7_4 + xmm7_18 * xmm7_10 + xmm3_1 * xmm7_17)
EnumC13Lines::EnumC13Lines(arg2)
*arg2 = xmm0_101 * xmm0_10
arg2[4] = xmm0_101 * xmm7_4
arg2[8] = xmm0_101 * xmm7_10
arg2[0xc] = xmm0_101 * xmm7_17
arg2[1] = xmm0_101 * xmm4_7
arg2[5] = xmm0_101 * xmm2_6
arg2[9] = xmm0_101 * xmm2_13
arg2[0xd] = xmm0_101 * xmm2_19
arg2[2] = xmm0_101 * xmm2_25
arg2[6] = xmm0_101 * xmm2_32
arg2[0xa] = xmm0_101 * xmm2_38
arg2[0xe] = xmm0_101 * xmm2_45
arg2[3] = xmm0_101 * xmm2_52
arg2[7] = xmm0_101 * xmm2_58
arg2[0xb] = xmm0_101 * xmm2_65
arg2[0xf] = xmm0_101 * xmm2_71
return arg2
