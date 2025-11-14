// 函数: sub_5d4e30
// 地址: 0x5d4e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s< 0)
    int32_t eax
    eax.b = 0
    return eax

switch (*(arg1 + 0x3c) - 0x10)
    case 0, 1, 8, 9
        for (int32_t i = (*(arg1 + 0xc) u>> 2) - 1; i s>= arg2; i -= 1)
            int32_t eax_3
            
            if (*(arg1 + 0xc) != 0)
                eax_3 = *(arg1 + 8)
            else
                eax_3 = 0
            
            if (sub_5d5e80(*(arg1 + 0x1c), *(eax_3 + (i << 2))).b == 0)
                goto label_5d4eaa

if (arg2 s> 0)
    return sub_64aeb0(arg1 + 4, arg2 << 2) != 0

label_5d4eaa:
uint32_t eax_2
eax_2.b = 0
return eax_2
