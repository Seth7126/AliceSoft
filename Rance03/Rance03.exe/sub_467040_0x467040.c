// 函数: sub_467040
// 地址: 0x467040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = *(arg1 + 0x24)
void* eax

if (*(arg1 + 0x20) != 0)
    void* edx_1 = arg1 + 0x1c
    
    if (esi != *(arg1 + 0x1c))
        eax = *esi
        *(arg1 + 0x24) = eax
        
        if (*(arg1 + 0x20) != 0 && eax != *edx_1 && eax != 0xfffffff8 && *(eax + 0x24) == 0x12)
            if (arg2 != eax + 0xc)
                sub_401ff0(arg2, eax + 0xc, 0, 0xffffffff)
                edx_1 = arg1 + 0x1c
            
            if (*(arg1 + 0x20) != 0)
                eax = *(arg1 + 0x24)
                
                if (eax != *edx_1)
                    eax = *eax
                    *(arg1 + 0x24) = eax
                    
                    if (*(arg1 + 0x20) != 0 && eax != *edx_1 && eax != 0xfffffff8
                            && *(eax + 0x24) == 0xb)
                        eax = sub_4665e0(arg1)
                        
                        if (eax != 0)
                            int32_t ecx_2 = *(eax + 0x1c)
                            int32_t* arg_8
                            
                            if (ecx_2 != 0x11)
                                int32_t* ebp_1 = arg_8
                                
                                if (ecx_2 == 0xe || ecx_2 == 0xf)
                                    sub_45d470(ebp_1, eax)
                                    eax = sub_4665e0(arg1)
                                
                                if ((ecx_2 == 0xe || ecx_2 == 0xf) && eax == 0)
                                    eax.b = 0
                                    return eax
                                
                                if (*(eax + 0x1c) == 1)
                                    sub_45d470(ebp_1, eax)
                                    eax = sub_4665e0(arg1)
                                    
                                    if (eax == 0)
                                        eax.b = 0
                                        return eax
                                
                                int32_t ecx_8 = *(eax + 0x1c)
                                
                                if (ecx_8 != 0x10)
                                    if (ecx_8 == 5)
                                        sub_45d470(ebp_1, eax)
                                        int32_t edi_1 = 1
                                        
                                        while (true)
                                            eax = sub_4665e0(arg1)
                                            
                                            if (eax == 0)
                                                break
                                            
                                            sub_45d470(arg_8, eax)
                                            int32_t eax_1 = *(eax + 0x1c)
                                            
                                            if (eax_1 == 5)
                                                edi_1 += 1
                                            else if (eax_1 == 6)
                                                edi_1 -= 1
                                            
                                            if (edi_1 s<= 0)
                                                goto label_46719a
                                    
                                    eax.b = 0
                                    return eax
                                
                                sub_45d470(ebp_1, eax)
                            else
                                sub_45d470(arg_8, eax)
                            
                        label_46719a:
                            int32_t eax_3 = **(arg1 + 0x24)
                            *(arg1 + 0x24) = eax_3
                            *(arg1 + 0x24) = *sub_467380(arg1 + 0x1c, &arg_8, esi, eax_3)
                            int32_t eax_5
                            eax_5.b = 1
                            return eax_5

eax.b = 0
return eax
