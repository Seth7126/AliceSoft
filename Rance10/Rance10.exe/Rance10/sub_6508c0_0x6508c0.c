// 函数: sub_6508c0
// 地址: 0x6508c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_64fd30(arg1, 0xda)
sub_64fda0(arg1, 6)
int32_t* ecx_1 = arg1[6]
**ecx_1 = 0
*ecx_1 += 1
int32_t temp0 = ecx_1[1]
ecx_1[1] -= 1

if (temp0 == 1 && ecx_1[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_2 = arg1[6]
**ecx_2 = 0
*ecx_2 += 1
int32_t temp1 = ecx_2[1]
ecx_2[1] -= 1

if (temp1 == 1 && ecx_2[3](arg1).b == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

char* eax_6
eax_6.b = arg1[0x5b].b
int32_t* edi = arg1[6]
**edi = eax_6.b * eax_6.b - 1
*edi += 1
int32_t temp2 = edi[1]
edi[1] -= 1

if (temp2 == 1 && edi[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_4 = arg1[6]
char* result = *ecx_4
*result = 0
*ecx_4 += 1
int32_t temp3 = ecx_4[1]
ecx_4[1] -= 1

if (temp3 == 1)
    result = ecx_4[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
