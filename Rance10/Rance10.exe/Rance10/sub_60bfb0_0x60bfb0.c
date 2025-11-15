// 函数: sub_60bfb0
// 地址: 0x60bfb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
char* result
int32_t edx_2
edx_2:result = muls.dp.d(0x4bda12f7, edi - *arg1)
int32_t edx_3 = edx_2 s>> 5
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    void* ebx_3 = (arg2 - ecx_2) * 0x6c + edi
    void* esi_1 = ebx_3
    
    if (ebx_3 != edi)
        do
            result = sub_60e680(esi_1)
            esi_1 += 0x6c
        while (esi_1 != edi)
    
    arg1[1] = ebx_3
    return result

if (ecx_2 u< arg2)
    int32_t var_14_2 = arg2
    int32_t var_18_1 = sub_60c8e0(arg1, arg2 - ecx_2)
    int32_t eax_2
    int32_t edx_4
    edx_4:eax_2 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 5
    sub_60d7b0(arg1[1], arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_3
    int32_t edx_8
    edx_8:eax_3 = muls.dp.d(0x4bda12f7, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 5
    result = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0x6c
    arg1[1] = &result[arg1[1]]

return result
