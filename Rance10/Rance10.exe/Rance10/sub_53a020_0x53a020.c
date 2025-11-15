// 函数: sub_53a020
// 地址: 0x53a020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg3 s< result || result_1[1] + result s<= arg3)
        vFunc_0 = nullptr
    label_53a06b:
        
        if (vFunc_0 != 0)
            goto label_53a073
    else
        vFunc_0 = result_1[3][arg3 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg3
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_53a06b
        
    label_53a073:
        vFunc_0[0x44] = arg4
        vFunc_0[0x45] = arg5
        result = arg6
        vFunc_0[0x43] = arg2
        vFunc_0[0x46] = result

return result
