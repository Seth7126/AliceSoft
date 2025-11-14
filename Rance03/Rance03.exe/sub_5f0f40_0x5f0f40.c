// 函数: sub_5f0f40
// 地址: 0x5f0f40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t mxcsr
int16_t x87control
float var_c = fconvert.s(sub_6b1380(mxcsr, x87control, fconvert.d(fconvert.t(arg3))))
int32_t esi_2 = int.d(fconvert.t(var_c)) * 2 * *(arg1 + 0x34) + 1
int32_t ecx_1 = esi_2 * esi_2
void* result
bool p_2

if (*(arg1 + 0x3c) - *(arg1 + 0x38) == ecx_1)
    float xmm0_1 = *(arg1 + 0x44)
    xmm0_1 - arg3
    result:1.b = (xmm0_1 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg3) ? 1 : 0) << 2
        | (xmm0_1 < arg3 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (*(arg1 + 0x3c) - *(arg1 + 0x38) != ecx_1 || p_2)
    double var_24
    var_24:4.d = arg2
    var_24.d = ecx_1
    sub_403540(arg1 + 0x38, var_24.d)
    char* ebx_1 = *(arg1 + 0x38)
    int32_t ebp = 0
    
    if (esi_2 s> 0)
        do
            int32_t edi_1 = 0
            
            do
                int32_t esi_3 = *(arg1 + 0x34)
                int32_t eax_4 = esi_3 * int.d(fconvert.t(var_c))
                int32_t ecx_5 = ebp - eax_4
                int32_t edx_2 = edi_1 - eax_4
                float xmm1 = _mm_sqrt_ss(0, _mm_cvtepi32_ps(zx.o(ecx_5 * ecx_5 + edx_2 * edx_2)))
                float xmm0_6 = _mm_cvtepi32_ps(zx.o(esi_3)) * arg3
                xmm0_6 - xmm1
                eax_4.b = xmm0_6 < xmm1
                edi_1 += 1
                eax_4.b -= 1
                *ebx_1 = eax_4.b
                ebx_1 = &ebx_1[1]
            while (edi_1 s< esi_2)
            
            ebp += 1
        while (ebp s< esi_2)
    
    result = arg1
    *(result + 0x44) = arg3

return result
