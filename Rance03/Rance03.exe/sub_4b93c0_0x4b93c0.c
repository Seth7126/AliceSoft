// 函数: sub_4b93c0
// 地址: 0x4b93c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1

if (arg3 == 0)
    eax_1 = arg2
else
    eax_1 = *(arg1 + 0x8c) * arg2

*(arg1 + 0xa0) += eax_1

if (*(arg1 + 0x250) != *(arg1 + 0x254))
    *(arg1 + 0x10) = sub_4be050(arg1 + 0x24c, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x26c) != *(arg1 + 0x270))
    *(arg1 + 0x14) = sub_4be050(arg1 + 0x268, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x288) != *(arg1 + 0x28c))
    *(arg1 + 0x24) = sub_4bd610(arg1 + 0x284, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x2a4) != *(arg1 + 0x2a8))
    *(arg1 + 0x2c) = sub_4bd610(arg1 + 0x2a0, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x2c0) != *(arg1 + 0x2c4))
    *(arg1 + 0x30) = sub_4bd610(arg1 + 0x2bc, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x2dc) != *(arg1 + 0x2e0))
    *(arg1 + 0x34) = sub_4bd610(arg1 + 0x2d8, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x2f8) != *(arg1 + 0x2fc))
    *(arg1 + 0x38) = sub_4bd610(arg1 + 0x2f4, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x314) != *(arg1 + 0x318))
    *(arg1 + 0x3c) = sub_4bd610(arg1 + 0x310, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x330) != *(arg1 + 0x334))
    *(arg1 + 0x40) = sub_4bd610(arg1 + 0x32c, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

void* eax_18 = *(arg1 + 0xdc)

if (eax_18 != *(arg1 + 0xe0))
    int32_t* ecx_9 = *(arg1 + 0xa0)
    
    if (*(eax_18 + 8) s<= ecx_9)
        *(arg1 + 0x110) = sub_4b9a40(ecx_9, arg1 + 0xd8, arg1 + 0xc0)
        *(arg1 + 4) = 1

void* eax_22 = *(arg1 + 0xf8)

if (eax_22 != *(arg1 + 0xfc))
    int32_t* ecx_10 = *(arg1 + 0xa0)
    
    if (*(eax_22 + 8) s<= ecx_10)
        *(arg1 + 0x114) = sub_4b9a40(ecx_10, arg1 + 0xf4, arg1 + 0xcc)
        *(arg1 + 4) = 1

if (*(arg1 + 0x11c) != *(arg1 + 0x120))
    *(arg1 + 0x48) = sub_4be050(arg1 + 0x118, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x138) != *(arg1 + 0x13c))
    *(arg1 + 0x4c) = sub_4be050(arg1 + 0x134, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x154) != *(arg1 + 0x158))
    *(arg1 + 0x50) = sub_4be050(arg1 + 0x150, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

if (*(arg1 + 0x170) != *(arg1 + 0x174))
    *(arg1 + 0x54) = sub_4be050(arg1 + 0x16c, *(arg1 + 0xa0))
    *(arg1 + 4) = 1

int128_t* result = *(arg1 + 0x18c)

if (result != *(arg1 + 0x190))
    int32_t xmm0_7
    result, xmm0_7 = sub_4be050(arg1 + 0x188, *(arg1 + 0xa0))
    *(arg1 + 0x58) = xmm0_7
    *(arg1 + 4) = 1

return result
