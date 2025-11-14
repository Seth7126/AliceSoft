// 函数: sub_485930
// 地址: 0x485930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x14)

if (*(result + 0x20) == 0)
    for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
        result = (*(**i + 0x20))(sub_4856b0(arg1, arg6), arg2, arg3, arg4, arg5)

return result
