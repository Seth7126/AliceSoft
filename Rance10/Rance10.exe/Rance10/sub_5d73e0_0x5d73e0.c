// 函数: sub_5d73e0
// 地址: 0x5d73e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm3 = *(arg1 + 0x94)
float xmm5 = *(arg1 + 0x90)
float xmm2 = *(arg1 + 0x98)
float xmm0_4 = sub_484cc0(xmm5 * xmm5 + xmm3 * xmm3 + xmm2 * xmm2)
xmm0_4 f- 0
float eax
eax:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int64_t var_104
float xmm1_6
float xmm2_1
float xmm5_1

if (not(p_1))
    eax = *(arg1 + 0x98)
    var_104 = *(arg1 + 0x90)
    xmm1_6 = var_104:4.d
    xmm5_1 = var_104.d
    xmm2_1 = eax
else
    float xmm0_5 = 1f / xmm0_4
    xmm5_1 = xmm5 * xmm0_5
    xmm1_6 = xmm0_5 * xmm3
    xmm2_1 = xmm2 * xmm0_5

float xmm4 = *(arg1 + 0x188)
float xmm6 = *(arg1 + 0x184)
float xmm7 = *(arg1 + 0x180)
float xmm3_3 = xmm1_6 * xmm4 - xmm2_1 * xmm6
float xmm2_3 = xmm2_1 * xmm7 - xmm4 * xmm5_1
var_104.d = xmm3_3
float xmm4_3 = xmm6 * xmm5_1 - xmm1_6 * xmm7
var_104:4.d = xmm2_3
float xmm0_15 = sub_484cc0(xmm2_3 * xmm2_3 + xmm3_3 * xmm3_3 + xmm4_3 * xmm4_3)
xmm0_15 f- 0
eax:1.b = (xmm0_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_15, 0f) ? 1 : 0) << 2
    | (xmm0_15 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
int64_t var_110
float xmm2_4
float xmm3_4
float xmm4_4

if (not(p_3))
    var_110 = var_104
    xmm2_4 = var_110:4.d
    xmm3_4 = var_110.d
    xmm4_4 = xmm4_3
else
    float xmm1_12 = 1f / xmm0_15
    xmm3_4 = xmm3_3 * xmm1_12
    xmm2_4 = xmm2_3 * xmm1_12
    xmm4_4 = xmm4_3 * xmm1_12

float xmm1_13 = *(arg1 + 0x188)
float xmm5_4 = xmm4_4 * xmm6 - xmm2_4 * xmm1_13
var_110.d = xmm5_4
float xmm6_3 = xmm3_4 * xmm1_13 - xmm4_4 * xmm7
float xmm2_6 = xmm2_4 * xmm7 - xmm3_4 f* *(arg1 + 0x184)
var_110:4.d = xmm6_3
float xmm0_23 = sub_484cc0(xmm6_3 * xmm6_3 + xmm5_4 * xmm5_4 + xmm2_6 * xmm2_6)
xmm0_23 f- 0
eax:1.b = (xmm0_23 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_23, 0f) ? 1 : 0) << 2
    | (xmm0_23 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (not(p_5))
    var_104 = var_110
    float var_fc_4 = xmm2_6
else
    float xmm1_18 = 1f / xmm0_23
    var_104.d = xmm5_4 * xmm1_18
    var_104:4.d = xmm6_3 * xmm1_18
    float var_fc_3 = xmm2_6 * xmm1_18

struct sealengine::CSphereVolume::VTable* var_9c
sub_5dbdd0(arg3, &var_9c)
float xmm1_19 = *(arg1 + 0x180)
float xmm2_8 = *(arg1 + 0x184)
float var_8c
float xmm0_27 = __maxss_xmmss_memss(var_8c * 1.02999997f, arg2)
float var_98
var_110.d = var_98 - xmm1_19 * xmm0_27
float var_94
var_110:4.d = var_94 - xmm2_8 * xmm0_27
float var_90
float var_108_3 = var_90 - *(arg1 + 0x188) * xmm0_27
float var_f8
sub_5d66a0(&var_98, &var_110, &var_f8, &var_98, &var_104)
int32_t ecx_2 = *(arg3 + 8)
void* eax_3 = *(arg3 + 4)
float xmm4_6 = 3.40282347e+38f
float xmm3_9 = -3.40282347e+38f
float var_f0
float var_e0
float var_d0
float var_c0

while (eax_3 != ecx_2)
    float edx_1 = *(eax_3 + 0xc)
    var_110 = *(eax_3 + 4)
    float xmm2_14 = var_110.d * var_f0 + var_110:4.d * var_e0 + edx_1 * var_d0 + var_c0
    float xmm0_40 = xmm2_14 f- *(eax_3 + 0x10)
    float xmm2_15 = xmm2_14 f+ *(eax_3 + 0x10)
    eax_3 += 0x14
    xmm4_6 = _mm_min_ss(xmm0_40, xmm4_6)
    xmm3_9 = _mm_max_ss(xmm2_15, xmm3_9)

int32_t var_128_1 = xmm4_6 ^ (data_79aad0).d
int32_t var_12c = 0
int32_t var_130 = 0
void var_48
sub_561770(&var_48)
float xmm1_21 = 1f / xmm0_27
float var_138 = 0.909090877f / (xmm3_9 - xmm4_6)
float var_14c = xmm1_21
float var_88
sub_5868a0(&var_88, xmm1_21)
float xmm2_17 = var_88
int32_t var_ec = 0
int32_t var_dc = 0
float var_d4
float var_74
float var_d4_1 = var_74 * var_d4
int32_t var_cc = 0
int32_t var_bc = 0x3f800000
var_f8 = xmm2_17 * var_f8
float var_f4
float var_f4_1 = var_74 * var_f4
float var_60
float var_f0_1 = var_60 * var_f0
float var_e4
float var_e4_1 = var_74 * var_e4
float var_e0_1 = var_60 * var_e0
float var_d0_1 = var_60 * var_d0
float var_c4
float var_14
float var_c4_1 = (var_14 + var_c4) * var_74
float var_10
float var_c0_1 = (var_10 + var_c0) * var_60
*(arg1 + 0x198) = var_f8.o
float var_e8
*(arg1 + 0x1a8) = (xmm2_17 * var_e8).o
float var_d8
*(arg1 + 0x1b8) = (xmm2_17 * var_d8).o
float var_c8
float var_18
*(arg1 + 0x1c8) = ((var_18 + var_c8) * xmm2_17).o
sub_6cac10(&var_88)
*(arg1 + 0x1d8) = var_88.o
int128_t var_78
*(arg1 + 0x1e8) = var_78
int128_t var_68
*(arg1 + 0x1f8) = var_68
int128_t var_58
*(arg1 + 0x208) = var_58
float (* eax_5)[0x4] = sub_6cb020(arg1 + 0x140, arg1 + 0x198, &var_48, arg1 + 0x1d8)
float (* result)[0x4] = sub_6cb020(eax_5, eax_5, &var_88, arg1 + 0x140)
*(arg1 + 0x218) = *result
*(arg1 + 0x228) = result[1]
*(arg1 + 0x238) = result[2]
*(arg1 + 0x248) = result[3]
return result
