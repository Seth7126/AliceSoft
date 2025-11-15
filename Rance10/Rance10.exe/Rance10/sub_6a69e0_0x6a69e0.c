// 函数: sub_6a69e0
// 地址: 0x6a69e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx = arg4.b
void* edi = arg3
void* var_24 = edi
int32_t ebp = 1 << (8 - edx)
int32_t ebp_2 = (1 << (0x10 - edx)) - 1
int32_t var_1c = ebp_2
uint32_t (* result)[0x4] = sub_6a7b10(edi, ebp << 2)
int32_t ebx_1 = 0
uint32_t (* result_1)[0x4] = result
*arg2 = result

if (ebp u> 0)
    char esi_1 = 8 - edx
    
    do
        if (edi != 0)
            int32_t eax_1 = *(edi + 0x274)
            void* eax_2
            
            if (eax_1 == 0)
                eax_2 = sub_705e22()
            else
                eax_2 = eax_1(edi, 0x200)
            
            edi = eax_2
            
            if (edi == 0)
                sub_6a7500(var_24, "Out of memory")
                noreturn
            
            result = result_1
        
        (*result)[ebx_1] = edi
        
        if (arg5 - 0x17318 u<= 0x2710)
            for (int32_t i = 0; i u< 0x100; i += 1)
                uint32_t eax_13 = (i << (8 - edx)) + ebx_1
                
                if (arg4 != 0)
                    eax_13 = divu.dp.d(0:(eax_13 * 0xffff + (1 << (0xf - edx))), ebp_2)
                
                *(edi + (i << 1)) = eax_13.w
            
            esi_1 = 8 - edx
        else
            int32_t i_1 = 0
            double xmm1_2 =
                1.0 / (_mm_cvtepi32_pd(zx.q(ebp_2)) f+ *((ebp_2 u>> 0x1f << 3) + &data_79aa70))
            double xmm2_3 = _mm_cvtepi32_pd(zx.q(arg5)) * 1.0000000000000001e-05
            double var_14_1 = xmm1_2
            double var_c_1 = xmm2_3
            
            do
                int32_t eax_8 = (i_1 << esi_1) + ebx_1
                uint32_t xmm4_3[0x4] = ___libm_sse2_pow(
                    (_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_79aa70))
                        * xmm1_2, 
                    xmm2_3) * 65535.0 + 0.5
                uint32_t xmm3_2[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_3)
                double xmm2_4 = xmm4_3[0].q
                double xmm1_6 = _mm_or_ps(
                    _mm_and_ps(0x4330000000000000, 
                        __cmpsd_xmm_xmmsd_memsd_immb(xmm4_3[0].q ^ xmm3_2[0].q, 0x4330000000000000, 
                            1)), 
                    xmm3_2)
                double xmm2_6 = xmm2_4 + xmm1_6 - xmm1_6
                xmm1_2 = var_14_1
                xmm2_3 = var_c_1
                *(edi + (i_1 << 1)) = (int.d(xmm2_6
                    - _mm_and_ps(_mm_cmpeq_sd(xmm2_6 f- xmm4_3, xmm3_2, 6), 0x3ff0000000000000))).w
                i_1 += 1
            while (i_1 u< 0x100)
            
            ebp_2 = var_1c
        
        edi = var_24
        ebx_1 += 1
        result = result_1
    while (ebx_1 u< ebp)

return result
