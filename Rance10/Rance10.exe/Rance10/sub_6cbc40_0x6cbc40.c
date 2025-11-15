// 函数: sub_6cbc40
// 地址: 0x6cbc40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm0_1[0x4] = arg2[2] f* 0.0174532924f
int80_t x87_r0
int32_t xmm0_2 = ___libm_sse2_cosf(xmm0_1, x87_r0)
int80_t x87_r1
int32_t xmm0_4 = ___libm_sse2_sinf(xmm0_1, x87_r1)
int32_t var_11c = xmm0_2
void var_124
float var_98
sub_5615e0(&var_98, xmm0_2, xmm0_4, var_124, xmm0_4 ^ (data_79aad0).d)
int32_t xmm0_7[0x4] = arg2[1] f* 0.0174532924f
int80_t x87_r2
int32_t xmm0_8 = ___libm_sse2_cosf(xmm0_7, x87_r2)
int80_t x87_r3
int32_t xmm0_10 = ___libm_sse2_sinf(xmm0_7, x87_r3)
int32_t var_108 = xmm0_8
int32_t var_110 = xmm0_10
float var_d8
sub_5616f0(&var_d8, xmm0_8, xmm0_10 ^ (data_79aad0).d)
int32_t xmm0_13[0x4] = *arg2 * 0.0174532924f
int80_t x87_r4
int32_t xmm0_14 = ___libm_sse2_cosf(xmm0_13, x87_r4)
int80_t x87_r5
int32_t xmm0_16 = ___libm_sse2_sinf(xmm0_13, x87_r5)
int32_t var_108_1 = xmm0_14
int32_t var_10c = xmm0_16 ^ (data_79aad0).d
int32_t var_118 = xmm0_16
int32_t var_11c_1 = xmm0_14
void var_58
sub_561660(&var_58)
int32_t var_cc = 0
float xmm2_2 = var_d8
float var_b8
float var_40
float xmm7_1 = var_40 * var_b8
float var_30
float xmm4_3 = var_30 * var_b8
float xmm4_4 = var_98
int32_t var_d0
int32_t var_d0_1 = var_d0
var_d8 = xmm4_4 * xmm2_2
float var_94
float var_d4 = var_94 * xmm2_2
float var_88
float var_44
float var_c8 = xmm4_4 * xmm7_1 + var_88 * var_44
int32_t var_bc = 0
int32_t var_9c = 0x3f800000
float var_34
float var_b8_1 = xmm4_4 * xmm4_3 + var_88 * var_34
float var_b0
float var_c0 = var_40 * var_b0
float var_b0_1 = var_30 * var_b0
float var_84
float var_b4 = var_94 * xmm4_3 + var_84 * var_34
float var_c4 = var_94 * xmm7_1 + var_84 * var_44
int128_t var_ac = zx.o(0)
float var_18[0x4]
float* result = sub_6cc170(&var_d8, &var_18)
*arg1 = *result
return result
