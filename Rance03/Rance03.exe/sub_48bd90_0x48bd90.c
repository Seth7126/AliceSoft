// 函数: sub_48bd90
// 地址: 0x48bd90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm0_1 = *(arg4 i+ 0x38) * arg3
float xmm1_1 = *(arg4 i+ 0xb4) * arg2
float xmm3_1 = *(arg4 i+ 0xb8) * arg2
float xmm6_1 = *(arg4 i+ 0xb0) * arg2
float xmm4_1 = *(arg4 i+ 0xbc) * arg2
arg4 = xmm0_1

if (not(0f <= xmm1_1))
    *(*(arg1 + 0x10) + 0xc) * arg3 <= ((xmm6_1 / xmm1_1) ^ (data_7094c0).d)
    xmm0_1 = arg4

xmm3_1 f- 0
void* eax
eax:1.b =
    (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return eax

int32_t mxcsr

if (not(xmm4_1 <= 1f))
    uint32_t eax_1
    float xmm0_5
    eax_1, xmm0_5 = ___libm_sse2_powf(mxcsr, xmm0_1, xmm4_1)
    return eax_1

if (-1f <= xmm4_1)
    return eax

uint32_t eax_2
float xmm0_9
eax_2, xmm0_9 = ___libm_sse2_powf(mxcsr, 1f - arg4, xmm4_1 ^ (data_7094c0).d)
return eax_2
