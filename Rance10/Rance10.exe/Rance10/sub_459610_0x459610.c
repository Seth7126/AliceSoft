// 函数: sub_459610
// 地址: 0x459610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x3333333)
    sub_6d0927("vector<T> too long")
    noreturn

void* eax_1 = sub_457d00(arg2)
*arg1 = eax_1
arg1[1] = eax_1
arg1[2] = arg2 * 0x50 + *arg1
int32_t eax_4
eax_4.b = 1
return eax_4
