// 函数: sub_4d4f60
// 地址: 0x4d4f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = 0
int32_t result = (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2
int32_t result_1 = result

if (result s> 0)
    do
        int32_t esi_1
        
        if (ebx s< 0 || (*(arg1 + 0x3c) - *(arg1 + 0x38)) s>> 2 s<= ebx)
            esi_1 = 0
        else
            esi_1 = *(*(arg1 + 0x38) + (ebx << 2))
        
        if (esi_1 s> 0)
            int32_t edi_3 = esi_1 s/ 0x2710
            void** edx_3 = *(*(arg1 + 0x4c) + 0x1c)
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
                void** var_8 = edx_3
                eax_6 = &var_8
            else
                void** var_c = ecx_1
                eax_6 = &var_c
            
            result = *eax_6
            
            if (result != *(*(arg1 + 0x4c) + 0x1c))
                void* edi_4 = *(result + 0x14)
                
                if (edi_4 != 0)
                    int32_t ecx_3 = *(edi_4 + 8)
                    
                    if (esi_1 s>= ecx_3 && *(edi_4 + 4) + ecx_3 s> esi_1)
                        result.b = *(*(edi_4 + 0xc) + ((esi_1 - ecx_3) << 2)) != 0
                        
                        if (result.b != 0)
                            int32_t var_20_1 = esi_1
                            struct partsengine::CPartsList::VTable** eax_8 =
                                sub_4a52a0(*(arg1 + 0x4c))
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
                            
                            if (*(sub_4a3a10(vFunc_0) + 0xa4) != 0)
                                result.b = 1
                                return result
        
        ebx += 1
    while (ebx s< result_1)

result.b = 0
return result
