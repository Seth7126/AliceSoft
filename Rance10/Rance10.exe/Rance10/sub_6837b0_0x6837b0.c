// 函数: sub_6837b0
// 地址: 0x6837b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_24 = ebx
int32_t* var_28 = &var_4
int32_t esi
int32_t var_2c = esi
int32_t xmm1
int32_t var_20 = xmm1
void* esi_1 = (*(*arg1 + 8))(0, 0, arg2)

if (esi_1 == 0)
    void* eax_1
    eax_1.b = 0
    *arg2
    return eax_1

int32_t eax_3 = (*(*arg1 + 0x10))()
int32_t eax_4 = (*(*arg1 + 0x14))()
int32_t ebp_3 = 0
int32_t eax_6 = (*(*arg1 + 0x1c))() - (eax_3 << 2)
int32_t eax_7 = eax_4

if (eax_7 s> 0)
    int32_t ecx_4 = eax_6
    float xmm3_1 = 1f / _mm_cvtepi32_ps(zx.o(eax_7))
    int32_t* xmm0_3 = var_28
    float var_14_1 = xmm3_1
    
    do
        int32_t edi_2 = 0
        float xmm1_4 = _mm_cvtepi32_ps(zx.o(ebp_3)) * xmm3_1 f* xmm0_3
        float var_1c_1 = xmm1_4
        
        if (eax_3 s> 0)
            float xmm2_1 = 1f / _mm_cvtepi32_ps(zx.o(eax_3))
            float var_18_1 = xmm2_1
            
            do
                int32_t mxcsr
                int32_t xmm0_9
                mxcsr, xmm0_9 =
                    ___libm_sse2_powf(mxcsr, _mm_cvtepi32_ps(zx.o(edi_2)) * xmm2_1, xmm1_4)
                int32_t xmm0_10
                
                if (0 f<= xmm0_9)
                    xmm0_10 = __minss_xmmss_memss(xmm0_9, 0x3f800000)
                else
                    xmm0_10 = (zx.o(0)).d
                
                edi_2 += 1
                *(esi_1 + 3) = 0
                xmm1_4 = var_1c_1
                xmm2_1 = var_18_1
                char eax_8 = (int.d(xmm0_10 f* 255f)).b
                *esi_1 = eax_8
                *(esi_1 + 1) = eax_8
                *(esi_1 + 2) = eax_8
                esi_1 += 4
            while (edi_2 s< eax_3)
            
            xmm3_1 = var_14_1
            xmm0_3 = var_28
            eax_7 = eax_4
            ecx_4 = eax_6
        
        ebp_3 += 1
        esi_1 += ecx_4
    while (ebp_3 s< eax_7)

eax_7.b = 1
*arg2
return eax_7
