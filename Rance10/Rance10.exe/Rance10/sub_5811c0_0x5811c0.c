// 函数: sub_5811c0
// 地址: 0x5811c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int128_t* eax
int32_t ecx
eax, ecx = sub_4195a0(arg2)
int32_t var_18_1 = ecx
int32_t var_1c = arg2
int32_t var_20 = ecx
sub_581240(eax, arg1[1], *arg1, eax)
void* ebp = *arg1
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x4ec4ec4f, arg1[1] - ebp)
int32_t edx_2 = edx_1 s>> 4

if (ebp != 0)
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x4ec4ec4f, arg1[2] - ebp)
    int32_t edx_4 = edx_3 s>> 4
    sub_403160(ebp, (edx_4 u>> 0x1f) + edx_4, 0x34)

arg1[2] = arg2 * 0x34 + eax
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x34 + eax
arg1[1] = result
*arg1 = eax
return result
