// 函数: sub_4567b0
// 地址: 0x4567b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x88888889, esi_1)
int32_t ecx_2 = esi_1 s/ 0x3c

if (ecx_2 u> arg2)
    char* eax_3 = (arg2 - ecx_2) * 0xf
    int32_t* ebx_2 = edi + (eax_3 << 2)
    int32_t* esi_2 = ebx_2
    
    if (ebx_2 != edi)
        do
            eax_3 = sub_458c50(esi_2)
            esi_2 = &esi_2[0xf]
        while (esi_2 != edi)
    
    arg1[1] = ebx_2
    return eax_3

if (ecx_2 u< arg2)
    sub_456c70(arg1, arg2 - ecx_2)
    void* ecx_5 = arg1[1]
    int32_t var_14_2 = arg2
    void* var_18_1 = ecx_5
    sub_458240(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x3c)
    eax = (arg2 - (arg1[1] - *arg1) s/ 0x3c) * 0x3c
    arg1[1] += eax

return eax
