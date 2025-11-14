// 函数: sub_5ca920
// 地址: 0x5ca920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1

if (*(arg2 + 0x48) != 0)
    uint32_t edx_2 = *(arg2 + 0xc) u>> 2
    uint32_t var_4_1 = edx_2
    
    if (edx_2 s> 1)
        int32_t ebx_1
        
        if (*(arg2 + 0xc) != 0)
            ebx_1 = *(arg2 + 8)
        else
            ebx_1 = 0
        
        int32_t ebp_1 = 1
        
        if (edx_2 s> 1)
            while (true)
                uint32_t edi_1 = *(ebx_1 + (ebp_1 << 2))
                int32_t eax_2 = (esi[0x5e] - esi[0x5d]) s>> 2
                
                if (edi_1 u>= eax_2)
                label_5caaba:
                    uint32_t var_20_3 = edi_1
                    sub_5c24e0(eax_2, edx_2, arg1, esi, 0x6e8b14)
                    int32_t* eax_17
                    eax_17.b = 0
                    return eax_17
                
                eax_2 = esi[0x5d]
                edx_2 = *(eax_2 + (edi_1 << 2))
                arg2 = edx_2
                
                if (edx_2 == 0)
                    goto label_5caaba
                
                int32_t edi_2 = ebp_1 - 1
                
                if (ebp_1 s>= 1)
                    while (true)
                        int32_t* ecx = *(ebx_1 + (edi_2 << 2))
                        int32_t eax_5 = (esi[0x5e] - esi[0x5d]) s>> 2
                        
                        if (ecx u>= eax_5)
                        label_5caa9f:
                            int32_t* var_20_2 = ecx
                            sub_5c24e0(eax_5, edx_2, ecx, esi, 0x6e8b88)
                            int32_t* eax_16
                            eax_16.b = 0
                            return eax_16
                        
                        eax_5 = *(esi[0x5d] + (ecx << 2))
                        
                        if (eax_5 == 0)
                            goto label_5caa9f
                        
                        bool cond:1_1
                        
                        if (arg3 != 0)
                            char* eax_10
                            
                            if (*(eax_5 + 0xc) != 0)
                                eax_10 = *(eax_5 + 8)
                            else
                                eax_10 = nullptr
                            
                            int32_t var_c
                            int32_t eax_12
                            eax_12, arg1, edx_2 =
                                sub_5caff0(esi, arg3, sub_5d3d10(edx_2), eax_10, &var_c)
                            
                            if (eax_12.b == 0)
                                sub_5c24e0(eax_12, edx_2, arg1, esi, 0x6e8b68)
                                int32_t* eax_15
                                eax_15.b = 0
                                return eax_15
                            
                            cond:1_1 = var_c s<= 0
                        else
                            if (*(eax_5 + 0xc) != 0)
                                edx_2 = *(eax_5 + 8)
                            else
                                edx_2 = 0
                            
                            char* eax_7 = sub_5d3d10(arg2)
                            
                            while (true)
                                arg1.b = *edx_2
                                char temp1_1 = *eax_7
                                bool c_1 = arg1.b u< temp1_1
                                
                                if (arg1.b == temp1_1)
                                    if (arg1.b == 0)
                                        cond:1_1 = true
                                        break
                                    
                                    arg1.b = *(edx_2 + 1)
                                    char temp3_1 = eax_7[1]
                                    c_1 = arg1.b u< temp3_1
                                    
                                    if (arg1.b == temp3_1)
                                        edx_2 += 2
                                        eax_7 = &eax_7[2]
                                        
                                        if (arg1.b != 0)
                                            continue
                                        
                                        cond:1_1 = true
                                        break
                                
                                cond:1_1 = (sbb.d(eax_7, eax_7, c_1) | 1) s<= 0
                                break
                        
                        if (cond:1_1)
                            break
                        
                        edx_2 = arg2
                        *(ebx_1 + (edi_2 << 2) + 4) = *(ebx_1 + (edi_2 << 2))
                        int32_t temp2_1 = edi_2
                        edi_2 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                
                ebp_1 += 1
                *(ebx_1 + (edi_2 << 2) + 4) = edi_1
                
                if (ebp_1 s>= var_4_1)
                    break

uint32_t eax_14
eax_14.b = 1
return eax_14
