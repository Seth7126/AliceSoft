// 函数: sub_5deb30
// 地址: 0x5deb30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5df200(arg1)
void var_90
int32_t* eax
int32_t ecx_1
eax, ecx_1 = sub_6caeb0(&var_90, arg2[3] ^ (data_79aad0).d)
int32_t var_118 = ecx_1
void var_50
int32_t* eax_1 = sub_6caf70(&var_50, arg2[4] ^ 0x80000000)
float var_d8
sub_6cb020(eax_1, eax_1, &var_d8, eax)
*(arg3 + 0x50)
double* eax_3
float xmm0_2
eax_3, xmm0_2 = sub_4a78e0()
float xmm1_4 = 1f / xmm0_2
uint128_t xmm5 = zx.o(*(arg3 + 0x40))
float xmm0_4 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x44)))
float xmm5_2 = _mm_cvtepi32_ps(xmm5) / xmm0_4
float xmm0_8 = sub_484cc0(xmm1_4 * xmm1_4 + 1f)
float xmm6 = 1f
xmm0_8 f- 0
eax_3:1.b =
    (xmm0_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm1_6
float xmm2_1

if (not(p_1))
    xmm2_1 = xmm1_4
    xmm1_6 = (zx.o(0)).d
else
    xmm6 = 1f / xmm0_8
    xmm2_1 = xmm6 * xmm1_4
    xmm1_6 = xmm6 * 0f

float var_c8
float var_b8
float xmm3_3 = var_c8 * xmm1_6 + var_d8 * xmm2_1 + var_b8 * xmm6
float var_d4
float var_c4
float var_b4
float xmm2_5 = var_c4 * xmm1_6 + var_d4 * xmm2_1 + var_b4 * xmm6
float var_ec = xmm2_5
float var_d0
float var_c0
float var_b0
float xmm1_10 = var_c0 * xmm1_6 + var_d0 * xmm2_1 + var_b0 * xmm6
float var_e8 = xmm1_10
float xmm6_2 = xmm1_4 ^ 0x80000000
int32_t var_e4 = (xmm2_5 * arg2[1] + xmm3_3 * *arg2 + arg2[2] * xmm1_10) ^ 0x80000000
*arg1 = xmm3_3.o
float xmm0_27 = sub_484cc0(xmm6_2 * xmm6_2 + 1f)
xmm0_27 f- 0
float xmm1_11 = 1f
eax_3:1.b = (xmm0_27 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_27, 0f) ? 1 : 0) << 2
    | (xmm0_27 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm0_29

if (not(p_3))
    xmm0_29 = (zx.o(0)).d
else
    xmm1_11 = 1f / xmm0_27
    xmm6_2 = xmm6_2 * xmm1_11
    xmm0_29 = xmm1_11 * 0f

float xmm5_3 = xmm5_2 * xmm1_4
float xmm3_8 = var_c8 * xmm0_29 + var_d8 * xmm6_2 + var_b8 * xmm1_11
float xmm2_13 = var_c4 * xmm0_29 + var_d4 * xmm6_2 + var_b4 * xmm1_11
float var_ec_1 = xmm2_13
float xmm1_15 = var_c0 * xmm0_29 + var_d0 * xmm6_2 + var_b0 * xmm1_11
float var_e8_1 = xmm1_15
float xmm6_4 = xmm5_3 ^ 0x80000000
int32_t var_e4_1 = (xmm2_13 * arg2[1] + xmm3_8 * *arg2 + arg2[2] * xmm1_15) ^ 0x80000000
arg1[1] = xmm3_8.o
float xmm0_48 = sub_484cc0(xmm6_4 * xmm6_4 + 1f)
xmm0_48 f- 0
float xmm1_16 = 1f
eax_3:1.b = (xmm0_48 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_48, 0f) ? 1 : 0) << 2
    | (xmm0_48 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
float xmm2_19

if (not(p_5))
    xmm2_19 = (zx.o(0)).d
else
    xmm1_16 = 1f / xmm0_48
    xmm6_4 = xmm6_4 * xmm1_16
    xmm2_19 = xmm1_16 * 0f

float xmm3_13 = var_c8 * xmm6_4 + var_d8 * xmm2_19 + var_b8 * xmm1_16
float xmm2_23 = var_c4 * xmm6_4 + var_d4 * xmm2_19 + var_b4 * xmm1_16
float var_ec_2 = xmm2_23
float xmm1_20 = var_c0 * xmm6_4 + var_d0 * xmm2_19 + var_b0 * xmm1_16
float var_e8_2 = xmm1_20
int32_t var_e4_2 = (xmm2_23 * arg2[1] + xmm3_13 * *arg2 + arg2[2] * xmm1_20) ^ 0x80000000
arg1[2] = xmm3_13.o
float xmm0_67 = sub_484cc0(xmm5_3 * xmm5_3 + 1f)
xmm0_67 f- 0
float xmm1_21 = 1f
eax_3:1.b = (xmm0_67 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_67, 0f) ? 1 : 0) << 2
    | (xmm0_67 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}
float xmm2_29

if (not(p_7))
    xmm2_29 = (zx.o(0)).d
else
    xmm1_21 = 1f / xmm0_67
    xmm5_3 = xmm5_3 * xmm1_21
    xmm2_29 = xmm1_21 * 0f

float xmm3_18 = var_c8 * xmm5_3 + var_d8 * xmm2_29 + var_b8 * xmm1_21
float xmm2_33 = var_c4 * xmm5_3 + var_d4 * xmm2_29 + var_b4 * xmm1_21
float var_ec_3 = xmm2_33
float xmm1_25 = var_c0 * xmm5_3 + var_d0 * xmm2_29 + var_b0 * xmm1_21
float var_e8_3 = xmm1_25
float xmm6_5 = var_d8
int32_t var_e4_3 = (xmm2_33 * arg2[1] + xmm3_18 * *arg2 + arg2[2] * xmm1_25) ^ 0x80000000
arg1[3] = xmm3_18.o
float xmm3_20 = data_7e70c8
float xmm2_38 = data_7e70cc
float xmm1_26 = data_7e70d0
float xmm6_8 = xmm6_5 * xmm3_20 + var_c8 * xmm2_38 + var_b8 * xmm1_26
float xmm5_7 = var_d4 * xmm3_20 + var_c4 * xmm2_38 + var_b4 * xmm1_26
float xmm1_27 = *(arg3 + 0x48)
float xmm4_3 = var_d0 * xmm3_20 + var_c0 * xmm2_38 + var_b0 * xmm1_26
float xmm2_41 = (var_d8 + var_c8) * 0f
float xmm2_44 = (var_d4 + var_c4) * 0f
float var_ec_4 = xmm5_7
float xmm7_2 = (var_d0 + var_c0) * 0f
float var_e8_4 = xmm4_3
float xmm2_51 = (var_b4 * xmm1_27 + xmm2_44 + arg2[1]) * xmm5_7
    + (var_b8 * xmm1_27 + xmm2_41 + *arg2) * xmm6_8
    + (arg2[2] + var_b0 * xmm1_27 + xmm7_2) * xmm4_3
int32_t var_e4_4 = xmm2_51 ^ (data_79aad0).d
arg1[4] = xmm6_8.o
float xmm3_27 = xmm2_41 - var_b8 * 1f
float xmm1_32 = xmm2_44 - var_b4 * 1f
float var_ec_5 = xmm1_32
float xmm2_54 = xmm7_2 - var_b0 * 1f
float xmm0_105 = *(arg3 + 0x4c)
float var_e8_5 = xmm2_54
float xmm5_14 = (var_b4 * xmm0_105 + xmm2_44 + arg2[1]) * xmm1_32
    + (var_b8 * xmm0_105 + xmm2_41 + *arg2) * xmm3_27
    + (arg2[2] + var_b0 * xmm0_105 + xmm7_2) * xmm2_54
int32_t var_e4_5 = xmm5_14 ^ (data_79aad0).d
arg1[5] = xmm3_27.o
return arg1
