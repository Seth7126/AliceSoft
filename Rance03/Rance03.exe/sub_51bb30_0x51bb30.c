// 函数: sub_51bb30
// 地址: 0x51bb30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg1
void* result_1 = result

if (arg4 s>= 0 && arg5 s>= 0 && arg2 s>= 0 && arg3 s>= 0)
    void* ecx = result + 0xb4
    struct partsengine::CRect::VTable* const var_14 = &partsengine::CRect::`vftable'
    int32_t var_10_1 = arg2
    int32_t var_c_1 = arg3
    int32_t var_8_1 = arg4
    int32_t var_4_1 = arg5
    result = sub_512700(ecx, &var_14)
    
    if (result.b == 0)
        result = result_1
        *(ecx + 4) = arg2
        *(ecx + 8) = arg3
        *(ecx + 0xc) = arg4
        *(ecx + 0x10) = arg5
        *(result + 0xd8) = 1

return result
