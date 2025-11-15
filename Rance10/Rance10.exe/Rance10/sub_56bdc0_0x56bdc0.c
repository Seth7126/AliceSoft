// 函数: sub_56bdc0
// 地址: 0x56bdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm0_1[0x4] = arg1[2].d f* 0.0174532924f
int80_t x87_r0
int32_t xmm0_2 = ___libm_sse2_cosf(xmm0_1, x87_r0)
int80_t x87_r1
int32_t xmm0_4 = ___libm_sse2_sinf(xmm0_1, x87_r1)
int32_t var_100 = xmm0_2
int32_t var_104 = xmm0_4 ^ (data_79aad0).d
int32_t var_110 = xmm0_4
int32_t var_114 = xmm0_2
void var_98
sub_561660(&var_98)
int32_t xmm0_7[0x4] = *(arg1 + 0xc) * 0.0174532924f
int80_t x87_r2
int32_t xmm0_8 = ___libm_sse2_cosf(xmm0_7, x87_r2)
int80_t x87_r3
int128_t xmm0_10 = ___libm_sse2_sinf(xmm0_7, x87_r3)
int32_t var_100_1 = xmm0_8
int32_t var_108 = xmm0_10
int32_t var_58
sub_5616f0(&var_58, xmm0_8, xmm0_10 ^ data_79aad0)
int32_t var_d8 = var_58
int32_t var_cc = 0
float var_74
float var_50
float var_d4 = var_74 * var_50
int32_t var_c8 = 0
int32_t var_bc = 0
float var_70
float var_d0 = var_70 * var_50
int32_t var_84
int32_t var_c4 = var_84
int32_t var_80
int32_t var_c0 = var_80
int32_t var_38
int32_t var_b8 = var_38
float var_30
float var_b4 = var_74 * var_30
float var_b0 = var_70 * var_30
int128_t var_ac = zx.o(0)
int32_t var_9c = 0x3f800000
float var_18[0x4]
float* eax = sub_56bf60(&var_d8, &var_18)
int32_t ecx_3 = arg1[1].d
*arg2 = *eax
arg2[1].q = *arg1
*(arg2 + 0x18) = ecx_3
return arg2
