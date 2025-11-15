// 函数: sub_650be0
// 地址: 0x650be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_64fd30(arg1, 0xee)
sub_64fda0(arg1, 0xe)
int32_t* ecx_1 = arg1[6]
**ecx_1 = 0x41
*ecx_1 += 1
int32_t temp0 = ecx_1[1]
ecx_1[1] -= 1

if (temp0 == 1 && ecx_1[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_2 = arg1[6]
**ecx_2 = 0x64
*ecx_2 += 1
int32_t temp1 = ecx_2[1]
ecx_2[1] -= 1

if (temp1 == 1 && ecx_2[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_3 = arg1[6]
**ecx_3 = 0x6f
*ecx_3 += 1
int32_t temp2 = ecx_3[1]
ecx_3[1] -= 1

if (temp2 == 1 && ecx_3[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_4 = arg1[6]
**ecx_4 = 0x62
*ecx_4 += 1
int32_t temp3 = ecx_4[1]
ecx_4[1] -= 1

if (temp3 == 1 && ecx_4[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_5 = arg1[6]
**ecx_5 = 0x65
*ecx_5 += 1
int32_t temp4 = ecx_5[1]
ecx_5[1] -= 1

if (temp4 == 1 && ecx_5[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

sub_64fda0(arg1, 0x64)
sub_64fda0(arg1, 0)
sub_64fda0(arg1, 0)
int32_t eax_30 = arg1[0x14]
int32_t* ecx_9 = arg1[6]
char* result

if (eax_30 == 3)
    result = *ecx_9
    *result = 1
else
    result = *ecx_9
    
    if (eax_30 == 5)
        *result = 2
    else
        *result = 0

*ecx_9 += 1
int32_t temp7 = ecx_9[1]
ecx_9[1] -= 1

if (temp7 == 1)
    result = ecx_9[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
