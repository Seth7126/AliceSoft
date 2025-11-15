// 函数: sub_629920
// 地址: 0x629920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_629c10(arg1 - 0x20, arg2) == 0 || *(*(*(arg1 + 0x18) + 0x2c) + arg2 * 0x70 + 0x34) != 0xc)
    return 0

int32_t eax_3

if (*(arg1 - 0xc) != 0)
    eax_3 = *(arg1 - 0x10)
else
    eax_3 = 0

int32_t eax_4 = sub_6227b0(*(arg1 + 4), *(eax_3 + (arg2 << 2)))
int32_t eax_5 = neg.d(eax_4)
return sbb.d(eax_5, eax_5, eax_4 != 0) & (eax_4 + 0x20)
