// 函数: sub_5a7b70
// 地址: 0x5a7b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 s< 0)
    return 

void* edx = data_75d508

if (arg1 s>= (*(edx + 0x54) - *(edx + 0x50)) s>> 2)
    return 

void* edx_1 = *(*(edx + 0x50) + (arg1 << 2))

if (edx_1 == 0)
    return 

if (arg2 s< 0)
    **(edx_1 + 0xbc)
    return 

int32_t eax_7 = *(edx_1 + 0xbc)

if (arg2 s< (*(edx_1 + 0xc0) - *(edx_1 + 0xbc)) s>> 2)
    *(eax_7 + (arg2 << 2))
    return 

*(eax_7 + ((*(edx_1 + 0xc0) - eax_7) s>> 2 << 2) - 4)
