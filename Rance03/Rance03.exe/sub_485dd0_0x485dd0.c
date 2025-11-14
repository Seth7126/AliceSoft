// 函数: sub_485dd0
// 地址: 0x485dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x14)

if (*(result + 0x5c) == 0)
    for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
        result = (*(**i + 0x5c))(sub_4856b0(arg1, arg3), arg2)

return result
