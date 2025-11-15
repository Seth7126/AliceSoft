// 函数: sub_6cb130
// 地址: 0x6cb130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2 = arg1[0xe]
float xmm3 = arg1[0xf]
float xmm7 = arg1[0xb]
float xmm4 = arg1[0xd]
float xmm5 = arg1[0xc]
float xmm0_10 = (arg1[0xa] f* xmm3 - xmm2 * xmm7) f* arg1[5]
    - (arg1[9] f* xmm3 - xmm4 * xmm7) f* arg1[6] + (arg1[9] f* xmm2 - xmm4 f* arg1[0xa]) f* arg1[7]
float xmm7_3 = (arg1[0xa] f* xmm3 - xmm2 * xmm7) f* arg1[4]
    - (arg1[8] f* xmm3 - xmm5 * xmm7) f* arg1[6] + (arg1[8] f* xmm2 - arg1[0xa] f* xmm5) f* arg1[7]
float xmm7_4 = xmm7_3 ^ (data_79aad0).d
float xmm7_10 = (arg1[9] f* xmm3 - xmm4 f* arg1[0xb]) f* arg1[4]
    - (arg1[8] f* xmm3 - xmm5 f* arg1[0xb]) f* arg1[5]
    + (arg1[8] f* xmm4 - arg1[9] f* xmm5) f* arg1[7]
float xmm6 = arg1[1]
float xmm7_17 = ((arg1[9] f* xmm2 - xmm4 f* arg1[0xa]) f* arg1[4]
    - (arg1[8] f* xmm2 - xmm5 f* arg1[0xa]) f* arg1[5]
    + (arg1[8] f* xmm4 - arg1[9] f* xmm5) f* arg1[6]) ^ (data_79aad0).d
float xmm7_18 = arg1[2]
float xmm2_1 = arg1[0xa]
float xmm4_7 = ((arg1[0xa] f* xmm3 - xmm2 f* arg1[0xb]) * xmm6
    - (arg1[9] f* xmm3 - arg1[0xd] f* arg1[0xb]) * xmm7_18
    + (arg1[9] f* xmm2 - xmm2_1 f* arg1[0xd]) f* arg1[3]) ^ (data_79aad0).d
float xmm4_8 = *arg1
float xmm2_6 = (xmm2_1 * xmm3 - arg1[0xe] f* arg1[0xb]) * xmm4_8
    - (arg1[8] f* xmm3 - xmm5 f* arg1[0xb]) * xmm7_18
    + (arg1[8] f* arg1[0xe] - arg1[0xa] f* xmm5) f* arg1[3]
float xmm2_13 = ((arg1[9] f* xmm3 - arg1[0xd] f* arg1[0xb]) * xmm4_8
    - (arg1[8] f* xmm3 - xmm5 f* arg1[0xb]) * xmm6
    + (arg1[8] f* arg1[0xd] - arg1[9] f* xmm5) f* arg1[3]) ^ (data_79aad0).d
float xmm2_18 = (arg1[9] f* arg1[0xe] - arg1[0xd] f* arg1[0xa]) * xmm4_8
    - (arg1[8] f* arg1[0xe] - xmm5 f* arg1[0xa]) * xmm6
float xmm2_19 = xmm2_18 + (arg1[8] f* arg1[0xd] - arg1[9] f* xmm5) * xmm7_18
float xmm2_25 = (arg1[6] f* xmm3 - arg1[0xe] f* arg1[7]) * xmm6
    - (arg1[5] f* xmm3 - arg1[0xd] f* arg1[7]) * xmm7_18
    + (arg1[5] f* arg1[0xe] - arg1[6] f* arg1[0xd]) f* arg1[3]
float xmm2_32 = ((arg1[6] f* xmm3 - arg1[0xe] f* arg1[7]) * xmm4_8
    - (arg1[4] f* xmm3 - xmm5 f* arg1[7]) * xmm7_18
    + (arg1[4] f* arg1[0xe] - arg1[6] f* xmm5) f* arg1[3]) ^ (data_79aad0).d
float xmm3_1 = arg1[0xd]
float xmm7_24 = (arg1[5] f* xmm3 - arg1[0xd] f* arg1[7]) * xmm4_8
    - (arg1[4] f* xmm3 - xmm5 f* arg1[7]) * xmm6 + (arg1[4] f* xmm3_1 - arg1[5] f* xmm5) f* arg1[3]
float xmm6_5 = (arg1[5] f* arg1[0xe] - xmm3_1 f* arg1[6]) * xmm4_8
    - (arg1[4] f* arg1[0xe] - xmm5 f* arg1[6]) f* arg1[1]
float xmm3_2 = arg1[2]
float xmm6_7 = (xmm6_5 + (arg1[4] f* xmm3_1 - arg1[5] f* xmm5) * xmm3_2) ^ (data_79aad0).d
float xmm5_5 = (arg1[6] f* arg1[0xb] - arg1[0xa] f* arg1[7]) f* arg1[1]
    - (arg1[5] f* arg1[0xb] - arg1[9] f* arg1[7]) * xmm3_2
float xmm5_7 = (xmm5_5 + (arg1[5] f* arg1[0xa] - arg1[6] f* arg1[9]) f* arg1[3]) ^ (data_79aad0).d
float xmm4_13 = (arg1[6] f* arg1[0xb] - arg1[0xa] f* arg1[7]) f* *arg1
    - (arg1[4] f* arg1[0xb] - arg1[8] f* arg1[7]) * xmm3_2
float xmm4_14 = xmm4_13 + (arg1[4] f* arg1[0xa] - arg1[6] f* arg1[8]) f* arg1[3]
float xmm2_33 = arg1[5]
float xmm3_7 = (arg1[5] f* arg1[0xb] - arg1[9] f* arg1[7]) f* *arg1
    - (arg1[4] f* arg1[0xb] - arg1[8] f* arg1[7]) f* arg1[1]
float xmm3_9 = (xmm3_7 + (arg1[4] f* arg1[9] - xmm2_33 f* arg1[8]) f* arg1[3]) ^ (data_79aad0).d
float xmm2_37 = (xmm2_33 f* arg1[0xa] - arg1[9] f* arg1[6]) f* *arg1
    - (arg1[4] f* arg1[0xa] - arg1[8] f* arg1[6]) f* arg1[1]
float xmm2_38 = xmm2_37 + (arg1[4] f* arg1[9] - arg1[5] f* arg1[8]) f* arg1[2]
float xmm1_140 =
    1f / (*arg1 * xmm0_10 + arg1[1] f* xmm7_4 + arg1[2] f* xmm7_10 + arg1[3] f* xmm7_17)
sub_6cac10(arg2)
*arg2 = xmm1_140 * xmm0_10
arg2[4] = xmm1_140 * xmm7_4
arg2[8] = xmm1_140 * xmm7_10
arg2[0xc] = xmm1_140 * xmm7_17
arg2[1] = xmm1_140 * xmm4_7
arg2[5] = xmm1_140 * xmm2_6
arg2[9] = xmm1_140 * xmm2_13
arg2[0xd] = xmm1_140 * xmm2_19
arg2[2] = xmm1_140 * xmm2_25
arg2[6] = xmm1_140 * xmm2_32
arg2[0xa] = xmm1_140 * xmm7_24
arg2[0xe] = xmm1_140 * xmm6_7
arg2[3] = xmm1_140 * xmm5_7
arg2[7] = xmm1_140 * xmm4_14
arg2[0xb] = xmm1_140 * xmm3_9
arg2[0xf] = xmm1_140 * xmm2_38
return arg2
