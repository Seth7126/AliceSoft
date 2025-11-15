// 函数: sub_58aa90
// 地址: 0x58aa90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float var_40[0x10]
float* eax = sub_6cbac0(arg3, &var_40)
float xmm3_4 = eax[4] * 0.75f + *eax * 0f + eax[8] * 0f + eax[0xc]
float xmm1_4 = eax[5] * 0.75f + eax[1] * 0f + eax[9] * 0f + eax[0xd]
float xmm2_4 = eax[6] * 0.75f + eax[2] * 0f + eax[0xa] * 0f + eax[0xe]
float xmm5_4 = eax[7] * 0.75f + eax[3] * 0f + eax[0xb] * 0f + eax[0xf]
xmm5_4 - 1f
eax:1.b =
    (xmm5_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 1f) ? 1 : 0) << 2 | (xmm5_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5_4 f- 0
    eax:1.b = (xmm5_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 0f) ? 1 : 0) << 2
        | (xmm5_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_16 = 1f / xmm5_4
        xmm3_4 = xmm3_4 * xmm0_16
        xmm1_4 = xmm1_4 * xmm0_16
        xmm2_4 = xmm2_4 * xmm0_16

float var_5c = xmm1_4 f+ *(arg2 + 4)
float var_58 = xmm2_4 f+ arg2[1].d
float var_60 = *arg2 + xmm3_4
sub_58b0c0(arg1, 0.125f, 0.25f, &var_60, 0x7e7108, sub_6cbac0(arg3, &var_40))
float* eax_2 = sub_6cbac0(arg3, &var_40)
float xmm5_9 = eax_2[4] * 0.75f + *eax_2 * 0f + eax_2[8] * 0f + eax_2[0xc]
float xmm4_4 = eax_2[5] * 0.75f + eax_2[1] * 0f + eax_2[9] * 0f + eax_2[0xd]
float xmm3_9 = eax_2[6] * 0.75f + eax_2[2] * 0f + eax_2[0xa] * 0f + eax_2[0xe]
float xmm2_10 = eax_2[7] * 0.75f + eax_2[3] * 0f + eax_2[0xb] * 0f + eax_2[0xf]
xmm2_10 - 1f
eax_2:1.b = (xmm2_10 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_10, 1f) ? 1 : 0) << 2
    | (xmm2_10 < 1f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    xmm2_10 f- 0
    eax_2:1.b = (xmm2_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_10, 0f) ? 1 : 0) << 2
        | (xmm2_10 < 0f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        float xmm0_35 = 1f / xmm2_10
        xmm5_9 = xmm5_9 * xmm0_35
        xmm4_4 = xmm4_4 * xmm0_35
        xmm3_9 = xmm3_9 * xmm0_35

float xmm3_10 = xmm3_9 f+ arg2[1].d
int64_t xmm4_5 = xmm4_4 f+ *(arg2 + 4)
float xmm2_12[0x4] = *arg2 + xmm5_9
int32_t eax_3 = sub_6cab20(0x7e7108)
int64_t xmm0_36 = *arg2
int32_t var_58_2 = arg2[1].d
int32_t eax_5 = arg1[1]
int64_t xmm2_13 = _mm_unpacklo_ps(xmm2_12, xmm4_5)
float var_48 = xmm3_10
int32_t var_44 = eax_3
var_60.q = xmm0_36
int32_t var_54 = eax_3

if (eax_5 == arg1[2])
    float var_74_4 = xmm3_10
    sub_571180(arg1)

int128_t* result = arg1[1]

if (result != 0)
    *result = var_60.o
    result[1] = xmm2_13.o

arg1[1] += 0x20
return result
