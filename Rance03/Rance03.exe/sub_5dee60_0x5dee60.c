// 函数: sub_5dee60
// 地址: 0x5dee60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (data_75d534 != 0)
    char* __saved_ebx_1 = arg1
    int32_t* eax_1 = sub_6203f0()
    
    if (eax_1 != 0)
        int32_t* eax_2 = (**eax_1)(0x6eac74)
        
        if (eax_2 != 0 && (**eax_2)() != 0)
            int32_t* ecx_2 = data_75d50c
            
            if (ecx_2 != 0)
                int32_t* eax_7 = (*(*ecx_2 + 0x14))(0x6eac84)
                
                if (eax_7 != 0)
                    int32_t eax_8 = (*(*eax_7 + 4))()
                    int32_t result = 0
                    
                    if (eax_8 s> 0)
                        while (true)
                            char* eax_9 = (**eax_7)(result)
                            
                            if (eax_9 != 0)
                                char* ecx_6 = arg1
                                int32_t eax_11
                                
                                while (true)
                                    char edx_4 = *eax_9
                                    char temp0_1 = *ecx_6
                                    bool c_1 = edx_4 u< temp0_1
                                    
                                    if (edx_4 == temp0_1)
                                        if (edx_4 == 0)
                                            eax_11 = 0
                                            break
                                        
                                        edx_4 = eax_9[1]
                                        char temp1_1 = ecx_6[1]
                                        c_1 = edx_4 u< temp1_1
                                        
                                        if (edx_4 == temp1_1)
                                            eax_9 = &eax_9[2]
                                            ecx_6 = &ecx_6[2]
                                            
                                            if (edx_4 != 0)
                                                continue
                                            
                                            eax_11 = 0
                                            break
                                    
                                    eax_11 = sbb.d(eax_9, eax_9, c_1) | 1
                                    break
                                
                                if (eax_11 == 0)
                                    return result
                            
                            result += 1
                            
                            if (result s>= eax_8)
                                break

return 0xffffffff
