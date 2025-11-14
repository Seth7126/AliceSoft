// 函数: sub_581d60
// 地址: 0x581d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x40) != 0)
    return 1

for (int32_t* i = *(arg1 + 0x48); i != *(arg1 + 0x4c); i = &i[1])
    if (*i != 0 && sub_581d60() != 0)
        return 1

return 0
