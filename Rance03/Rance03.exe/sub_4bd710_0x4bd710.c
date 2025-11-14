// 函数: sub_4bd710
// 地址: 0x4bd710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
int32_t* eax = *(arg1 + 4)
int32_t ebx
int32_t var_10 = ebx

if (eax == *(arg1 + 8))
    return 0

int32_t ecx = *(arg1 + 8)
int32_t* esi = eax
int32_t result = *esi

if (esi != ecx)
    while (arg2 s>= esi[2])
        if (arg2 s< esi[3])
            float xmm4_3
            
            if (esi[0xe] != 0)
                sub_50b800(&esi[2])
                int32_t ecx_2 = 0
                int32_t edx_2 = esi[0x15] - esi[0x14]
                uint128_t xmm1_1 = zx.o(arg2 - esi[2])
                float xmm4_5 = _mm_cvtepi32_ps(zx.o(esi[3] - esi[2]))
                int32_t edx_3 = edx_2 s>> 2
                float j = _mm_cvtepi32_ps(xmm1_1) / xmm4_5
                
                if (edx_3 s<= 0)
                label_4bd7df:
                    xmm4_3 = 1f
                else
                    while (j f< 0 || not(*(esi[0x14] + (ecx_2 << 2)) f> j))
                        j = j f- *(esi[0x14] + (ecx_2 << 2))
                        ecx_2 += 1
                        
                        if (ecx_2 s>= edx_3)
                            goto label_4bd7df
                    
                    int32_t eax_12 = esi[0x14]
                    float xmm3_2 = _mm_cvtepi32_ps(zx.o(int.d(j * xmm4_5)))
                    int32_t ecx_4 = ecx_2 * 3
                    float xmm0_9 = _mm_cvtepi32_ps(zx.o(int.d(*(eax_12 + (ecx_2 << 2)) * xmm4_5)))
                    int32_t eax_14 = esi[0x11]
                    float xmm3_3 = xmm3_2 / xmm0_9
                    float xmm2_1 = 1f - xmm3_3
                    float xmm4_11 = (*(eax_14 + (ecx_4 << 3) + 0xc) * 3f * xmm3_3
                        + *(eax_14 + (ecx_4 << 3) + 4) * xmm2_1) * xmm2_1
                        + *(eax_14 + (ecx_4 << 3) + 0x14) * 3f * xmm3_3 * xmm3_3
                    xmm4_3 = xmm4_11 * xmm2_1
                        + *(eax_14 + (ecx_4 << 3) + 0x1c) * xmm3_3 * xmm3_3 * xmm3_3
            else
                xmm4_3 =
                    _mm_cvtepi32_ps(zx.o(arg2 - esi[2])) / _mm_cvtepi32_ps(zx.o(esi[3] - esi[2]))
            
            int32_t ecx_3 = *esi
            int32_t eax_10 = esi[1] - ecx_3
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_3))
            return int.d(_mm_cvtepi32_ps(zx.o(eax_10)) * xmm4_3 + xmm0_5)
        
        int32_t eax_2 = esi[1]
        esi = &esi[0x17]
        result = eax_2 - 1
        
        if (esi == ecx)
            return result

return result
