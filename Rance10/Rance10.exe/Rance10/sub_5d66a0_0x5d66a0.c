// 函数: sub_5d66a0
// 地址: 0x5d66a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm2_1 = *arg4 - *arg2
float xmm6_1 = arg4[1] f- arg2[1]
float xmm7_1 = arg4[2] f- arg2[2]
float xmm0_4 = sub_484cc0(xmm6_1 * xmm6_1 + xmm2_1 * xmm2_1 + xmm7_1 * xmm7_1)
xmm0_4 f- 0
int32_t* eax
eax:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float var_2c
float xmm6_2
float xmm7_2

if (not(p_1))
    int64_t xmm0_6 = xmm2_1.q
    xmm6_2 = xmm0_6:4.d
    xmm7_2 = xmm7_1
    var_2c = xmm0_6.d
else
    float xmm0_5 = 1f / xmm0_4
    xmm6_2 = xmm6_1 * xmm0_5
    xmm7_2 = xmm7_1 * xmm0_5
    var_2c = xmm0_5 * xmm2_1

float xmm1_7 = arg5[1]
float xmm2_2 = arg5[2]
float xmm3 = *arg5
float xmm4_2 = xmm1_7 * xmm7_2 - xmm2_2 * xmm6_2
float xmm2_4 = xmm2_2 * var_2c - xmm3 * xmm7_2
int64_t var_14
var_14.d = xmm4_2
float xmm3_2 = xmm3 * xmm6_2 - xmm1_7 * var_2c
var_14:4.d = xmm2_4
float xmm0_16 = sub_484cc0(xmm4_2 * xmm4_2 + xmm2_4 * xmm2_4 + xmm3_2 * xmm3_2)
xmm0_16 f- 0
int32_t* eax_2
eax_2:1.b = (xmm0_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, 0f) ? 1 : 0) << 2
    | (xmm0_16 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm2_5
float xmm3_3
float xmm4_3

if (not(p_3))
    float var_20
    var_20.q = var_14
    xmm2_5 = xmm6_1
    xmm4_3 = var_20
    xmm3_3 = xmm3_2
else
    float xmm5_1 = 1f / xmm0_16
    xmm4_3 = xmm4_2 * xmm5_1
    xmm2_5 = xmm2_4 * xmm5_1
    xmm3_3 = xmm3_2 * xmm5_1

arg3[3] = 0
arg3[7] = 0
arg3[0xb] = 0
float xmm5_4 = xmm6_2 * xmm3_3 - xmm2_5 * xmm7_2
arg3[0xf] = 0x3f800000
float xmm4_5 = xmm4_3 * xmm7_2 - var_2c * xmm3_3
*arg3 = xmm4_3
arg3[4] = xmm2_5
float xmm1_15 = arg2[1] * xmm2_5
float xmm3_6 = var_2c * xmm2_5 - xmm4_3 * xmm6_2
arg3[2] = var_2c
arg3[8] = xmm3_3
float xmm0_27 = *arg2 * xmm4_3
arg3[5] = xmm4_5
arg3[1] = xmm5_4
arg3[6] = xmm6_2
float xmm0_29 = arg2[2] * xmm3_3
arg3[9] = xmm3_6
arg3[0xa] = xmm7_2
arg3[0xc] = (xmm1_15 + xmm0_27 + xmm0_29) ^ 0x80000000
float xmm4_6 = *arg2
float xmm5_5 = arg2[2]
float xmm0_36 = arg2[1] * xmm6_2 + xmm4_6 * var_2c
arg3[0xd] = (arg2[1] * xmm4_5 + xmm4_6 * xmm5_4 + xmm5_5 * xmm3_6) ^ 0x80000000
arg3[0xe] = (xmm0_36 + xmm5_5 * xmm7_2) ^ 0x80000000
return arg3
