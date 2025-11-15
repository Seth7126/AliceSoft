// 函数: sub_4485f0
// 地址: 0x4485f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x1c) != 0)
    void* var_2c_1 = arg1
    int32_t var_18 = arg4
    int32_t var_14_1 = 0
    *arg3 = sub_436500(&var_18)
    char var_10
    char var_8
    
    if (sub_4488a0(&var_8, &var_18) != 0 && sub_4488a0(&var_10, &var_18) != 0)
        void* esi_1 = arg1 + 0x20
        sub_447d30(esi_1)
        int32_t i = 0
        
        if (*(arg1 + 0x14) u> 0)
            do
                int32_t var_c
                int32_t var_4
                
                if (sub_447fe0(esi_1, &var_18, var_4, var_c) == 0)
                    return 0
                
                if (sub_448750(arg1, arg2, i, &var_8, &var_10) == 0)
                    return 0
                
                int32_t ebp_1 = *(arg1 + 0x4c)
                
                if (ebp_1 != 0)
                    *(esi_1 + 0xc) = 0x80
                    *(esi_1 + 0x10) = 0x80
                    *(esi_1 + 0x14) = 0x80
                    _memset(arg1 + 0x50, 0, 0x300)
                    
                    if (ebp_1 + 1 + i u>= *(arg1 + 0x14))
                        *(esi_1 + 0x18) = 0
                        *(esi_1 + 0x1c) = 0
                        *(esi_1 + 0x20) = 0
                        *(esi_1 + 0x24) = 0
                    
                    int32_t esi_2 = 0
                    
                    if (ebp_1 != 0)
                        do
                            i += 1
                            
                            if (sub_448750(arg1, arg2, i, &var_8, &var_10) == 0)
                                return 0
                            
                            esi_2 += 1
                        while (esi_2 u< ebp_1)
                    
                    esi_1 = arg1 + 0x20
                
                i += 1
            while (i u< *(arg1 + 0x14))
        
        arg2[0xb].b = 1
        int32_t* result
        result.b = 1
        return result

return 0
