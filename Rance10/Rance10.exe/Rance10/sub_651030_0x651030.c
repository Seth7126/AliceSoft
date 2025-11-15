// 函数: sub_651030
// 地址: 0x651030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = sub_64fd30(arg1, 0xd8)
int32_t i = 0
int32_t* ebx = &arg1[0x16]

do
    if (*ebx != 0)
        eax = sub_64fe10(arg1, i)
    
    i += 1
    ebx = &ebx[1]
while (i s< 4)

if (*(arg1 + 0xd1) == 0)
    int32_t i_1 = 0
    void* ebx_1 = &arg1[0x22]
    
    do
        if (*(ebx_1 - 0x10) != 0)
            eax = sub_64ffa0(eax, i_1, arg1, 0)
        
        if (*ebx_1 != 0)
            eax = sub_64ffa0(eax, i_1, arg1, 1)
        
        i_1 += 1
        ebx_1 += 4
    while (i_1 s< 4)

int32_t* ecx_4 = arg1[6]
**ecx_4 = 0xff
*ecx_4 += 1
int32_t temp0 = ecx_4[1]
ecx_4[1] -= 1

if (temp0 == 1 && ecx_4[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_5 = arg1[6]
char* result = *ecx_5
*result = 0xd9
*ecx_5 += 1
int32_t temp1 = ecx_5[1]
ecx_5[1] -= 1

if (temp1 == 1)
    result = ecx_5[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
