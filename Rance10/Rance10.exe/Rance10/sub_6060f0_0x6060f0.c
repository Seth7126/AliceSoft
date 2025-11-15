// 函数: sub_6060f0
// 地址: 0x6060f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x1c

if (ecx_2 u> arg2)
    int32_t eax_2 = (arg2 - ecx_2) * 7
    void* ebx_2 = edi + (eax_2 << 2)
    void* esi_2 = ebx_2
    
    if (ebx_2 != edi)
        do
            eax_2 = sub_606fa0(esi_2)
            esi_2 += 0x1c
        while (esi_2 != edi)
    
    arg1[1] = ebx_2
    return eax_2

if (ecx_2 u< arg2)
    sub_606590(arg1, arg2 - ecx_2)
    void* ecx_5 = arg1[1]
    int32_t var_14_2 = arg2
    void* var_18_1 = ecx_5
    sub_606c40(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x1c)
    eax = (arg2 - (arg1[1] - *arg1) s/ 0x1c) * 0x1c
    arg1[1] += eax

return eax
