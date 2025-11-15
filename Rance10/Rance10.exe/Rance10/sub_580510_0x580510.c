// 函数: sub_580510
// 地址: 0x580510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *(arg1 + 0x28)
float xmm1_1 = arg3 f- *(arg1 + 0x20)
int32_t edx = int.d((arg2 f- *(arg1 + 0x18)) * _mm_cvtepi32_ps(zx.o(eax))
    / (*(arg1 + 0x1c) f- *(arg1 + 0x18)))
int32_t ecx =
    int.d(xmm1_1 * _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c))) / (*(arg1 + 0x24) f- *(arg1 + 0x20)))

if (edx s>= 0 && edx s< eax && ecx s>= 0 && ecx s< *(arg1 + 0x2c))
    float xmm4_1 = -3.40282347e+38f
    int32_t edx_1 = (eax * ecx + edx) * 3
    int32_t eax_3 = *(arg1 + 0xc)
    int32_t ecx_1 = *(eax_3 + (edx_1 << 2) + 4)
    eax = *(eax_3 + (edx_1 << 2))
    
    if (eax != ecx_1)
        do
            int32_t* edx_2 = *eax
            float xmm7_1 = edx_2[6]
            float xmm3_4 = edx_2[8]
            
            if (not((arg3 f- edx_2[2]) * (*edx_2 - xmm7_1)
                    - (arg2 f- *edx_2) * (edx_2[2] f- xmm3_4) f> 0))
                float xmm1_7 = edx_2[5]
                
                if (not((edx_2[3] f- *edx_2) * (arg3 - xmm1_7)
                        - (xmm1_7 f- edx_2[2]) * (arg2 f- edx_2[3]) f> 0) && not(
                        (xmm7_1 f- edx_2[3]) * (arg3 - xmm3_4)
                        - (arg2 - xmm7_1) * (xmm3_4 f- edx_2[5]) f> 0))
                    xmm4_1 = _mm_max_ss(
                        (((edx_2[9] f* arg2) ^ (data_79aad0).d) - edx_2[0xb] f* arg3 f- edx_2[0xc])
                            f/ edx_2[0xa], 
                        xmm4_1)
            
            eax = &eax[1]
        while (eax != ecx_1)
        
        xmm4_1 - -3.40282347e+38f
        eax:1.b = (xmm4_1 == -3.40282347e+38f ? 1 : 0) << 6
            | (is_unordered.d(xmm4_1, -3.40282347e+38f) ? 1 : 0) << 2
            | (xmm4_1 < -3.40282347e+38f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            *arg4 = xmm4_1
            float* eax_4
            eax_4.b = 1
            return eax_4

eax.b = 0
return eax
