// 函数: sub_53b670
// 地址: 0x53b670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_53b6bb:
        
        if (vFunc_0 != 0)
            result.b = ebx.b != 0
            vFunc_0[0x87] = result
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg1
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_53b6bb
        
        result.b = ebx.b != 0
        vFunc_0[0x87] = result

return result
