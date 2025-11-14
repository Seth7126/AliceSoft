// 函数: sub_67d680
// 地址: 0x67d680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
void* var_10 = edx
int32_t eax

if (*(edx + 0x20) == 0)
    eax.b = 0
    return eax

int32_t esi = arg3

if (esi == 0)
    eax.b = 0
    return eax

if (arg4 == 0 || *(edx + 0x10) u<= 0 || *(edx + 0x14) u<= 0)
    eax.b = 0
    return eax

int32_t ebx = arg5

if (esi u< arg5)
    ebx = esi

double xmm0_1 = _mm_cvtepi32_pd(zx.q(arg5))
arg3 = ebx
void* ebp = arg6

if (arg4 u< arg6)
    ebp = arg4

void* edi_1 = *(edx + 4)
void* esi_2 = ((esi << 2) + 0xc) & 0xfffffff0
void* var_c = esi_2
void* var_8 = edi_1
float xmm1_1 = _mm_cvtpd_ps(xmm0_1 f+ *((arg5 u>> 0x1f << 3) + &data_709480))
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ebx)) f+ *((ebx u>> 0x1f << 3) + &data_709480))
int32_t ecx_2 = 0
arg5 = 0
float xmm2_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg6)) f+ *((arg6 u>> 0x1f << 3) + &data_709480))
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ebp)) f+ *((ebp u>> 0x1f << 3) + &data_709480))
void* eax_6

if (ebp s> 0)
    eax_6 = arg2 + 2
    arg4 = eax_6
    
    do
        int32_t ebp_1 = 0
        arg6 = edi_1
        
        if (ebx s> 0)
            void* ebx_1 = eax_6
            
            do
                uint32_t esi_3 = zx.d(*(edi_1 + 3))
                ebx_1 += 4
                uint128_t xmm0_14 = zx.o(ebp_1)
                uint32_t eax_9 = zx.d(*(ebx_1 - 5))
                ebp_1 += 1
                int32_t ecx_6 = (zx.d(*edi_1) - zx.d(*(ebx_1 - 6))) * esi_3
                float xmm0_15 = _mm_cvtepi32_ps(xmm0_14)
                *(ebx_1 - 6) += (ecx_6 s>> 8).b
                uint32_t eax_10 = zx.d(*(ebx_1 - 4))
                *(ebx_1 - 5) += (((zx.d(*(edi_1 + 1)) - eax_9) * esi_3) s>> 8).b
                *(ebx_1 - 4) += (((zx.d(*(edi_1 + 2)) - eax_10) * esi_3) s>> 8).b
                edx = var_10
                edi_1 = (int.d(xmm0_15 * xmm1_1) + 1) * *(edx + 0x1c) + arg6
            while (ebp_1 s< arg3)
            
            ecx_2 = arg5
            ebx = arg3
            eax_6 = arg4
            esi_2 = var_c
        
        eax_6 += esi_2
        float xmm0_18 = _mm_cvtepi32_ps(zx.o(ecx_2))
        ecx_2 += 1
        arg4 = eax_6
        arg5 = ecx_2
        edi_1 = (int.d(xmm0_18 * xmm2_1) + 1) * *(edx + 0x18) + var_8
    while (ecx_2 s< ebp)

eax_6.b = 1
return eax_6
