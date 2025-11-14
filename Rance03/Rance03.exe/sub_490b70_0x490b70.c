// 函数: sub_490b70
// 地址: 0x490b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_b4
struct _EXCEPTION_REGISTRATION_RECORD** result = __security_cookie ^ &var_b4
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
void* edx = arg8
int32_t edi_2 = (*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2
int32_t edi_3 = edi_2 - 1
void* var_b0 = arg1
void* var_a4 = edx
int32_t var_ac = edi_3

if (edi_2 - 1 s>= 0)
    int32_t temp2_1
    
    do
        struct _EXCEPTION_REGISTRATION_RECORD** esi_2 = *(*(arg1 + 0x1c) + (edi_3 << 2))
        
        if (esi_2[4] != 0)
            void* ecx = esi_2[5]
            
            if (ecx != 0)
                bool var_a8_1 = edx != 0
                
                if (esi_2[0xc] != arg7)
                    esi_2[0xc] = arg7
                
                result = arg2
                esi_2[0xb] = result
                
                if (*(ecx + 8) != 3)
                label_490dbf:
                    void* ecx_18 = esi_2[7]
                    
                    if (ecx_18 == 0 || esi_2[0xa].b == 0)
                        int32_t* ecx_19 = esi_2[8]
                        
                        if (ecx_19 == 0 || *(esi_2 + 0x29) == 0)
                            int32_t* ecx_20 = esi_2[9]
                            
                            if (ecx_20 != 0 && *(esi_2 + 0x2a) != 0)
                                result = (*(*ecx_20 + 4))()
                                esi_2[9] = 0
                        else
                            result = (*(*ecx_19 + 4))()
                            esi_2[8] = 0
                    else
                        void* var_c4_13 = ecx_18
                        result = sub_48f820(ecx_18)
                else
                    void* edx_2 = result - *(ecx + 0x3c)
                    
                    if (result - *(ecx + 0x3c) s< 0)
                        goto label_490dbf
                    
                    result = (*(ecx + 0x48) - *(ecx + 0x44)) s>> 2
                    
                    if (result s<= edx_2)
                        goto label_490dbf
                    
                    result = *(ecx + 0x44)
                    void* ebx_1 = result[edx_2]
                    
                    if (ebx_1 == 0)
                        goto label_490dbf
                    
                    struct partsengine::CFlatKeyDataGraphicMatrix::VTable* var_98
                    
                    if (esi_2[7] != 0 && esi_2[0xa].b != 0 && var_a8_1 != 0)
                        sub_48a850(&var_98, var_a4)
                        sub_48d740(&var_98, ebx_1)
                        int32_t ecx_3
                        
                        if (esi_2[0xc] != 0)
                            ecx_3 = *(esi_2[5] + 0x3c)
                        else
                            ecx_3 = 0
                        
                        result = sub_48f2b0(esi_2[7], arg2 - ecx_3, arg3.b, arg4, &var_98)
                    else if (*(esi_2 + 0x29) != 0)
                        if (esi_2[8] == 0)
                            struct IInterface::partsengine::CFlatLayerView::VTable** eax_7 =
                                sub_69adc6(0x50)
                            struct IInterface::partsengine::CFlatLayerView::VTable** eax_8
                            
                            if (eax_7 == 0)
                                eax_8 = nullptr
                            else
                                eax_8 = sub_490010(eax_7, esi_2[2], esi_2[3], esi_2[6])
                            
                            void* ecx_6 = esi_2[4]
                            esi_2[8] = eax_8
                            int32_t* eax_11 = sub_4877d0(ecx_6, esi_2[5] + 0x24)
                            int32_t* ebx_2 = esi_2[4]
                            void* eax_12 = esi_2[8]
                            
                            if (ebx_2 != 0 && eax_11 != 0)
                                sub_490380(eax_12)
                                *(eax_12 + 0x10) = ebx_2
                                (**ebx_2)()
                                *(eax_12 + 0x14) = eax_11
                                (**eax_11)()
                                sub_490470(eax_12)
                            
                            edi_3 = var_ac
                        
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_16 = nullptr
                        
                        if (var_a8_1 != 0)
                            sub_48a850(&var_98, var_a4)
                            sub_48d740(&var_98, ebx_1)
                            eax_16 = &var_98
                            var_98 = &partsengine::CFlatKeyDataGraphicMatrix::`vftable'
                        
                        esi_2[8]
                        
                        if (arg6 == 0)
                            result = sub_4907d0(arg3, arg4, esi_2, eax_16)
                        else
                            result = sub_4906b0(arg3, arg4, arg5, esi_2, eax_16)
                    else if (*(esi_2 + 0x2a) != 0)
                        if (esi_2[9] == 0)
                            struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable
                                ** eax_17 = sub_69adc6(0x4c)
                            struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable
                                ** eax_18
                            
                            if (eax_17 == 0)
                                eax_18 = nullptr
                            else
                                eax_18 = sub_489060(eax_17, esi_2[2], esi_2[3], esi_2[6])
                            
                            void* ecx_15 = esi_2[4]
                            esi_2[9] = eax_18
                            int32_t* eax_21 = sub_487950(ecx_15, esi_2[5] + 0x24)
                            sub_489570(esi_2[9], esi_2[4], eax_21)
                        
                        result = sub_489f50(esi_2[9], arg2, arg3.b, arg4, arg6, var_a8_1, esi_2)
            
            arg1 = var_b0
        
        edx = var_a4
        temp2_1 = edi_3
        edi_3 -= 1
        var_ac = edi_3
    while (temp2_1 - 1 s>= 0)

sub_69a5bc(result_1 ^ &var_b4)
return result
