// 函数: sub_48bed0
// 地址: 0x48bed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 0x10)

if (result != 0 && *(arg3 i+ 0xc4) != 0)
    float xmm3_1 = *(arg3 i+ 0xd0)
    float xmm1_2 = result[3] f* arg2
    float xmm2 = *(arg3 i+ 0xc8)
    xmm2 f- 0
    result:1.b =
        (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (p_2)
        xmm3_1 f- 0
        result:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
            | (xmm3_1 < 0f ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    float xmm0_12
    
    if (not(p_2) || not(p_4))
        xmm0_12 = xmm1_2 * xmm1_2 * 9.80665016f * 0.5f
    else
        float xmm0_7 = ___libm_sse2_expf((*(arg3 i+ 0xcc) * xmm3_1 * xmm1_2) ^ (data_7094c0).d)
        float xmm3_2 = *(arg3 i+ 0xd4)
        float xmm2_1 = *(arg3 i+ 0xc8)
        xmm0_12 = (xmm1_2 - (1f - xmm0_7) * xmm3_2 * xmm2_1) * xmm2_1 * 9.80665016f * xmm3_2
    
    result = arg4
    result[2] = 0
    result[1] = xmm0_12
    *result = 0

return result
