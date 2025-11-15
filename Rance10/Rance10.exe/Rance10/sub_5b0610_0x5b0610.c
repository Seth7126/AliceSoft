// 函数: sub_5b0610
// 地址: 0x5b0610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0_4 = *(arg1 + 0x3f4)
xmm0_4 f- 0
int32_t result
result:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1) || xmm0_4 <= arg2)
    float xmm4_1 = *(arg1 + 0x3f8)
    xmm4_1 f- 0
    result:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
        | (xmm4_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3 && not(arg2 < _mm_cvtepi32_ps(zx.o(*(arg1 + 0x3a4))) - xmm4_1))
        goto label_5b0662
else
label_5b0662:

return result
