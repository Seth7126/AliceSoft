// 函数: sub_5b0c00
// 地址: 0x5b0c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg4
float xmm6_1 = *eax - *arg2
float xmm7_1 = eax[1] f- arg2[1]
float xmm2_1 = eax[2] f- arg2[2]
float xmm1_3 = xmm7_1 * xmm7_1 + xmm6_1 * xmm6_1 + xmm2_1 * xmm2_1
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 f- 0
eax:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm2_2
float xmm6_2
float xmm7_2

if (not(p_1))
    int64_t xmm0_5 = xmm6_1.q
    xmm7_2 = xmm0_5:4.d
    xmm6_2 = xmm0_5.d
    xmm2_2 = xmm2_1
else
    float xmm0_4 = 1f / xmm1_4
    xmm6_2 = xmm6_1 * xmm0_4
    xmm7_2 = xmm7_1 * xmm0_4
    xmm2_2 = xmm2_1 * xmm0_4

int32_t* eax_2 = arg5
float xmm1_5 = eax_2[1]
float xmm3 = *eax_2
float xmm4_2 = xmm1_5 * xmm2_2 - eax_2[2] f* xmm7_2
float xmm5_1 = eax_2[2] f* xmm6_2 - xmm3 * xmm2_2
int64_t var_20
var_20.d = xmm4_2
float xmm3_2 = xmm3 * xmm7_2 - xmm1_5 * xmm6_2
var_20:4.d = xmm5_1
float xmm0_16 = _mm_sqrt_ss(0, xmm4_2 * xmm4_2 + xmm5_1 * xmm5_1 + xmm3_2 * xmm3_2)
xmm0_16 f- 0
eax_2:1.b = (xmm0_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, 0f) ? 1 : 0) << 2
    | (xmm0_16 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm1_12
float xmm3_3
float xmm4_3

if (not(p_3))
    float var_14
    var_14.q = var_20
    xmm1_12 = xmm7_1
    xmm4_3 = var_14
    xmm3_3 = xmm3_2
else
    float xmm5_2 = 1f / xmm0_16
    xmm4_3 = xmm4_2 * xmm5_2
    xmm1_12 = xmm5_2 * xmm5_1
    xmm3_3 = xmm3_2 * xmm5_2

arg3[3] = 0
arg3[7] = 0
float xmm5_5 = xmm7_2 * xmm3_3 - xmm1_12 * xmm2_2
arg3[0xb] = 0
arg3[0xa] = xmm2_2
arg3[0xf] = 0x3f800000
float xmm4_5 = xmm4_3 * xmm2_2 - xmm6_2 * xmm3_3
*arg3 = xmm4_3
float xmm1_15 = arg2[1] * xmm1_12
float xmm3_6 = xmm6_2 * xmm1_12 - xmm4_3 * xmm7_2
arg3[4] = xmm1_12
arg3[8] = xmm3_3
float xmm0_27 = *arg2 * xmm4_3
arg3[5] = xmm4_5
arg3[1] = xmm5_5
arg3[2] = xmm6_2
float xmm0_29 = arg2[2] * xmm3_3
arg3[6] = xmm7_2
arg3[9] = xmm3_6
arg3[0xc] = (xmm1_15 + xmm0_27 + xmm0_29) ^ 0x80000000
float xmm4_6 = *arg2
float xmm5_6 = arg2[2]
float xmm0_36 = arg2[1] * xmm7_2 + xmm4_6 * xmm6_2
arg3[0xd] = (arg2[1] * xmm4_5 + xmm4_6 * xmm5_5 + xmm5_6 * xmm3_6) ^ 0x80000000
arg3[0xe] = (xmm0_36 + xmm5_6 * xmm2_2) ^ 0x80000000
return arg3
