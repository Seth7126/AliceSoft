// 函数: sub_538bf0
// 地址: 0x538bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_18 = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    int32_t var_8
    void var_4
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 != 0)
            return sub_4eddb0(vFunc_0, &var_4, &var_8, &vFunc_0[0x98], arg2)
        
        int32_t var_18_1 = arg1
        result = sub_526580(result_1)
        vFunc_0 = result
    
    if (vFunc_0 != 0)
        return sub_4eddb0(vFunc_0, &var_4, &var_8, &vFunc_0[0x98], arg2)

return result
