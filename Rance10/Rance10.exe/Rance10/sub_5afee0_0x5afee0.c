// 函数: sub_5afee0
// 地址: 0x5afee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

EnterCriticalSection(*(arg4 i+ 0x70) + 4)
int32_t eax_2 = *(arg4 i+ 0x68)
int64_t xmm0 = *(arg4 i+ 0x60)
LeaveCriticalSection(*(arg4 i+ 0x70) + 4)
int32_t var_170 = eax_2
int32_t var_174 = xmm0:4.d
int32_t var_178 = xmm0.d
void var_80
sub_561770(&var_80)
int32_t var_180 = *(arg4 i+ 0xc8)
int32_t var_194 = *(arg4 i+ 0xc4)
float var_c0
sub_5868a0(&var_c0, *(arg4 i+ 0xc0))
float xmm3 = var_c0
float var_10c = xmm3 f* *(arg4 i+ 0x1c)
float var_ac
float var_108 = *(arg4 i+ 0x20) * var_ac
float var_98
float var_104 = *(arg4 i+ 0x24) * var_98
int32_t var_100 = *(arg4 i+ 0x28)
float var_fc = *(arg4 i+ 0x2c) * xmm3
float var_f8 = *(arg4 i+ 0x30) * var_ac
float var_f4 = *(arg4 i+ 0x34) * var_98
int32_t var_f0 = *(arg4 i+ 0x38)
float var_ec = *(arg4 i+ 0x3c) * xmm3
float var_e8 = *(arg4 i+ 0x40) * var_ac
float var_e4 = *(arg4 i+ 0x44) * var_98
int32_t var_e0 = *(arg4 i+ 0x48)
float var_dc = *(arg4 i+ 0x4c) * xmm3
float var_d8 = *(arg4 i+ 0x50) * var_ac
float var_d4 = *(arg4 i+ 0x54) * var_98
int32_t var_d0 = *(arg4 i+ 0x58)
float var_40[0x4][0x4]
float (* eax_6)[0x4] = sub_6cb020(arg4 i+ 0x80, &var_10c, &var_40, arg4 i+ 0x80)
float xmm1_2 = (*eax_6)[3]
float xmm4 = (*eax_6)[7]
float var_50
float xmm0_36 = xmm1_2 * var_50 + *eax_6
float var_4c
float xmm0_39 = xmm1_2 * var_4c + (*eax_6)[1]
float var_48
float xmm0_42 = xmm1_2 * var_48 + (*eax_6)[2]
float xmm0_45 = xmm4 * var_50 + eax_6[1][0]
float xmm0_48 = xmm4 * var_4c + (*eax_6)[5]
float xmm4_1 = (*eax_6)[0xb]
float xmm0_51 = xmm4 * var_48 + (*eax_6)[6]
float xmm0_54 = xmm4_1 * var_50 + eax_6[2][0]
float xmm0_57 = xmm4_1 * var_4c + (*eax_6)[9]
float xmm4_2 = (*eax_6)[0xf]
float xmm0_60 = xmm4_1 * var_48 + (*eax_6)[0xa]
float xmm0_63 = xmm4_2 * var_50 + eax_6[3][0]
float xmm0_66 = xmm4_2 * var_4c + (*eax_6)[0xd]
float xmm0_69 = xmm4_2 * var_48 + (*eax_6)[0xe]
float var_cc
float* eax_7 = sub_5afb80(arg1, arg2, &var_cc, arg4, arg5, arg6, arg7)
float xmm3_3 = eax_7[1]
float xmm1_4 = *eax_7
float xmm2_2 = eax_7[2]
float xmm4_7 = xmm3_3 * xmm0_45 + xmm1_4 * xmm0_36 + xmm2_2 * xmm0_54 + xmm0_63
*arg3 = xmm4_7
float xmm5_4 = xmm3_3 * xmm0_48 + xmm1_4 * xmm0_39 + xmm2_2 * xmm0_57 + xmm0_66
arg3[1] = xmm5_4
float xmm3_7 = xmm3_3 * xmm4 + xmm1_4 * xmm1_2 + xmm2_2 * xmm4_1 + xmm4_2
float xmm6_4 = xmm3_3 * xmm0_51 + xmm1_4 * xmm0_42 + xmm2_2 * xmm0_60 + xmm0_69
xmm3_7 - 1f
arg3[2] = xmm6_4
eax_7:1.b =
    (xmm3_7 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_7, 1f) ? 1 : 0) << 2 | (xmm3_7 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return arg3

xmm3_7 - 0f
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    return arg3

float xmm1_6 = 1f / xmm3_7
*arg3 = xmm1_6 * xmm4_7
arg3[1] = xmm1_6 * xmm5_4
arg3[2] = xmm1_6 * xmm6_4
return arg3
