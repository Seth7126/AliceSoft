// 函数: sub_60bed0
// 地址: 0x60bed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x38

if (ecx_2 u> arg2)
    char* eax_2 = (arg2 - ecx_2) * 7
    int32_t* ebx_2 = edi + (eax_2 << 3)
    int32_t* esi_2 = ebx_2
    
    if (ebx_2 != edi)
        do
            eax_2 = sub_60e600(esi_2)
            esi_2 = &esi_2[0xe]
        while (esi_2 != edi)
    
    arg1[1] = ebx_2
    return eax_2

if (ecx_2 u< arg2)
    sub_60c7e0(arg1, arg2 - ecx_2)
    void* ecx_5 = arg1[1]
    int32_t var_14_2 = arg2
    void* var_18_1 = ecx_5
    sub_60d740(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x38)
    eax = (arg2 - (arg1[1] - *arg1) s/ 0x38) * 0x38
    arg1[1] += eax

return eax
