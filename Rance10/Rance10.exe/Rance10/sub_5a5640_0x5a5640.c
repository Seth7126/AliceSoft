// 函数: sub_5a5640
// 地址: 0x5a5640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

if (arg1 u> 0x4da637)
    sub_6d08ed()
    noreturn

int32_t eax_1 = arg1 * 0x34c

if (eax_1 u< 0x1000)
    return sub_6e810c(eax_1)

if (eax_1 + 0x23 u<= eax_1)
    sub_6d08ed()
    noreturn

int32_t eax_2 = sub_6e810c(eax_1 + 0x23)
void* result = (eax_2 + 0x23) & 0xffffffe0
*(result - 4) = eax_2
return result
