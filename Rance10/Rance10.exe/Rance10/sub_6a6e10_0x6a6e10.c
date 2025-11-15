// 函数: sub_6a6e10
// 地址: 0x6a6e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi

if (arg3 != 0)
    int32_t eax_4 = *(arg3 + 0x274)
    char* eax_5
    
    if (eax_4 == 0)
        eax_5 = sub_705e22()
    else
        eax_5 = eax_4(arg3, 0x100)
    
    esi = eax_5
    
    if (esi == 0)
        sub_6a7500(arg3, "Out of memory")
        noreturn
else
    esi = nullptr

int32_t ecx = arg4
*arg2 = esi

if (ecx - 0x17318 u<= 0x2710)
    int32_t i
    
    for (i = 0; i u< 0x100; i += 1)
        esi[i] = i.b
    
    return i

int32_t eax_1

for (int32_t i_1 = 0; i_1 u< 0x100; )
    char* edi_1 = &esi[i_1]
    
    if (edi_1 + 0xffffffff - esi u> 0xfd)
        eax_1.b = i_1.b
    else
        double xmm4_2 = ___libm_sse2_pow(
            (_mm_cvtepi32_pd(zx.q(i_1)) f+ *((i_1 u>> 0x1f << 3) + &data_79aa70))
                * 0.0039215686274509803, 
            _mm_cvtepi32_pd(zx.q(ecx)) * 1.0000000000000001e-05) * 255.0
        ecx = arg4
        uint32_t xmm4_3[0x4] = xmm4_2 + 0.5
        uint32_t xmm3_2[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_3)
        double xmm2_1 = xmm4_3[0].q
        double xmm1_6 = _mm_or_ps(
            _mm_and_ps(0x4330000000000000, 
                __cmpsd_xmm_xmmsd_memsd_immb(xmm4_3[0].q ^ xmm3_2[0].q, 0x4330000000000000, 1)), 
            xmm3_2)
        double xmm2_3 = xmm2_1 + xmm1_6 - xmm1_6
        eax_1 = int.d(xmm2_3
            - _mm_and_ps(_mm_cmpeq_sd(xmm2_3 f- xmm4_3, xmm3_2, 6), 0x3ff0000000000000))
    
    i_1 += 1
    *edi_1 = eax_1.b

return eax_1
