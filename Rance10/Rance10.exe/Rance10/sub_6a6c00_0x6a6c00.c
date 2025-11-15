// 函数: sub_6a6c00
// 地址: 0x6a6c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = 1 << (8 - arg4)
uint32_t (* eax_2)[0x4] = sub_6a7b10(arg3, edx << 2)
*arg2 = eax_2
int32_t esi_1 = 0

if (edx u> 0)
    do
        int32_t eax_3
        
        if (arg3 != 0)
            int32_t eax_4 = *(arg3 + 0x274)
            
            if (eax_4 == 0)
                eax_3 = sub_705e22()
            else
                eax_3 = eax_4(arg3, 0x200)
            
            if (eax_3 == 0)
                sub_6a7500(arg3, "Out of memory")
                noreturn
        else
            eax_3 = 0
        
        (*eax_2)[esi_1] = eax_3
        esi_1 += 1
    while (esi_1 u< edx)

int32_t j = 0
int32_t i = 0
int32_t i_1 = 0

do
    int16_t eax_5 = i.w * 0x101
    int16_t eax_9
    
    if (zx.d(eax_5) + 0x7f u> 0xfffd)
        eax_9 = eax_5 + 0x80
    else
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(zx.d(eax_5) + 0x80))
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(arg5))
        uint32_t xmm4_3[0x4] = ___libm_sse2_pow(
            (xmm0_2 f+ *(((zx.d(eax_5) + 0x80) u>> 0x1f << 3) + &data_79aa70))
                * 1.5259021896696422e-05, 
            xmm1_2 * 1.0000000000000001e-05) * 65535.0 + 0.5
        uint32_t xmm3_2[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_3)
        double xmm2_1 = xmm4_3[0].q
        double xmm1_6 = _mm_or_ps(
            _mm_and_ps(0x4330000000000000, 
                __cmpsd_xmm_xmmsd_memsd_immb(xmm4_3[0].q ^ xmm3_2[0].q, 0x4330000000000000, 1)), 
            xmm3_2)
        double xmm2_3 = xmm2_1 + xmm1_6 - xmm1_6
        eax_9 = (int.d(xmm2_3
            - _mm_and_ps(_mm_cmpeq_sd(xmm2_3 f- xmm4_3, xmm3_2, 6), 0x3ff0000000000000))).w
    
    uint32_t eax_10 = zx.d(eax_9)
    
    while (j u< ((eax_10 << (0x10 - arg4)) - eax_10 + 0x8000) u/ 0xffff + 1)
        uint32_t edx_8 = j u>> (8 - arg4)
        int32_t eax_13 = 0xff u>> arg4 & j
        j += 1
        *((*eax_2)[eax_13] + (edx_8 << 1)) = eax_5
    
    i = i_1 + 1
    i_1 = i
while (i u< 0xff)

int32_t edi_5 = edx << 8

if (j u< edi_5)
    i = 0xff s>> arg4
    char ecx_11 = 8 - arg4
    int32_t i_2 = i
    
    do
        int32_t eax_16 = i & j
        uint32_t edx_10 = j u>> ecx_11
        j += 1
        *((*eax_2)[eax_16] + (edx_10 << 1)) = 0xffff
        ecx_11 = 8 - arg4
        i = i_2
    while (j u< edi_5)

return i
