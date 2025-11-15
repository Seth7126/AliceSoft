// 函数: sub_50f950
// 地址: 0x50f950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = *(arg1 + 0x22c)
*arg3 = 0
*arg2 = 0
void* eax = *(ecx + 0x31c)
void* eax_1

if (eax != 0)
    eax_1 = *(eax + 8)
else
    eax_1 = data_7fcba0

sub_528b80(ecx + 0x268, arg3, arg2, (zx.o(0)).d, (zx.o(0)).d, ecx + 0x268, eax_1)
long double x87_r0
long double x87_r1
*arg2 = sub_63ce00(*arg2, x87_r0, x87_r1)
long double x87_r2
*arg3 = sub_63ce00(*arg3, x87_r1, x87_r2)
*arg2 = sub_50f870(arg1) f+ *arg2
int32_t result
float xmm0_7
result, xmm0_7 = sub_50f8e0(arg1)
*arg3 = xmm0_7 f+ *arg3
return result
