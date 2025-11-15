// 函数: sub_638d90
// 地址: 0x638d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x7fffffff)
    sub_6d0927("vector<T> too long")
    noreturn

void* eax_1 = sub_437ce0(arg2)
*arg1 = eax_1
arg1[1] = eax_1
arg1[2] = *arg1 + (arg2 << 1)
int32_t eax_3
eax_3.b = 1
return eax_3
