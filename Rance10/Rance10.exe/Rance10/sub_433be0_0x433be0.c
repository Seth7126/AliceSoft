// 函数: sub_433be0
// 地址: 0x433be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *arg1
int32_t* eax = sub_433d10(edi, *(edi + 4), arg2)
int32_t eax_1 = arg1[1]

if (0x5d1745c - eax_1 u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[1] = eax_1 + 1
*(edi + 4) = eax
int32_t** result = eax[1]
*result = eax
return result
