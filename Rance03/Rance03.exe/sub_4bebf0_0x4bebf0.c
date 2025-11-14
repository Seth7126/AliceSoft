// 函数: sub_4bebf0
// 地址: 0x4bebf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (*(arg1 + 0x38) == 0)
    int32_t eax_3 = *(arg1 + 0xc) - *(arg1 + 8)
    _mm_cvtepi32_ps(zx.o(arg2 - *(arg1 + 8)))
    _mm_cvtepi32_ps(zx.o(eax_3))
    return eax_3

sub_50b800(arg1 + 8)
int32_t ecx_1 = 0
int32_t edx_2 = (*(arg1 + 0x54) - *(arg1 + 0x50)) s>> 2
int32_t eax_7 = arg2 - *(arg1 + 8)
float xmm3_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc) - *(arg1 + 8)))
float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_7)) / xmm3_1

if (edx_2 s> 0)
    do
        if (not(xmm1_4 f< 0) && *(*(arg1 + 0x50) + (ecx_1 << 2)) f> xmm1_4)
            int32_t eax_10 = *(arg1 + 0x50)
            float xmm5_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_4 * xmm3_1)))
            int32_t ecx_2 = ecx_1 * 3
            float xmm0_9 = _mm_cvtepi32_ps(zx.o(int.d(*(eax_10 + (ecx_1 << 2)) * xmm3_1)))
            int32_t eax_12 = *(arg1 + 0x44)
            float xmm5_2 = xmm5_1 / xmm0_9
            float xmm3_2 = 1f - xmm5_2
            (*(eax_12 + (ecx_2 << 3) + 0xc) * 3f * xmm5_2 + *(eax_12 + (ecx_2 << 3) + 4) * xmm3_2)
                * xmm3_2 + *(eax_12 + (ecx_2 << 3) + 0x14) * 3f * xmm5_2 * xmm5_2
            *(eax_12 + (ecx_2 << 3) + 0x1c)
            return eax_12
        
        eax_7 = *(arg1 + 0x50)
        xmm1_4 = xmm1_4 f- *(eax_7 + (ecx_1 << 2))
        ecx_1 += 1
    while (ecx_1 s< edx_2)

return eax_7
