// 函数: sub_538500
// 地址: 0x538500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** eax = sub_4f14d0(data_7fcba4 + 0x128)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** vFunc_0
    
    if (arg1 s< eax_1 || eax[1] + eax_1 s<= arg1)
        vFunc_0 = nullptr
    label_538549:
        
        if (vFunc_0 != 0)
            goto label_53854d
    else
        vFunc_0 = eax[3][arg1 - eax_1].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg1
            vFunc_0 = sub_526580(eax)
            goto label_538549
        
    label_53854d:
        int32_t* ecx_7 = vFunc_0[0x1d]
        
        if (ecx_7 != 0)
            return (*(*ecx_7 + 8))(arg2)

return 0xffffffff
