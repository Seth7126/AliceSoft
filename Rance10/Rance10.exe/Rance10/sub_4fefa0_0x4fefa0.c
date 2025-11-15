// 函数: sub_4fefa0
// 地址: 0x4fefa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
void* var_4 = edx
int32_t* result = *(*(edx + 0x6c) + 0x70)
int32_t ebp_2 = (result[0x31] - result[0x30]) s>> 2

if (ebp_2 != 0)
    int32_t xmm0_1 = 0xcf000000
    int32_t xmm1_1 = -0x31000000
    int32_t var_14_1 = 0xcf000000
    int32_t edi_1 = 0
    int32_t var_10_1 = 0xcf000000
    
    if (ebp_2 s> 0)
        int32_t ebx
        int32_t var_20_1 = ebx
        
        do
            int32_t esi_1
            
            if (edi_1 s>= 0)
                void* ecx = *(*(edx + 0x6c) + 0x70)
                
                if ((*(ecx + 0xc4) - *(ecx + 0xc0)) s>> 2 s> edi_1)
                    esi_1 = *(*(ecx + 0xc0) + (edi_1 << 2))
                else
                    esi_1 = 0
            else
                esi_1 = 0
            
            int32_t var_28_1 = esi_1
            void* eax_6 = sub_4f15e0(*(edx + 0x70))
            
            if (eax_6 != 0)
                int32_t edx_1 = *(eax_6 + 8)
                
                if (esi_1 s>= edx_1 && *(eax_6 + 4) + edx_1 s> esi_1)
                    void* esi_3 = *(*(eax_6 + 0xc) + ((esi_1 - edx_1) << 2))
                    
                    if (esi_3 != 0)
                        ebx.b = *(esi_3 + 0xac)
                        char eax_8 = sub_4f0100(esi_3)
                        char edx_2
                        
                        if (*(esi_3 + 0xaa) != 0 && *(esi_3 + 0xab) != 0)
                            edx_2 = 1
                            
                            if (ebx.b != 0)
                                edx_2 = arg4
                        
                        if (*(esi_3 + 0xaa) == 0 || *(esi_3 + 0xab) == 0 || edx_2 == 0
                                || eax_8 == 0)
                            xmm1_1 = var_10_1
                            xmm0_1 = var_14_1
                        else
                            int32_t var_c
                            int32_t var_8
                            (*(**(esi_3 + 0x74) + 0x20))(&var_c, &var_8, 1)
                            int32_t edx_3 = var_c
                            int32_t ecx_8 = *(esi_3 + 0xa4) - 1
                            int32_t eax_15
                            
                            switch (ecx_8)
                                case 1, 4, 7
                                    int32_t eax_12
                                    int32_t edx_4
                                    edx_4:eax_12 = sx.q(edx_3)
                                    eax_15 = neg.d((eax_12 - edx_4) s>> 1)
                                case 2, 5, 8
                                    eax_15 = neg.d(edx_3)
                                default
                                    eax_15 = 0
                            
                            ebx = var_8
                            float xmm0_3 = _mm_cvtepi32_ps(zx.o(eax_15))
                            int32_t eax_22
                            
                            switch (ecx_8)
                                case 3, 4, 5
                                    int32_t eax_19
                                    int32_t edx_5
                                    edx_5:eax_19 = sx.q(ebx)
                                    eax_22 = neg.d((eax_19 - edx_5) s>> 1)
                                case 6, 7, 8
                                    eax_22 = neg.d(ebx)
                                default
                                    eax_22 = 0
                            
                            float xmm2_2 = *(esi_3 + 0x90) + xmm0_3
                            float xmm0_5 = _mm_cvtepi32_ps(zx.o(var_c))
                            float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_22)) f+ *(esi_3 + 0x94)
                            float xmm0_7 = _mm_cvtepi32_ps(zx.o(ebx))
                            xmm0_1 = __maxss_xmmss_memss(xmm2_2 + xmm0_5, var_14_1)
                            xmm1_1 = __maxss_xmmss_memss(xmm1_4 + xmm0_7, var_10_1)
                            var_14_1 = xmm0_1
                            var_10_1 = xmm1_1
            
            edx = var_4
            edi_1 += 1
        while (edi_1 s< ebp_2)
    
    *arg2 = xmm0_1
    result = arg3
    *result = xmm1_1

return result
