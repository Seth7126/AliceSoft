// 函数: sub_43f210
// 地址: 0x43f210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *arg1
int32_t* eax = sub_43f3f0(edi, *(edi + 4), arg2)
int32_t eax_1 = arg1[1]

if (0x71c71c6 - eax_1 u< 1)
    sub_69a551("list<T> too long")
    noreturn

arg1[1] = eax_1 + 1
*(edi + 4) = eax
int32_t** result = eax[1]
*result = eax
return result
