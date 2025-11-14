// 函数: sub_472d60
// 地址: 0x472d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 u> 0x3f)
    return nullptr

int32_t* result = arg1 + ((arg2 * 9 + 4) << 2)

if (*(arg1 + ((arg2 * 9 + 4) << 2) + 0x14) u< 0x10)
    return result

return *result
