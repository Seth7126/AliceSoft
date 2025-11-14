// 函数: sub_4d4df0
// 地址: 0x4d4df0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = 0
int32_t* result = (*(arg1 + 0x10) - *(arg1 + 0xc)) s>> 2
int32_t* result_1 = result

if (result s> 0)
    do
        if (ebp s>= 0)
            result = (*(arg1 + 0x10) - *(arg1 + 0xc)) s>> 2
        
        int32_t esi_1
        
        if (ebp s< 0 || result s<= ebp)
            esi_1 = 0
        else
            result = *(arg1 + 0xc)
            esi_1 = result[ebp]
        
        if (esi_1 s> 0)
            int32_t edi_3 = esi_1 s/ 0x2710
            void** edx_3 = *(*(arg1 + 0x20) + 0x1c)
            void** ecx_1 = edx_3
            void** eax_5 = edx_3[1]
            
            while (*(eax_5 + 0xd) == 0)
                if (eax_5[4] s>= edi_3)
                    ecx_1 = eax_5
                    eax_5 = *eax_5
                else
                    eax_5 = eax_5[2]
            
            void** eax_6
            
            if (ecx_1 == edx_3 || edi_3 s< ecx_1[4])
                void** var_c = edx_3
                eax_6 = &var_c
            else
                void** var_10 = ecx_1
                eax_6 = &var_10
            
            result = *eax_6
            
            if (result != *(*(arg1 + 0x20) + 0x1c))
                void* edi_4 = result[5]
                
                if (edi_4 != 0)
                    int32_t ecx_3 = *(edi_4 + 8)
                    
                    if (esi_1 s>= ecx_3)
                        result = *(edi_4 + 4) + ecx_3
                        
                        if (result s> esi_1)
                            result.b = (*(edi_4 + 0xc))[esi_1 - ecx_3] != 0
                            
                            if (result.b != 0)
                                int32_t var_24_1 = esi_1
                                struct partsengine::CPartsList::VTable** eax_8 =
                                    sub_4a52a0(*(arg1 + 0x20))
                                int32_t edi_5
                                
                                if (eax_8 != 0)
                                    edi_5 = eax_8[2]
                                
                                struct IInterface::VTable** vFunc_0
                                
                                if (eax_8 == 0 || esi_1 s< edi_5 || eax_8[1] + edi_5 s<= esi_1)
                                    vFunc_0 = nullptr
                                else
                                    vFunc_0 = eax_8[3][esi_1 - edi_5].vFunc_0
                                    
                                    if (vFunc_0 == 0)
                                        vFunc_0 = sub_4e7720(eax_8, esi_1)
                                
                                void* i
                                
                                if (arg1 == 0x2c)
                                    i = nullptr
                                else
                                    i = arg1 - 0x28
                                
                                int32_t i_1 = i
                                result = sub_4a3a10(vFunc_0)
                                
                                if (i != 0)
                                    int32_t edx_7 = result[0x9e]
                                    void* ecx_8 = &result[0x9d]
                                    result = *ecx_8
                                    
                                    if (result == edx_7)
                                        result = sub_412de0(ecx_8, &i_1)
                                    else
                                        while (*result != i)
                                            result = &result[1]
                                            
                                            if (result == edx_7)
                                                break
                                        
                                        if (result == edx_7)
                                            result = sub_412de0(ecx_8, &i_1)
        
        ebp += 1
    while (ebp s< result_1)

return result
