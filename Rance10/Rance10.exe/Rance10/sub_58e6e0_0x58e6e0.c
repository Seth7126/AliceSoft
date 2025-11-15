// 函数: sub_58e6e0
// 地址: 0x58e6e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 8)
int32_t* edx = *(arg1 + 4)
int32_t esi = 0
uint32_t edi_3 = (result - edx + 3) u>> 2

if (edx u> result)
    edi_3 = 0

if (edi_3 != 0)
    do
        void* ecx = *edx
        result = *(ecx + 4)
        
        if (result != 0)
            float xmm0_1 = *(result + 0x50)
            xmm0_1 f- 0
            result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                | (xmm0_1 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                float xmm2_5 =
                    _mm_cvtepi32_ps(zx.o(arg2)) * xmm0_1 * 0.00100000005f f+ *(ecx + 0x70)
                *(ecx + 0x70) = xmm2_5
                
                if (not(xmm2_5 < 1f))
                    *(ecx + 0x70) = xmm2_5 - _mm_cvtepi32_ps(zx.o(int.d(xmm2_5)))
                else if (not(0 f<= xmm2_5))
                    *(ecx + 0x70) = 1f - (_mm_cvtepi32_ps(zx.o(int.d(xmm2_5))) - xmm2_5)
            
            float xmm0_5 = *(*(ecx + 4) + 0x54)
            xmm0_5 f- 0
            result:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                | (xmm0_5 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm2_11 =
                    _mm_cvtepi32_ps(zx.o(arg2)) * xmm0_5 * 0.00100000005f f+ *(ecx + 0x74)
                *(ecx + 0x74) = xmm2_11
                
                if (not(xmm2_11 < 1f))
                    result = int.d(xmm2_11)
                    *(ecx + 0x74) = xmm2_11 - _mm_cvtepi32_ps(zx.o(result))
                else if (not(0 f<= xmm2_11))
                    result = int.d(xmm2_11)
                    *(ecx + 0x74) = 1f - (_mm_cvtepi32_ps(zx.o(result)) - xmm2_11)
        
        esi += 1
        edx = &edx[1]
    while (esi != edi_3)

return result
