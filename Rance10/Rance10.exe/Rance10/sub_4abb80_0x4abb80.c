// 函数: sub_4abb80
// 地址: 0x4abb80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 s< 0 || (*(arg1 + 8) - *(arg1 + 4)) s>> 4 s<= arg2)
    return 0

if (arg3 s>= 0 && sub_4abb40(arg1, arg2) s> arg3)
    int32_t ecx = arg3 * 3
    int32_t eax_6 = *(*(arg1 + 4) + arg2 * 0x10)
    return (*(eax_6 + (ecx << 2) + 4) - *(eax_6 + (ecx << 2))) s>> 2

return 0
