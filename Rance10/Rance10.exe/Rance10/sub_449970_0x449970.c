// 函数: sub_449970
// 地址: 0x449970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax = sub_4365c0(arg2)

if (eax s< 0)
    if ((eax & 0x40000000) == 0)
        sub_449bc0(arg1, eax)
        arg2[1] += 5
        return 5
    
    int32_t eax_1 = sub_449b50(arg1, eax)
    arg2[1] += eax_1
    return eax_1

if ((eax & 0x40000000) != 0)
    int32_t eax_2 = sub_449c40(arg1, eax)
    arg2[1] += eax_2
    return eax_2

if ((eax & 0x20000000) == 0)
    *arg1 = 0x3c
    arg2[1] += 3
    return 3

int32_t eax_3 = eax & 0x10000000
int32_t eax_4 = neg.d(eax_3)
*arg1 = (sbb.d(eax_4, eax_4, eax_3 != 0) & 4) + 4
arg2[1] += 4
return 4
