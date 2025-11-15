// 函数: sub_53a220
// 地址: 0x53a220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_esi = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_2 = result

if (result_2 != 0)
    result = result_2[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_2[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_53a26e:
        
        if (vFunc_0 != 0)
            goto label_53a272
    else
        vFunc_0 = result_2[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_1c_1 = arg1
            result = sub_526580(result_2)
            vFunc_0 = result
            goto label_53a26e
        
    label_53a272:
        result = vFunc_0[0x47]
        
        if (result != arg2)
            result = sub_4f1950(vFunc_0[0x1e], result)
            int32_t var_c = arg2
            
            if (arg2 s> 0)
                struct partsengine::CPartsList::VTable** result_1
                sub_42ebc0(&vFunc_0[0x1e][5], &result_1, &var_c)
                result = result_1
                result[5] = &result[5]->vFunc_0 + 1
            
            vFunc_0[0x47] = arg2

return result
