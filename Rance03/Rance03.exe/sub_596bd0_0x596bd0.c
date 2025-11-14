// 函数: sub_596bd0
// 地址: 0x596bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3 = arg2[1]
float xmm2 = *arg2
float xmm4 = arg2[2]
float xmm1_3 = xmm2 * xmm2 + xmm3 * xmm3 + xmm4 * xmm4
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 - 0f
int32_t eax
eax:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int32_t eax_2 = arg2[2]
    *(arg1 + 0x18c) = *arg2
    *(arg1 + 0x194) = eax_2
    return eax_2

float xmm0_4 = 1f / xmm1_4
float xmm4_1 = xmm4 * xmm0_4
float var_8 = xmm3 * xmm0_4
*(arg1 + 0x18c) = (xmm2 * xmm0_4).q
*(arg1 + 0x194) = xmm4_1
return xmm4_1
