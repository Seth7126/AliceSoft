// 函数: sub_4bb530
// 地址: 0x4bb530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax
int32_t ecx
eax, ecx = sub_4bb5c0(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_4bb640(eax, arg1[1], *arg1, eax)
void* ebp = *arg1
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x51eb851f, arg1[1] - ebp)
int32_t edx_2 = edx_1 s>> 5

if (ebp != 0)
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x51eb851f, arg1[2] - ebp)
    int32_t edx_4 = edx_3 s>> 5
    sub_403160(ebp, (edx_4 u>> 0x1f) + edx_4, 0x64)

arg1[2] = arg2 * 0x64 + eax
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x64 + eax
arg1[1] = result
*arg1 = eax
return result
