// 函数: sub_510cb0
// 地址: 0x510cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg2

if (i s< 0 || arg1[1] s<= i)
    int32_t eax
    eax.b = 0
    return eax

void* esi_1 = **arg1
arg2 = esi_1
bool cond:0 = i s>= 0

if (i s> 0)
    do
        sub_429080(&arg2)
        i -= 1
        cond:0 = i s>= 0
    while (i s> 0)
    
    esi_1 = arg2

if (not(cond:0))
    int32_t i_2 = neg.d(i)
    int32_t i_1
    
    do
        sub_429da0(&arg2)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    esi_1 = arg2

if (arg3 != esi_1 + 0x10)
    sub_403590(arg3, esi_1 + 0x10, 0, 0xffffffff)

*arg4 = *(esi_1 + 0x28)
int32_t* eax_2
eax_2.b = 1
return eax_2
