// 函数: sub_640930
// 地址: 0x640930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *arg3
int32_t eax_2 = esi s>> 1
int32_t esi_1 = esi s>> 2
int32_t esi_2 = esi_1 << 2
void* edx_1 = arg2 + (eax_2 << 2) - 0x1c
int32_t* i_2 = arg4 + ((eax_2 + esi_1) << 2)
void* eax_6 = arg3[2] + esi_2
float* i_3 = i_2

do
    i_3 -= 0x10
    *i_3 = ((*(edx_1 + 8) f* *(eax_6 + 0xc)) ^ 0x80000000) - *edx_1 f* *(eax_6 + 8)
    i_3[1] = *edx_1 f* *(eax_6 + 0xc) - *(edx_1 + 8) f* *(eax_6 + 8)
    i_3[2] = ((*(eax_6 + 4) f* *(edx_1 + 0x18)) ^ 0x80000000) - *(edx_1 + 0x10) f* *eax_6
    float xmm1_12 = *(eax_6 + 4)
    float xmm0_7 = *eax_6
    eax_6 += 0x10
    float xmm1_13 = xmm1_12 f* *(edx_1 + 0x10)
    float xmm0_8 = xmm0_7 f* *(edx_1 + 0x18)
    edx_1 -= 0x20
    i_3[3] = xmm1_13 - xmm0_8
while (edx_1 u>= arg2)

float* i_5 = i_2
void* eax_9 = arg2 + ((eax_2 - 8) << 2)
float* ecx_5 = arg3[2] + esi_2

do
    ecx_5 -= 0x10
    *i_5 = *(eax_9 + 0x10) * ecx_5[3] + ecx_5[2] f* *(eax_9 + 0x18)
    i_5[1] = *(eax_9 + 0x10) * ecx_5[2] - ecx_5[3] f* *(eax_9 + 0x18)
    i_5[2] = *(eax_9 + 8) * *ecx_5 + *eax_9 * ecx_5[1]
    float xmm1_24 = *eax_9
    float xmm0_16 = ecx_5[1] f* *(eax_9 + 8)
    eax_9 -= 0x20
    i_5[3] = xmm1_24 * *ecx_5 - xmm0_16
    i_5 = &i_5[4]
while (eax_9 u>= arg2)

int32_t esi_4 = eax_2 << 2
int32_t* ecx_7 = arg4 + esi_4
sub_640670(eax_2, ecx_7, arg3, eax_2)
sub_640790(arg3, arg4)
int32_t* i_4 = i_2
void* edx_5 = arg3[2] + esi_4
float* edi = &i_2[2]
void* esi_6 = arg4 + 0xc

do
    edi -= 0x10
    edi[1] = *(edx_5 + 4) f* *(esi_6 - 0xc) - *(esi_6 - 8) f* *edx_5
    *i_4 = (*(edx_5 + 4) f* *(esi_6 - 8) + *edx_5 f* *(esi_6 - 0xc)) ^ 0x80000000
    *edi = *(esi_6 - 4) f* *(edx_5 + 0xc) - *esi_6 f* *(edx_5 + 8)
    i_4[1] = (*esi_6 f* *(edx_5 + 0xc) + *(esi_6 - 4) f* *(edx_5 + 8)) ^ 0x80000000
    edi[-1] = *(esi_6 + 4) f* *(edx_5 + 0x14) - *(esi_6 + 8) f* *(edx_5 + 0x10)
    i_4[2] = (*(esi_6 + 8) f* *(edx_5 + 0x14) + *(esi_6 + 4) f* *(edx_5 + 0x10)) ^ 0x80000000
    edi[-2] = *(esi_6 + 0xc) f* *(edx_5 + 0x1c) - *(edx_5 + 0x18) f* *(esi_6 + 0x10)
    float xmm0_31 = *(esi_6 + 0x10)
    float xmm1_52 = *(edx_5 + 0x18) f* *(esi_6 + 0xc)
    esi_6 += 0x20
    float xmm0_32 = xmm0_31 f* *(edx_5 + 0x1c)
    edx_5 += 0x20
    i_4[3] = (xmm1_52 + xmm0_32) ^ 0x80000000
    i_4 = &i_4[4]
while (esi_6 - 0xc u< &edi[-2])

int32_t* i_1 = i_2
void* edx_7 = esi_2 + arg4 + 8
int32_t* i = i_1
int32_t* esi_7 = &i[2 - eax_2]

do
    int32_t xmm0_33 = i[-1]
    esi_7 = &esi_7[-4]
    i -= 0x10
    esi_7[1] = xmm0_33
    edx_7 += 0x10
    *(edx_7 - 0x18) = xmm0_33 ^ 0x80000000
    int32_t xmm0_35 = i[2]
    *esi_7 = xmm0_35
    *(edx_7 - 0x14) = xmm0_35 ^ 0x80000000
    int32_t xmm0_37 = i[1]
    esi_7[-1] = xmm0_37
    *(edx_7 - 0x10) = xmm0_37 ^ 0x80000000
    int32_t xmm0_39 = *i
    esi_7[-2] = xmm0_39
    *(edx_7 - 0xc) = xmm0_39 ^ 0x80000000
while (edx_7 - 8 u< i)

void* ecx_13 = &i_1[2]
int32_t result

do
    int32_t eax_18 = *(ecx_13 + 4)
    ecx_13 += 0x10
    i_1 -= 0x10
    *i_1 = eax_18
    i_1[1] = *(ecx_13 - 0x10)
    i_1[2] = *(ecx_13 - 0x14)
    result = *(ecx_13 - 0x18)
    i_1[3] = result
while (i_1 u> ecx_7)

return result
