// 函数: sub_64fda0
// 地址: 0x64fda0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1[6]
**edi = (arg2 s>> 8).b
*edi += 1
int32_t temp0 = edi[1]
edi[1] -= 1

if (temp0 == 1 && edi[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_2 = arg1[6]
char* result = *ecx_2
*result = arg2.b
*ecx_2 += 1
int32_t temp1 = ecx_2[1]
ecx_2[1] -= 1

if (temp1 == 1)
    result = ecx_2[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
