// 函数: sub_4e8320
// 地址: 0x4e8320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_5c
int32_t eax_1 = __security_cookie ^ &var_5c
int32_t xmm7 = (zx.o(0)).d
float xmm4 = arg3[8]
float xmm5 = arg3[9]
float xmm6 = arg3[0xa]
float xmm0 = *(arg9 + 0x90)
float xmm3 = *(arg9 + 0x64)
float xmm2 = *(arg9 + 0x70)
int32_t var_28[0x2]
var_28[0] = *arg2
var_28[1] = arg2[1]
int32_t eax_6 = *arg6
int32_t eax_7 = arg6[1]
int32_t eax_8 = *arg7
int32_t eax_9 = arg7[1]
float xmm3_1 = xmm3 * xmm0
float xmm1_1 = *(arg9 + 0x68) * xmm0
int32_t eax_10 = *arg8
int32_t i = 0
int32_t result = arg8[1]
float xmm0_2 = arg3[0xb] f* 0f
float var_48 = xmm3_1

do
    float xmm2_3 = (&var_28)[i][0] f* *(arg9 + 0xa4)
    var_24
    float xmm1_4 = (*(&var_24 + (i << 3)) f* *(arg9 + 0xa8)) ^ 0x80000000
    float xmm5_6 = *(arg9 + 0x44) * xmm2_3 + *(arg9 + 0x54) * xmm1_4 + xmm3_1 f+ *(arg9 + 0x74)
    float xmm6_6 = *(arg9 + 0x48) * xmm2_3 + *(arg9 + 0x58) * xmm1_4 + xmm1_1 f+ *(arg9 + 0x78)
    float xmm3_6 = *(arg9 + 0x50) * xmm2_3 + *(arg9 + 0x60) * xmm1_4 + xmm2 * xmm0 f+ *(arg9 + 0x80)
    xmm3_6 - 1f
    int32_t eax_11
    eax_11:1.b = (xmm3_6 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_6, 1f) ? 1 : 0) << 2
        | (xmm3_6 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        xmm3_6 f- 0
        eax_11:1.b = (xmm3_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_6, 0f) ? 1 : 0) << 2
            | (xmm3_6 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            float xmm1_5 = 1f / xmm3_6
            xmm6_6 = xmm6_6 * xmm1_5
            xmm5_6 = xmm1_5 * xmm5_6
    
    float xmm2_8 = *arg3 * xmm5_6 + arg3[4] f* xmm6_6 + xmm4 * 0f f+ arg3[0xc]
    float xmm3_11 = arg3[1] f* xmm5_6 + arg3[5] f* xmm6_6 + xmm5 * 0f f+ arg3[0xd]
    float xmm4_6 = arg3[2] f* xmm5_6 + arg3[6] f* xmm6_6 + xmm6 * 0f f+ arg3[0xe]
    float xmm1_10 = arg3[3] f* xmm5_6 + arg3[7] f* xmm6_6 + xmm0_2 f+ arg3[0xf]
    xmm1_10 - 1f
    eax_11:1.b = (xmm1_10 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_10, 1f) ? 1 : 0) << 2
        | (xmm1_10 < 1f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        xmm1_10 - 0f
        eax_11:1.b = (xmm1_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2
            | (xmm1_10 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            float xmm7_1 = 1f / xmm1_10
            xmm5_6 = xmm7_1 * xmm2_8
            xmm6_6 = xmm7_1 * xmm3_11
            xmm7 = xmm7_1 * xmm4_6
    else
        xmm5_6 = xmm2_8
        xmm6_6 = xmm3_11
        xmm7 = xmm4_6
    
    float xmm2_10 = *(arg9 + 0x8c) f+ xmm7
    xmm7 = (zx.o(0)).d
    float xmm2_11 = 1f / (*(arg9 + 0x10) * xmm5_6 + *(arg9 + 0x20) * xmm6_6
        + *(arg9 + 0x30) * xmm2_10 f+ *(arg9 + 0x40))
    float xmm2_13 = xmm2_11 * (*(arg9 + 8) * xmm5_6 + *(arg9 + 0x18) * xmm6_6
        + *(arg9 + 0x28) * xmm2_10 f+ *(arg9 + 0x38)) f* *(arg9 + 0xa0)
    xmm3_1 = var_48
    float xmm0_34 = xmm2_11 * (*(arg9 + 4) * xmm5_6 + *(arg9 + 0x14) * xmm6_6
        + *(arg9 + 0x24) * xmm2_10 f+ *(arg9 + 0x34)) f* *(arg9 + 0x9c) + arg4
    (&var_28)[i][0] = xmm0_34
    *(&var_24 + (i << 3)) = (xmm2_13 ^ 0x80000000) + arg5
    i += 1
while (i s< 4)

*arg2 = var_28[0]
arg2[1] = var_28[1]
*arg6 = eax_6
arg6[1] = eax_7
*arg7 = eax_8
arg7[1] = eax_9
*arg8 = eax_10
arg8[1] = result
sub_69a5bc(eax_1 ^ &var_5c)
return result
