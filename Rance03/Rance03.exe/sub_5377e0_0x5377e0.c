// 函数: sub_5377e0
// 地址: 0x5377e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *arg1
int32_t edx = arg1[1]

if (esi == edx)
    *arg3 = &sealengine::CEmitterPos::`vftable'
    __builtin_memset(&arg3[1], 0, 0x14)
    return arg3

float eax_3 = 0f
int32_t ebp_2 = (edx - esi) s/ 0x24

if (ebp_2 s> 0)
    int32_t ecx = 3
    void* edx_4 = nullptr
    int32_t edi_1 = 2
    int32_t ebx_1 = 1
    
    while (not(_mm_cvtepi32_ps(zx.o(*(edx_4 + esi))) f> arg2))
        if (ebx_1 s< ebp_2)
            if (*(edx_4 + esi + 4) != 0)
                if (edi_1 s< ebp_2)
                    if (ecx s< ebp_2)
                        if (arg2 f< _mm_cvtepi32_ps(zx.o(*(edx_4 + esi + 0x6c))))
                            int32_t var_4c = ecx
                            sub_537a70(arg3, arg1, eax_3, 5.60519386e-45f, arg2)
                            return arg3
                        
                        eax_3 += 3
                        ebx_1 += 3
                        edx_4 += 0x6c
                        edi_1 += 3
                        ecx += 3
                        goto label_5378b0
                    
                    int32_t edx_5 = eax_3 i* 9
                    
                    if (arg2 f< _mm_cvtepi32_ps(zx.o(*(esi + (edx_5 << 2) + 0x48))))
                        int32_t var_4c_2 = ecx
                        sub_537a70(arg3, arg1, eax_3, 4.20389539e-45f, arg2)
                        return arg3
                    
                    *arg3 = &sealengine::CEmitterPos::`vftable'
                    *(arg3 + 4) = *(esi + (edx_5 << 2) + 0x54)
                    arg3[3] = *(esi + (edx_5 << 2) + 0x5c)
                    arg3[4] = *(esi + (edx_5 << 2) + 0x60)
                    arg3[5] = *(esi + (edx_5 << 2) + 0x64)
                    return arg3
                
                int32_t ebx_2 = (eax_3 i+ 1) * 9
                int32_t eax_10 = *(esi + (ebx_2 << 2))
                
                if (not(arg2 f< _mm_cvtepi32_ps(zx.o(eax_10))))
                    *arg3 = &sealengine::CEmitterPos::`vftable'
                    *(arg3 + 4) = *(esi + (ebx_2 << 2) + 0xc)
                    arg3[3] = *(esi + (ebx_2 << 2) + 0x14)
                    arg3[4] = *(esi + (ebx_2 << 2) + 0x18)
                    arg3[5] = *(esi + (ebx_2 << 2) + 0x1c)
                    return arg3
                
                int32_t ecx_13 = *(edx_4 + esi)
                int32_t eax_12 = eax_10 - ecx_13
                
                if (eax_12 s> 0)
                    void* edi_3 = esi + 8 + edx_4
                    float xmm3_2 =
                        (arg2 - _mm_cvtepi32_ps(zx.o(ecx_13))) / _mm_cvtepi32_ps(zx.o(eax_12))
                    struct sealengine::CEmitterPos::VTable* var_30
                    struct sealengine::CEmitterPos::VTable* var_18
                    sub_538010(edi_3, arg3, 
                        sub_5380f0(sub_538080(esi + 8 + (ebx_2 << 2), &var_18, edi_3), xmm3_2, 
                            &var_30))
                    return arg3
            else if (not(_mm_cvtepi32_ps(zx.o(*(edx_4 + esi + 0x24))) f> arg2))
                eax_3 += 1
                ebx_1 += 1
                edx_4 += 0x24
                edi_1 += 1
                ecx += 1
            label_5378b0:
                
                if (eax_3 s>= ebp_2)
                    break
                
                continue
        
        *arg3 = &sealengine::CEmitterPos::`vftable'
        *(arg3 + 4) = *(edx_4 + esi + 0xc)
        arg3[3] = *(edx_4 + esi + 0x14)
        arg3[4] = *(edx_4 + esi + 0x18)
        arg3[5] = *(edx_4 + esi + 0x1c)
        return arg3

*arg3 = &sealengine::CEmitterPos::`vftable'
*(arg3 + 4) = *(esi + 0xc)
arg3[3] = *(esi + 0x14)
arg3[4] = *(esi + 0x18)
arg3[5] = *(esi + 0x1c)
return arg3
