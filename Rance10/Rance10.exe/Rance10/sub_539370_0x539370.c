// 函数: sub_539370
// 地址: 0x539370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
struct partsengine::CPartsList::VTable** eax = sub_4f14d0(data_7fcba4 + 0x128)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** vFunc_0
    
    if (arg1 s< eax_1 || eax[1] + eax_1 s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax[3][arg1 - eax_1].vFunc_0
        
        if (vFunc_0 != 0)
            return vFunc_0[0x2c]
        
        int32_t var_8_1 = arg1
        vFunc_0 = sub_526580(eax)
    
    if (vFunc_0 != 0)
        return vFunc_0[0x2c]

return 0
