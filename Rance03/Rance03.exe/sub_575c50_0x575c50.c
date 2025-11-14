// 函数: sub_575c50
// 地址: 0x575c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm4 = *(arg1 + 0x2e0)
float xmm3_3 = (arg2 f- *(arg1 + 0x2b4)) * 30f * 0.00100000005f
float xmm5 = xmm3_3
float var_4 = xmm3_3
float xmm2_1 = xmm5 * xmm5

if (not(0f <= xmm4))
    float xmm0_3 = (*(arg1 + 0x2dc) / xmm4) ^ (data_7094c0).d
    
    if (not(xmm5 <= xmm0_3))
        xmm5 = xmm0_3
        xmm2_1 = xmm0_3 * xmm0_3

float xmm2_3 = *(arg1 + 0x2e4)
xmm2_3 f- 0
uint32_t eax
eax:1.b =
    (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2 | (xmm2_3 < 0f ? 1 : 0)
float xmm1_2 = *(arg1 + 0x2dc) * xmm5 + xmm4 * xmm2_1 * 0.5f
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm3_4 = *(arg1 + 0x2e8)
    int32_t mxcsr
    
    if (not(xmm3_4 <= 1f))
        float xmm0_5
        eax, xmm0_5 = ___libm_sse2_powf(mxcsr, arg3, xmm3_4)
        xmm1_2 = xmm1_2 + xmm0_5 f* *(arg1 + 0x2e4)
    else if (-1f <= xmm3_4)
        xmm1_2 = xmm2_3 * arg3 + xmm1_2
    else
        float xmm0_8
        eax, xmm0_8 = ___libm_sse2_powf(mxcsr, 1f - arg3, xmm3_4 ^ (data_7094c0).d)
        xmm1_2 = (1f - xmm0_8) f* *(arg1 + 0x2e4) + xmm1_2
    xmm3_3 = var_4

bool cond:1 = *(arg1 + 0x10c) == 0
float* result = arg4
float xmm2_7 = *(arg1 + 0x2c4) * xmm1_2
*result = *(arg1 + 0x2c0) * xmm1_2
float xmm0_12 = *(arg1 + 0x2c8) * xmm1_2
result[1] = xmm2_7
result[2] = xmm0_12

if (not(cond:1))
    float xmm6_1 = *(arg1 + 0x110)
    float xmm4_3 = *(arg1 + 0x114)
    xmm6_1 f- 0
    eax:1.b = (xmm6_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_1, 0f) ? 1 : 0) << 2
        | (xmm6_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        xmm4_3 f- 0
        eax:1.b = (xmm4_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_3, 0f) ? 1 : 0) << 2
            | (xmm4_3 < 0f ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            float xmm0_13 = 1f / xmm4_3
            float xmm0_15 = ___libm_sse2_expf((xmm4_3 / xmm6_1 * xmm3_3) ^ (data_7094c0).d)
            float xmm4_7 = *(arg1 + 0x110)
            result[1] = xmm2_7
                - (var_4 - (1f - xmm0_15) * xmm0_13 * xmm4_7) * xmm4_7 * 9.80665016f * xmm0_13
            return result
    
    result[1] = xmm2_7 - xmm3_3 * xmm3_3 * 9.80665016f * 0.5f

return result
