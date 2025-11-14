// 函数: sub_4f0ba0
// 地址: 0x4f0ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20 = arg1
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_4f0bee:
        
        if (vFunc_0 != 0)
            goto label_4f0bf8
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            result = sub_4e7720(result_1, arg1)
            vFunc_0 = result
            goto label_4f0bee
        
    label_4f0bf8:
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
        
        if (vFunc_0[0x24] != result)
            vFunc_0[0x24] = result
            vFunc_0[0x1c].b = 1

return result
