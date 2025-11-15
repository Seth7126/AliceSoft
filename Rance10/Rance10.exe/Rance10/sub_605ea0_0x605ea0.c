// 函数: sub_605ea0
// 地址: 0x605ea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = sub_6228d0(arg4, arg2)
uint32_t result_2 = result

if (result != 0)
    result = *(result + 0x38)
    uint32_t result_1 = result
    
    if (result != 0)
        int32_t* ebp = result + 0x2c
        int32_t* var_4 = ebp
        
        if (arg3 s< 0 || arg3 s>= (*(arg1 + 8) - *(arg1 + 4)) s>> 4)
            result.b = 0
            return result
        
        int32_t* esi_2 = (arg3 << 4) + *(arg1 + 4)
        int32_t edi = *esi_2
        
        if (edi s>= 0)
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = muls.dp.d(0x38e38e39, *(arg1 + 0x44) - *(arg1 + 0x40))
            int32_t edx_2 = edx_1 s>> 3
            
            if (edi s< (edx_2 u>> 0x1f) + edx_2)
                int32_t eax_5 = *(arg1 + 0x40)
                int32_t ecx_3 = edi * 9
                void* eax_6 = eax_5 + (ecx_3 << 2)
                int32_t edi_2 = *(eax_5 + (ecx_3 << 2) + 0x1c) - *(eax_6 + 0x18)
                int32_t ecx_4 = esi_2[2]
                int32_t* esi_3 = esi_2[1]
                arg2 = eax_6
                
                if (edi_2 s/ 0x1c == (ecx_4 - esi_3) s>> 2)
                    result = *(arg2 + 0x18)
                    
                    if (esi_3 != ecx_4)
                        while (true)
                            int32_t edx_6 = *esi_3
                            
                            if (edx_6 s< 0)
                                goto label_60602c
                            
                            if (edx_6 s>= (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2)
                                goto label_60602c
                            
                            uint32_t result_4 = result
                            uint32_t result_3 = result + 0x1c
                            uint32_t ebp_1 = sub_626650(ebp, result_4 + 4)
                            
                            if (ebp_1 != 0xffffffff)
                                result = ebp_1 * 0x70 + *(result_1 + 0x2c)
                                
                                if (*(result + 0x34) == *result_4)
                                    if (sub_6007d0(result_2, ebp_1, &arg2).b == 0)
                                        goto label_60602c
                                    
                                    if (sub_605890(*(result + 0x34), &arg2, 
                                            *(*(arg1 + 0x34) + (*esi_3 << 2)), arg4).b == 0)
                                        goto label_60602c
                                    
                                    if (sub_600820(result_2, ebp_1, arg2).b == 0)
                                        goto label_60602c
                            
                            esi_3 = &esi_3[1]
                            
                            if (esi_3 == ecx_4)
                                break
                            
                            result = result_3
                            ebp = var_4
                    
                    result.b = 1
                    return result
        
    label_60602c:
        result.b = 0
        return result

result.b = 0
return result
