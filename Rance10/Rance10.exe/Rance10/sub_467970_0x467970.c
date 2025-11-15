// 函数: sub_467970
// 地址: 0x467970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return arg1

if (arg1 u> 0x4924924)
    sub_6d08ed()
    noreturn

int32_t eax_3 = arg1 * 0x38

if (eax_3 u< 0x1000)
    return sub_6e810c(eax_3)

if (eax_3 + 0x23 u<= eax_3)
    sub_6d08ed()
    noreturn

int32_t eax_4 = sub_6e810c(eax_3 + 0x23)
void* ecx_2 = (eax_4 + 0x23) & 0xffffffe0
*(ecx_2 - 4) = eax_4
return ecx_2
