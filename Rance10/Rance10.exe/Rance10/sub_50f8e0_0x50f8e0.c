// 函数: sub_50f8e0
// 地址: 0x50f8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x11c)
int32_t eax_1 = *(*(arg1 + 0x22c) + 0xa4) - 1

if (eax_1 u<= 8)
    uint32_t eax_2 = zx.d(lookup_table_50f938[eax_1])
    
    switch (eax_2)
        case 1
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(edx)
            int32_t eax_7 = neg.d((eax_4 - edx_1) s>> 1)
            _mm_cvtepi32_ps(zx.o(eax_7))
            return eax_7
        case 2
            _mm_cvtepi32_ps(zx.o(neg.d(edx)))
            return eax_2

_mm_cvtepi32_ps(0)
return 0
