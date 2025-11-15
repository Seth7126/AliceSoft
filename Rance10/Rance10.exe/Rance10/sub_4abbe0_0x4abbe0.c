// 函数: sub_4abbe0
// 地址: 0x4abbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0 || (*(arg1 + 8) - *(arg1 + 4)) s>> 4 s<= arg2)
    return 0

if (arg3 s>= 0 && sub_4abb40(arg1, arg2) s> arg3)
    if (arg4 s>= 0 && sub_4abb80(arg1, arg2, arg3) s> arg4)
        return *(*(*(*(arg1 + 4) + arg2 * 0x10) + arg3 * 0xc) + (arg4 << 2))

return 0
