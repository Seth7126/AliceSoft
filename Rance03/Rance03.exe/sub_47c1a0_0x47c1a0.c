// 函数: sub_47c1a0
// 地址: 0x47c1a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_14
int32_t eax_1 = __security_cookie ^ &var_14
float xmm2 = *arg1
float xmm1 = arg1[5]
float xmm3 = arg1[0xa]
float xmm0_3 = xmm2 + xmm1 + xmm3 f+ arg1[0xf]

if (not(xmm0_3 < 1f))
    float xmm2_1 = arg1[8]
    float xmm3_2 = _mm_sqrt_ss(0, xmm0_3) * 2f
    float xmm4 = 1f / xmm3_2
    float xmm1_3 = (arg1[1] f- arg1[4]) * xmm4
    float xmm0_6 = (arg1[6] f- arg1[9]) * xmm4
    arg2[1] = (xmm2_1 f- arg1[2]) * xmm4
    arg2[2] = xmm1_3
    *arg2 = xmm0_6
    arg2[3] = xmm3_2 * 0.25f
    sub_69a5bc(eax_1 ^ &var_14)
    return arg2

int32_t ebx
ebx.b = xmm2 <= xmm1

if (xmm3 f> arg1[ebx * 5])
    ebx = 2

int32_t temp1 = mods.dp.d(sx.q(ebx + 1), 3)
int32_t temp1_1 = mods.dp.d(sx.q(temp1 + 1), 3)
float xmm1_5 = _mm_sqrt_ss(0, arg1[ebx * 5] f- arg1[temp1 * 5] f- arg1[temp1_1 * 5] + 1f) * 2f
float xmm4_1 = 1f / xmm1_5
(&var_14)[ebx] = xmm1_5 * 0.25f
(&var_14)[temp1] = (arg1[ebx + (temp1 << 2)] f+ arg1[temp1 + (ebx << 2)]) * xmm4_1
float xmm1_8 = (arg1[temp1_1 + (temp1 << 2)] f- arg1[temp1 + (temp1_1 << 2)]) * xmm4_1
(&var_14)[temp1_1] = (arg1[ebx + (temp1_1 << 2)] f+ arg1[temp1_1 + (ebx << 2)]) * xmm4_1
*arg2 = var_14
int32_t var_10
arg2[1] = var_10
int32_t var_c
arg2[2] = var_c
arg2[3] = xmm1_8
sub_69a5bc(eax_1 ^ &var_14)
return arg2
