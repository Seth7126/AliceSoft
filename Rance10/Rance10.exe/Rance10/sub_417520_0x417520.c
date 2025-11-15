// 函数: sub_417520
// 地址: 0x417520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

if (arg1 u> 0x6666666)
    sub_6d08ed()
    noreturn

int32_t eax_2 = arg1 * 0x28

if (eax_2 u< 0x1000)
    return sub_6e810c(eax_2)

if (eax_2 + 0x23 u<= eax_2)
    sub_6d08ed()
    noreturn

int32_t eax_3 = sub_6e810c(eax_2 + 0x23)
void* result = (eax_3 + 0x23) & 0xffffffe0
*(result - 4) = eax_3
return result
