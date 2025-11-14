// 函数: sub_51e0c0
// 地址: 0x51e0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    *arg3 = arg2
    arg3[1] = arg2
    arg3[2] = arg2
    arg3[3] = arg2
    return arg3

float xmm1_2 = (*(arg2 + 0xa8) * arg5) ^ (data_7094c0).d
float xmm3_1 = *(arg2 + 0xa4) * arg4
float xmm2 = *(arg2 + 0x90)
float xmm4_4 =
    *(arg2 + 0x54) * xmm1_2 + *(arg2 + 0x44) * xmm3_1 + *(arg2 + 0x64) * xmm2 f+ *(arg2 + 0x74)
float xmm5_4 =
    *(arg2 + 0x58) * xmm1_2 + *(arg2 + 0x48) * xmm3_1 + *(arg2 + 0x68) * xmm2 f+ *(arg2 + 0x78)
float xmm7_4 =
    *(arg2 + 0x60) * xmm1_2 + *(arg2 + 0x50) * xmm3_1 + *(arg2 + 0x70) * xmm2 f+ *(arg2 + 0x80)
xmm7_4 - 1f
arg1:1.b =
    (xmm7_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 1f) ? 1 : 0) << 2 | (xmm7_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm7_4 f- 0
    arg1:1.b = (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2
        | (xmm7_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm1_3 = 1f / xmm7_4
        xmm5_4 = xmm1_3 * xmm5_4
        xmm4_4 = xmm1_3 * xmm4_4

int32_t xmm2_1 = (zx.o(0)).d
float xmm3_6 = arg6[4] f* xmm5_4 + *arg6 * xmm4_4 + arg6[8] f* 0f f+ arg6[0xc]
float xmm7_9 = arg6[1] f* xmm4_4 + arg6[5] f* xmm5_4 + arg6[9] f* 0f f+ arg6[0xd]
float xmm1_9 = arg6[2] f* xmm4_4 + arg6[6] f* xmm5_4 + arg6[0xa] f* 0f f+ arg6[0xe]
float xmm1_14 = arg6[3] f* xmm4_4 + arg6[7] f* xmm5_4 + arg6[0xb] f* 0f f+ arg6[0xf]
xmm1_14 - 1f
int32_t* eax_1
eax_1:1.b = (xmm1_14 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_14, 1f) ? 1 : 0) << 2
    | (xmm1_14 < 1f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    xmm1_14 f- 0
    eax_1:1.b = (xmm1_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_14, 0f) ? 1 : 0) << 2
        | (xmm1_14 < 0f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        float xmm2_2 = 1f / xmm1_14
        xmm2_1 = xmm2_2 * xmm1_9
        xmm4_4 = xmm2_2 * xmm3_6
        xmm5_4 = xmm2_2 * xmm7_9
else
    xmm2_1 = xmm1_9
    xmm4_4 = xmm3_6
    xmm5_4 = xmm7_9

float xmm1_16 = *(arg2 + 0x8c) f+ xmm2_1
float xmm3_11 =
    *(arg2 + 0x14) * xmm5_4 + xmm4_4 f* *(arg2 + 4) + *(arg2 + 0x24) * xmm1_16 f+ *(arg2 + 0x34)
float xmm2_7 =
    *(arg2 + 0x18) * xmm5_4 + *(arg2 + 8) * xmm4_4 + *(arg2 + 0x28) * xmm1_16 f+ *(arg2 + 0x38)
float xmm7_14 =
    *(arg2 + 0x1c) * xmm5_4 + *(arg2 + 0xc) * xmm4_4 + *(arg2 + 0x2c) * xmm1_16 f+ *(arg2 + 0x3c)
float xmm4_9 =
    *(arg2 + 0x20) * xmm5_4 + *(arg2 + 0x10) * xmm4_4 + *(arg2 + 0x30) * xmm1_16 f+ *(arg2 + 0x40)
xmm4_9 f- 0
eax_1:1.b =
    (xmm4_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_9, 0f) ? 1 : 0) << 2 | (xmm4_9 < 0f ? 1 : 0)
bool p_9 = unimplemented  {test ah, 0x44}

if (p_9)
    float xmm6_1 = 1f / xmm4_9
    xmm3_11 = xmm3_11 * xmm6_1
    xmm2_7 = xmm2_7 * xmm6_1
    xmm7_14 = xmm7_14 * xmm6_1

float xmm3_12 = xmm3_11 f* *(arg2 + 0x9c)
arg3[1] = (xmm2_7 f* *(arg2 + 0xa0)) ^ (data_7094c0).d
*arg3 = xmm3_12
arg3[2] = xmm7_14
arg3[3] = xmm4_9
return arg3
