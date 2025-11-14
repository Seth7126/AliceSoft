// 函数: sub_5d5dc0
// 地址: 0x5d5dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if (*(arg1 + 0x3c) == 0)
    var_4 = 0
    sub_412de0(arg1 + 8, &var_4)
    return ((*(arg1 + 0xc) - *(arg1 + 8)) s>> 2) - 1

int32_t result = *(*(arg1 + 0x38) + (*(arg1 + 0x3c) << 2) - 4)
*(arg1 + 0x3c) -= 1

if (*(*(arg1 + 8) + (result << 2)) == 0)
    return result

sub_64b530(0x6ea8d8)
return 0xffffffff
