// 函数: sub_473300
// 地址: 0x473300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = *arg1
int32_t* eax = sub_441d60(edi, edi[1], arg2)
int32_t eax_1 = arg1[1]

if (0x15555554 - eax_1 u< 1)
    sub_69a551("list<T> too long")
    noreturn

arg1[1] = eax_1 + 1
edi[1] = eax
int32_t** result = eax[1]
*result = eax
return result
