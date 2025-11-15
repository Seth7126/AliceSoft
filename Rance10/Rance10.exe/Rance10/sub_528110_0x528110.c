// 函数: sub_528110
// 地址: 0x528110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x10)
*(arg1 + 4) = sub_4ed8c0(edi)
void* eax_1 = *(edi + 0x31c)
float var_4 = 0f
float var_8 = 0f
void* eax_2

if (eax_1 != 0)
    eax_2 = *(eax_1 + 8)
else
    eax_2 = data_7fcba0

sub_528b80(edi + 0x268, &var_4, &var_8, (zx.o(0)).d, (zx.o(0)).d, edi + 0x268, eax_2)
long double x87_r0
long double x87_r1
var_8 = sub_63ce00(var_8, x87_r0, x87_r1)
long double x87_r2
*(arg1 + 8) = int.d(sub_63ce00(var_4, x87_r1, x87_r2))
int32_t result = int.d(fconvert.t(var_8))
*(arg1 + 0xc) = result
return result
