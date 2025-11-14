// 函数: sub_4859e0
// 地址: 0x4859e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x14)

if (*(result + 0x28) == 0)
    for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
        result = (*(**i + 0x28))(sub_4856b0(arg1, arg3), arg2)

return result
