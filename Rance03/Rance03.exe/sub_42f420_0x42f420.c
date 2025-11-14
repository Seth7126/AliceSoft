// 函数: sub_42f420
// 地址: 0x42f420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (sub_42f510(arg1, arg2) != 0)
    if (arg2 != 0)
        __builtin_memset(*arg1, 0, arg2 << 2)
    
    arg1[1] += arg2 << 2

return arg1
