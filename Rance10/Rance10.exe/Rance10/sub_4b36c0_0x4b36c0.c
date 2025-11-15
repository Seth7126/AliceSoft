// 函数: sub_4b36c0
// 地址: 0x4b36c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg1
int32_t ebx = 0
void* var_4 = edx
void* eax_1 = *(*(edx + 0x158) + 0x70)
int32_t ecx_2 = (*(eax_1 + 0xc4) - *(eax_1 + 0xc0)) s>> 2

if (ecx_2 s> 0)
    while (true)
        int32_t esi_1
        
        if (ebx s>= 0)
            void* esi_2 = *(*(edx + 0x158) + 0x70)
            
            if ((*(esi_2 + 0xc4) - *(esi_2 + 0xc0)) s>> 2 s> ebx)
                esi_1 = *(*(esi_2 + 0xc0) + (ebx << 2))
            else
                esi_1 = 0
        else
            esi_1 = 0
        
        void** ebp_1 = *(edx + 0x15c)
        int32_t var_1c_1 = esi_1
        void* eax_6 = sub_4f15e0(ebp_1)
        
        if (eax_6 != 0)
            int32_t edi_1 = *(eax_6 + 8)
            
            if (esi_1 s>= edi_1 && *(eax_6 + 4) + edi_1 s> esi_1)
                int32_t eax_7
                eax_7.b = *(*(eax_6 + 0xc) + ((esi_1 - edi_1) << 2)) != 0
                
                if (eax_7.b != 0)
                    int32_t var_1c_2 = esi_1
                    struct partsengine::CPartsList::VTable** eax_8 = sub_4f14d0(ebp_1)
                    int32_t edi_2
                    
                    if (eax_8 != 0)
                        edi_2 = eax_8[2]
                    
                    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable
                        ** vFunc_0
                    
                    if (eax_8 == 0 || esi_1 s< edi_2 || eax_8[1] + edi_2 s<= esi_1)
                        vFunc_0 = nullptr
                    else
                        vFunc_0 = eax_8[3][esi_1 - edi_2].vFunc_0
                        
                        if (vFunc_0 == 0)
                            int32_t var_1c_3 = esi_1
                            vFunc_0 = sub_526580(eax_8)
                    
                    int32_t* ecx_10 = vFunc_0[0x1d]
                    
                    if (ecx_10 != 0 && (*(*ecx_10 + 8))(1) == 8)
                        return vFunc_0
        
        ebx += 1
        
        if (ebx s>= ecx_2)
            break
        
        edx = var_4

return 0
