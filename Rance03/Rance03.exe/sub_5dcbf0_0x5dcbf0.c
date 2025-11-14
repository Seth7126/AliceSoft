// 函数: sub_5dcbf0
// 地址: 0x5dcbf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx

if (arg2 s>= 0)
    ecx = *(arg1 + 4)

if (arg2 s< 0 || arg2 s>= *(ecx + 0xc) u>> 2)
    sub_64b530(0x6eaa50)
else if (*(ecx + 0x38) == 0 && *(ecx + 0x3c) == 0xf && arg2 u< *(ecx + 0xc) u>> 2)
    if (*(ecx + 0xc) != 0)
        *(*(ecx + 8) + (arg2 << 2)) = arg3
        int32_t eax_5
        eax_5.b = 1
        return eax_5
    
    *(arg2 << 2) = arg3
    int32_t eax_4
    eax_4.b = 1
    return eax_4

uint32_t eax_2
eax_2.b = 0
return eax_2
