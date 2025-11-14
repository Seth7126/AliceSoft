// 函数: sub_63b960
// 地址: 0x63b960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx_1 = arg2 - arg3
int32_t edi = arg4
int32_t esi_1 = arg5 - edi
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(esi_1)
int32_t temp0 = divs.dp.d(sx.q(esi_1), ebx_1)
int32_t eax_6 = temp0 - 1

if (esi_1 s>= 0)
    eax_6 = temp0 + 1

int32_t esi_2 = 0
float xmm1 = *(arg6 + (arg3 << 2))
int32_t ecx = int.d(xmm1 * 7.31428576f + 1023.5f)

if (ecx s> 0x3ff)
    ecx = 0x3ff
else if (ecx s< 0)
    ecx = 0

int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(temp0 * ebx_1)
int32_t edx_5 = edi - ecx
int32_t result = 1
void* ebp_4 = arg8
arg4 = 1
arg5 = edx_5 * edx_5
float xmm5 = *(ebp_4 + 0x458)
int32_t edx_8 = arg5

if (*(arg7 + (arg3 << 2)) + xmm5 < xmm1)
label_63ba63:
    int32_t ebx_3 = arg3 + 1
    
    if (ebx_3 s< arg2)
        float* edx_9 = arg6 + (ebx_3 << 2)
        
        do
            esi_2 += (eax_2 ^ edx) - edx - ((eax_10 ^ edx_3) - edx_3)
            
            if (esi_2 s< ebx_1)
                edi += temp0
            else
                esi_2 -= ebx_1
                edi += eax_6
            
            float xmm1_4 = *edx_9
            int32_t ecx_1 = int.d(xmm1_4 * 7.31428576f + 1023.5f)
            
            if (ecx_1 s> 0x3ff)
                ecx_1 = 0x3ff
            else if (ecx_1 s< 0)
                ecx_1 = 0
            
            int32_t eax_16 = edi - ecx_1
            ebp_4 = arg8
            arg5 += eax_16 * eax_16
            result = arg4 + 1
            arg4 = result
            
            if (not(*(edx_9 + arg7 - arg6) + xmm5 < xmm1_4) && ecx_1 != 0)
                float xmm1_6 = _mm_cvtepi32_ps(zx.o(edi))
                float xmm0_13 = xmm1_6 f+ *(ebp_4 + 0x448)
                int32_t xmm2_4 = _mm_cvtepi32_ps(zx.o(ecx_1))
                
                if (xmm2_4 f> xmm0_13 || xmm1_6 f- *(ebp_4 + 0x44c) f> xmm2_4)
                    return 1
            
            ebx_3 += 1
            edx_9 = &edx_9[1]
        while (ebx_3 s< arg2)
        
        edx_8 = arg5
    
    float xmm0_15 = _mm_cvtepi32_ps(zx.o(result))
    float xmm1_8 = *(ebp_4 + 0x448)
    float xmm2_5 = 1f / xmm0_15
    int32_t xmm3_1 = *(ebp_4 + 0x450)
    float xmm0_16
    
    if (xmm1_8 * xmm1_8 * xmm2_5 f<= xmm3_1)
        xmm0_16 = *(ebp_4 + 0x44c)
    
    if (not(xmm1_8 * xmm1_8 * xmm2_5 f<= xmm3_1) || xmm0_16 * xmm0_16 * xmm2_5 f> xmm3_1)
        return 0
    
    result.b = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(edx_8), arg4))) f> xmm3_1
else
    float xmm0_5 = *(ebp_4 + 0x448)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(edi))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx))
    
    if (not(xmm2_2 f> xmm0_5 + xmm1_2) && not(xmm1_2 f- *(ebp_4 + 0x44c) f> xmm2_2))
        goto label_63ba63

return result
