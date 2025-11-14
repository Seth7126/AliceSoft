// 函数: sub_549000
// 地址: 0x549000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (*(arg1 + 0x5c) == 0)
    float xmm0_1 = *(arg1 + 0xb0)
    xmm0_1 - 1f
    result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        result.b = 0
        return result

result.b = 1
return result
