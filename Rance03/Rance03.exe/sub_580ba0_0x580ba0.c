// 函数: sub_580ba0
// 地址: 0x580ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg1
int32_t* result_1 = result

if (result != arg2)
    int32_t* ebx_1 = &result[1]
    
    if (ebx_1 != arg2)
        void* edi_2 = ebx_1 - result
        void* var_8_1 = edi_2
        
        do
            void* esi_1 = *ebx_1
            int32_t* ebp_1 = ebx_1
            void* eax = *result
            int32_t ecx = *(esi_1 + 0x1c)
            int32_t edx = *(eax + 0x1c)
            
            if (ecx s< edx)
            label_580c4f:
                int32_t ecx_4 = edi_2 s>> 2 << 2
                _memcpy(ebx_1 - ecx_4 + 4, result_1, ecx_4)
                result = result_1
                *result = esi_1
            else
                if (ecx s<= edx)
                    int32_t ecx_1 = *(esi_1 + 0x20)
                    int32_t edx_1 = *(eax + 0x20)
                    
                    if (ecx_1 s< edx_1)
                        goto label_580c4f
                    
                    if (ecx_1 s<= edx_1)
                        ecx_1.b = *(esi_1 + 0x73)
                        edx_1.b = *(eax + 0x73)
                        
                        if (ecx_1.b u< edx_1.b)
                            goto label_580c4f
                        
                        if (ecx_1.b u<= edx_1.b)
                            eax.b = *(eax + 0x26)
                            
                            if (*(esi_1 + 0x26) u< eax.b)
                                goto label_580c4f
                
                int32_t* edi_3 = ebx_1
                
                while (true)
                    void* eax_1 = edi_3[-1]
                    edi_3 -= 4
                    int32_t ecx_2 = *(esi_1 + 0x1c)
                    int32_t edx_2 = *(eax_1 + 0x1c)
                    
                    if (ecx_2 s>= edx_2)
                        if (ecx_2 s> edx_2)
                            break
                        
                        int32_t ecx_3 = *(esi_1 + 0x20)
                        int32_t edx_3 = *(eax_1 + 0x20)
                        
                        if (ecx_3 s>= edx_3)
                            if (ecx_3 s> edx_3)
                                break
                            
                            ecx_3.b = *(esi_1 + 0x73)
                            edx_3.b = *(eax_1 + 0x73)
                            
                            if (ecx_3.b u>= edx_3.b)
                                if (ecx_3.b u> edx_3.b)
                                    break
                                
                                ecx_3.b = *(esi_1 + 0x26)
                                
                                if (ecx_3.b u>= *(eax_1 + 0x26))
                                    break
                    
                    *ebp_1 = eax_1
                    ebp_1 = edi_3
                
                edi_2 = var_8_1
                result = result_1
                *ebp_1 = esi_1
            
            ebx_1 = &ebx_1[1]
            edi_2 += 4
            var_8_1 = edi_2
        while (ebx_1 != arg2)

return result
