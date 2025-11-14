// 函数: sub_609520
// 地址: 0x609520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = (*(*arg2 + 8))(0, 0)

if (esi == 0)
    void* eax_1
    eax_1.b = 0
    return eax_1

int32_t eax_3 = (*(*arg2 + 0x10))()
int32_t* eax_4 = (*(*arg2 + 0x14))()
int32_t ebp = 0
int32_t eax_6 = (*(*arg2 + 0x1c))() - (eax_3 << 2)
int32_t* eax_7 = eax_4

if (eax_7 s> 0)
    int32_t ecx_5 = eax_6
    float xmm3_1 = 1f / _mm_cvtepi32_ps(zx.o(eax_7))
    float xmm0_3 = arg1
    float var_4_1 = xmm3_1
    
    do
        int32_t edi_1 = 0
        float xmm2_3 = _mm_cvtepi32_ps(zx.o(ebp)) * xmm3_1 * xmm0_3
        float var_c_1 = xmm2_3
        
        if (eax_3 s> 0)
            float xmm3_2 = 1f / _mm_cvtepi32_ps(zx.o(eax_3))
            float var_8_1 = xmm3_2
            
            do
                int32_t mxcsr
                int32_t xmm0_9
                mxcsr, xmm0_9 =
                    ___libm_sse2_powf(mxcsr, _mm_cvtepi32_ps(zx.o(edi_1)) * xmm3_2, xmm2_3)
                
                if (not(0 f<= xmm0_9))
                    xmm0_9 = (zx.o(0)).d
                else if (not(xmm0_9 f<= 1f))
                    xmm0_9 = 0x3f800000
                
                edi_1 += 1
                *(esi + 3) = 0
                xmm2_3 = var_c_1
                xmm3_2 = var_8_1
                char eax_8 = (int.d(xmm0_9 f* 255f)).b
                *esi = eax_8
                *(esi + 1) = eax_8
                *(esi + 2) = eax_8
                esi += 4
            while (edi_1 s< eax_3)
            
            xmm3_1 = var_4_1
            xmm0_3 = arg1
            eax_7 = eax_4
            ecx_5 = eax_6
        
        ebp += 1
        esi += ecx_5
    while (ebp s< eax_7)

eax_7.b = 1
return eax_7
