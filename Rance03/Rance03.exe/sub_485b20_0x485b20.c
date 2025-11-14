// 函数: sub_485b20
// 地址: 0x485b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x14)

if (*(result + 0x38) == 0)
    for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
        result = (*(**i + 0x38))(sub_4856b0(arg1, arg3), arg2)

return result
