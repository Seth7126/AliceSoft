// 函数: sub_58d1a0
// 地址: 0x58d1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (*(*(arg1 + 4) + 0x75) == 0)
    float xmm0_1 = *(arg1 + 0x5c)
    xmm0_1 - 1f
    result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        result.b = 0
        return result

result.b = 1
return result
