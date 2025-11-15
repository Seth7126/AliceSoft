// 函数: sub_4f6380
// 地址: 0x4f6380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcba4
int32_t __saved_ebx = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(edi + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    label_4f63cc:
        
        if (vFunc_0 != 0)
            goto label_4f63da
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_14_1 = arg1
            result = sub_526580(result_1)
            vFunc_0 = result
            goto label_4f63cc
        
    label_4f63da:
        result = sub_432330(edi + 0x1c4, arg2)
        struct partsengine::CPartsList::VTable** result_3 = *(edi + 0x1c4)
        struct partsengine::CPartsList::VTable** result_2 = result
        
        if (result_2 != result_3)
            result = sub_412ca0(arg2, &result_2[4])
        
        if (result_2 == result_3 || result.b != 0)
            result_2 = result_3
        
        if (result_2 != result_3)
            return sub_4bb1f0(&result_2[0xa], arg3, arg4, vFunc_0)

return result
