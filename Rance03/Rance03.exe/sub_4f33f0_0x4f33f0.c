// 函数: sub_4f33f0
// 地址: 0x4f33f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
int32_t ebx
ebx.b = arg2
int32_t var_14 = arg3
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_2 = result

if (result_2 != 0)
    result = result_2[2]
    struct partsengine::CPartsList::VTable** result_1
    
    if (arg3 s< result || result_2[1] + result s<= arg3)
        result_1 = nullptr
    label_4f343c:
        
        if (result_1 != 0)
            goto label_4f3444
    else
        void* ecx_5 = arg3 - result
        result = result_2[3]
        result_1 = result[ecx_5]
        
        if (result_1 == 0)
            result = sub_4e7720(result_2, arg3)
            result_1 = result
            goto label_4f343c
        
    label_4f3444:
        
        if (arg4 u<= 3)
            struct partsengine::CPartsList::VTable*** edx_1 = &result_1[0x123][arg4]
            result.b = ebx.b != 0
            
            if (*edx_1 != result)
                *edx_1 = result
                result_1[0x1c].b = 1

return result
