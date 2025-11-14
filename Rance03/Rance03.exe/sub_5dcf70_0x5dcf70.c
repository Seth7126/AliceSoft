// 函数: sub_5dcf70
// 地址: 0x5dcf70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_2 = *(arg1 + 4)

if (arg2 u>= *(ecx_2 + 0xc) u>> 2)
    sub_64b530(0x6ea9e8)
    return 0

int32_t eax_2

if (*(ecx_2 + 0xc) != 0)
    eax_2 = *(ecx_2 + 8)
else
    eax_2 = 0

int32_t edx_1 = *(eax_2 + (arg2 << 2))

if (*(ecx_2 + 0x38) != 0)
    sub_64b530(0x6ea9a0)
    return 0

void* ecx = *(ecx_2 + 0x1c)

if (edx_1 u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2)
    return sub_5d55f0(*(*(ecx + 8) + (edx_1 << 2)))

return sub_5d55f0(nullptr)
