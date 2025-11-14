// 函数: sub_629b80
// 地址: 0x629b80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char edx = arg4.b
int32_t ebp = 1 << (8 - edx)
int32_t ebp_2 = (1 << (0x10 - edx)) - 1
int32_t var_1c = ebp_2
char* result = sub_62aaf0(arg3, ebp << 2)
int32_t ebx_1 = 0
char* result_1 = result
*arg2 = result

if (ebp u> 0)
    char esi_1 = 8 - edx
    void* edi_1 = arg3
    
    do
        if (edi_1 != 0)
            int32_t eax_1 = *(edi_1 + 0x274)
            void* eax_2
            
            if (eax_1 == 0)
                eax_2 = _malloc(0x200)
            else
                eax_2 = eax_1(edi_1, 0x200)
            
            edi_1 = eax_2
            
            if (edi_1 == 0)
                sub_62a520(arg3, "Out of memory")
                noreturn
            
            result = result_1
        
        *(result + (ebx_1 << 2)) = edi_1
        
        if (arg5 - 0x17318 u<= 0x2710)
            for (int32_t i = 0; i u< 0x100; i += 1)
                uint32_t eax_13 = (i << (8 - edx)) + ebx_1
                
                if (arg4 != 0)
                    eax_13 = divu.dp.d(0:(eax_13 * 0xffff + (1 << (0xf - edx))), ebp_2)
                
                *(edi_1 + (i << 1)) = eax_13.w
            
            esi_1 = 8 - edx
        else
            int32_t i_1 = 0
            double xmm1_2 =
                1.0 / (_mm_cvtepi32_pd(zx.q(ebp_2)) f+ *((ebp_2 u>> 0x1f << 3) + &data_709480))
            double xmm2_3 = _mm_cvtepi32_pd(zx.q(arg5)) * 1.0000000000000001e-05
            double var_14_1 = xmm1_2
            double var_c_1 = xmm2_3
            
            do
                int32_t eax_8 = (i_1 << esi_1) + ebx_1
                uint64_t xmm4_3[0x2] = ___libm_sse2_pow(
                    (_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_709480))
                        * xmm1_2, 
                    xmm2_3) * 65535.0 + 0.5
                uint64_t xmm3_2[0x2] = _mm_and_pd(-0x8000000000000000, xmm4_3)
                int64_t xmm0_10 = _mm_xor_pd(xmm4_3, xmm3_2)
                uint64_t xmm2_4 = xmm4_3[0]
                double xmm1_6 = _mm_or_pd(
                    _mm_and_pd(0x4330000000000000, 
                        __cmpsd_xmm_xmmsd_memsd_immb(xmm0_10, 0x4330000000000000, 1)), 
                    xmm3_2)
                double xmm2_6 = xmm2_4 f+ xmm1_6 - xmm1_6
                xmm1_2 = var_14_1
                xmm2_3 = var_c_1
                *(edi_1 + (i_1 << 1)) = (int.d(xmm2_6
                    - _mm_and_pd(_mm_cmpeq_sd(xmm2_6 f- xmm4_3, xmm3_2, 6), 0x3ff0000000000000))).w
                i_1 += 1
            while (i_1 u< 0x100)
            
            ebp_2 = var_1c
        
        edi_1 = arg3
        ebx_1 += 1
        result = result_1
    while (ebx_1 u< ebp)

return result
