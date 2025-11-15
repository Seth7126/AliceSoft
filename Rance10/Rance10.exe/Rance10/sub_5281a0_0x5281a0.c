// 函数: sub_5281a0
// 地址: 0x5281a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = *(arg5 + 0x28)
int32_t* var_3c = *(arg5 + 8)
float* esi = *(arg5 + 4)
float var_20 = *(arg5 + 0x2c) * *arg3
int32_t var_1c = (*(arg5 + 0x30) * *arg2) ^ (data_79aad0).d
int32_t var_18 = *(arg5 + 0x18)
float var_14
sub_528e30(&var_20, &var_14, var_3c)
int32_t xmm1 = (zx.o(0)).d
float xmm3 = var_14
float var_10
float xmm5 = var_10
float xmm6_4 = arg7[4] f* xmm5 + *arg7 * xmm3 + arg7[8] f* 0f f+ arg7[0xc]
float xmm7_4 = arg7[1] f* xmm3 + arg7[5] f* xmm5 + arg7[9] f* 0f f+ arg7[0xd]
float xmm2_4 = arg7[2] f* xmm3 + arg7[6] f* xmm5 + arg7[0xa] f* 0f f+ arg7[0xe]
float xmm2_9 = arg7[3] f* xmm3 + arg7[7] f* xmm5 + arg7[0xb] f* 0f f+ arg7[0xf]
xmm2_9 - 1f
int32_t* eax_1
eax_1:1.b =
    (xmm2_9 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_9, 1f) ? 1 : 0) << 2 | (xmm2_9 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm2_9 f- 0
    eax_1:1.b = (xmm2_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2
        | (xmm2_9 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_1 = 1f / xmm2_9
        xmm1 = xmm1_1 * xmm2_4
        xmm3 = xmm1_1 * xmm6_4
        xmm5 = xmm1_1 * xmm7_4
else
    xmm1 = xmm2_4
    xmm3 = xmm6_4
    xmm5 = xmm7_4

float xmm4 = 1f / (esi[0xb] * (*(arg5 + 0x14) f+ xmm1) + esi[0xf])
float xmm4_2 = xmm4 * esi[5] * xmm5 * xmm0
*arg3 = xmm4 * *esi * xmm3 f* *(arg5 + 0x24) + arg4
*arg2 = arg6 - xmm4_2
return arg3
