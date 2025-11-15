// 函数: sub_51ad30
// 地址: 0x51ad30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_edi = arg2
void* eax = sub_4f15e0(*(arg1 + 0x58))

if (eax != 0)
    int32_t edi_1 = *(eax + 8)
    
    if (arg2 s>= edi_1 && *(eax + 4) + edi_1 s> arg2)
        int32_t eax_1
        eax_1.b = *(*(eax + 0xc) + ((arg2 - edi_1) << 2)) != 0
        
        if (eax_1.b != 0)
            int32_t var_10_1 = arg2
            struct partsengine::CPartsList::VTable** eax_2 = sub_4f14d0(*(arg1 + 0x58))
            int32_t edi_2
            
            if (eax_2 != 0)
                edi_2 = eax_2[2]
            
            struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable**
                 vFunc_0
            
            if (eax_2 == 0 || arg2 s< edi_2 || eax_2[1] + edi_2 s<= arg2)
                vFunc_0 = nullptr
            else
                vFunc_0 = eax_2[3][arg2 - edi_2].vFunc_0
                
                if (vFunc_0 == 0)
                    int32_t var_10_2 = arg2
                    vFunc_0 = sub_526580(eax_2)
            
            sub_4eec50(vFunc_0, 1, 1)
            void* edi_3 = vFunc_0[0x1d]
            
            if (arg1 != 0xfffffff8)
                int32_t eax_7 = *(edi_3 + 0x48)
                int32_t* edx_4 = *(edi_3 + 0x44)
                
                if (edx_4 != eax_7)
                    while (*edx_4 != arg1 + 8)
                        edx_4 = &edx_4[1]
                        
                        if (edx_4 == eax_7)
                            break
                    
                    if (edx_4 != eax_7)
                        sub_6feca0(edx_4, &edx_4[1], eax_7 - &edx_4[1])
                        *(edi_3 + 0x48) -= 4

int32_t eax_9 = *(arg1 + 0x48)
int32_t* edx_5 = *(arg1 + 0x44)

if (edx_5 != eax_9)
    while (*edx_5 != arg2)
        edx_5 = &edx_5[1]
        
        if (edx_5 == eax_9)
            break
    
    if (edx_5 != eax_9)
        sub_6feca0(edx_5, &edx_5[1], eax_9 - &edx_5[1])
        *(arg1 + 0x48) -= 4
        *(arg1 + 0x50) = 1

return sub_51a9d0(arg1)
