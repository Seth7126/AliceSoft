// 函数: sub_449390
// 地址: 0x449390
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = **arg1
int32_t* eax_1 = sub_4495d0(edi, *(edi + 4), arg2)
int32_t eax_2 = arg1[1]

if (0x71c71c6 - eax_2 u< 1)
    sub_69a551("list<T> too long")
    noreturn

arg1[1] = eax_2 + 1
*(edi + 4) = eax_1
int32_t** result = eax_1[1]
*result = eax_1
return result
