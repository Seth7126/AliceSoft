// 函数: sub_538b00
// 地址: 0x538b00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 != 0)
            return sub_4eddb0(vFunc_0, arg2, arg4, &vFunc_0[0x98], arg5)
        
        int32_t var_10_1 = arg3
        result = sub_526580(result_1)
        vFunc_0 = result
    
    if (vFunc_0 != 0)
        return sub_4eddb0(vFunc_0, arg2, arg4, &vFunc_0[0x98], arg5)

return result
