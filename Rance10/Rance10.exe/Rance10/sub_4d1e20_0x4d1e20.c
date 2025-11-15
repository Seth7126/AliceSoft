// 函数: sub_4d1e20
// 地址: 0x4d1e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x30) = *(arg1 + 0x2c)
float edi = arg2
void* arg_4

if (edi == 1)
    return sub_404370(arg1 + 0x2c, &arg_4)

void* eax_1 = arg_4

if (eax_1 == 1)
    arg_4 = eax_1
    sub_404370(arg1 + 0x2c, &arg_4)
    arg_4 = nullptr
    return sub_4d4cc0(arg1 + 0x2c, edi - 1, &arg_4)

if (edi s<= eax_1)
    if (edi s>= eax_1)
        arg_4 = 1
        return sub_4d4cc0(arg1 + 0x2c, edi, &arg_4)
    
    int32_t ebx_2 = 1
    float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax_1)) / _mm_cvtepi32_ps(zx.o(edi))
    arg2 = xmm1_6
    
    if (edi s>= 1)
        void* eax_12
        
        do
            int32_t ecx_6 = int.d(_mm_cvtepi32_ps(zx.o(ebx_2 - 1)) * xmm1_6)
            arg_4 = int.d(_mm_cvtepi32_ps(zx.o(ebx_2)) * xmm1_6) - ecx_6
            eax_12 = sub_404370(arg1 + 0x2c, &arg_4)
            xmm1_6 = arg2
            ebx_2 += 1
        while (ebx_2 s<= edi)
        
        return eax_12
else
    arg_4 = 1
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(edi - 1))
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(eax_1 - 1)) / xmm0_2
    eax_1 = sub_404370(arg1 + 0x2c, &arg_4)
    int32_t i = 1
    
    if (edi - 1 s>= 1)
        void* eax_8
        
        do
            int32_t ecx_4 = int.d(_mm_cvtepi32_ps(zx.o(i - 1)) * xmm1_3)
            arg_4 = int.d(_mm_cvtepi32_ps(zx.o(i)) * xmm1_3) - ecx_4
            eax_8 = sub_404370(arg1 + 0x2c, &arg_4)
            i += 1
        while (i s<= edi - 1)
        
        return eax_8

return eax_1
