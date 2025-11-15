// 函数: sub_51ab40
// 地址: 0x51ab40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t ebp = 0
int32_t eax_2 = (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 2

if (eax_2 s> 0)
    do
        int32_t esi_1
        
        if (ebp s< 0 || (*(arg1 + 0x48) - *(arg1 + 0x44)) s>> 2 s<= ebp)
            esi_1 = 0
        else
            esi_1 = *(*(arg1 + 0x44) + (ebp << 2))
        
        int32_t var_18_1 = esi_1
        void* eax_7 = sub_4f15e0(*(arg1 + 0x58))
        
        if (eax_7 != 0)
            int32_t edi_1 = *(eax_7 + 8)
            
            if (esi_1 s>= edi_1 && *(eax_7 + 4) + edi_1 s> esi_1)
                int32_t eax_8
                eax_8.b = *(*(eax_7 + 0xc) + ((esi_1 - edi_1) << 2)) != 0
                
                if (eax_8.b != 0)
                    int32_t var_18_2 = esi_1
                    struct partsengine::CPartsList::VTable** eax_9 = sub_4f14d0(*(arg1 + 0x58))
                    int32_t edi_2
                    
                    if (eax_9 != 0)
                        edi_2 = eax_9[2]
                    
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                        ** vFunc_0
                    
                    if (eax_9 == 0 || esi_1 s< edi_2 || eax_9[1] + edi_2 s<= esi_1)
                        vFunc_0 = nullptr
                    else
                        vFunc_0 = eax_9[3][esi_1 - edi_2].vFunc_0
                        
                        if (vFunc_0 == 0)
                            int32_t var_18_3 = esi_1
                            vFunc_0 = sub_526580(eax_9)
                    
                    sub_4eec50(vFunc_0, 1, 1)
                    void* esi_2 = vFunc_0[0x1d]
                    
                    if (arg1 != 0xfffffff8)
                        int32_t eax_14 = *(esi_2 + 0x48)
                        int32_t* ecx_8 = *(esi_2 + 0x44)
                        
                        if (ecx_8 != eax_14)
                            while (*ecx_8 != arg1 + 8)
                                ecx_8 = &ecx_8[1]
                                
                                if (ecx_8 == eax_14)
                                    break
                            
                            if (ecx_8 != eax_14)
                                sub_6feca0(ecx_8, &ecx_8[1], eax_14 - &ecx_8[1])
                                *(esi_2 + 0x48) -= 4
        
        ebp += 1
    while (ebp s< eax_2)

int32_t eax_16 = *(arg1 + 0x44)

if (eax_16 != *(arg1 + 0x48))
    *(arg1 + 0x48) = eax_16
    *(arg1 + 0x50) = 1

return sub_51a9d0(arg1) __tailcall
