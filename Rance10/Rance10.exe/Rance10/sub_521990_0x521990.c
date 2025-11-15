// 函数: sub_521990
// 地址: 0x521990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = 0
int32_t eax_2 = arg1[0x40] - arg1[0x43] - arg1[0x42]
float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[0x8a]))
int32_t eax_3 = int.d((_mm_cvtepi32_ps(zx.o(eax_2)) - xmm0_1) f* arg1[0x47])

if (eax_3 s> 0)
    ebp = eax_3

int32_t esi = *(arg1[0x88] + 0xa4)
int32_t ebx = (*(*arg1 + 0x24))(1)
int32_t ebx_1

if (esi - 1 u> 8)
    ebx_1 = 0
else
    switch (esi + &jump_table_521b94[2]:3)
        case &lookup_table_521ba0, &lookup_table_521ba0[3], &lookup_table_521ba0[6]
            ebx_1 = 0
        case &lookup_table_521ba0[1], &lookup_table_521ba0[4], &lookup_table_521ba0[7]
            int32_t eax_9
            int32_t edx_1
            edx_1:eax_9 = sx.q(ebx)
            ebx_1 = neg.d((eax_9 - edx_1) s>> 1)
        case &lookup_table_521ba0[2], &lookup_table_521ba0[5], &lookup_table_521ba0[8]
            ebx_1 = neg.d(ebx)

int32_t esi_2 = *(arg1[0x88] + 0xa4)
int32_t ecx_1 = (*(*arg1 + 0x28))(1)
int32_t ecx_2

if (esi_2 - 1 u> 8)
    ecx_2 = 0
else
    switch (esi_2 + &jump_table_521bac[2]:3)
        case &lookup_table_521bb8, &lookup_table_521bb8[1], &lookup_table_521bb8[2]
            ecx_2 = 0
        case &lookup_table_521bb8[3], &lookup_table_521bb8[4], &lookup_table_521bb8[5]
            int32_t eax_17
            int32_t edx_2
            edx_2:eax_17 = sx.q(ecx_1)
            ecx_2 = neg.d((eax_17 - edx_2) s>> 1)
        case &lookup_table_521bb8[6], &lookup_table_521bb8[7], &lookup_table_521bb8[8]
            ecx_2 = neg.d(ecx_1)

void* eax_20 = arg1[0x2a]
float xmm2_1 = _mm_cvtepi32_ps(zx.o(ecx_2))
float xmm3_1 = _mm_cvtepi32_ps(zx.o(ebx_1))
*(eax_20 + 0x94) = xmm2_1
*(eax_20 + 0x90) = xmm3_1

if (arg1[3].b == 0)
    uint128_t xmm0_9 = zx.o(arg1[0x43])
    void* eax_24 = arg1[0x2b]
    float xmm1_13 = _mm_cvtepi32_ps(zx.o(arg1[0x40]))
    float xmm0_10 = _mm_cvtepi32_ps(xmm0_9)
    *(eax_24 + 0x94) = xmm2_1
    float xmm0_12 = _mm_cvtepi32_ps(zx.o(ebp))
    *(eax_24 + 0x90) = xmm1_13 + xmm3_1 - xmm0_10
    void* eax_25 = arg1[0x2c]
    float xmm1_17 = _mm_cvtepi32_ps(zx.o(arg1[0x42]))
    *(eax_25 + 0x94) = xmm2_1
    *(eax_25 + 0x90) = xmm1_17 + xmm3_1 + xmm0_12
    void* eax_26 = arg1[0x29]
    float xmm0_14 = _mm_cvtepi32_ps(zx.o(arg1[0x42]))
    *(eax_26 + 0x94) = xmm2_1
    *(eax_26 + 0x90) = xmm0_14 + xmm3_1
    return eax_26

int32_t ecx_3 = arg1[0x43]
void* edx_3 = arg1[0x2b]
float xmm1_5 = _mm_cvtepi32_ps(zx.o(arg1[0x40]))
float xmm0_3 = _mm_cvtepi32_ps(zx.o(ecx_3))
*(edx_3 + 0x90) = xmm3_1
float xmm0_5 = _mm_cvtepi32_ps(zx.o(ebp))
*(edx_3 + 0x94) = xmm1_5 + xmm2_1 - xmm0_3
void* eax_22 = arg1[0x2c]
float xmm1_9 = _mm_cvtepi32_ps(zx.o(arg1[0x42]))
*(eax_22 + 0x90) = xmm3_1
*(eax_22 + 0x94) = xmm1_9 + xmm2_1 + xmm0_5
int32_t eax_23 = arg1[0x42]
void* ecx_4 = arg1[0x29]
float xmm0_7 = _mm_cvtepi32_ps(zx.o(eax_23))
*(ecx_4 + 0x90) = xmm3_1
*(ecx_4 + 0x94) = xmm0_7 + xmm2_1
return eax_23
