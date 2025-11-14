// 函数: sub_67d520
// 地址: 0x67d520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t eax

if (*(arg1 + 0x20) == 0 || arg3 == 0)
    eax.b = 0
    return eax

if (arg4 == 0 || *(arg1 + 0x10) u<= 0 || *(arg1 + 0x14) u<= 0)
    eax.b = 0
    return eax

void* ecx_2 = arg6
void* ebx = arg5

if (arg3 u< arg5)
    ebx = arg3

double xmm0_1 = _mm_cvtepi32_pd(zx.q(arg5))
void* ebp = ecx_2

if (arg4 u< ecx_2)
    ebp = arg4

void* edx_3 = ((arg3 << 2) + 0xc) & 0xfffffff0
void* edx_4 = *(arg1 + 4)
arg6 = edx_4
float xmm1_1 = _mm_cvtpd_ps(xmm0_1 f+ *((arg5 u>> 0x1f << 3) + &data_709480))
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ebx)) f+ *((ebx u>> 0x1f << 3) + &data_709480))
void* eax_7 = nullptr
arg3 = nullptr
float xmm2_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_2)) f+ *((ecx_2 u>> 0x1f << 3) + &data_709480))
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ebp)) f+ *((ebp u>> 0x1f << 3) + &data_709480))

if (ebp s> 0)
    void* ecx_4 = arg2
    
    do
        int32_t esi_1 = 0
        void* ebp_1 = edx_4
        
        if (ebx s> 0)
            void* ecx_5 = ecx_4
            
            do
                eax_7.b = *(edx_4 + 3)
                ecx_5 += 4
                uint128_t xmm0_14 = zx.o(esi_1)
                esi_1 += 1
                float xmm0_15 = _mm_cvtepi32_ps(xmm0_14)
                *(ecx_5 - 4) = eax_7.b
                *(ecx_5 - 3) = eax_7.b
                *(ecx_5 - 2) = eax_7.b
                edx_4 = (int.d(xmm0_15 * xmm1_1) + 1) * *(arg1 + 0x1c) + ebp_1
            while (esi_1 s< ebx)
            
            eax_7 = arg3
        
        ecx_4 += edx_3
        int32_t xmm0_17[0x4] = zx.o(eax_7)
        eax_7 += 1
        arg3 = eax_7
        edx_4 = (int.d(_mm_cvtepi32_ps(xmm0_17) * xmm2_1) + 1) * *(arg1 + 0x18) + arg6
    while (eax_7 s< ebp)

eax_7.b = 1
return eax_7
