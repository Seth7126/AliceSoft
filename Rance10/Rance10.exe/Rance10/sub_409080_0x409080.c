// 函数: sub_409080
// 地址: 0x409080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return arg1

if (arg1 u> 0x4444444)
    sub_6d08ed()
    noreturn

int32_t eax_4 = arg1 * 0x3c

if (eax_4 u< 0x1000)
    return sub_6e810c(eax_4)

if (eax_4 + 0x23 u<= eax_4)
    sub_6d08ed()
    noreturn

int32_t eax_5 = sub_6e810c(eax_4 + 0x23)
void* ecx_2 = (eax_5 + 0x23) & 0xffffffe0
*(ecx_2 - 4) = eax_5
return ecx_2
