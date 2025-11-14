// 函数: sub_5ca3b0
// 地址: 0x5ca3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result

if (*(arg2 + 0x48) != 0)
    result = *(arg2 + 0xc) u>> 2
    
    if (result s>= 2)
        void* esi_1
        
        if (*(arg2 + 0xc) != 0)
            esi_1 = *(arg2 + 8)
        else
            esi_1 = nullptr
        
        arg2 = esi_1
        
        if (result s> 1)
            int32_t ebp_1 = 0
            int32_t* edx = esi_1 + 4
            result -= 1
            int32_t var_8_1 = 0
            int32_t* var_c_1 = edx
            uint32_t result_1 = result
            uint32_t i
            
            do
                int32_t ebx_1 = *edx
                int32_t edx_1 = ebp_1
                
                if (ebp_1 s>= 0)
                    void* ebp_2 = arg2
                    int32_t temp2_1
                    
                    do
                        int32_t esi_2 = *(ebp_2 + (edx_1 << 2))
                        void* eax_4
                        
                        if (esi_2 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_4 = *(*(arg1 + 0x174) + (esi_2 << 2))
                        else
                            eax_4 = nullptr
                        
                        int32_t eax_6
                        
                        if (*(eax_4 + 0xc) != 0)
                            eax_6 = *(eax_4 + 8)
                        else
                            eax_6 = 0
                        
                        void* eax_10
                        
                        if (ebx_1 u< (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2)
                            eax_10 = *(*(arg1 + 0x174) + (ebx_1 << 2))
                        else
                            eax_10 = nullptr
                        
                        int32_t eax_12
                        
                        if (*(eax_10 + 0xc) != 0)
                            eax_12 = *(eax_10 + 8)
                        else
                            eax_12 = 0
                        
                        ebp_2 = arg2
                        
                        if (*(eax_6 + (arg3 << 2)) s<= *(eax_12 + (arg3 << 2)))
                            break
                        
                        *(ebp_2 + (edx_1 << 2) + 4) = esi_2
                        temp2_1 = edx_1
                        edx_1 -= 1
                    while (temp2_1 - 1 s>= 0)
                    ebp_1 = var_8_1
                    esi_1 = arg2
                    result = result_1
                
                *(esi_1 + (edx_1 << 2) + 4) = ebx_1
                ebp_1 += 1
                edx = &var_c_1[1]
                var_8_1 = ebp_1
                i = result
                result -= 1
                var_c_1 = edx
                result_1 = result
            while (i != 1)

result.b = 1
return result
