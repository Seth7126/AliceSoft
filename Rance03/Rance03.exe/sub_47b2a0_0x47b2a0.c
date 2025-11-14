// 函数: sub_47b2a0
// 地址: 0x47b2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm3_1 = arg1[1]
float xmm2 = *arg1
float xmm4 = arg1[2]
float xmm1_3 = xmm2 * xmm2 + xmm3_1 * xmm3_1 + xmm4 * xmm4
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 - 0f
int32_t result
result:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    float xmm0_4 = 1f / xmm1_4
    *arg1 = xmm2 * xmm0_4
    arg1[1] = xmm3_1 * xmm0_4
    arg1[2] = xmm4 * xmm0_4

return result
