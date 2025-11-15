// 函数: sub_6bb780
// 地址: 0x6bb780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = 0
int32_t eax = int.d((fconvert.d(arg4 + arg8) - 30.0) * 0.10000000149011612)
float xmm0_6 = _mm_cvtepi32_ps(zx.o(arg7))

if (eax s> 0)
    edx = eax

int32_t eax_1 = 7

if (edx s< 7)
    eax_1 = edx

int32_t* edx_1 = *(arg2 + (eax_1 << 2))
int32_t ebp = int.d(fconvert.t(edx_1[1]))
int32_t ecx = int.d(fconvert.t(*edx_1))
int32_t result =
    int.d((*edx_1 - 16f) * xmm0_6 + _mm_cvtepi32_ps(zx.o(arg5)) - _mm_cvtepi32_ps(zx.o(arg7 s>> 1)))

if (ecx s< ebp)
    void* edx_3 = &edx_1[ecx + 2]
    
    do
        if (result s> 0)
            float xmm0_12 = *edx_3 + arg4
            
            if (not(xmm0_12 f<= *(arg3 + (result << 2))))
                *(arg3 + (result << 2)) = xmm0_12
        
        result += arg7
        
        if (result s>= arg6)
            break
        
        ecx += 1
        edx_3 += 4
    while (ecx s< ebp)

return result
