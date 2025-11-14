// 函数: sub_4f6f60
// 地址: 0x4f6f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
ebx.b = arg2
void* result = sub_4a8ac0(data_75d4fc + 0x174, arg1)
void* result_1 = result

if (result_1 != 0)
    bool p_2
    
    if (*(result_1 + 0x3c) == ebx.b)
        float xmm0_1 = *(result_1 + 0x40)
        xmm0_1 - arg3
        result:1.b = (xmm0_1 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg3) ? 1 : 0) << 2
            | (xmm0_1 < arg3 ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (*(result_1 + 0x3c) != ebx.b || p_2)
        *(result_1 + 0x3c) = ebx.b
        *(result_1 + 0x40) = arg3
        int32_t* ecx_2 = *(result_1 + 0x5c)
        
        if (ecx_2 != 0)
            jump(**ecx_2)

return result
