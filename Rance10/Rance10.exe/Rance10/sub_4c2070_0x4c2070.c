// 函数: sub_4c2070
// 地址: 0x4c2070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t esi = *(arg1[0x74] + 0xa4)
int32_t ebx = (*(*arg1 + 0x24))(1)
int32_t ebx_1

if (esi - 1 u> 8)
    ebx_1 = 0
else
    switch (esi + &jump_table_4c2270[2]:3)
        case &lookup_table_4c227c, &lookup_table_4c227c[3], &lookup_table_4c227c[6]
            ebx_1 = 0
        case &lookup_table_4c227c[1], &lookup_table_4c227c[4], &lookup_table_4c227c[7]
            int32_t eax_5
            int32_t edx_1
            edx_1:eax_5 = sx.q(ebx)
            ebx_1 = neg.d((eax_5 - edx_1) s>> 1)
        case &lookup_table_4c227c[2], &lookup_table_4c227c[5], &lookup_table_4c227c[8]
            ebx_1 = neg.d(ebx)

int32_t esi_2 = *(arg1[0x74] + 0xa4)
int32_t ecx_1 = (*(*arg1 + 0x28))(1)
int32_t ecx_2

if (esi_2 - 1 u> 8)
    ecx_2 = 0
else
    switch (esi_2 + &jump_table_4c2288[2]:3)
        case &lookup_table_4c2294, &lookup_table_4c2294[1], &lookup_table_4c2294[2]
            ecx_2 = 0
        case &lookup_table_4c2294[3], &lookup_table_4c2294[4], &lookup_table_4c2294[5]
            int32_t eax_13
            int32_t edx_2
            edx_2:eax_13 = sx.q(ecx_1)
            ecx_2 = neg.d((eax_13 - edx_2) s>> 1)
        case &lookup_table_4c2294[6], &lookup_table_4c2294[7], &lookup_table_4c2294[8]
            ecx_2 = neg.d(ecx_1)

void* eax_16 = arg1[0x28]
float xmm5_1 = _mm_cvtepi32_ps(zx.o(ecx_2))
float xmm0_1 = _mm_cvtepi32_ps(zx.o(ebx_1))
*(eax_16 + 0x94) = xmm5_1
*(eax_16 + 0x90) = xmm0_1
uint128_t xmm7 = zx.o(arg1[0x5c])
uint128_t xmm6 = zx.o(arg1[0x5f])
int32_t eax_18 = arg1[0x60] - 1
uint32_t xmm1_2[0x4] = _mm_cvtepi32_ps(zx.o(arg1[0x5b])) + xmm0_1
uint32_t xmm7_2[0x4] = _mm_cvtepi32_ps(xmm7) + xmm5_1
float xmm0_3 = _mm_cvtepi32_ps(zx.o(arg1[0x5e]))
float xmm6_1 = _mm_cvtepi32_ps(xmm6)

if (eax_18 u<= 8)
    void* eax_19
    uint32_t xmm0_4[0x4]
    int32_t xmm0_8
    int32_t xmm0_13
    uint32_t xmm0_15[0x4]
    
    switch (eax_18)
        case 0
            xmm0_4 = xmm1_2
        label_4c2160:
            eax_19 = arg1[0x29]
            *(eax_19 + 0x90) = sub_49d390(xmm0_4)
            xmm0_13 = sub_49d390(xmm7_2)
        case 1
            xmm0_3 = xmm0_3 * 0.5f
        label_4c2183:
            xmm0_4 = xmm0_3 f+ xmm1_2
            goto label_4c2160
        case 2
            goto label_4c2183
        case 3
            eax_19 = arg1[0x29]
            xmm0_8 = sub_49d390(xmm1_2)
            xmm6_1 = xmm6_1 * 0.5f
        label_4c2215:
            *(eax_19 + 0x90) = xmm0_8
            xmm0_13 = sub_49d390(xmm6_1 f+ xmm7_2)
        case 4
            eax_19 = arg1[0x29]
            *(eax_19 + 0x90) = sub_49d390(xmm0_3 * 0.5f f+ xmm1_2)
            xmm0_13 = sub_49d390(xmm6_1 * 0.5f f+ xmm7_2)
        case 5
            eax_19 = arg1[0x29]
            xmm0_8 = sub_49d390(xmm0_3 f+ xmm1_2)
            xmm6_1 = xmm6_1 * 0.5f
            goto label_4c2215
        case 6
            xmm0_15 = xmm1_2
        label_4c2206:
            eax_19 = arg1[0x29]
            xmm0_8 = sub_49d390(xmm0_15)
            goto label_4c2215
        case 7
            xmm0_3 = xmm0_3 * 0.5f
        label_4c2202:
            xmm0_15 = xmm0_3 f+ xmm1_2
            goto label_4c2206
        case 8
            goto label_4c2202
    
    *(eax_19 + 0x94) = xmm0_13

int32_t result = arg1[0x50]
void* ecx_3 = arg1[0x2a]
*(ecx_3 + 0x90) = _mm_cvtepi32_ps(zx.o(arg1[0x4f])) + _mm_cvtepi32_ps(zx.o(ebx_1))
*(ecx_3 + 0x94) = _mm_cvtepi32_ps(zx.o(result)) + xmm5_1
return result
