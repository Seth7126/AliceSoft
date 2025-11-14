// 函数: sub_549030
// 地址: 0x549030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* const result

if (arg2 != 0)
    int32_t edx_1 = *(arg1 + 0xb8)
    void* ecx = *(arg1 + 0xd4)
    
    if (edx_1 s< 0 || edx_1 s>= (*(ecx + 0x24) - *(ecx + 0x20)) s>> 2)
        if (((*(ecx + 0x24) - *(ecx + 0x20)) & 0xfffffffc) s> 0)
            result = **(ecx + 0x20)
        else
            result = nullptr
    else if (edx_1 s>= (*(ecx + 0x24) - *(ecx + 0x20)) s>> 2)
        result = nullptr
    else
        result = *(*(ecx + 0x20) + (edx_1 << 2))
else
    result = *(*(arg1 + 0xd4) + 0x2c)

if (result != 0)
    return *(result + 0x10)

return result
