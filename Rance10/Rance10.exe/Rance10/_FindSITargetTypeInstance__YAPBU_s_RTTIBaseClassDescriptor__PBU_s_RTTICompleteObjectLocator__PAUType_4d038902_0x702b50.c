// 函数: ?FindSITargetTypeInstance@@YAPBU_s_RTTIBaseClassDescriptor@@PBU_s_RTTICompleteObjectLocator@@PAUTypeDescriptor@@1@Z
// 地址: 0x702b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t ebx
int32_t var_10 = ebx
void* eax_1 = *(arg1 + 0x10)
int32_t edx = *(eax_1 + 0xc)
int32_t esi = *(eax_1 + 8)
int32_t eax_2 = 0
int32_t var_8_1 = edx

if (esi != 0)
    while (true)
        int32_t* result = *(edx + (eax_2 << 2))
        void* ecx_1 = *result
        
        if (ecx_1 != arg3)
            char* edx_1 = arg3 + 8
            char* ecx_2 = ecx_1 + 8
            int32_t ecx_4
            
            while (true)
                ebx.b = *ecx_2
                char temp0_1 = *edx_1
                bool c_1 = ebx.b u< temp0_1
                
                if (ebx.b == temp0_1)
                    if (ebx.b == 0)
                        ecx_4 = 0
                        break
                    
                    ebx.b = ecx_2[1]
                    char temp1_1 = edx_1[1]
                    c_1 = ebx.b u< temp1_1
                    
                    if (ebx.b == temp1_1)
                        ecx_2 = &ecx_2[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx.b != 0)
                            continue
                        
                        ecx_4 = 0
                        break
                
                ecx_4 = sbb.d(ecx_2, ecx_2, c_1) | 1
                break
            
            edx = var_8_1
            
            if (ecx_4 != 0)
                eax_2 += 1
                
                if (eax_2 u>= esi)
                    break
                
                continue
        
        int32_t ecx_5 = eax_2 + 1
        
        if (ecx_5 u< esi)
            while (true)
                int32_t* eax_4 = *(edx + (ecx_5 << 2))
                
                if ((eax_4[5].b & 4) != 0)
                    break
                
                void* eax_5 = *eax_4
                int32_t eax_8
                
                if (eax_5 != arg2)
                    char* edx_2 = arg2 + 8
                    char* eax_6 = eax_5 + 8
                    
                    while (true)
                        ebx.b = *eax_6
                        char temp2_1 = *edx_2
                        bool c_2 = ebx.b u< temp2_1
                        
                        if (ebx.b == temp2_1)
                            if (ebx.b == 0)
                                eax_8 = 0
                                break
                            
                            ebx.b = eax_6[1]
                            char temp3_1 = edx_2[1]
                            c_2 = ebx.b u< temp3_1
                            
                            if (ebx.b == temp3_1)
                                eax_6 = &eax_6[2]
                                edx_2 = &edx_2[2]
                                
                                if (ebx.b != 0)
                                    continue
                                
                                eax_8 = 0
                                break
                        
                        eax_8 = sbb.d(eax_6, eax_6, c_2) | 1
                        break
                
                if (eax_5 == arg2 || eax_8 == 0)
                    return result
                
                edx = var_8_1
                ecx_5 += 1
                
                if (ecx_5 u>= esi)
                    break
        
        break

return nullptr
