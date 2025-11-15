// 函数: sub_58ad40
// 地址: 0x58ad40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t var_40 = data_79a990
float xmm7 = arg3[2]
float xmm1 = *arg4
float xmm5 = *arg3
float xmm6_2 = arg4[2] f* arg3[1] - arg4[1] f* xmm7
float xmm7_3 = xmm5 f* arg4[1] - xmm1 f* arg3[1]
float xmm4_2 = xmm1 * xmm7 - xmm5 f* arg4[2]
float var_94 = xmm4_2
float xmm0_9 = sub_484cc0(xmm4_2 * xmm4_2 + xmm6_2 * xmm6_2 + xmm7_3 * xmm7_3)
xmm0_9 - 0f
int32_t* eax
eax:1.b =
    (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float var_bc
float xmm6_3
float xmm7_4

if (not(p_1))
    int64_t xmm0_10 = xmm6_2.q
    xmm6_3 = xmm0_10.d
    xmm7_4 = xmm7_3
    var_bc = xmm0_10:4.d
else
    float xmm1_6 = 1f / xmm0_9
    xmm6_3 = xmm6_2 * xmm1_6
    var_bc = xmm4_2 * xmm1_6
    xmm7_4 = xmm7_3 * xmm1_6

float xmm5_1 = xmm5 * 0.400000006f
float xmm3 = *arg2
float xmm2_1 = arg3[2] f* 0.400000006f
float xmm1_8 = arg3[1] f* 0.400000006f
float xmm0_13 = arg2[2] f+ xmm2_1
float var_78 = xmm0_13
float xmm5_8 = xmm1_8 * 0.800000012f f+ arg2[1]
float xmm0_15 = xmm5_1 * 0.800000012f + xmm3
float xmm0_17 = xmm2_1 * 0.800000012f f+ arg2[2]
float var_98
var_98.q = xmm6_3 * 0.0500000007f + xmm0_15
int64_t xmm5_10 = _mm_unpacklo_ps(zx.o(xmm3 + xmm5_1), arg2[1] f+ xmm1_8)
float var_b8
var_b8.q = (xmm6_3 ^ 0x80000000) * 0.0500000007f + xmm0_15
int64_t var_80 = xmm5_10
int32_t eax_2 = sub_6cab20(&var_40)
int32_t ecx_1 = arg2[2]
int64_t var_60 = *arg2
int32_t var_54 = eax_2
int32_t var_58_1 = ecx_1
int32_t var_74 = eax_2
var_60.o = var_60.o
int128_t var_50 = var_80.o
sub_571030(arg1, &var_60)
var_60 = xmm5_10
float var_58_2 = xmm0_13
int32_t eax_3 = sub_6cab20(&var_40)
float var_78_1 = xmm7_4 * 0.0500000007f + xmm0_17
int32_t var_74_1 = eax_3
var_80 = _mm_unpacklo_ps(zx.o(var_98.q), var_bc * 0.0500000007f + xmm5_8)
int32_t var_54_1 = eax_3
var_80.o = var_80.o
int128_t var_70 = var_60.o
sub_571030(arg1, &var_80)
var_80 = xmm5_10
float var_78_2 = xmm0_13
int32_t eax_4 = sub_6cab20(&var_40)
var_40.q = _mm_unpacklo_ps(zx.o(var_b8.q), (var_bc ^ 0x80000000) * 0.0500000007f + xmm5_8)
var_40:8.d = (xmm7_4 ^ 0x80000000) * 0.0500000007f + xmm0_17
var_40:0xc.d = eax_4
int32_t var_74_2 = eax_4
var_40 = var_40
int128_t var_30 = var_80.o
return sub_571030(arg1, &var_40)
