// 函数: sub_5ca4c0
// 地址: 0x5ca4c0
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
            int32_t ecx_1 = 0
            int32_t* edx_1 = edi_1 + 4
            int32_t ebx
            int32_t var_1c_1 = ebx
            result -= 1
            int32_t var_c_1 = 0
            int32_t* var_4_1 = edx_1
            int32_t* var_10_1 = edx_1
            uint32_t result_1 = result
            uint32_t i
            
            do
                int32_t ebx_2 = *edx_1
                int32_t edx_2 = ecx_1
                
                if (ecx_1 s>= 0)
                    int32_t temp2_1
                    
                    do
                        int32_t edi_2 = *(edi_1 + (edx_2 << 2))
                        void* eax_4
                        
                        if (edi_2 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_4 = *(*(arg1 + 0x174) + (edi_2 << 2))
                        else
                            eax_4 = nullptr
                        
                        int32_t ecx_2
                        
                        if (*(eax_4 + 0xc) != 0)
                            ecx_2 = *(eax_4 + 8)
                        else
                            ecx_2 = 0
                        
                        void* eax_9
                        
                        if (ebx_2 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_9 = *(*(arg1 + 0x174) + (ebx_2 << 2))
                        else
                            eax_9 = nullptr
                        
                        int32_t eax_11
                        
                        if (*(eax_9 + 0xc) != 0)
                            eax_11 = *(eax_9 + 8)
                        else
                            eax_11 = 0
                        
                        if (*(eax_11 + (arg3 << 2)) f>= *(ecx_2 + (arg3 << 2)))
                            break
                        
                        var_4_1[edx_2] = edi_2
                        temp2_1 = edx_2
                        edx_2 -= 1
                        edi_1 = arg2
                    while (temp2_1 - 1 s>= 0)
                    ecx_1 = var_c_1
                    edi_1 = arg2
                    result = result_1
                
                *(edi_1 + (edx_2 << 2) + 4) = ebx_2
                ecx_1 += 1
                edx_1 = &var_10_1[1]
                var_c_1 = ecx_1
                i = result
                result -= 1
                var_10_1 = edx_1
                result_1 = result
            while (i != 1)

result.b = 1
return result
