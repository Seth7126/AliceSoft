// 函数: sub_431990
// 地址: 0x431990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, *(arg1 + 0x24) - *(arg1 + 0x20))
int32_t edx_3 = edx_2 s>> 2
uint32_t ecx_1 = edx_3 u>> 0x1f

if (ecx_1 == neg.d(edx_3))
    sub_403360(arg2, 0x75cd6b)
    return arg2

if (ecx_1 + edx_3 s<= arg3)
    sub_403360(arg2, 0x75cd66)
    return arg2

if (arg3 s< 0)
    sub_403360(arg2, 0x75cd67)
    return arg2

*(arg1 + 0x20)
sub_430e50(arg2)
return arg2
