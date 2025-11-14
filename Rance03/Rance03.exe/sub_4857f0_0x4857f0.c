// 函数: sub_4857f0
// 地址: 0x4857f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x14)

if (*(result + 0x10) == 0)
    for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
        result = (*(**i + 0x10))(sub_4856b0(arg1, arg4), arg2, arg3)

return result
