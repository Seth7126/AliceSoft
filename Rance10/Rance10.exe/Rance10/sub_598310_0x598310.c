// 函数: sub_598310
// 地址: 0x598310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* edx = *(arg1 + 0x58)
int32_t eax = *(arg1 + 0x50)
float xmm0 = *(edx + 8)
float xmm4[0x4] = *(edx + (eax << 2))
int64_t xmm5 = *(edx + (eax << 2) + 4)
float xmm2[0x4] = *edx
int64_t xmm3 = *(edx + 4)
float xmm0_1 = *(edx + (eax << 2) + 8)
float xmm0_2 = *(edx + (eax << 3))
float xmm0_3 = *(edx + (eax << 3) + 4)
float xmm0_4 = *(edx + (eax << 3) + 8)
int32_t eax_1 = eax * 2
int32_t xmm0_5 = *(edx + (eax_1 << 3))
int32_t var_d4 = *(edx + (eax_1 << 3) + 4)
int32_t xmm0_7 = *(edx + (eax_1 << 3) + 8)
float var_e0 = xmm2
float var_94 = xmm3
float var_78 = xmm4
float var_30 = xmm5
int128_t xmm0_8

if (arg4 == 0)
    xmm0_8 = data_7e7128
else
    xmm0_8 = data_79aa10

int128_t var_cc = xmm0_8
int32_t eax_2 = sub_6cab20(&var_cc)
int64_t xmm0_10 = _mm_unpacklo_ps(xmm4, xmm5)
var_cc.q = xmm0_10
int64_t xmm0_12 = _mm_unpacklo_ps(xmm2, xmm3)
int64_t var_60 = xmm0_12
int32_t var_54 = eax_2
float var_58 = xmm0
var_cc:8.d = xmm0_1
var_cc:0xc.d = eax_2
var_60.o = var_60.o
int128_t var_50 = var_cc
sub_571030(arg2, &var_60)
int64_t xmm0_16 = _mm_unpacklo_ps(xmm0_2, xmm0_3)
var_60 = xmm0_16
var_cc.q = xmm0_12
var_cc:0xc.d = eax_2
var_cc:8.d = xmm0
int32_t var_54_1 = eax_2
float var_58_1 = xmm0_4
var_cc = var_cc
int128_t var_bc = var_60.o
sub_571030(arg2, &var_cc)
var_60 = xmm0_5.q
var_cc.q = xmm0_10
var_cc:8.d = xmm0_1
var_cc:0xc.d = eax_2
int32_t var_54_2 = eax_2
var_cc = var_cc
int32_t var_58_2 = xmm0_7
int128_t var_bc_1 = var_60.o
sub_571030(arg2, &var_cc)
var_60 = xmm0_5.q
int32_t var_58_3 = xmm0_7
var_cc.q = xmm0_16
var_cc:8.d = xmm0_4
var_cc:0xc.d = eax_2
int32_t var_54_3 = eax_2
var_cc = var_cc
int128_t var_bc_2 = var_60.o
sub_571030(arg2, &var_cc)
float xmm4_2 = var_78 - var_e0
float xmm5_2 = var_30 - var_94
float xmm3_2 = xmm0_1 - xmm0
float var_d4_1 = xmm5_2
float xmm0_33 = sub_484cc0(xmm3_2 * xmm3_2 + xmm5_2 * xmm5_2 + xmm4_2 * xmm4_2)
xmm0_33 f- 0
int128_t* eax_5
eax_5:1.b = (xmm0_33 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_33, 0f) ? 1 : 0) << 2
    | (xmm0_33 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int128_t* var_e4
int64_t var_70
int64_t var_40

if (not(p_1))
    int64_t xmm0_35 = xmm4_2.q
    var_e4 = xmm3_2
    var_40.d = xmm0_35:4.d
    var_70.d = xmm0_35.d
else
    float xmm0_34 = 1f / xmm0_33
    var_70.d = xmm4_2 * xmm0_34
    var_40.d = xmm5_2 * xmm0_34
    var_e4 = xmm3_2 * xmm0_34

float xmm6_1 = xmm0_3 - var_94
float xmm3_5 = xmm0_2 - var_e0
float xmm7_2 = xmm0_4 - xmm0
float var_d4_2 = xmm6_1
float xmm0_44 = sub_484cc0(xmm7_2 * xmm7_2 + xmm6_1 * xmm6_1 + xmm3_5 * xmm3_5)
xmm0_44 f- 0
eax_5:1.b = (xmm0_44 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_44, 0f) ? 1 : 0) << 2
    | (xmm0_44 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm3_6
float xmm6_2
float xmm7_3

if (not(p_3))
    float var_a8
    var_a8.q = xmm3_5.q
    float var_a4
    xmm6_2 = var_a4
    xmm3_6 = var_a8
    xmm7_3 = xmm7_2
else
    float xmm2_2 = 1f / xmm0_44
    xmm3_6 = xmm3_5 * xmm2_2
    xmm6_2 = xmm6_1 * xmm2_2
    xmm7_3 = xmm7_2 * xmm2_2

float xmm0_47 = var_e0 - var_78
float xmm2_4 = var_94 - var_30
float xmm1_8 = xmm0 - xmm0_1
int64_t var_88
var_88.d = xmm7_3
float xmm5_5 = var_e0 - xmm0_2
float xmm4_5 = xmm0 - xmm0_4
float xmm0_52 = sub_484cc0(xmm0_47 * xmm0_47 + xmm2_4 * xmm2_4 + xmm1_8 * xmm1_8) * 0.125f
float xmm0_54 = var_94 - xmm0_3
float xmm4_8 = sub_484cc0(xmm0_54 * xmm0_54 + xmm5_5 * xmm5_5 + xmm4_5 * xmm4_5) * 0.125f
int64_t xmm6_3 = *arg3
float xmm7_4 = arg3[1].d
float xmm1_11 = xmm4_8 ^ (data_79aad0).d
var_78.q = xmm6_3
float xmm2_8 = *(arg3 + 4)
var_30.q = xmm6_3.d + xmm3_6 * xmm1_11
float xmm0_66 = xmm7_4 + var_88.d * xmm4_8
float xmm0_68 = xmm0_52 ^ (data_79aad0).d
float var_a8_1
var_a8_1.q = var_78 + var_70.d * xmm0_68
var_88.d = xmm2_8 + var_40.d * xmm0_68
float var_38 = xmm0_66
var_cc:8.d = xmm7_4 + xmm7_3 * xmm1_11
var_cc:0xc.d = eax_2
int32_t var_34 = eax_2
int64_t xmm6_5 = _mm_unpacklo_ps(xmm6_3 f+ xmm3_6 * xmm4_8, xmm2_8 + xmm6_2 * xmm4_8)
var_cc.q = _mm_unpacklo_ps(zx.o(var_30.q), xmm2_8 + xmm6_2 * xmm1_11)
var_78.q = var_78 + var_70.d * xmm0_52
var_cc = var_cc
int128_t var_bc_3 = xmm6_5.o
sub_571030(arg2, &var_cc)
int64_t xmm1_27 = _mm_unpacklo_ps(zx.o(var_78.q), xmm2_8 + var_40.d * xmm0_52)
float var_1c_2 = xmm7_4 + var_e4 f* xmm0_52
int64_t xmm1_29 = _mm_unpacklo_ps(zx.o(var_a8_1.q), var_88.d)
var_cc:8.d = xmm7_4 + var_e4 * xmm0_68
var_cc.q = xmm1_29
var_cc:0xc.d = eax_2
int32_t var_18 = eax_2
var_cc = var_cc
int128_t var_bc_4 = xmm1_27.o
return sub_571030(arg2, &var_cc)
