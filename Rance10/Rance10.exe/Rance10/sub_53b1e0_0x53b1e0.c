// 函数: sub_53b1e0
// 地址: 0x53b1e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_2 = result

if (result_2 != 0)
    result = result_2[2]
    struct partsengine::CPartsList::VTable** result_1
    
    if (arg3 s< result || result_2[1] + result s<= arg3)
        result_1 = nullptr
    label_53b22b:
        
        if (result_1 != 0)
            goto label_53b22f
    else
        result_1 = result_2[3][arg3 - result]
        
        if (result_1 == 0)
            int32_t var_10_1 = arg3
            result = sub_526580(result_2)
            result_1 = result
            goto label_53b22b
        
    label_53b22f:
        result.b = arg4
        *(result_1 + 0x1b2) = result.b
        result.b = arg5
        *(result_1 + 0x1b3) = result.b
        result.b = arg6
        *(result_1 + 0x1b1) = ebx.b
        result_1[0x6d].b = result.b

return result
