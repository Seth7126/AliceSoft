// 函数: ___std_type_info_compare
// 地址: 0x702974
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != arg2)
    char* ecx_1 = arg2 + 5
    char* eax_2 = arg1 + 5
    
    while (true)
        char edx = *eax_2
        char temp0_1 = *ecx_1
        bool c_1 = edx u< temp0_1
        
        if (edx == temp0_1)
            if (edx == 0)
                break
            
            edx = eax_2[1]
            char temp1_1 = ecx_1[1]
            c_1 = edx u< temp1_1
            
            if (edx == temp1_1)
                eax_2 = &eax_2[2]
                ecx_1 = &ecx_1[2]
                
                if (edx == 0)
                    break
                
                continue
        
        return sbb.d(eax_2, eax_2, c_1) | 1

return 0
