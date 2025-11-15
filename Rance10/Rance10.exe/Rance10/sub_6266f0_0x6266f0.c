// 函数: sub_6266f0
// 地址: 0x6266f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
char* result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)
int32_t ecx_2 = esi_1 s/ 0x70

if (ecx_2 u> arg2)
    int32_t* ebx_3 = (arg2 - ecx_2) * 0x70 + edi
    int32_t* esi_2 = ebx_3
    
    if (ebx_3 != edi)
        do
            result = sub_6014c0(esi_2)
            esi_2 = &esi_2[0x1c]
        while (esi_2 != edi)
    
    arg1[1] = ebx_3
    return result

if (ecx_2 u< arg2)
    sub_6267a0(arg1, arg2 - ecx_2)
    char* ecx_5 = arg1[1]
    int32_t var_14_2 = arg2
    char* var_18_1 = ecx_5
    sub_626940(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x70)
    result = (arg2 - (arg1[1] - *arg1) s/ 0x70) * 0x70
    arg1[1] = &result[arg1[1]]

return result
