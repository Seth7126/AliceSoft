// 函数: sub_4039d0
// 地址: 0x4039d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

if (arg1 u< 0x1000)
    return sub_6e810c(arg1)

if (arg1 + 0x23 u<= arg1)
    sub_6d08ed()
    noreturn

int32_t eax_1 = sub_6e810c(arg1 + 0x23)
void* result = (eax_1 + 0x23) & 0xffffffe0
*(result - 4) = eax_1
return result
