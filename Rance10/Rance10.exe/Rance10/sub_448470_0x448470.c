// 函数: sub_448470
// 地址: 0x448470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1c) != 0)
    void* var_10 = arg4
    void* eax_2 = *(arg1 + 0x18)
    int32_t var_c_1 = 0
    
    if (eax_2 != 0)
        *(eax_2 + 0x2d) = 0
    
    void* eax_3 = *(arg1 + 0x1c)
    *(arg1 + 0x18) = eax_3
    
    if (eax_3 != 0)
        *(eax_3 + 0x2c) = 1
    
    void* var_24_1 = arg1
    *arg3 = sub_436500(&var_10)
    char var_8
    
    if (sub_4488a0(&var_8, &var_10) != 0)
        int32_t var_c_2 = var_c_1 + 4
        sub_447d30(arg1 + 0x20)
        uint32_t i = 0
        
        if (*(arg1 + 0x14) u> 0)
            do
                int32_t var_4
                
                if (sub_447e40(arg1 + 0x20, &var_10, var_4) == 0)
                    return 0
                
                char eax
                
                if ((*(arg1 + 0x48) & 1) == 0)
                    void* eax_5 = *(arg1 + 0x18)
                    
                    if (sub_436eb0(arg2, i, arg1 + 0x20) == 0)
                        return 0
                    
                    int32_t edx_2
                    edx_2.b = var_8 != 0
                    eax = sub_437240(arg2, i, eax_5, *(arg1 + 0x38) * (edx_2 + 1), 
                        *(arg1 + 0x3c) * (edx_2 + 1))
                else
                    eax = sub_436eb0(arg2, i, arg1 + 0x20)
                
                if (eax == 0)
                    return 0
                
                void* eax_8 = *(arg1 + 0x4c)
                
                if (eax_8 != 0)
                    *(arg1 + 0x2c) = 0x80
                    int32_t edi_2 = 0
                    *(arg1 + 0x30) = 0x80
                    *(arg1 + 0x34) = 0x80
                    *(arg1 + 0x38) = 0
                    *(arg1 + 0x3c) = 0
                    *(arg1 + 0x40) = 0
                    *(arg1 + 0x44) = 0
                    
                    if (eax_8 != 0)
                        do
                            i += 1
                            
                            if (sub_437170(arg2, i, *(arg1 + 0x18)) == 0)
                                return 0
                            
                            edi_2 += 1
                        while (edi_2 u< eax_8)
                
                i += 1
            while (i u< *(arg1 + 0x14))
        
        *(arg2 + 0x2d) = 1
        *(arg1 + 0x1c) = arg2
        int32_t* result
        result.b = 1
        return result

return 0
