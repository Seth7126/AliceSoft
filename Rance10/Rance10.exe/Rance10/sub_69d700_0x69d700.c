// 函数: sub_69d700
// 地址: 0x69d700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (arg4 != 0x20)
    eax.b = 0
    return eax

if (arg2 s<= 0 || arg3 s<= 0)
    eax.b = 0
    return eax

void* eax_2 = ((arg2 << 2) + 0xf) & 0xfffffff0
*(arg1 + 0x18) = eax_2
sub_405950(arg1 + 0x20, eax_2 * arg3 + 0x28)
int32_t eax_6 = *(arg1 + 0x20) + 7
*(arg1 + 0xc) = arg3
*(arg1 + 8) = arg2
*(arg1 + 0x2c) = eax_6 & 0xfffffff8
int32_t eax_7
eax_7.b = 1
*(arg1 + 0x10) = 0x20
*(arg1 + 0x14) = 4
*(arg1 + 0x1c) = 1
return eax_7
