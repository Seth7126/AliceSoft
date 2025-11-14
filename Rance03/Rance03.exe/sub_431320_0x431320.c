// 函数: sub_431320
// 地址: 0x431320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HGDIOBJ ho = *(arg1 + 0xd4)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0xd4) = 0

HGDIOBJ ho_1 = *(arg1 + 0xd8)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0xd8) = 0

HGDIOBJ ho_2 = *(arg1 + 0xdc)

if (ho_2 != 0)
    DeleteObject(ho_2)
    *(arg1 + 0xdc) = 0

int32_t var_c_4 = arg4
int32_t var_10 = arg3
int32_t var_14 = arg2
sub_42bee0(arg1)
return 0
