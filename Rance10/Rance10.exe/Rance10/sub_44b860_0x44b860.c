// 函数: sub_44b860
// 地址: 0x44b860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = **arg1
int32_t* eax_1 = sub_44b960(edi, *(edi + 4), arg2)
int32_t eax_2 = arg1[1]

if (0x71c71c6 - eax_2 u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[1] = eax_2 + 1
*(edi + 4) = eax_1
int32_t** result = eax_1[1]
*result = eax_1
return result
