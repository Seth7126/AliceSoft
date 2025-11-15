// 函数: sub_416c30
// 地址: 0x416c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
char* result
int32_t edx
edx:result = muls.dp.d(0x84210843, esi_1)
int32_t ecx_2 = esi_1 s/ 0x7c

if (ecx_2 u> arg2)
    void* ebx_3 = (arg2 - ecx_2) * 0x7c + edi
    void* esi_2 = ebx_3
    
    if (ebx_3 != edi)
        do
            result = sub_40ad50(esi_2)
            esi_2 += 0x7c
        while (esi_2 != edi)
    
    arg1[1] = ebx_3
    return result

if (ecx_2 u< arg2)
    sub_417160(arg1, arg2 - ecx_2)
    int32_t* ecx_5 = arg1[1]
    int32_t var_14_2 = arg2
    int32_t* var_18_1 = ecx_5
    sub_417d30(ecx_5, arg2 - (ecx_5 - *arg1) s/ 0x7c)
    result = (arg2 - (arg1[1] - *arg1) s/ 0x7c) * 0x7c
    arg1[1] = &result[arg1[1]]

return result
