// 函数: sub_538210
// 地址: 0x538210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t __saved_esi = arg1
struct partsengine::CPartsList::VTable** result = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** result_2
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        result_2 = nullptr
    label_53825b:
        
        if (result_2 != 0)
            goto label_53825f
    else
        void* ecx_5 = arg1 - result
        result = result_1[3]
        result_2 = result[ecx_5]
        
        if (result_2 == 0)
            int32_t var_10_1 = arg1
            result = sub_526580(result_1)
            result_2 = result
            goto label_53825b
        
    label_53825f:
        result_2[0x23].b = ebx.b
        
        if (ebx.b == 0)
            result = (*(result_2[0x1d]->vFunc_0 + 0x18))()
            
            if (result.b != 0)
                return (*(result_2[0x1d]->vFunc_0 + 0x1c))(0)

return result
