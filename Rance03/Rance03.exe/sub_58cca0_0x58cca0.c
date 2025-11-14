// 函数: sub_58cca0
// 地址: 0x58cca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0xf4)

if (ecx == 0)
    return float.t(0)

if (arg2 s>= 0 && arg2 s< (*(ecx + 0x14) - *(ecx + 0x10)) s>> 2)
    return fconvert.t(*(*(ecx + 0x10) + (arg2 << 2)))

return fconvert.t(0f)
