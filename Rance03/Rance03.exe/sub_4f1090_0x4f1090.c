// 函数: sub_4f1090
// 地址: 0x4f1090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_2 = result

if (result_2 != 0)
    result = result_2[2]
    struct partsengine::CPartsList::VTable** result_1
    
    if (arg1 s< result || result_2[1] + result s<= arg1)
        result_1 = nullptr
    label_4f10e0:
        
        if (result_1 != 0)
            goto label_4f10e4
    else
        result_1 = result_2[3][arg1 - result]
        
        if (result_1 == 0)
            result = sub_4e7720(result_2, arg1)
            result_1 = result
            goto label_4f10e0
        
    label_4f10e4:
        float xmm0_1 = result_1[0x2d]
        xmm0_1 - arg2
        result:1.b = (xmm0_1 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg2) ? 1 : 0) << 2
            | (xmm0_1 < arg2 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            result_1[0x2d] = arg2
            result_1[0x1c].b = 1

return result
