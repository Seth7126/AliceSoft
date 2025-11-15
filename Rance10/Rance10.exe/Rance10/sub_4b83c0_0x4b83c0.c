// 函数: sub_4b83c0
// 地址: 0x4b83c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg2)) f* *(arg1 + 0x104)
float xmm0 = *(arg1 + 0xf4)
float xmm1_2 = xmm1_1 f+ *(arg1 + 0xf4)
xmm0 - xmm1_2
int32_t eax
eax:1.b = (xmm0 == xmm1_2 ? 1 : 0) << 6 | (is_unordered.d(xmm0, xmm1_2) ? 1 : 0) << 2
    | (xmm0 < xmm1_2 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t xmm0_1 = *(arg1 + 0x100)
    
    if (not(xmm0_1 f> xmm1_2))
        xmm0_1 = _mm_min_ss(*(arg1 + 0xfc), xmm1_2)
    
    *(arg1 + 0xf4) = xmm0_1
    *(arg1 + 0x158) = 1

sub_4b7ab0(arg1)
arg2 = &partsengine::SFixedEventArgs::`vftable'{for `partsengine::IEventArgs'}
return sub_4cbd50(arg1 + 0xc, &arg2, 0)
