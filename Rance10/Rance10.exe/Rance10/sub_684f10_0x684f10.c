// 函数: sub_684f10
// 地址: 0x684f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6850e0(arg1)
HRESULT result

if (sub_6853d0(arg1).b != 0)
    int32_t* eax = *(arg1 + 8)
    int32_t* var_1c = nullptr
    
    if ((**eax)(eax, 0x7997f4, &var_1c) s>= 0)
        int32_t* eax_1 = var_1c
        int32_t* var_14 = nullptr
        int32_t* eax_8
        
        if ((*(*eax_1 + 0x1c))(eax_1, &var_14) s< 0)
            eax_8 = var_1c
            (*(*eax_8 + 8))(eax_8)
        else
            int32_t* eax_3 = var_14
            int32_t* var_18 = nullptr
            
            if ((*(*eax_3 + 0x18))(eax_3, 0x799814, &var_18) s< 0)
                goto label_684fe4
            
            int32_t var_c = 1
            int32_t var_10 = 0
            sub_6854a0(arg1, 0x1c, arg5, &var_c, &var_10)
            int32_t ebx_1 = var_c
            bool cond:0_1 = sub_6854f0(arg1, arg2, arg3, arg4, arg6, ebx_1, var_10, var_18) != 0
            int32_t* eax_6 = var_18
            int32_t ecx_6 = *eax_6
            
            if (cond:0_1)
                (*(ecx_6 + 0x20))(eax_6, arg2, 2)
                int32_t* eax_9 = var_18
                (*(*eax_9 + 8))(eax_9)
                int32_t* eax_10 = var_14
                (*(*eax_10 + 8))(eax_10)
                int32_t* eax_11 = var_1c
                (*(*eax_11 + 8))(eax_11)
                
                if (sub_6855e0(arg1).b != 0 && sub_685660(arg1, arg3, arg4, ebx_1, var_10).b != 0
                        && sub_685720(arg1, ebx_1).b != 0)
                    int32_t var_2c_14 = *(arg1 + 0x18)
                    
                    if (sub_685250(arg1, *(arg1 + 0x10)).b != 0
                            && sub_6857a0(arg1, arg3, arg4).b != 0)
                        int32_t ecx_18
                        result, ecx_18 = sub_685830(arg1)
                        
                        if (result.b != 0)
                            int32_t var_2c_16 = ecx_18
                            sub_6859c0(arg1 + 0x40)
                            int32_t esi_2 = 0
                            int32_t edx_1
                            edx_1.b = var_c != 1
                            var_c = edx_1
                            
                            while (sub_689780(*(arg1 + 0x40) + (esi_2 << 3), esi_2, edx_1.b, 
                                    *(arg1 + 8)).b != 0)
                                edx_1 = var_c
                                esi_2 += 1
                                
                                if (esi_2 s>= 3)
                                    *(arg1 + 0x4c) = arg6
                                    return 1
            else
                (*(ecx_6 + 8))(eax_6)
            label_684fe4:
                int32_t* eax_7 = var_14
                (*(*eax_7 + 8))(eax_7)
                eax_8 = var_1c
                (*(*eax_8 + 8))(eax_8)

result.b = 0
return result
