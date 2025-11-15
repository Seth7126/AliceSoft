// 函数: sub_640000
// 地址: 0x640000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = int.d(sub_4a78b0(arg2))
int32_t esi_2 = eax * 2 * *(arg1 + 0x34) + 1
int32_t ecx_1 = esi_2 * esi_2
void* result
bool p_2

if (*(arg1 + 0x3c) - *(arg1 + 0x38) == ecx_1)
    float xmm0_2 = *(arg1 + 0x44)
    xmm0_2 - arg2
    result:1.b = (xmm0_2 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, arg2) ? 1 : 0) << 2
        | (xmm0_2 < arg2 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (*(arg1 + 0x3c) - *(arg1 + 0x38) != ecx_1 || p_2)
    sub_405950(arg1 + 0x38, ecx_1)
    char* ebp_1 = *(arg1 + 0x38)
    int32_t ebx_1 = 0
    
    if (esi_2 s> 0)
        do
            int32_t edi_1 = 0
            
            do
                int32_t esi_3 = *(arg1 + 0x34)
                int32_t eax_4 = esi_3 * eax
                int32_t ecx_4 = ebx_1 - eax_4
                int32_t edx_2 = edi_1 - eax_4
                float xmm0_5 = sub_484cc0(_mm_cvtepi32_ps(zx.o(ecx_4 * ecx_4 + edx_2 * edx_2)))
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(esi_3)) * arg2
                xmm1_2 - xmm0_5
                eax_4.b = xmm1_2 < xmm0_5
                edi_1 += 1
                eax_4.b -= 1
                *ebp_1 = eax_4.b
                ebp_1 = &ebp_1[1]
            while (edi_1 s< esi_2)
            
            ebx_1 += 1
        while (ebx_1 s< esi_2)
    
    result = arg1
    *(result + 0x44) = arg2

return result
