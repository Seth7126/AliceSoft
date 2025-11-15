// 函数: sub_51b630
// 地址: 0x51b630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg2
struct partsengine::CPartsList::VTable** vFunc_0
int32_t ecx_1
vFunc_0, ecx_1 = sub_4f14d0(arg1 + 0x34)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg2 s>= eax)
        ecx_1 = vFunc[1] + eax
    
    int32_t var_8_2
    
    if (arg2 s< eax || ecx_1 s<= arg2)
        vFunc_0 = nullptr
    else
        ecx_1 = arg2 - eax
        vFunc_0 = vFunc[3][ecx_1].vFunc_0
        
        if (vFunc_0 != 0)
            var_8_2 = ecx_1
            return sub_4f0690(vFunc_0, arg3, arg4) != 0
        
        int32_t var_8_1 = arg2
        vFunc_0, ecx_1 = sub_526580(vFunc)
    
    if (vFunc_0 != 0)
        var_8_2 = ecx_1
        return sub_4f0690(vFunc_0, arg3, arg4) != 0

vFunc_0.b = 0
return vFunc_0
