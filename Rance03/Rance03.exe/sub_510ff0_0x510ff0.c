// 函数: sub_510ff0
// 地址: 0x510ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x1c) == 0)
    return arg2

if ((*(**(*(arg1 + 0x28) + (arg2 << 2)) + 0x3c))() != 0)
    return arg2

if (arg2 == 3 && (*(**(*(arg1 + 0x28) + 8) + 0x3c))() != 0)
    return arg2 - 1

return 1
