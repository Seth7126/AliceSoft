// 函数: sub_56e2d0
// 地址: 0x56e2d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x3ffffff)
    sub_6d0927("vector<T> too long")
    noreturn

void* eax_1 = sub_56e3a0(arg2)
*arg1 = eax_1
arg1[1] = eax_1
eax_1.b = 1
arg1[2] = (arg2 << 6) + *arg1
return eax_1
