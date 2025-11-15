// 函数: sub_51b2c0
// 地址: 0x51b2c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = arg2
struct partsengine::CPartsList::VTable** edx = sub_4f14d0(arg1 + 0x34)

if (edx != 0)
    int32_t edi_1 = edx[2]
    
    if (arg2 s>= edi_1 && edx[1] + edi_1 s> arg2)
        if (edx[3][arg2 - edi_1].vFunc_0 != 0)
            int32_t eax_2
            eax_2.b = 1
            return eax_2
        
        int32_t var_c_1 = arg2
        struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** 
            eax_3
        eax_3.b = sub_526580(edx) != 0
        return eax_3

struct partsengine::CPartsList::VTable** eax
eax.b = 0
return eax
