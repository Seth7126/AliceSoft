// 函数: sub_450cd0
// 地址: 0x450cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_2 = arg1
float xmm6 = *(arg1 + 0x44)
float xmm4 = 1f
xmm6 f- 0
float xmm5 = 1f
int32_t eax
eax:1.b = (xmm6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6, 0f) ? 1 : 0) << 2 | (xmm6 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5 = 1f / xmm6

int32_t xmm1[0x4] = zx.o(*(arg1 + 0xbc))
float xmm2 = *(arg1 + 0x40)
float xmm3_1 = *(arg1 + 0x3c) * xmm5
float xmm0_1 = _mm_cvtepi32_ps(zx.o(neg.d(*(arg1 + 0xc0))))
float xmm5_1 = 1f
float xmm1_3 = _mm_cvtepi32_ps(xmm1) * 0.5f * *(arg1 + 0x38) * xmm5
*(arg1 + 0x7c) = xmm3_1 * xmm0_1 * 0.5f
*(arg1 + 0x80) = xmm2 * xmm5
*(arg1 + 0x78) = xmm1_3
*(arg1 + 0x84) = xmm6
float xmm0_5 = *(arg1 + 0x54)
xmm0_5 f- 0
int32_t eax_2
eax_2:1.b =
    (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2 | (xmm0_5 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    xmm5_1 = 1f / xmm0_5

float xmm3_3 = *(arg1 + 0x4c)
uint128_t xmm1_4 = zx.o(*(arg1 + 0xbc))
float xmm2_2 = *(arg1 + 0x50)
float xmm0_8 = _mm_cvtepi32_ps(zx.o(neg.d(*(arg1 + 0xc0)))) * 0.5f
float xmm5_2 = 1f
*(arg1 + 0x88) = _mm_cvtepi32_ps(xmm1_4) * 0.5f * *(arg1 + 0x48) * xmm5_1
*(arg1 + 0x8c) = xmm3_3 * xmm5_1 * xmm0_8
*(arg1 + 0x90) = xmm2_2 * xmm5_1
*(arg1 + 0x94) = xmm0_5
float xmm0_12 = *(arg1 + 0x64)
xmm0_12 f- 0
int32_t eax_4
eax_4:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
    | (xmm0_12 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    xmm5_2 = 1f / xmm0_12

uint128_t xmm1_8 = zx.o(*(arg1 + 0xbc))
float xmm2_4 = *(arg1 + 0x60)
float xmm3_7 = *(arg1 + 0x5c) * xmm5_2
float xmm0_14 = _mm_cvtepi32_ps(zx.o(neg.d(*(arg1 + 0xc0))))
*(arg1 + 0x98) = _mm_cvtepi32_ps(xmm1_8) * 0.5f * *(arg1 + 0x58) * xmm5_2
*(arg1 + 0x9c) = xmm3_7 * xmm0_14 * 0.5f
*(arg1 + 0xa0) = xmm2_4 * xmm5_2
*(arg1 + 0xa4) = xmm0_12
float xmm5_3 = *(arg1 + 0x74)
xmm5_3 f- 0
int32_t eax_6
eax_6:1.b =
    (xmm5_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_3, 0f) ? 1 : 0) << 2 | (xmm5_3 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}

if (p_7)
    xmm4 = 1f / xmm5_3

int32_t result = neg.d(*(arg1 + 0xc0))
uint128_t xmm1_12 = zx.o(*(arg1 + 0xbc))
float xmm2_6 = *(arg1 + 0x70)
float xmm3_10 = *(arg1 + 0x6c) * xmm4
float xmm0_20 = _mm_cvtepi32_ps(zx.o(result))
*(arg1 + 0xa8) = _mm_cvtepi32_ps(xmm1_12) * 0.5f * *(arg1 + 0x68) * xmm4
*(arg1 + 0xac) = xmm3_10 * xmm0_20 * 0.5f
*(arg1 + 0xb0) = xmm2_6 * xmm4
*(arg1 + 0xb4) = xmm5_3
return result
