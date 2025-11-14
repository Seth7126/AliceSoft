// 函数: sub_628100
// 地址: 0x628100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = *arg2

if (ecx s>= 0 && ecx s<= 0x186a0)
    int32_t ebp_1 = arg2[1]
    
    if (ebp_1 s>= 0 && ebp_1 s<= 0x186a0 - ecx)
        int32_t edx = arg2[2]
        
        if (edx s>= 0 && edx s<= 0x186a0)
            int32_t ecx_1 = arg2[3]
            
            if (ecx_1 s>= 0 && ecx_1 s<= 0x186a0 - edx)
                int32_t ecx_2 = arg2[4]
                
                if (ecx_2 s>= 0 && ecx_2 s<= 0x186a0 && arg2[5] s>= 0
                        && arg2[5] s<= 0x186a0 - ecx_2)
                    int32_t eax_4 = arg2[6]
                    
                    if (eax_4 s>= 0 && eax_4 s<= 0x186a0 && arg2[7] s>= 0)
                        int32_t eax_5 = 0x186a0 - arg2[6]
                        
                        if (arg2[7] s<= eax_5)
                            int32_t var_c
                            
                            if (sub_629750(eax_5, edx - ecx_2, &var_c, ebp_1 - arg2[5], 7) == 0)
                                return 2
                            
                            int32_t eax_9 = *arg2 - arg2[4]
                            int32_t var_8
                            
                            if (sub_629750(eax_9, arg2[3] - arg2[5], &var_8, eax_9, 7) == 0)
                                return 2
                            
                            int32_t eax_12 = arg2[7] - arg2[5]
                            int32_t ebp_4 = var_c - var_8
                            
                            if (sub_629750(eax_12, arg2[2] - arg2[4], &var_c, eax_12, 7) == 0)
                                return 2
                            
                            int32_t eax_15 = arg2[6] - arg2[4]
                            
                            if (sub_629750(eax_15, arg2[3] - arg2[5], &var_8, eax_15, 7) == 0)
                                return 2
                            
                            int32_t eax_18 = var_c - var_8
                            int32_t var_4
                            
                            if (sub_629750(eax_18, arg2[7], &var_4, ebp_4, eax_18) != 0
                                    && var_4 s> arg2[7])
                                int32_t eax_22 = arg2[6] - arg2[4]
                                
                                if (sub_629750(eax_22, arg2[1] - arg2[5], &var_c, eax_22, 7) == 0)
                                    return 2
                                
                                int32_t eax_25 = arg2[7] - arg2[5]
                                
                                if (sub_629750(eax_25, *arg2 - arg2[4], &var_8, eax_25, 7) == 0)
                                    return 2
                                
                                int32_t eax_28 = var_c - var_8
                                
                                if (sub_629750(eax_28, arg2[7], &var_8, ebp_4, eax_28) != 0)
                                    int32_t ecx_11 = arg2[7]
                                    int32_t edx_14 = var_8
                                    
                                    if (edx_14 s> ecx_11)
                                        int32_t ebp_6 = sub_629830(ecx_11) - sub_629830(var_4)
                                        int32_t eax_32 = sub_629830(edx_14)
                                        int32_t ebp_7 = ebp_6 - eax_32
                                        
                                        if (ebp_7 s> 0)
                                            int32_t eax_33 =
                                                sub_629750(eax_32, *arg2, arg1, 0x186a0, var_4)
                                            
                                            if (eax_33 != 0)
                                                int32_t eax_34 = sub_629750(eax_33, arg2[1], 
                                                    &arg1[1], 0x186a0, var_4)
                                                
                                                if (eax_34 != 0)
                                                    int32_t eax_35 = sub_629750(eax_34, 
                                                        0x186a0 - *arg2 - arg2[1], &arg1[2], 
                                                        0x186a0, var_4)
                                                    
                                                    if (eax_35 != 0)
                                                        int32_t eax_36 = sub_629750(eax_35, 
                                                            arg2[2], &arg1[3], 0x186a0, var_8)
                                                        
                                                        if (eax_36 != 0)
                                                            int32_t eax_37 = sub_629750(eax_36, 
                                                                arg2[3], &arg1[4], 0x186a0, var_8)
                                                            
                                                            if (eax_37 != 0)
                                                                int32_t eax_38 = sub_629750(eax_37, 
                                                                    0x186a0 - arg2[3] - arg2[2], &arg1[5], 
                                                                    0x186a0, var_8)
                                                                
                                                                if (eax_38 != 0)
                                                                    int32_t eax_39 = sub_629750(eax_38, 
                                                                        arg2[4], &arg1[6], ebp_7, 0x186a0)
                                                                    
                                                                    if (eax_39 != 0)
                                                                        int32_t eax_40 = sub_629750(eax_39, 
                                                                            arg2[5], &arg1[7], ebp_7, 0x186a0)
                                                                        
                                                                        if (eax_40 != 0)
                                                                            int32_t eax_41 = sub_629750(eax_40, 
                                                                                0x186a0 - arg2[5] - arg2[4], &arg1[8], 
                                                                                ebp_7, 0x186a0)
                                                                            int32_t eax_42 = neg.d(eax_41)
                                                                            return sbb.d(eax_42, eax_42, 
                                                                                eax_41 != 0) + 1

return 1
