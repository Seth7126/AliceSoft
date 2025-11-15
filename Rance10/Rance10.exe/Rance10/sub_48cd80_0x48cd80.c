// 函数: sub_48cd80
// 地址: 0x48cd80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebp = arg2
void* esi = arg4
int32_t edx_2 = (ebp[1] - *ebp) s>> 2
int32_t var_14 = edx_2
int32_t ebx_2 = (arg3[1] - *arg3) s>> 2
void* var_8

if (esi != edx_2)
    arg4 = nullptr
    sub_48c850(ebp, &var_8, ebp[1], esi - edx_2, &arg4)
    edx_2 = var_14

int128_t* ecx_2 = *ebp
var_8 = ecx_2 + (esi << 2)
void* ebp_1 = ecx_2 + (edx_2 << 2)
int32_t eax_4 = *(arg1 + 8) - ebx_2
arg4 = ebp_1

if (eax_4 u< var_14)
    edx_2 = eax_4

int32_t i = 0

if (edx_2 != 0)
    if (edx_2 u>= 8)
        float xmm1_1[0x4] = *(arg1 + 0xc)
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
        
        if (ecx_2 u> arg1 + 0xc || ecx_2 - 4 + (edx_2 << 2) u< arg1 + 0xc)
            do
                i += 8
                *ecx_2 = _mm_mul_ps(*ecx_2, xmm1_2)
                ecx_2[1] = _mm_mul_ps(ecx_2[1], xmm1_2)
                ecx_2 = &ecx_2[2]
            while (i u< (edx_2 & 0xfffffff8))
    
    if (i u< edx_2)
        if (edx_2 - i u>= 4)
            int32_t i_7 = ((edx_2 - i - 4) u>> 2) + 1
            i += i_7 << 2
            int32_t i_1
            
            do
                *ecx_2 = *(arg1 + 0xc) f* *ecx_2
                *(ecx_2 + 4) = *(arg1 + 0xc) f* *(ecx_2 + 4)
                *(ecx_2 + 8) = *(arg1 + 0xc) f* *(ecx_2 + 8)
                *(ecx_2 + 0xc) = *(arg1 + 0xc) f* *(ecx_2 + 0xc)
                ecx_2 = &ecx_2[1]
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        if (i u< edx_2)
            int32_t i_10 = edx_2 - i
            int32_t i_2
            
            do
                *ecx_2 = *(arg1 + 0xc) f* *ecx_2
                ecx_2 += 4
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)

int32_t edx_3 = arg3[1]
float* esi_1 = *arg3

if (esi_1 != edx_3)
    float* eax_15 = esi_1
    
    while (ecx_2 u< ebp_1)
        float xmm1_4 = *(arg1 + 0x10) * *eax_15
        eax_15 = &eax_15[1]
        *ecx_2 = xmm1_4 + *(arg1 + 0xc) f* *ecx_2
        ecx_2 += 4
        
        if (eax_15 == edx_3)
            break

uint32_t ebp_4 = (ebp_1 - ecx_2 + 3) u>> 2
void* edx_5 = ecx_2 - (*(arg1 + 8) << 2)
int32_t i_3 = 0

if (ecx_2 u> arg4)
    ebp_4 = 0

if (ebp_4 != 0)
    if (ebp_4 u>= 8)
        float xmm2_1[0x4] = *(arg1 + 0xc)
        float xmm3_1[0x4] = *(arg1 + 0x10)
        arg4 = arg1 + 0xc
        float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
        float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0)
        void* eax_23 = ecx_2 + ((ebp_4 - 1) << 2)
        
        if ((ecx_2 u> edx_5 + ((ebp_4 - 1) << 2) || eax_23 u< edx_5)
                && (ecx_2 u> arg4 || eax_23 u< arg4)
                && (ecx_2 u> arg1 + 0x10 || eax_23 u< arg1 + 0x10))
            do
                i_3 += 8
                *ecx_2 = _mm_add_ps(_mm_mul_ps(*edx_5, xmm3_2), _mm_mul_ps(*ecx_2, xmm2_2))
                float xmm1_9[0x4] = *(edx_5 + 0x10)
                edx_5 += 0x20
                ecx_2[1] = _mm_add_ps(_mm_mul_ps(xmm1_9, xmm3_2), _mm_mul_ps(ecx_2[1], xmm2_2))
                ecx_2 = &ecx_2[2]
            while (i_3 u< (ebp_4 & 0xfffffff8))
    
    if (i_3 u< ebp_4)
        if (ebp_4 - i_3 u>= 4)
            int32_t i_8 = ((ebp_4 - i_3 - 4) u>> 2) + 1
            i_3 += i_8 << 2
            int32_t i_4
            
            do
                *ecx_2 = *(arg1 + 0xc) f* *ecx_2 + *(arg1 + 0x10) f* *edx_5
                *(ecx_2 + 4) = *(edx_5 + 4) f* *(arg1 + 0x10) + *(arg1 + 0xc) f* *(ecx_2 + 4)
                *(ecx_2 + 8) = *(edx_5 + 8) f* *(arg1 + 0x10) + *(arg1 + 0xc) f* *(ecx_2 + 8)
                float xmm1_21 = *(edx_5 + 0xc)
                edx_5 += 0x10
                *(ecx_2 + 0xc) = xmm1_21 f* *(arg1 + 0x10) + *(arg1 + 0xc) f* *(ecx_2 + 0xc)
                ecx_2 = &ecx_2[1]
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
        
        while (i_3 u< ebp_4)
            i_3 += 1
            float xmm0_30 = *(arg1 + 0x10) f* *edx_5
            edx_5 += 4
            *ecx_2 = *(arg1 + 0xc) f* *ecx_2 + xmm0_30
            ecx_2 += 4

int32_t i_5 = 0
uint32_t ebp_8 = (var_8 - ecx_2 + 3) u>> 2

if (ecx_2 u> var_8)
    ebp_8 = 0

if (ebp_8 != 0)
    if (ebp_8 u>= 8)
        float xmm2_3[0x4] = *(arg1 + 0x10)
        float xmm2_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
        arg4 = ecx_2 + ((ebp_8 - 1) << 2)
        
        if ((ecx_2 u> edx_5 + ((ebp_8 - 1) << 2) || ecx_2 + ((ebp_8 - 1) << 2) u< edx_5)
                && (ecx_2 u> arg1 + 0x10 || arg4 u< arg1 + 0x10))
            do
                i_5 += 8
                *ecx_2 = _mm_mul_ps(xmm2_4, *edx_5)
                float xmm0_32[0x4] = *(edx_5 + 0x10)
                edx_5 += 0x20
                ecx_2[1] = _mm_mul_ps(xmm2_4, xmm0_32)
                ecx_2 = &ecx_2[2]
            while (i_5 u< (ebp_8 & 0xfffffff8))
    
    if (i_5 u< ebp_8)
        if (ebp_8 - i_5 u>= 4)
            int32_t i_9 = ((ebp_8 - i_5 - 4) u>> 2) + 1
            i_5 += i_9 << 2
            int32_t i_6
            
            do
                *ecx_2 = *(arg1 + 0x10) f* *edx_5
                *(ecx_2 + 4) = *(edx_5 + 4) f* *(arg1 + 0x10)
                *(ecx_2 + 8) = *(edx_5 + 8) f* *(arg1 + 0x10)
                float xmm0_39 = *(edx_5 + 0xc)
                edx_5 += 0x10
                *(ecx_2 + 0xc) = xmm0_39 f* *(arg1 + 0x10)
                ecx_2 = &ecx_2[1]
                i_6 = i_9
                i_9 -= 1
            while (i_6 != 1)
        
        if (i_5 u< ebp_8)
            float* edx_6 = edx_5 - ecx_2
            
            do
                float xmm0_41 = *(edx_6 + ecx_2)
                ecx_2 += 4
                i_5 += 1
                *(ecx_2 - 4) = xmm0_41 f* *(arg1 + 0x10)
            while (i_5 u< ebp_8)

int32_t eax_47 = *(arg1 + 8)

if (var_14 s>= eax_47)
    int32_t var_28_2 = 0
    int32_t edx_9 = arg2[1]
    arg3[1] = esi_1
    return sub_48d300(arg3, edx_9 - (eax_47 << 2), edx_9)

int32_t ecx_6 = ebx_2 - eax_47 + var_14
int32_t* ecx_7

if (ecx_6 s<= 0)
    ecx_7 = arg3
else
    char* eax_51 = &esi_1[ecx_6]
    
    if (eax_51 == edx_3)
        ecx_7 = arg3
        ecx_7[1] = esi_1
    else if (esi_1 == eax_51)
        ecx_7 = arg3
    else
        void* edi_3 = edx_3 - eax_51
        sub_6feca0(esi_1, eax_51, edi_3)
        ecx_7 = arg3
        ecx_7[1] = edi_3 + esi_1

int32_t var_28_4 = 0
return sub_48d390(ecx_7, ecx_7[1], *arg2, arg2[1])
