// 函数: sub_53ae70
// 地址: 0x53ae70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_53aebb:
        
        if (vFunc_0 != 0)
            goto label_53aebf
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg1
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_53aebb
        
    label_53aebf:
        result = data_7fcba4
        
        if (result[0x7d].b == 0)
            return sub_403490(&vFunc_0[0x89], 0x75d236, nullptr)
        
        if (&vFunc_0[0x89] != arg2)
            return sub_403590(&vFunc_0[0x89], arg2, 0, 0xffffffff)

return result
