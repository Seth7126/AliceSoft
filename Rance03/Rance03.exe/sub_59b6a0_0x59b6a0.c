// 函数: sub_59b6a0
// 地址: 0x59b6a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s< 0 || arg2 s>= (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
    int32_t result
    result.b = 0
    return result

void* esi_1 = *(*(arg1 + 4) + (arg2 << 2))
*(esi_1 + 0x8c) = *(arg1 + 0x14)
*(esi_1 + 0x94) = *(arg1 + 0x1c)
*(esi_1 + 0x98) = *(arg1 + 0x20)
*(esi_1 + 0xa0) = *(arg1 + 0x28)
*(esi_1 + 0xa4) = *(arg1 + 0x2c)
*(esi_1 + 0xb4) = *(arg1 + 0x3c)
*(esi_1 + 0xc4) = *(arg1 + 0x4c)
*(esi_1 + 0xd4) = *(arg1 + 0x5c)
sub_596b60(esi_1 + 0xe4, arg1 + 0x6c)
sub_596bd0(esi_1, arg1 + 0xd4)
*(esi_1 + 0x280) = *(arg1 + 0xe0)
*(esi_1 + 0x284) = *(arg1 + 0xe4)
return sub_593000(esi_1)
