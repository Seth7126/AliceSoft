// 函数: sub_5fc5b0
// 地址: 0x5fc5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, edi - *arg1)
int32_t edx_3 = edx_2 s>> 1
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> arg2)
    int32_t eax_1 = (arg2 - ecx_2) * 3
    int32_t* ebx_2 = edi + (eax_1 << 2)
    int32_t* esi_1 = ebx_2
    
    if (ebx_2 != edi)
        do
            eax_1 = sub_5fc940(esi_1)
            esi_1 = &esi_1[3]
        while (esi_1 != edi)
    
    arg1[1] = ebx_2
    return eax_1

if (ecx_2 u< arg2)
    int32_t var_14_2 = arg2
    int32_t var_18_1 = sub_5fc8b0(arg1, arg2 - ecx_2)
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 1
    sub_4b10e0(arg1[1], arg2 - ((edx_5 u>> 0x1f) + edx_5))
    int32_t eax_5
    int32_t edx_8
    edx_8:eax_5 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 1
    eax = (arg2 - ((edx_9 u>> 0x1f) + edx_9)) * 0xc
    arg1[1] += eax

return eax
