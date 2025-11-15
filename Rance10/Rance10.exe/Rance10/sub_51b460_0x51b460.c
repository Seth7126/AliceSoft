// 函数: sub_51b460
// 地址: 0x51b460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg2
void* eax = sub_4f15e0(arg1 + 0x34)

if (eax != 0)
    int32_t edi_1 = *(eax + 8)
    
    if (arg2 s>= edi_1 && *(eax + 4) + edi_1 s> arg2)
        int32_t eax_1
        eax_1.b = *(*(eax + 0xc) + ((arg2 - edi_1) << 2)) != 0
        
        if (eax_1.b != 0)
            int32_t var_10_1 = arg2
            struct partsengine::CPartsList::VTable** eax_2 = sub_4f14d0(arg1 + 0x34)
            
            if (eax_2 != 0)
                int32_t eax_3 = eax_2[2]
                struct 
                    common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable*
                    * vFunc_0
                
                if (arg2 s< eax_3 || eax_2[1] + eax_3 s<= arg2)
                    vFunc_0 = nullptr
                else
                    vFunc_0 = eax_2[3][arg2 - eax_3].vFunc_0
                    
                    if (vFunc_0 != 0)
                        return vFunc_0[0x22]
                    
                    int32_t var_10_2 = arg2
                    vFunc_0 = sub_526580(eax_2)
                
                if (vFunc_0 != 0)
                    return vFunc_0[0x22]

return 0xffffffff
