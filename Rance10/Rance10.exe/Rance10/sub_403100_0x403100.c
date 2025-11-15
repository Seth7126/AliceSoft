// 函数: sub_403100
// 地址: 0x403100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

if (divu.dp.d(0:0xffffffff, arg2) u< arg1)
    noreturn sub_6d08ed() __tailcall

int32_t ecx = arg1 * arg2

if (arg3 == 0 || ecx u< 0x1000)
    return sub_6e810c(ecx)

if (ecx + 0x23 u<= ecx)
    noreturn sub_6d08ed() __tailcall

int32_t eax_4 = sub_6e810c(ecx + 0x23)
void* result = (eax_4 + 0x23) & 0xffffffe0
*(result - 4) = eax_4
return result
