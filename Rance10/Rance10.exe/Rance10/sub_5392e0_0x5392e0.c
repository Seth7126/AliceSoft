// 函数: sub_5392e0
// 地址: 0x5392e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1c = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_53932e:
        
        if (vFunc_0 != 0)
            goto label_539338
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_1c_1 = arg1
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_53932e
        
    label_539338:
        int32_t var_c = arg2
        int32_t var_8 = 0xff
        int32_t* ecx_7 = &var_c
        int32_t var_4 = 0
        
        if (arg2 s>= 0xff)
            ecx_7 = &var_8
        
        int32_t* eax_1 = &var_4
        
        if (*ecx_7 s> 0)
            eax_1 = ecx_7
        
        result = *eax_1
        vFunc_0[0x2c] = result

return result
