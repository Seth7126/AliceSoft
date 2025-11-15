// 函数: sub_53aae0
// 地址: 0x53aae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    int32_t var_10_2
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            var_10_2 = arg4
            return sub_4f24c0(&vFunc_0[0x19], arg2)
        
        int32_t var_10_1 = arg3
        vFunc_0 = sub_526580(vFunc)
    
    if (vFunc_0 != 0)
        var_10_2 = arg4
        return sub_4f24c0(&vFunc_0[0x19], arg2)

return vFunc_0
