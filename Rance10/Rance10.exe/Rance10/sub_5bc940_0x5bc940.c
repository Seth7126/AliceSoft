// 函数: sub_5bc940
// 地址: 0x5bc940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, edi - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t var_14_1 = arg2
    int32_t var_18_1 = ecx_2
    void* esi_1 = edi + (arg2 - ecx_2) * 0x24
    int32_t eax_2 = sub_5bec60(esi_1, edi)
    arg1[1] = esi_1
    return eax_2

if (ecx_2 u< arg2)
    int32_t var_14_3 = arg2
    int32_t var_18_2 = sub_5bcdc0(arg1, arg2 - ecx_2)
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = muls.dp.d(0x38e38e39, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 3
    sub_5beb20(arg1[1], arg2 - ((edx_6 u>> 0x1f) + edx_6))
    int32_t eax_6
    int32_t edx_9
    edx_9:eax_6 = muls.dp.d(0x38e38e39, arg1[1] - *arg1)
    int32_t edx_10 = edx_9 s>> 3
    eax = (arg2 - ((edx_10 u>> 0x1f) + edx_10)) * 0x24
    arg1[1] += eax

return eax
