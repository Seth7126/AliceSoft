// 函数: sub_602140
// 地址: 0x602140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = data_7fcbb0
int32_t var_18 = 0
int32_t* result = arg1
int32_t* result_1 = result

if (esi != 0)
    void* eax_1 = sub_622840(esi, arg2)
    
    if (eax_1 != 0 && *(eax_1 + 0x34) u<= 0)
        int32_t ecx_1 = *(eax_1 + 0x2c)
        
        if (ecx_1 - 0xa u<= 0x53)
            switch (ecx_1 + &jump_table_602348[6]:2)
                case &lookup_table_60236c
                    ecx_1 = 0x12
                label_6021cf:
                    int32_t eax_4 = sub_6211e0(esi, ecx_1, *(eax_1 + 0x30), 0)
                    
                    if (eax_4 s>= 0)
                        void* eax_5 = sub_622840(data_7fcbb0, eax_4)
                        int32_t var_40_3
                        
                        if (eax_5 != 0)
                            uint32_t eax_8 = (*(*(eax_1 + 0x20) + 8))()
                            sub_627910(eax_5, eax_8, 0)
                            void* edx = eax_1
                            
                            switch (*(edx + 0x2c) - 0xa)
                                case 0, 1, 0x25, 0x52
                                    int32_t ebx_2 = 0
                                    
                                    if (eax_8 s<= 0)
                                        goto label_60230f
                                    
                                    void* eax_10 = eax_5 + 0x20
                                    void* var_20_1 = eax_10
                                    
                                    while ((*(*eax_10 + 0x3c))(ebx_2, 
                                            (*(*(edx + 0x20) + 0x28))(ebx_2)) != 0)
                                        edx = eax_1
                                        ebx_2 += 1
                                        eax_10 = var_20_1
                                        
                                        if (ebx_2 s>= eax_8)
                                            goto label_60230f
                                case 8, 9, 0x29, 0x4f, 0x53
                                    int32_t ebx_3 = 0
                                    
                                    if (eax_8 s<= 0)
                                        goto label_60230f
                                    
                                    int32_t* eax_15 = eax_5 + 0x20
                                    int32_t* var_20_2 = eax_15
                                    
                                    while ((*(*eax_15 + 0x3c))(ebx_3, 
                                            (*(*(eax_1 + 0x20) + 0x20))(ebx_3, 
                                                (*(*(edx + 0x20) + 0x24))(ebx_3))) != 0)
                                        edx = eax_1
                                        ebx_3 += 1
                                        eax_15 = var_20_2
                                        
                                        if (ebx_3 s>= eax_8)
                                            goto label_60230f
                                default
                                    int32_t ebx_4 = 0
                                    
                                    if (eax_8 s<= 0)
                                    label_60230f:
                                        int32_t var_10
                                        result[1] = var_10
                                        int32_t var_c = eax_4
                                        result[2] = eax_4
                                        int32_t var_8
                                        result[3] = var_8
                                        *result = 0x4f
                                        int32_t var_4
                                        result[4] = var_4
                                        int32_t var_14 = 0xffffffff
                                        sub_601b50(&var_14)
                                        return result
                                    
                                    void* eax_22 = eax_5 + 0x20
                                    void* var_20_3 = eax_22
                                    
                                    while ((*(*eax_22 + 0x38))(ebx_4, 
                                            (*(*(edx + 0x20) + 0x20))(ebx_4)) != 0)
                                        edx = eax_1
                                        ebx_4 += 1
                                        eax_22 = var_20_3
                                        
                                        if (ebx_4 s>= eax_8)
                                            goto label_60230f
                            
                            var_40_3 = eax_4
                        else
                            var_40_3 = eax_4
                        
                        sub_621db0(data_7fcbb0, var_40_3)
                case &lookup_table_60236c[1]
                    ecx_1 = 0x13
                    goto label_6021cf
                case &lookup_table_60236c[2]
                    ecx_1 = 0x14
                    goto label_6021cf
                case &lookup_table_60236c[3]
                    ecx_1 = 0x15
                    goto label_6021cf
                case &lookup_table_60236c[8], &lookup_table_60236c[9], &lookup_table_60236c[0xa], 
                        &lookup_table_60236c[0xb], &lookup_table_60236c[0x29], 
                        &lookup_table_60236c[0x39], &lookup_table_60236c[0x46], 
                        &lookup_table_60236c[0x4f], &lookup_table_60236c[0x53]
                    goto label_6021cf
                case &lookup_table_60236c[0x25]
                    ecx_1 = 0x33
                    goto label_6021cf
                case &lookup_table_60236c[0x35]
                    ecx_1 = 0x43
                    goto label_6021cf
                case &lookup_table_60236c[0x52]
                    ecx_1 = 0x5d
                    goto label_6021cf
    
    arg1 = result

sub_602420(arg1)
return result
