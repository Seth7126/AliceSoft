// 函数: sub_626f00
// 地址: 0x626f00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_627860(arg1 - 0x20, arg2) == 0 || *(arg1 + 0x14) == 0)
    return 0

int32_t eax_2

if (*(arg1 - 0xc) != 0)
    eax_2 = *(arg1 - 0x10)
else
    eax_2 = 0

int32_t eax_3 = sub_622840(*(arg1 + 4), *(eax_2 + (arg2 << 2)))
int32_t eax_4 = neg.d(eax_3)
return sbb.d(eax_4, eax_4, eax_3 != 0) & (eax_3 + 0x20)
