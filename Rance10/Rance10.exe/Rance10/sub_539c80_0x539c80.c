// 函数: sub_539c80
// 地址: 0x539c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    label_539cc9:
        
        if (vFunc_0 != 0)
            goto label_539cd9
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg3
            vFunc_0 = sub_526580(vFunc)
            goto label_539cc9
        
    label_539cd9:
        
        if (vFunc_0[0x3f] != arg2 || vFunc_0[0x40] != arg4 || vFunc_0[0x41] != arg5
                || vFunc_0[0x42] != arg6)
            vFunc_0[0x3e].b = 1
            vFunc_0[0x3f] = arg2
            vFunc_0[0x40] = arg4
            vFunc_0[0x41] = arg5
            vFunc_0[0x42] = arg6

return vFunc_0
