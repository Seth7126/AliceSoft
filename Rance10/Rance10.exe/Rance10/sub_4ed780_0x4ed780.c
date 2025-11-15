// 函数: sub_4ed780
// 地址: 0x4ed780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg3 = 0
*arg2 = 0
void* eax = *(arg1 + 0x31c)
void* eax_1

if (eax != 0)
    eax_1 = *(eax + 8)
else
    eax_1 = data_7fcba0

sub_528b80(arg1 + 0x268, arg3, arg2, (zx.o(0)).d, (zx.o(0)).d, arg1 + 0x268, eax_1)
long double x87_r0
long double x87_r1
*arg2 = sub_63ce00(*arg2, x87_r0, x87_r1)
int32_t result
int32_t xmm0_4
long double x87_r2
result, xmm0_4 = sub_63ce00(*arg3, x87_r1, x87_r2)
*arg3 = xmm0_4
return result
