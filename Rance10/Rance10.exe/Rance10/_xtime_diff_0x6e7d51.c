// 函数: _xtime_diff
// 地址: 0x6e7d51
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = *arg2
void* edi_1 = &arg1[1]
void* esi_1 = &arg2[1]
*edi_1 = *esi_1
void* edi_2 = edi_1 + 4
void* esi_2 = esi_1 + 4
*edi_2 = *esi_2
*(edi_2 + 4) = *(esi_2 + 4)
int32_t eax = arg1[2]

if (eax s< 0)
    int32_t temp1_1
    
    do
        int32_t temp0_1 = *arg1
        *arg1 -= 1
        arg1[1] = adc.d(arg1[1], 0xffffffff, temp0_1 - 1 u< temp0_1)
        temp1_1 = eax
        eax += 0x3b9aca00
    while (temp1_1 + 0x3b9aca00 s< 0)
    arg1[2] = eax

int32_t i = arg1[2]

if (i s>= 0x3b9aca00)
    do
        int32_t temp2_1 = *arg1
        *arg1 += 1
        arg1[1] = adc.d(arg1[1], 0, temp2_1 u>= 0xffffffff)
        i -= 0x3b9aca00
    while (i s>= 0x3b9aca00)
    
    arg1[2] = i

int32_t edx = arg1[2]
int32_t edx_2

if (edx s>= arg3[2])
    int32_t eax_2 = *arg3
    int32_t temp3_1 = *arg1
    *arg1 -= eax_2
    arg1[1] = sbb.d(arg1[1], arg3[1], temp3_1 u< eax_2)
    edx_2 = edx - arg3[2]
else
    int32_t eax_1 = 0xffffffff - *arg3
    int32_t edi_4 = sbb.d(0xffffffff, arg3[1], 0xffffffff u< *arg3)
    int32_t temp6_1 = *arg1
    *arg1 += eax_1
    arg1[1] = adc.d(arg1[1], edi_4, temp6_1 + eax_1 u< temp6_1)
    edx_2 = edx - arg3[2] + 0x3b9aca00

int32_t eax_4 = *arg1
arg1[2] = edx_2
int32_t temp7 = arg1[1]

if (temp7 s< 0 || (temp7 s<= 0 && eax_4 u< 0))
label_6e7ddf:
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0
else if ((eax_4 | arg1[1]) == 0 && arg1[2] s<= 0)
    goto label_6e7ddf

return arg1
