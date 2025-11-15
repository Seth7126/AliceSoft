// 函数: sub_6bb0c0
// 地址: 0x6bb0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *arg3
int32_t eax_2 = esi s>> 1
int32_t esi_1 = esi s>> 2
int32_t ecx = eax_2 << 2
void* ecx_1 = ecx + arg2 - 0x1c
int32_t esi_2 = esi_1 << 2
int32_t* i = arg4 + ((eax_2 + esi_1) << 2)
void* i_2 = i
float* i_4 = i
void* eax_6 = arg3[2] + esi_2

do
    i_4 -= 0x10
    *i_4 = ((*(ecx_1 + 8) f* *(eax_6 + 0xc)) ^ 0x80000000) - *ecx_1 f* *(eax_6 + 8)
    i_4[1] = *ecx_1 f* *(eax_6 + 0xc) - *(ecx_1 + 8) f* *(eax_6 + 8)
    i_4[2] = ((*(ecx_1 + 0x18) f* *(eax_6 + 4)) ^ 0x80000000) - *(ecx_1 + 0x10) f* *eax_6
    float xmm0_7 = *(ecx_1 + 0x18)
    float xmm1_13 = *(eax_6 + 4) f* *(ecx_1 + 0x10)
    ecx_1 -= 0x20
    float xmm0_8 = xmm0_7 f* *eax_6
    eax_6 += 0x10
    i_4[3] = xmm1_13 - xmm0_8
while (ecx_1 u>= arg2)

float* i_5 = i
void* eax_9 = ecx - 0x20 + arg2
void* ecx_4 = arg3[2] + esi_2

do
    float xmm1_15 = *(ecx_4 - 8)
    ecx_4 -= 0x10
    *i_5 = xmm1_15 f* *(eax_9 + 0x18) + *(ecx_4 + 0xc) f* *(eax_9 + 0x10)
    i_5[1] = *(ecx_4 + 8) f* *(eax_9 + 0x10) - *(ecx_4 + 0xc) f* *(eax_9 + 0x18)
    i_5[2] = *eax_9 f* *(ecx_4 + 4) + *(eax_9 + 8) f* *ecx_4
    float xmm1_24 = *eax_9
    float xmm0_15 = *(eax_9 + 8)
    eax_9 -= 0x20
    i_5[3] = xmm1_24 f* *ecx_4 - xmm0_15 f* *(ecx_4 + 4)
    i_5 = &i_5[4]
while (eax_9 u>= arg2)

void* eax_11 = arg4 + ecx
sub_6bae00(eax_11, eax_11, arg3, eax_2)
sub_6baf20(arg3, arg4)
int32_t* i_3 = i
void* ecx_8 = arg3[2] + ecx
void* edx_4 = arg4 + 0xc

do
    i -= 0x10
    i[3] = *(ecx_8 + 4) f* *(edx_4 - 0xc) - *(edx_4 - 8) f* *ecx_8
    *i_3 = (*(edx_4 - 8) f* *(ecx_8 + 4) + *ecx_8 f* *(edx_4 - 0xc)) ^ 0x80000000
    i[2] = *(edx_4 - 4) f* *(ecx_8 + 0xc) - *(ecx_8 + 8) f* *edx_4
    i_3[1] = (*(edx_4 - 4) f* *(ecx_8 + 8) + *(ecx_8 + 0xc) f* *edx_4) ^ 0x80000000
    i[1] = *(edx_4 + 4) f* *(ecx_8 + 0x14) - *(edx_4 + 8) f* *(ecx_8 + 0x10)
    i_3[2] = (*(edx_4 + 8) f* *(ecx_8 + 0x14) + *(edx_4 + 4) f* *(ecx_8 + 0x10)) ^ 0x80000000
    *i = *(edx_4 + 0xc) f* *(ecx_8 + 0x1c) - *(edx_4 + 0x10) f* *(ecx_8 + 0x18)
    float xmm1_51 = *(edx_4 + 0x10)
    float xmm0_31 = *(edx_4 + 0xc)
    edx_4 += 0x20
    float xmm1_52 = xmm1_51 f* *(ecx_8 + 0x1c)
    float xmm0_32 = xmm0_31 f* *(ecx_8 + 0x18)
    ecx_8 += 0x20
    i_3[3] = (xmm1_52 + xmm0_32) ^ 0x80000000
    i_3 = &i_3[4]
while (edx_4 - 0xc u< i)

void* i_6 = i_2
void* edx_6 = arg4 + 8 + esi_2
int32_t* i_1 = i_6
int32_t* esi_6 = &i_1[2 - eax_2]

do
    int32_t xmm0_33 = i_1[-1]
    esi_6 = &esi_6[-4]
    i_1 -= 0x10
    esi_6[1] = xmm0_33
    edx_6 += 0x10
    *(edx_6 - 0x18) = xmm0_33 ^ 0x80000000
    int32_t xmm0_35 = i_1[2]
    *esi_6 = xmm0_35
    *(edx_6 - 0x14) = xmm0_35 ^ 0x80000000
    int32_t xmm0_37 = i_1[1]
    esi_6[-1] = xmm0_37
    *(edx_6 - 0x10) = xmm0_37 ^ 0x80000000
    int32_t xmm0_39 = *i_1
    esi_6[-2] = xmm0_39
    *(edx_6 - 0xc) = xmm0_39 ^ 0x80000000
while (edx_6 - 8 u< i_1)

int32_t* i_7 = i_6
int32_t result

do
    int32_t eax_16 = *(i_6 + 0xc)
    i_6 += 0x10
    i_7 -= 0x10
    *i_7 = eax_16
    i_7[1] = *(i_6 - 8)
    i_7[2] = *(i_6 - 0xc)
    result = *(i_6 - 0x10)
    i_7[3] = result
while (i_7 u> eax_11)

return result
