// 函数: sub_5de430
// 地址: 0x5de430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx

if (arg2 s>= 0)
    ecx = *(arg1 + 4)

uint32_t eax_1

if (arg2 s< 0 || arg2 s>= *(ecx + 0x30))
    sub_64b530(0x6eabfc)
else
    eax_1 = *(*(ecx + 0x2c) + (arg2 << 2))
    
    if ((eax_1 == 0xa || eax_1 == 0x2f) && arg2 u< *(ecx + 0xc) u>> 2)
        if (*(ecx + 0xc) != 0)
            *(*(ecx + 8) + (arg2 << 2)) = arg3
            int32_t eax_4
            eax_4.b = 1
            return eax_4
        
        *(arg2 << 2) = arg3
        int32_t eax_3
        eax_3.b = 1
        return eax_3

eax_1.b = 0
return eax_1
