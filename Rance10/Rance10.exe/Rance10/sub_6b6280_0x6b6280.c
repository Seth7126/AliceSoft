// 函数: sub_6b6280
// 地址: 0x6b6280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg4
int32_t ebx_1 = arg2 - arg3
int32_t edi_1 = arg5 - esi
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi_1)
int32_t edi_2 = 0
int32_t temp0 = divs.dp.d(sx.q(edi_1), ebx_1)
float xmm1 = *(arg6 + (arg3 << 2))
int32_t ecx = int.d(xmm1 * 7.31428576f + 1023.5f)

if (ecx s> 0x3ff)
    ecx = 0x3ff
else if (ecx s< 0)
    ecx = 0

int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(temp0 * ebx_1)
int32_t edx_5 = esi - ecx
int32_t result = 1
void* ebp_4 = arg8
int32_t result_1 = 1
arg4 = edx_5 * edx_5
float xmm3 = *(ebp_4 + 0x458)
int32_t edx_8 = arg4

if (*(arg7 + (arg3 << 2)) + xmm3 < xmm1)
label_6b6375:
    int32_t ebx_3 = arg3 + 1
    
    if (ebx_3 s< arg2)
        float* edx_9 = arg6 + (ebx_3 << 2)
        
        do
            edi_2 += (eax_2 ^ edx) - edx - ((eax_7 ^ edx_3) - edx_3)
            
            if (edi_2 s< ebx_1)
                esi += temp0
            else
                edi_2 -= ebx_1
                int32_t eax_13 = temp0 + 1 + esi
                esi = esi - 1 + temp0
                
                if (edi_1 s>= 0)
                    esi = eax_13
            
            float xmm1_4 = *edx_9
            int32_t ecx_2 = int.d(xmm1_4 * 7.31428576f + 1023.5f)
            
            if (ecx_2 s> 0x3ff)
                ecx_2 = 0x3ff
            else if (ecx_2 s< 0)
                ecx_2 = 0
            
            int32_t eax_15 = esi - ecx_2
            ebp_4 = arg8
            arg4 += eax_15 * eax_15
            result = result_1 + 1
            result_1 = result
            
            if (not(*(edx_9 + arg7 - arg6) + xmm3 < xmm1_4) && ecx_2 != 0)
                float xmm1_6 = _mm_cvtepi32_ps(zx.o(esi))
                float xmm0_13 = xmm1_6 f+ *(ebp_4 + 0x448)
                int32_t xmm2_4 = _mm_cvtepi32_ps(zx.o(ecx_2))
                
                if (xmm2_4 f> xmm0_13 || xmm1_6 f- *(ebp_4 + 0x44c) f> xmm2_4)
                    return 1
            
            ebx_3 += 1
            edx_9 = &edx_9[1]
        while (ebx_3 s< arg2)
        
        edx_8 = arg4
    
    float xmm0_15 = _mm_cvtepi32_ps(zx.o(result))
    float xmm1_8 = *(ebp_4 + 0x448)
    float xmm2_5 = 1f / xmm0_15
    int32_t xmm3_1 = *(ebp_4 + 0x450)
    float xmm0_16
    
    if (xmm1_8 * xmm1_8 * xmm2_5 f<= xmm3_1)
        xmm0_16 = *(ebp_4 + 0x44c)
    
    if (not(xmm1_8 * xmm1_8 * xmm2_5 f<= xmm3_1) || xmm0_16 * xmm0_16 * xmm2_5 f> xmm3_1)
        return 0
    
    result.b = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(edx_8), result_1))) f> xmm3_1
else
    float xmm0_5 = *(ebp_4 + 0x448)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(esi))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx))
    
    if (not(xmm2_2 f> xmm0_5 + xmm1_2) && not(xmm1_2 f- *(ebp_4 + 0x44c) f> xmm2_2))
        goto label_6b6375

return result
