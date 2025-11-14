// 函数: sub_4856c0
// 地址: 0x4856c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 0x14)

if (*result == 0)
    for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
        result = (***i)(sub_4856b0(arg1, 0))

return result
