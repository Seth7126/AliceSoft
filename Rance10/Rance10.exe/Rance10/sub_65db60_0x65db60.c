// 函数: sub_65db60
// 地址: 0x65db60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *arg5
void* esi_1 = *(arg1 + 0x1b8)
char* result
int32_t edi

if (*(esi_1 + 0x24) == 0)
    int32_t edx_1 = 2
    
    if (*(esi_1 + 0x2c) u< 2)
        edx_1 = *(esi_1 + 0x2c)
    
    edi = arg6 - ecx
    int32_t* ecx_1 = arg4 + (ecx << 2)
    
    if (edx_1 u<= edi)
        edi = edx_1
    
    int32_t var_8 = *ecx_1
    
    if (edi u<= 1)
        int32_t var_4_2 = *(esi_1 + 0x20)
        *(esi_1 + 0x24) = 1
    else
        int32_t var_4_1 = ecx_1[1]
    
    result = (*(esi_1 + 0xc))(arg1, arg2, *arg3, &var_8)
else
    result = sub_700660(*(arg4 + (ecx << 2)), *(esi_1 + 0x20), *(esi_1 + 0x28))
    *(esi_1 + 0x24) = 0
    edi = 1

*arg5 += edi
*(esi_1 + 0x2c) -= edi

if (*(esi_1 + 0x24) == 0)
    *arg3 += 1

return result
