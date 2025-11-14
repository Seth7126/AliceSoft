// 函数: sub_52a520
// 地址: 0x52a520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 0

int32_t esi = *(arg1 + 0x74)

if (esi s>= 0 && esi s< (*(arg1 + 0x44) - *(arg1 + 0x40)) s>> 2
        && *(*(arg1 + 0x40) + (esi << 2)) != 0 && esi s< (*(arg1 + 0x50) - *(arg1 + 0x4c)) s>> 2)
    return *(*(arg1 + 0x4c) + (esi << 2))

return 0
