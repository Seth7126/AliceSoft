// 函数: sub_608ff0
// 地址: 0x608ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
char* result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, edi - *arg1)
int32_t edx_3 = edx_2 s>> 3
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    void* ebx_4 = (arg2 - ecx_2) * 0x30 + edi
    void* esi_1 = ebx_4
    
    if (ebx_4 != edi)
        do
            result = sub_609410(esi_1)
            esi_1 += 0x30
        while (esi_1 != edi)
    
    arg1[1] = ebx_4
    return result

if (ecx_2 u< arg2)
    int32_t var_14_2 = arg2
    int32_t var_18_1 = sub_609110(arg1, arg2 - ecx_2)
    int32_t eax_2
    int32_t edx_4
    edx_4:eax_2 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 3
    sub_6092d0(arg1[1], arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_3
    int32_t edx_8
    edx_8:eax_3 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 3
    result = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x30
    arg1[1] = &result[arg1[1]]

return result
