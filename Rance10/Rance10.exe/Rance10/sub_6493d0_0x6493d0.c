// 函数: sub_6493d0
// 地址: 0x6493d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = int.d(arg2 * 255f)

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

float xmm5_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
int32_t* ecx = *(arg1 + 0x30)
int32_t esi_2 = not.d(esi << 0x18)
float xmm4 = arg2 * arg2
float xmm5_3 = (xmm5_1 - __maxss_xmmss_memss(xmm5_1 - xmm5_1 * xmm4, 0x3f800000)) * 0.5f
float xmm5_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
float xmm5_7 = (xmm5_5 - __maxss_xmmss_memss(xmm5_5 - xmm5_5 * xmm4, 0x3f800000)) * 0.5f
float* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    
    if (result != 0)
        uint128_t xmm1_6 = zx.o(*(arg1 + 8))
        int32_t* ecx_1 = &result[4]
        uint128_t xmm0_6 = zx.o(*(arg1 + 4))
        result[2] = 0x3f000000
        result[3] = 0x3f800000
        float xmm1_7 = _mm_cvtepi32_ps(xmm1_6)
        float xmm0_8 = _mm_cvtepi32_ps(xmm0_6) - xmm5_3
        result[1] = xmm1_7 - xmm5_7
        *result = xmm0_8
        *ecx_1 = esi_2
        ecx_1[1] = 0
        ecx_1[2] = 0
        int32_t eax_2 = *(arg1 + 4) + *(arg1 + 0xc)
        uint128_t xmm1_9 = zx.o(*(arg1 + 8))
        ecx_1[5] = 0x3f000000
        ecx_1[6] = 0x3f800000
        float xmm1_10 = _mm_cvtepi32_ps(xmm1_9)
        float xmm0_11 = _mm_cvtepi32_ps(zx.o(eax_2)) + xmm5_3
        ecx_1[4] = xmm1_10 - xmm5_7
        ecx_1[3] = xmm0_11
        ecx_1[7] = esi_2
        ecx_1[8] = 0x3f800000
        ecx_1[9] = 0
        int32_t eax_4 = *(arg1 + 0x10) + *(arg1 + 8)
        float xmm0_13 = _mm_cvtepi32_ps(zx.o(*(arg1 + 4)))
        ecx_1[0xc] = 0x3f000000
        ecx_1[0xd] = 0x3f800000
        float xmm1_14 = _mm_cvtepi32_ps(zx.o(eax_4)) + xmm5_7
        ecx_1[0xa] = xmm0_13 - xmm5_3
        ecx_1[0xb] = xmm1_14
        ecx_1[0xe] = esi_2
        ecx_1[0xf] = 0
        ecx_1[0x10] = 0x3f800000
        result = *(arg1 + 4) + *(arg1 + 0xc)
        float xmm1_16 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) + *(arg1 + 8)))
        ecx_1[0x13] = 0x3f000000
        ecx_1[0x14] = 0x3f800000
        float xmm0_17 = _mm_cvtepi32_ps(zx.o(result)) + xmm5_3
        ecx_1[0x12] = xmm1_16 + xmm5_7
        ecx_1[0x11] = xmm0_17
        ecx_1[0x15] = esi_2
        ecx_1[0x16] = 0x3f800000
        ecx_1[0x17] = 0x3f800000
        int32_t* ecx_2 = *(arg1 + 0x30)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
