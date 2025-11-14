// 函数: sub_5ca5e0
// 地址: 0x5ca5e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result

if (*(arg2 + 0x48) != 0)
    result = *(arg2 + 0xc) u>> 2
    
    if (result s>= 2)
        void* edi_1
        
        if (*(arg2 + 0xc) != 0)
            edi_1 = *(arg2 + 8)
        else
            edi_1 = nullptr
        
        arg2 = edi_1
        
        if (result s> 1)
            int32_t ecx = 0
            int32_t* edx = edi_1 + 4
            result -= 1
            int32_t var_8_1 = 0
            int32_t* var_c_1 = edx
            uint32_t result_1 = result
            
            while (true)
                int32_t ebp_1 = *edx
                int32_t ebx_1 = ecx
                
                if (ecx s>= 0)
                    void* edi_2 = edi_1
                    
                    while (true)
                        void* eax_4
                        
                        if (ebp_1 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_4 = *(*(arg1 + 0x174) + (ebp_1 << 2))
                        else
                            eax_4 = nullptr
                        
                        int32_t eax_6
                        
                        if (*(eax_4 + 0xc) != 0)
                            eax_6 = *(eax_4 + 8)
                        else
                            eax_6 = 0
                        
                        int32_t ecx_1 = *(eax_6 + (arg3 << 2))
                        void* ecx_2
                        
                        if (ecx_1 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            ecx_2 = *(*(arg1 + 0x174) + (ecx_1 << 2))
                        else
                            ecx_2 = nullptr
                        
                        char* ecx_3
                        
                        if (*(ecx_2 + 0xc) != 0)
                            ecx_3 = *(ecx_2 + 8)
                        else
                            ecx_3 = nullptr
                        
                        int32_t edi_3 = *(edi_2 + (ebx_1 << 2))
                        void* eax_14
                        
                        if (edi_3 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_14 = *(*(arg1 + 0x174) + (edi_3 << 2))
                        else
                            eax_14 = nullptr
                        
                        int32_t eax_16
                        
                        if (*(eax_14 + 0xc) != 0)
                            eax_16 = *(eax_14 + 8)
                        else
                            eax_16 = 0
                        
                        int32_t edx_2 = *(eax_16 + (arg3 << 2))
                        void* eax_20
                        
                        if (edx_2 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_20 = *(*(arg1 + 0x174) + (edx_2 << 2))
                        else
                            eax_20 = nullptr
                        
                        char* eax_22
                        
                        if (*(eax_20 + 0xc) != 0)
                            eax_22 = *(eax_20 + 8)
                        else
                            eax_22 = nullptr
                        
                        int32_t eax_24
                        
                        while (true)
                            edx_2.b = *eax_22
                            char temp2_1 = *ecx_3
                            bool c_1 = edx_2.b u< temp2_1
                            
                            if (edx_2.b == temp2_1)
                                if (edx_2.b == 0)
                                    eax_24 = 0
                                    break
                                
                                edx_2.b = eax_22[1]
                                char temp3_1 = ecx_3[1]
                                c_1 = edx_2.b u< temp3_1
                                
                                if (edx_2.b == temp3_1)
                                    eax_22 = &eax_22[2]
                                    ecx_3 = &ecx_3[2]
                                    
                                    if (edx_2.b != 0)
                                        continue
                                    
                                    eax_24 = 0
                                    break
                            
                            eax_24 = sbb.d(eax_22, eax_22, c_1) | 1
                            break
                        
                        if (eax_24 s<= 0)
                            break
                        
                        *(arg2 + (ebx_1 << 2) + 4) = edi_3
                        int32_t temp4_1 = ebx_1
                        ebx_1 -= 1
                        edi_2 = arg2
                        
                        if (temp4_1 - 1 s< 0)
                            break
                    
                    ecx = var_8_1
                    edi_1 = arg2
                    edx = var_c_1
                    result = result_1
                
                edx = &edx[1]
                *(edi_1 + (ebx_1 << 2) + 4) = ebp_1
                ecx += 1
                var_c_1 = edx
                uint32_t result_2 = result
                result -= 1
                var_8_1 = ecx
                result_1 = result
                
                if (result_2 == 1)
                    break

result.b = 1
return result
