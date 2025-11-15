// 函数: sub_6bed10
// 地址: 0x6bed10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
int32_t i = 0

if (arg5 s> 0)
    if (arg5 u>= 8)
        int32_t ecx_2 = arg5 & 0x80000007
        
        if (ecx_2 s< 0)
            ecx_2 = ((ecx_2 - 1) | 0xfffffff8) + 1
        
        int32_t xmm6_1[0x4] = data_79a840.o
        int32_t xmm4_1[0x4] = zx.o(0)
        int32_t xmm3_1[0x4] = zx.o(0)
        
        do
            int32_t xmm2_2[0x4] = _mm_cmpeq_epi32(*(arg4 + (i << 2)), zx.o(0))
            int32_t xmm0_2[0x4] = _mm_add_epi32(xmm6_1, xmm4_1)
            int32_t xmm2_3[0x4] = *(arg4 + (i << 2) + 0x10)
            i += 8
            int32_t xmm2_4[0x4] = _mm_cmpeq_epi32(xmm2_3, zx.o(0))
            xmm4_1 = (xmm4_1 & xmm2_2) | (xmm2_2 & not.o(xmm0_2))
            xmm3_1 = (xmm3_1 & xmm2_4) | (xmm2_4 & not.o(_mm_add_epi32(xmm6_1, xmm3_1)))
        while (i s< arg5 - ecx_2)
        
        int32_t xmm3_3[0x4] = _mm_add_epi32(xmm3_1, xmm4_1)
        int32_t xmm3_4[0x4] = _mm_add_epi32(xmm3_3, _mm_bsrli_si128(xmm3_3, 8))
        esi = _mm_add_epi32(xmm3_4, _mm_bsrli_si128(xmm3_4, 4))
    
    while (i s< arg5)
        int32_t ecx_5 = *(arg4 + (i << 2))
        int32_t edx_3 = esi + 1
        i += 1
        
        if (ecx_5 == 0)
            edx_3 = esi
        
        esi = edx_3
    
    if (esi != 0)
        return sub_6be4d0(i, arg2, arg1, arg3, arg5)

return 0
