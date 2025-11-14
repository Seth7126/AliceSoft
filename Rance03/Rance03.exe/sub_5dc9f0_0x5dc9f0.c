// 函数: sub_5dc9f0
// 地址: 0x5dc9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx

if (arg2 s>= 0)
    ecx = *(arg1 + 4)

if (arg2 s< 0 || arg2 s>= *(ecx + 0xc) u>> 2)
    sub_64b530(0x6eaa50)
else if (*(ecx + 0x38) == 0 && *(ecx + 0x3c) == 0xf && arg2 u< *(ecx + 0xc) u>> 2)
    if (*(ecx + 0xc) != 0)
        return *(ecx + 8) + (arg2 << 2)
    
    return arg2 << 2

return 0
