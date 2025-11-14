// 函数: sub_548780
// 地址: 0x548780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x30) != 0)
    return 1

for (int32_t* i = *(arg1 + 0x34); i != *(arg1 + 0x38); i = &i[1])
    if (*i != 0 && sub_548780() != 0)
        return 1

return 0
