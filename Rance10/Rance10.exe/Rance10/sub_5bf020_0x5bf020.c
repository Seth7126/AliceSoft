// 函数: sub_5bf020
// 地址: 0x5bf020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg1
int32_t* result_1 = result

if (result != arg2)
    int32_t* ebp_1 = &result[1]
    
    if (ebp_1 != arg2)
        int32_t ebx
        int32_t var_18_1 = ebx
        
        do
            int32_t* esi_1 = *ebp_1
            int32_t* edx = ebp_1
            *ebp_1 = 0
            void* eax = *result
            int32_t ecx = esi_1[6]
            int32_t edi_1 = *(eax + 0x18)
            void var_8
            
            if (ecx s< edi_1)
            label_5bf11a:
                int32_t var_24_3 = 0.d
                sub_5c0280(&ebp_1[1], ebp_1, result_1, &ebp_1[1])
                result = result_1
                
                if (result == &var_8)
                label_5bf14c:
                    sub_5bd030(esi_1)
                    int32_t var_24_5 = 0x80
                    operator new(esi_1)
                    result = result_1
                else
                    int32_t* edi_5 = *result
                    *result = esi_1
                    
                    if (edi_5 != 0)
                        sub_5bd030(edi_5)
                        int32_t var_24_4 = 0x80
                        operator new(edi_5)
                        result = result_1
            else
                if (ecx s<= edi_1)
                    int32_t ecx_1 = esi_1[7]
                    int32_t edi_2 = *(eax + 0x1c)
                    
                    if (ecx_1 s< edi_2)
                        goto label_5bf11a
                    
                    if (ecx_1 s<= edi_2)
                        ecx_1.b = *(esi_1 + 0x75)
                        ebx.b = *(eax + 0x75)
                        
                        if (ecx_1.b u< ebx.b)
                            goto label_5bf11a
                        
                        if (ecx_1.b u<= ebx.b)
                            eax.b = *(eax + 0x22)
                            
                            if (*(esi_1 + 0x22) u< eax.b)
                                goto label_5bf11a
                
                int32_t* edi_3 = ebp_1
                
                while (true)
                    void* ecx_2 = edi_3[-1]
                    edi_3 -= 4
                    int32_t eax_1 = esi_1[6]
                    ebx = *(ecx_2 + 0x18)
                    
                    if (eax_1 s>= ebx)
                        if (eax_1 s> ebx)
                            break
                        
                        int32_t eax_2 = esi_1[7]
                        ebx = *(ecx_2 + 0x1c)
                        
                        if (eax_2 s>= ebx)
                            if (eax_2 s> ebx)
                                break
                            
                            eax_2.b = *(esi_1 + 0x75)
                            ebx.b = *(ecx_2 + 0x75)
                            
                            if (eax_2.b u>= ebx.b)
                                if (eax_2.b u> ebx.b)
                                    break
                                
                                eax_2.b = *(esi_1 + 0x22)
                                
                                if (eax_2.b u>= *(ecx_2 + 0x22))
                                    break
                    
                    if (edx != edi_3)
                        *edi_3 = 0
                        int32_t* ebx_1 = *edx
                        *edx = ecx_2
                        
                        if (ebx_1 != 0)
                            sub_5bd030(ebx_1)
                            int32_t var_24_1 = 0x80
                            operator new(ebx_1)
                    
                    edx = edi_3
                
                if (edx == &var_8)
                    goto label_5bf14c
                
                int32_t* edi_4 = *edx
                *edx = esi_1
                
                if (edi_4 == 0)
                    result = result_1
                else
                    sub_5bd030(edi_4)
                    int32_t var_24_2 = 0x80
                    operator new(edi_4)
                    result = result_1
            ebp_1 = &ebp_1[1]
        while (ebp_1 != arg2)

return result
