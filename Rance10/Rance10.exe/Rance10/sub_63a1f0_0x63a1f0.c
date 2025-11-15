// 函数: sub_63a1f0
// 地址: 0x63a1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = data_7fcbb8

if (ecx != 0)
    int32_t* eax_2 = (*(*ecx + 0x14))(0x76d9f0)
    
    if (eax_2 != 0)
        int32_t eax_3 = (*(*eax_2 + 4))()
        int32_t result = 0
        
        if (eax_3 s> 0)
            while (true)
                char* eax_4 = (**eax_2)(result)
                
                if (eax_4 != 0)
                    char* ecx_3 = arg1
                    int32_t eax_6
                    
                    while (true)
                        char edx_2 = *eax_4
                        char temp0_1 = *ecx_3
                        bool c_1 = edx_2 u< temp0_1
                        
                        if (edx_2 == temp0_1)
                            if (edx_2 == 0)
                                eax_6 = 0
                                break
                            
                            edx_2 = eax_4[1]
                            char temp1_1 = ecx_3[1]
                            c_1 = edx_2 u< temp1_1
                            
                            if (edx_2 == temp1_1)
                                eax_4 = &eax_4[2]
                                ecx_3 = &ecx_3[2]
                                
                                if (edx_2 != 0)
                                    continue
                                
                                eax_6 = 0
                                break
                        
                        eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
                        break
                    
                    if (eax_6 == 0)
                        return result
                
                result += 1
                
                if (result s>= eax_3)
                    break

return 0xffffffff
