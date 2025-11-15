// 函数: sub_53af00
// 地址: 0x53af00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
char* var_8 = arg1
int32_t var_14 = arg2
struct partsengine::CPartsList::VTable** eax = sub_4f14d0(data_7fcba4 + 0x128)

if (eax != 0)
    int32_t eax_1 = eax[2]
    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** vFunc_0
    
    if (arg2 s< eax_1 || eax[1] + eax_1 s<= arg2)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax[3][arg2 - eax_1].vFunc_0
        
        if (vFunc_0 != 0)
        label_53af62:
            *(arg1 + 0x14) = 0xf
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_403590(arg1, &vFunc_0[0x89], 0, 0xffffffff)
            return arg1
        
        int32_t var_14_1 = arg2
        vFunc_0 = sub_526580(eax)
    
    if (vFunc_0 != 0)
        goto label_53af62

sub_403360(arg1, 0x75d3c1)
return arg1
