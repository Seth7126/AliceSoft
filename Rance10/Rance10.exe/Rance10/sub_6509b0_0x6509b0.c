// 函数: sub_6509b0
// 地址: 0x6509b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_64fd30(arg1, 0xe0)
sub_64fda0(arg1, 0x10)
int32_t* ecx_1 = arg1[6]
**ecx_1 = 0x4a
*ecx_1 += 1
int32_t temp0 = ecx_1[1]
ecx_1[1] -= 1

if (temp0 == 1 && ecx_1[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_2 = arg1[6]
**ecx_2 = 0x46
*ecx_2 += 1
int32_t temp1 = ecx_2[1]
ecx_2[1] -= 1

if (temp1 == 1 && ecx_2[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_3 = arg1[6]
**ecx_3 = 0x49
*ecx_3 += 1
int32_t temp2 = ecx_3[1]
ecx_3[1] -= 1

if (temp2 == 1 && ecx_3[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_4 = arg1[6]
**ecx_4 = 0x46
*ecx_4 += 1
int32_t temp3 = ecx_4[1]
ecx_4[1] -= 1

if (temp3 == 1 && ecx_4[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_5 = arg1[6]
**ecx_5 = 0
*ecx_5 += 1
int32_t temp4 = ecx_5[1]
ecx_5[1] -= 1

if (temp4 == 1 && ecx_5[3](arg1).b == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* edx = arg1[6]
char* eax_24
eax_24.b = *(arg1 + 0xe9)
**edx = eax_24.b
*edx += 1
int32_t temp5 = edx[1]
edx[1] -= 1

if (temp5 == 1 && edx[3](arg1).b == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* edx_1 = arg1[6]
eax_24.b = *(arg1 + 0xea)
**edx_1 = eax_24.b
*edx_1 += 1
int32_t temp6 = edx_1[1]
edx_1[1] -= 1

if (temp6 == 1 && edx_1[3](arg1).b == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

char** edx_2 = arg1[6]
eax_24.b = *(arg1 + 0xeb)
**edx_2 = eax_24.b
*edx_2 = &(*edx_2)[1]
int32_t temp7 = edx_2[1]
edx_2[1] = &edx_2[1][0xffffffff]

if (temp7 == 1 && edx_2[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

sub_64fda0(arg1, zx.d(arg1[0x3b].w))
sub_64fda0(arg1, zx.d(*(arg1 + 0xee)))
int32_t* ecx_11 = arg1[6]
**ecx_11 = 0
*ecx_11 += 1
int32_t temp8 = ecx_11[1]
ecx_11[1] -= 1

if (temp8 == 1 && ecx_11[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_12 = arg1[6]
char* result = *ecx_12
*result = 0
*ecx_12 += 1
int32_t temp9 = ecx_12[1]
ecx_12[1] -= 1

if (temp9 == 1)
    result = ecx_12[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
