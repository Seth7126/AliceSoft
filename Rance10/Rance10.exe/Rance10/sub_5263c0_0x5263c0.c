// 函数: sub_5263c0
// 地址: 0x5263c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *arg1
int32_t* eax = sub_526400(edi, edi[1], arg2)
int32_t eax_1 = arg1[1]

if (0xccccccb - eax_1 u< 1)
    sub_6d0927("list<T> too long")
    noreturn

arg1[1] = eax_1 + 1
edi[1] = eax
int32_t** result = eax[1]
*result = eax
return result
