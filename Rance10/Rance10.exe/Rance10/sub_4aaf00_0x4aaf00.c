// 函数: sub_4aaf00
// 地址: 0x4aaf00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* eax
int32_t ecx
eax, ecx = sub_417520(arg2)
int32_t var_14_1 = ecx
int32_t var_18 = arg2
int32_t var_1c = ecx
sub_4aaf90(eax, arg1[1], *arg1, eax)
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x66666667, arg1[1] - *arg1)
int32_t eax_2 = *arg1
int32_t edx_2 = edx_1 s>> 4

if (eax_2 != 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = muls.dp.d(0x66666667, arg1[2] - eax_2)
    int32_t edx_4 = edx_3 s>> 4
    sub_403160(*arg1, (edx_4 u>> 0x1f) + edx_4, 0x28)

arg1[2] = eax + arg2 * 0x28
void* result = eax + ((edx_2 u>> 0x1f) + edx_2) * 0x28
arg1[1] = result
*arg1 = eax
return result
