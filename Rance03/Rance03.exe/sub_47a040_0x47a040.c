// 函数: sub_47a040
// 地址: 0x47a040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return 0

for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
    if ((*(**i + 0xa0))(arg2, arg3, arg4) != 0)
        return 1

return 0
