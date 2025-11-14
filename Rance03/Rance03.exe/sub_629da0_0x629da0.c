// 函数: sub_629da0
// 地址: 0x629da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 1 << (8 - arg4)
char* eax_1 = sub_62aaf0(arg3, edx << 2)
*arg2 = eax_1
int32_t esi_1 = 0

if (edx u> 0)
    do
        int32_t eax_2
        
        if (arg3 != 0)
            int32_t eax_3 = *(arg3 + 0x274)
            
            if (eax_3 == 0)
                eax_2 = _malloc(0x200)
            else
                eax_2 = eax_3(arg3, 0x200)
            
            if (eax_2 == 0)
                sub_62a520(arg3, "Out of memory")
                noreturn
        else
            eax_2 = 0
        
        *(eax_1 + (esi_1 << 2)) = eax_2
        esi_1 += 1
    while (esi_1 u< edx)

int32_t j = 0
int32_t i = 0
int32_t i_1 = 0

do
    int16_t eax_4 = i.w * 0x101
    int16_t eax_8
    
    if (zx.d(eax_4) + 0x7f u> 0xfffd)
        eax_8 = eax_4 + 0x80
    else
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(zx.d(eax_4) + 0x80))
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(arg5))
        uint64_t xmm4_3[0x2] = ___libm_sse2_pow(
            (xmm0_2 f+ *(((zx.d(eax_4) + 0x80) u>> 0x1f << 3) + &data_709480))
                * 1.5259021896696422e-05, 
            xmm1_2 * 1.0000000000000001e-05) * 65535.0 + 0.5
        uint64_t xmm3_2[0x2] = _mm_and_pd(-0x8000000000000000, xmm4_3)
        int64_t xmm0_7 = _mm_xor_pd(xmm4_3, xmm3_2)
        uint64_t xmm2_1 = xmm4_3[0]
        double xmm1_6 = _mm_or_pd(
            _mm_and_pd(0x4330000000000000, 
                __cmpsd_xmm_xmmsd_memsd_immb(xmm0_7, 0x4330000000000000, 1)), 
            xmm3_2)
        double xmm2_3 = xmm2_1 f+ xmm1_6 - xmm1_6
        eax_8 = (int.d(xmm2_3
            - _mm_and_pd(_mm_cmpeq_sd(xmm2_3 f- xmm4_3, xmm3_2, 6), 0x3ff0000000000000))).w
    
    while (j u< (zx.d(eax_8) * ((1 << (0x10 - arg4)) - 1) + 0x8000) u/ 0xffff + 1)
        uint32_t edx_4 = j u>> (8 - arg4)
        int32_t eax_11 = 0xff u>> arg4 & j
        j += 1
        *(*(eax_1 + (eax_11 << 2)) + (edx_4 << 1)) = eax_4
    
    i = i_1 + 1
    i_1 = i
while (i u< 0xff)

int32_t edi_5 = edx << 8

if (j u< edi_5)
    i = 0xff s>> arg4
    char ecx_14 = 8 - arg4
    int32_t i_2 = i
    
    do
        int32_t eax_14 = i & j
        uint32_t edx_6 = j u>> ecx_14
        j += 1
        *(*(eax_1 + (eax_14 << 2)) + (edx_6 << 1)) = 0xffff
        ecx_14 = 8 - arg4
        i = i_2
    while (j u< edi_5)

return i
