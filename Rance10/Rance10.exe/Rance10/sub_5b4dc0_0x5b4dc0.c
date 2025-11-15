// 函数: sub_5b4dc0
// 地址: 0x5b4dc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
void* eax
int32_t ecx
eax, ecx = sub_5b4f40(arg2)
int32_t var_18_1 = ecx
int32_t var_1c = arg2
int32_t var_20 = ecx
sub_5b55d0(eax, arg1[1], *arg1, eax)
void* ebp = *arg1
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x4bda12f7, arg1[1] - ebp)
int32_t edx_2 = edx_1 s>> 5

if (ebp != 0)
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x4bda12f7, arg1[2] - ebp)
    int32_t edx_4 = edx_3 s>> 5
    sub_403160(ebp, (edx_4 u>> 0x1f) + edx_4, 0x6c)

arg1[2] = arg2 * 0x6c + eax
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x6c + eax
arg1[1] = result
*arg1 = eax
return result
