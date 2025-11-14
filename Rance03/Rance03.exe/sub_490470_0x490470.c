// 函数: sub_490470
// 地址: 0x490470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = 0
int32_t var_c = 0
int32_t* edi_1 = *(arg1 + 0x14) + 8
int32_t* var_10 = edi_1
int32_t result = (edi_1[1] - *edi_1) s>> 2
int32_t result_1 = result

if (result s> 0)
    do
        result = *(*(*edi_1 + (ebp << 2)) + 8)
        
        if (result == 3)
            struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                esi_1 = sub_69adc6(0x34)
            
            if (esi_1 == 0)
                esi_1 = nullptr
            else
                int32_t edx_1 = *(arg1 + 0x18)
                int32_t ecx_1 = *(arg1 + 0xc)
                int32_t eax_5 = *(arg1 + 8)
                *esi_1 = &partsengine::CFlatLayerGraphicView::`vftable'{for `partsengine::IFlatGraphicLayer'}
                esi_1[1] = 1
                esi_1[2] = eax_5
                esi_1[3] = ecx_1
                esi_1[4] = 0
                esi_1[5] = 0
                esi_1[6] = edx_1
                esi_1[7] = 0
                esi_1[8] = 0
                esi_1[9] = 0
                esi_1[0xa].w = 0
                *(esi_1 + 0x2a) = 0
                esi_1[0xb] = 0xffffffff
                esi_1[0xc] = 0
            
            int32_t eax_6 = *edi_1
            struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                var_14 = esi_1
            sub_48de10(esi_1, *(arg1 + 0x10), *(eax_6 + (ebp << 2)))
            int32_t ecx_3 = *(arg1 + 0x20)
            
            if (&var_14 u< ecx_3)
                result = *(arg1 + 0x1c)
            
            if (&var_14 u>= ecx_3 || result u> &var_14)
                if (ecx_3 == *(arg1 + 0x24))
                    int32_t var_28_3 = ecx_3
                    sub_412f20(arg1 + 0x1c)
                
                result = *(arg1 + 0x20)
                
                if (result != 0)
                    *result = esi_1
                
                *(arg1 + 0x20) += 4
                edi_1 = var_10
            else
                int32_t esi_3 = (&var_14 - result) s>> 2
                
                if (ecx_3 == *(arg1 + 0x24))
                    int32_t var_28_2 = ecx_3
                    result = sub_412f20(arg1 + 0x1c)
                
                int32_t* ecx_5 = *(arg1 + 0x20)
                
                if (ecx_5 != 0)
                    result = *(*(arg1 + 0x1c) + (esi_3 << 2))
                    *ecx_5 = result
                
                *(arg1 + 0x20) += 4
                edi_1 = var_10
        else
            int32_t var_8
            
            if (result == 5)
                struct IInterface::partsengine::CFlatLayerScriptView::VTable** esi_4 =
                    sub_69adc6(0x14)
                
                if (esi_4 == 0)
                    esi_4 = nullptr
                else
                    *esi_4 = &partsengine::CFlatLayerScriptView::`vftable'{for `IInterface'}
                    esi_4[1] = 1
                    esi_4[2] = 0
                    esi_4[3] = 0
                    esi_4[4] = 0
                
                int32_t eax_9 = *edi_1
                var_8 = esi_4
                int32_t* edi_2 = *(eax_9 + (ebp << 2))
                int32_t* ebp_1 = *(arg1 + 0x10)
                
                if (ebp_1 != 0 && edi_2 != 0)
                    sub_492d80(esi_4)
                    esi_4[2] = ebp_1
                    (**ebp_1)()
                    esi_4[3] = edi_2
                    (**edi_2)()
                
                result = sub_412de0(arg1 + 0x28, &var_8)
                ebp = var_c
                edi_1 = var_10
            else if (result == 4)
                struct IInterface::partsengine::CFlatLayerSoundView::VTable** edx_2 =
                    sub_69adc6(0x20)
                
                if (edx_2 == 0)
                    edx_2 = nullptr
                else
                    int32_t eax_13 = *(arg1 + 0x18)
                    int32_t ecx_11 = *(arg1 + 0xc)
                    *edx_2 = &partsengine::CFlatLayerSoundView::`vftable'{for `IInterface'}
                    edx_2[1] = 1
                    edx_2[2] = 0
                    edx_2[3] = 0
                    edx_2[4] = eax_13
                    edx_2[5] = ecx_11
                    edx_2[6] = 0
                    edx_2[7] = 0
                
                int32_t eax_14 = *edi_1
                var_8 = edx_2
                sub_48ff00(edx_2, *(arg1 + 0x10), *(eax_14 + (ebp << 2)))
                result = sub_412de0(arg1 + 0x34, &var_8)
        
        ebp += 1
        var_c = ebp
    while (ebp s< result_1)

return result
