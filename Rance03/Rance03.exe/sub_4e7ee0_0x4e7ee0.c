// 函数: sub_4e7ee0
// 地址: 0x4e7ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_b4
int32_t eax_1 = __security_cookie ^ &var_b4
int32_t xmm7 = (zx.o(0)).d
int32_t var_28[0x2]
var_28[0] = *arg2
int128_t var_6c
int128_t* edx = &var_6c
var_28[1] = arg2[1]
float xmm4 = arg3[8]
float xmm5 = arg3[9]
float xmm3 = *(arg13 + 0x64)
float xmm2 = *(arg13 + 0x70)
float xmm6 = arg3[0xa]
int32_t var_20 = *arg6
int32_t eax_9 = arg6[1]
__builtin_memset(&var_6c, 0, 0x40)
int32_t var_1c = eax_9
int32_t var_18 = *arg7
int32_t var_14 = arg7[1]
float xmm1 = *(arg13 + 0x90)
float xmm0_1 = *(arg13 + 0x68) * xmm1
int32_t var_10 = *arg8
int32_t i = 0
int32_t var_c = arg8[1]
float xmm3_1 = xmm3 * xmm1
float xmm0_3 = arg3[0xb] f* 0f
float var_98 = xmm3_1

do
    float xmm2_3 = (&var_28)[i][0] f* *(arg13 + 0xa4)
    var_24
    float xmm1_3 = (*(&var_24 + (i << 3)) f* *(arg13 + 0xa8)) ^ (data_7094c0).d
    float xmm5_6 = *(arg13 + 0x44) * xmm2_3 + *(arg13 + 0x54) * xmm1_3 + xmm3_1 f+ *(arg13 + 0x74)
    float xmm6_6 = *(arg13 + 0x48) * xmm2_3 + *(arg13 + 0x58) * xmm1_3 + xmm0_1 f+ *(arg13 + 0x78)
    float xmm3_6 =
        *(arg13 + 0x50) * xmm2_3 + *(arg13 + 0x60) * xmm1_3 + xmm2 * xmm1 f+ *(arg13 + 0x80)
    xmm3_6 - 1f
    int32_t eax_13
    eax_13:1.b = (xmm3_6 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_6, 1f) ? 1 : 0) << 2
        | (xmm3_6 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm3_6 f- 0
        eax_13:1.b = (xmm3_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_6, 0f) ? 1 : 0) << 2
            | (xmm3_6 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_4 = 1f / xmm3_6
            xmm6_6 = xmm6_6 * xmm1_4
            xmm5_6 = xmm1_4 * xmm5_6
    
    float xmm2_8 = *arg3 * xmm5_6 + arg3[4] f* xmm6_6 + xmm4 * 0f f+ arg3[0xc]
    float xmm3_11 = arg3[1] f* xmm5_6 + arg3[5] f* xmm6_6 + xmm5 * 0f f+ arg3[0xd]
    float xmm4_6 = arg3[2] f* xmm5_6 + arg3[6] f* xmm6_6 + xmm6 * 0f f+ arg3[0xe]
    float xmm1_9 = arg3[3] f* xmm5_6 + arg3[7] f* xmm6_6 + xmm0_3 f+ arg3[0xf]
    xmm1_9 - 1f
    eax_13:1.b = (xmm1_9 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_9, 1f) ? 1 : 0) << 2
        | (xmm1_9 < 1f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        xmm1_9 - 0f
        eax_13:1.b = (xmm1_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_9, 0f) ? 1 : 0) << 2
            | (xmm1_9 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            float xmm7_1 = 1f / xmm1_9
            xmm5_6 = xmm7_1 * xmm2_8
            xmm6_6 = xmm7_1 * xmm3_11
            xmm7 = xmm7_1 * xmm4_6
    else
        xmm5_6 = xmm2_8
        xmm6_6 = xmm3_11
        xmm7 = xmm4_6
    
    i += 1
    float xmm2_10 = *(arg13 + 0x8c) f+ xmm7
    xmm7 = (zx.o(0)).d
    float var_a8_1 = *(arg13 + 0xc) * xmm5_6 + *(arg13 + 0x1c) * xmm6_6
        + *(arg13 + 0x2c) * xmm2_10 f+ *(arg13 + 0x3c)
    float xmm1_19 = *(arg13 + 0x10) * xmm5_6 + *(arg13 + 0x20) * xmm6_6
        + *(arg13 + 0x30) * xmm2_10 f+ *(arg13 + 0x40)
    float var_a4_1 = xmm1_19
    float xmm1_23 = ((xmm1_19 * arg5 f* *(arg13 + 0xa8)) ^ (data_7094c0).d) + *(arg13 + 8) * xmm5_6
        + *(arg13 + 0x18) * xmm6_6 + *(arg13 + 0x28) * xmm2_10 f+ *(arg13 + 0x38)
    xmm3_1 = var_98
    float xmm0_39 = xmm1_19 * arg4 f* *(arg13 + 0xa4) + *(arg13 + 4) * xmm5_6
        + *(arg13 + 0x14) * xmm6_6 + *(arg13 + 0x24) * xmm2_10 f+ *(arg13 + 0x34)
    float var_ac_1 = xmm1_23
    *edx = xmm0_39.o
    edx = &edx[1]
while (i s< 4)

*arg9 = var_6c
int128_t var_5c
*arg10 = var_5c
int128_t var_4c
*arg11 = var_4c
int128_t var_3c
*arg12 = var_3c
sub_69a5bc(eax_1 ^ &var_b4)
return arg12
