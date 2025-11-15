// 函数: sub_561190
// 地址: 0x561190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_34 = *(arg2 + 8)
float* edi = *(arg2 + 4)
float var_20 = *(arg2 + 0x2c) * arg4
int32_t var_1c = (*(arg2 + 0x30) * arg5) ^ (data_79aad0).d
int32_t var_18 = *(arg2 + 0x18)
float var_14
sub_528e30(&var_20, &var_14, var_34)
float xmm3 = var_14
int32_t xmm1 = (zx.o(0)).d
float var_10
float xmm4 = var_10
float xmm6_4 = arg6[4] f* xmm4 + *arg6 * xmm3 + arg6[8] f* 0f f+ arg6[0xc]
float xmm7_4 = arg6[1] f* xmm3 + arg6[5] f* xmm4 + arg6[9] f* 0f f+ arg6[0xd]
float xmm2_4 = arg6[2] f* xmm3 + arg6[6] f* xmm4 + arg6[0xa] f* 0f f+ arg6[0xe]
float xmm2_9 = arg6[3] f* xmm3 + arg6[7] f* xmm4 + arg6[0xb] f* 0f f+ arg6[0xf]
xmm2_9 - 1f
int32_t* eax
eax:1.b =
    (xmm2_9 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_9, 1f) ? 1 : 0) << 2 | (xmm2_9 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm2_9 f- 0
    eax:1.b = (xmm2_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2
        | (xmm2_9 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_1 = 1f / xmm2_9
        xmm1 = xmm1_1 * xmm2_4
        xmm3 = xmm1_1 * xmm6_4
        xmm4 = xmm1_1 * xmm7_4
else
    xmm1 = xmm2_4
    xmm3 = xmm6_4
    xmm4 = xmm7_4

float xmm0_23 = *(arg2 + 0x14) f+ xmm1
float xmm1_3 = edi[5] * xmm4
float xmm2_11 = *edi * xmm3
float xmm4_4 = edi[0xb] * xmm0_23 + edi[0xf]
xmm4_4 f- 0
float xmm3_4 = edi[0xa] * xmm0_23 + edi[0xe]
eax:1.b =
    (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2 | (xmm4_4 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    float xmm5_1 = 1f / xmm4_4
    xmm2_11 = xmm2_11 * xmm5_1
    xmm1_3 = xmm1_3 * xmm5_1
    xmm3_4 = xmm3_4 * xmm5_1

float xmm2_12 = xmm2_11 f* *(arg2 + 0x24)
arg3[1] = (xmm1_3 f* *(arg2 + 0x28)) ^ (data_79aad0).d
*arg3 = xmm2_12
arg3[2] = xmm3_4
arg3[3] = xmm4_4
return arg3
