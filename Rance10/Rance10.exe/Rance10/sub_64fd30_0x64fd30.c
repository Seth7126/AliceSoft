// 函数: sub_64fd30
// 地址: 0x64fd30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = arg1[6]
**ecx = 0xff
*ecx += 1
int32_t temp0 = ecx[1]
ecx[1] -= 1

if (temp0 == 1 && ecx[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_1 = arg1[6]
char* result = *ecx_1
*result = arg2
*ecx_1 += 1
int32_t temp1 = ecx_1[1]
ecx_1[1] -= 1

if (temp1 == 1)
    result = ecx_1[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
