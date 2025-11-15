// 函数: sub_593140
// 地址: 0x593140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* eax
int32_t ecx
eax, ecx = sub_417580(arg2)
int32_t var_14_1 = ecx
int32_t var_18 = arg2
int32_t var_1c = ecx
sub_568a20(eax, arg1[1], *arg1, eax)
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t eax_2 = *arg1
int32_t edx_2 = edx_1 s>> 2

if (eax_2 != 0)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = muls.dp.d(0x2aaaaaab, arg1[2] - eax_2)
    int32_t edx_4 = edx_3 s>> 2
    sub_403160(*arg1, (edx_4 u>> 0x1f) + edx_4, 0x18)

arg1[2] = eax + arg2 * 0x18
void* result = eax + ((edx_2 u>> 0x1f) + edx_2) * 0x18
arg1[1] = result
*arg1 = eax
return result
