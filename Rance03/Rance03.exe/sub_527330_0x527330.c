// 函数: sub_527330
// 地址: 0x527330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 s>= 0 && arg3 s< (*(arg1 + 8) - *(arg1 + 4)) s/ 0x38)
    int32_t ecx = *(arg1 + 4)
    int32_t edx_5 = arg3 * 7
    int32_t ecx_1 = *(ecx + (edx_5 << 3) + 0x28)
    *arg2 = *(ecx + (edx_5 << 3) + 0x20)
    arg2[1].d = ecx_1
    return arg2

*arg2 = 0
*(arg2 + 4) = 0
arg2[1].d = 0
return arg2
