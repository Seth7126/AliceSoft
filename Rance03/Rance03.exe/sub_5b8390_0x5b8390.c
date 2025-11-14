// 函数: sub_5b8390
// 地址: 0x5b8390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_9 = arg2
int32_t result

if (edx_9 u< (*(arg4 + 0xc) - *(arg4 + 8)) s>> 2)
    result = *(*(arg4 + 8) + (edx_9 << 2))
    int32_t result_1 = result
    
    if (result != 0)
        int32_t ecx_1 = *(result + 0x24)
        void* edx = *(*(result + 0x1c) + 4)
        
        if (ecx_1 u< (*(edx + 0xf4) - *(edx + 0xf0)) s>> 4)
            int32_t ecx_2 = ecx_1 << 4
            
            if (ecx_2 != neg.d(*(edx + 0xf0)))
                result = *(ecx_2 + *(edx + 0xf0) + 4)
                
                if (result != 0)
                    int32_t* ebx = result + 0x20
                    int32_t* var_10 = ebx
                    
                    if (arg3 s< 0 || arg3 s>= (*(arg1 + 8) - *(arg1 + 4)) s>> 4)
                        result.b = 0
                        return result
                    
                    int32_t* ebp_2 = (arg3 << 4) + *(arg1 + 4)
                    int32_t esi = *ebp_2
                    
                    if (esi s>= 0)
                        int32_t eax_8
                        int32_t edx_1
                        edx_1:eax_8 = muls.dp.d(0x38e38e39, *(arg1 + 0x44) - *(arg1 + 0x40))
                        int32_t edx_2 = edx_1 s>> 3
                        
                        if (esi s< (edx_2 u>> 0x1f) + edx_2)
                            int32_t* esi_1 = ebp_2[1]
                            void* edx_3 = *(arg1 + 0x40) + esi * 0x24
                            int32_t edx_7 = ebp_2[2]
                            
                            if ((*(edx_3 + 0x1c) - *(edx_3 + 0x18)) s/ 0x1c
                                    == (edx_7 - esi_1) s>> 2)
                                if (esi_1 != edx_7)
                                    while (true)
                                        int32_t ecx_12 = *esi_1
                                        
                                        if (ecx_12 s< 0)
                                            goto label_5b856c
                                        
                                        if (ecx_12 s>= (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2)
                                            goto label_5b856c
                                        
                                        uint32_t eax_18 = *(*(arg1 + 0x34) + (ecx_12 << 2))
                                        int32_t* eax_24 =
                                            *(edx_3 + 0x18) + ((esi_1 - ebp_2[1]) s>> 2) * 0x1c
                                        int32_t ebx_1 = sub_5dc580(ebx, &eax_24[1])
                                        
                                        if (ebx_1 != 0xffffffff)
                                            void* eax_26 = *var_10 + ebx_1 * 0x28
                                            
                                            if (*(eax_26 + 0x18) == *eax_24)
                                                if (sub_5d3550(result_1, ebx_1, &arg2).b == 0)
                                                    goto label_5b856c
                                                
                                                void* var_28_3 = arg4
                                                
                                                if (sub_5b7e60(arg1, *(eax_26 + 0x18), &arg2, 
                                                        eax_18, 0xffffffff).b == 0)
                                                    goto label_5b856c
                                                
                                                if (sub_5d34a0(result_1, ebx_1, arg2).b == 0)
                                                    goto label_5b856c
                                        
                                        esi_1 = &esi_1[1]
                                        
                                        if (esi_1 == ebp_2[2])
                                            break
                                        
                                        ebx = var_10
                                
                                result.b = 1
                                return result
                    
                label_5b856c:
                    result.b = 0
                    return result

result.b = 0
return result
