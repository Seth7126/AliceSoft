// 函数: sub_4d5260
// 地址: 0x4d5260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = 0
int32_t eax_2 = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2

if (eax_2 s> 0)
    do
        int32_t esi_1
        
        if (ebp s< 0 || (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2 s<= ebp)
            esi_1 = 0
        else
            esi_1 = *(*(arg1 + 0x38) + (ebp << 2))
        
        if (esi_1 s> 0)
            int32_t edi_3 = esi_1 s/ 0x2710
            void** edx_3 = *(*(arg1 + 0x4c) + 0x1c)
            void** ecx_1 = edx_3
            void** eax_8 = edx_3[1]
            
            while (*(eax_8 + 0xd) == 0)
                if (eax_8[4] s>= edi_3)
                    ecx_1 = eax_8
                    eax_8 = *eax_8
                else
                    eax_8 = eax_8[2]
            
            void** eax_9
            
            if (ecx_1 == edx_3 || edi_3 s< ecx_1[4])
                void** var_8 = edx_3
                eax_9 = &var_8
            else
                void** var_c = ecx_1
                eax_9 = &var_c
            
            void* eax_10 = *eax_9
            
            if (eax_10 != *(*(arg1 + 0x4c) + 0x1c))
                void* edi_4 = *(eax_10 + 0x14)
                
                if (edi_4 != 0)
                    int32_t ecx_3 = *(edi_4 + 8)
                    
                    if (esi_1 s>= ecx_3 && *(edi_4 + 4) + ecx_3 s> esi_1)
                        int32_t eax_13
                        eax_13.b = *(*(edi_4 + 0xc) + ((esi_1 - ecx_3) << 2)) != 0
                        
                        if (eax_13.b != 0)
                            int32_t var_20_1 = esi_1
                            struct partsengine::CPartsList::VTable** eax_14 =
                                sub_4a52a0(*(arg1 + 0x4c))
                            int32_t edi_5
                            
                            if (eax_14 != 0)
                                edi_5 = eax_14[2]
                            
                            struct IInterface::VTable** vFunc_0
                            
                            if (eax_14 == 0 || esi_1 s< edi_5 || eax_14[1] + edi_5 s<= esi_1)
                                vFunc_0 = nullptr
                            else
                                vFunc_0 = eax_14[3][esi_1 - edi_5].vFunc_0
                                
                                if (vFunc_0 == 0)
                                    vFunc_0 = sub_4e7720(eax_14, esi_1)
                            
                            void* eax_18 = sub_4a3a10(vFunc_0)
                            
                            if (arg1 != 0xfffffffc)
                                int32_t ecx_9 = *(eax_18 + 0x278)
                                int32_t* edx_7 = *(eax_18 + 0x274)
                                
                                if (edx_7 != ecx_9)
                                    while (*edx_7 != arg1 + 4)
                                        edx_7 = &edx_7[1]
                                        
                                        if (edx_7 == ecx_9)
                                            break
                                    
                                    if (edx_7 != ecx_9)
                                        _memcpy(edx_7, &edx_7[1], 
                                            (*(eax_18 + 0x278) - &edx_7[1]) & 0xfffffffc)
                                        *(eax_18 + 0x278) -= 4
        
        ebp += 1
    while (ebp s< eax_2)

int32_t result = *(arg1 + 0x38)

if (result != *(arg1 + 0x3c))
    *(arg1 + 0x3c) = result
    int32_t* ecx_11 = *(arg1 + 0x44)
    
    if (ecx_11 != 0)
        jump(**ecx_11)

return result
