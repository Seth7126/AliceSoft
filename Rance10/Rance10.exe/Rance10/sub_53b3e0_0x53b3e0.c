// 函数: sub_53b3e0
// 地址: 0x53b3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_53b42b:
        
        if (vFunc_0 != 0)
            goto label_53b433
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg3
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_53b42b
        
    label_53b433:
        result = arg4 * 3
        
        if (&vFunc_0[result * 2 + 0x6e] != arg2)
            return sub_403590(&vFunc_0[result * 2 + 0x6e], arg2, 0, 0xffffffff)

return result
