// 函数: sub_4a7e10
// 地址: 0x4a7e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg1
int32_t* result_1 = result

if (result != arg2)
    int32_t* ebx_1 = &result[1]
    
    if (ebx_1 != arg2)
        int32_t edi_2 = ebx_1 - result
        int32_t var_8_1 = edi_2
        
        do
            void* ecx = *result
            void** ebp_1 = ebx_1
            void* esi_1 = *ebx_1
            int32_t edx = *(ecx + 4)
            int32_t eax = *(esi_1 + 4)
            int32_t eax_1
            int32_t edx_1
            
            if (eax s>= edx && eax s<= edx)
                eax_1 = *(esi_1 + 8)
                edx_1 = *(ecx + 8)
            
            if (eax s< edx || (eax s<= edx
                    && (eax_1 s< edx_1 || (eax_1 s<= edx_1 && *(esi_1 + 0xc) s< *(ecx + 0xc)))))
                void* ecx_4 = edi_2 s>> 2 << 2
                _memcpy(ebx_1 - ecx_4 + 4, result_1, ecx_4)
                result = result_1
                *result = esi_1
            else
                int32_t* edx_2 = ebx_1
                
                while (true)
                    void* eax_3 = edx_2[-1]
                    edx_2 -= 4
                    int32_t ecx_1 = *(esi_1 + 4)
                    int32_t edi_3 = *(eax_3 + 4)
                    
                    if (ecx_1 s>= edi_3)
                        if (ecx_1 s> edi_3)
                            break
                        
                        int32_t ecx_2 = *(esi_1 + 8)
                        int32_t edi_4 = *(eax_3 + 8)
                        
                        if (ecx_2 s>= edi_4)
                            if (ecx_2 s> edi_4)
                                break
                            
                            if (*(esi_1 + 0xc) s>= *(eax_3 + 0xc))
                                break
                    
                    *ebp_1 = eax_3
                    ebp_1 = edx_2
                
                edi_2 = var_8_1
                result = result_1
                *ebp_1 = esi_1
            
            ebx_1 = &ebx_1[1]
            edi_2 += 4
            var_8_1 = edi_2
        while (ebx_1 != arg2)

return result
