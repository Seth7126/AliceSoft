// 函数: sub_4f4900
// 地址: 0x4f4900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg2
struct partsengine::CPartsList::VTable** eax = sub_4f14d0(arg1 + 4)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** vFunc_0
    
    if (arg2 s< eax_1 || eax[1] + eax_1 s<= arg2)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax[3][arg2 - eax_1].vFunc_0
        
        if (vFunc_0 != 0)
            return sub_4ef140(vFunc_0)
        
        int32_t var_8_1 = arg2
        vFunc_0 = sub_526580(eax)
    
    if (vFunc_0 != 0)
        return sub_4ef140(vFunc_0)

return 0
