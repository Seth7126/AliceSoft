// 函数: sub_4f68a0
// 地址: 0x4f68a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_4f68ea:
        
        if (vFunc_0 != 0)
            result = arg2
            vFunc_0[0x22] = result
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_c_1 = arg1
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_4f68ea
        
        result = arg2
        vFunc_0[0x22] = result

return result
