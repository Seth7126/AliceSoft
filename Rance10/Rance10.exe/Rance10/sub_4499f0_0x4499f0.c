// 函数: sub_4499f0
// 地址: 0x4499f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = sub_4365c0(arg2)

if (eax s>= 0)
    arg2[1] += 1
    *arg1 = 0
    return eax

if ((eax & 0x40000000) == 0)
    *arg1 = 1
    arg2[1] += 2
    return 2

if ((eax & 0x20000000) == 0)
    *arg1 = 2
    arg2[1] += 3
    return 3

if ((eax & 0x10000000) == 0)
    *arg1 = 3
    arg2[1] += 4
    return 4

int32_t eax_1 = sub_449e10(arg1, eax)
arg2[1] += eax_1
return eax_1
