// 函数: sub_640cb0
// 地址: 0x640cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_3 = *arg3
int32_t ecx_1 = eax_3 s>> 2
int32_t ecx_3 = eax_3 s>> 3
int32_t eax_4 = eax_3 << 2
int32_t edi_1 = eax_3 s>> 1
__alloca_probe_16(eax_4)
int32_t eax_5 = edi_1 << 2
int32_t __saved_edi
void* edi_2 = &(&__saved_edi)[edi_1]
int32_t* edx = arg2 + ((edi_1 + ecx_1) << 2)
int32_t i = 0
void* eax_11 = arg3[2] + eax_5

if (ecx_3 s> 0)
    void* esi_1 = &edx[1]
    
    do
        edx -= 0x10
        float xmm1_1 = *(eax_11 - 4)
        eax_11 -= 8
        float xmm3_2 = edx[2] f+ *esi_1
        float xmm2_2 = *(esi_1 + 8) f+ *edx
        esi_1 += 0x10
        *(edi_2 + (i << 2)) = xmm1_1 * xmm2_2 + *eax_11 * xmm3_2
        *(edi_2 + (i << 2) + 4) = *eax_11 * xmm2_2 - *(eax_11 + 4) * xmm3_2
        i += 2
    while (i s< ecx_3)

float* edi_4 = arg2 + 4

for (; i s< edi_1 - ecx_3; i += 2)
    float xmm3_3 = edx[-2]
    edx -= 0x10
    float xmm3_4 = xmm3_3 - *edi_4
    float xmm1_7 = *(eax_11 - 4)
    eax_11 -= 8
    float xmm2_4 = *edx - edi_4[2]
    edi_4 = &edi_4[4]
    *(edi_2 + (i << 2)) = xmm1_7 * xmm2_4 + *eax_11 * xmm3_4
    *(edi_2 + (i << 2) + 4) = *eax_11 * xmm2_4 - *(eax_11 + 4) * xmm3_4

int32_t* esi_5 = &__saved_edi
int32_t* edx_3 = edi_2

if (i s< edi_1)
    int32_t* esi_6 = arg2 + eax_4
    
    do
        int32_t xmm3_5 = esi_6[-2]
        esi_6 -= 0x10
        float xmm1_13 = *(eax_11 - 4)
        eax_11 -= 8
        float xmm3_7 = (xmm3_5 ^ 0x80000000) - *edi_4
        float xmm2_7 = (*esi_6 ^ 0x80000000) - edi_4[2]
        edi_4 = &edi_4[4]
        edx_3[i] = xmm1_13 * xmm2_7 + *eax_11 * xmm3_7
        edx_3[i + 1] = *eax_11 * xmm2_7 - *(eax_11 + 4) * xmm3_7
        i += 2
    while (i s< edi_1)
    
    esi_5 = &__saved_edi

int32_t* edi_5 = arg3
sub_640670(eax_11, edx_3, edi_5, edi_1)
sub_640790(edi_5, &__saved_edi)
int32_t ecx_7 = 0
float* result = edi_5[2] + eax_5
float* edx_6 = eax_5 + arg4

if (ecx_1 s> 0)
    do
        edx_6 -= 4
        *(arg4 + (ecx_7 << 2)) = (result[1] f* esi_5[1] + *result f* *esi_5) f* edi_5[4]
        ecx_7 += 1
        float xmm1_23 = result[1]
        float xmm0_15 = *result
        result = &result[2]
        float xmm1_24 = xmm1_23 f* *esi_5
        edi_5 = arg3
        float xmm0_16 = xmm0_15 f* esi_5[1]
        esi_5 = &esi_5[2]
        *edx_6 = (xmm1_24 - xmm0_16) f* edi_5[4]
    while (ecx_7 s< ecx_1)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
