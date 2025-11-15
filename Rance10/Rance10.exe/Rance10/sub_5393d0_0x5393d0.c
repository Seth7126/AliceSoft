// 函数: sub_5393d0
// 地址: 0x5393d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 != 0)
        label_53941d:
            int32_t var_10_2 = arg5
            int32_t var_14_1 = arg4
            return sub_5040a0(&vFunc_0[0x21], arg2)
        
        int32_t var_10_1 = arg3
        vFunc_0 = sub_526580(vFunc)
    
    if (vFunc_0 != 0)
        goto label_53941d

return vFunc_0
