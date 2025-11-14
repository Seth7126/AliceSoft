// 函数: sub_67d380
// 地址: 0x67d380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x20) == 0 || arg3 == 0 || arg4 == 0 || *(arg1 + 0x10) u<= 0 || *(arg1 + 0x14) u<= 0)
    int32_t eax
    eax.b = 0
    return 

void* ebp = arg5

if (arg3 u< arg5)
    ebp = arg3

double xmm0_1 = _mm_cvtepi32_pd(zx.q(arg5))
void* edi = arg6
char* esi = *(arg1 + 4)

if (arg4 u< edi)
    edi = arg4

char* var_10 = esi
void* ecx_2 = ((arg3 << 2) + 0xc) & 0xfffffff0
float xmm1_1 = _mm_cvtpd_ps(xmm0_1 f+ *((arg5 u>> 0x1f << 3) + &data_709480))
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ebp)) f+ *((ebp u>> 0x1f << 3) + &data_709480))
float var_8 = xmm1_1
void* eax_9 = nullptr
arg3 = nullptr
float xmm2_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg6)) f+ *((arg6 u>> 0x1f << 3) + &data_709480))
    / _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(edi)) f+ *((edi u>> 0x1f << 3) + &data_709480))
float var_4 = xmm2_1

if (edi s> 0)
    void* edi_1 = arg2
    
    do
        int32_t ecx_3 = 0
        arg4 = edi_1
        char* edx_2 = esi
        
        if (ebp s> 0)
            do
                edi_1 += 4
                *(edi_1 - 4) = *esi
                char eax_11 = esi[1]
                float xmm0_15 = _mm_cvtepi32_ps(zx.o(ecx_3))
                *(edi_1 - 3) = eax_11
                *(edi_1 - 2) = esi[2]
                esi = (int.d(xmm0_15 * xmm1_1) + 1) * *(arg1 + 0x1c) + edx_2
                
                if (esi - edx_2 s>= *(arg1 + 0x18))
                    break
                
                ecx_3 += 1
            while (ecx_3 s< ebp)
            
            eax_9 = arg3
        
        edi_1 = arg4 + ecx_2
        float xmm0_19 = _mm_cvtepi32_ps(zx.o(eax_9)) * xmm2_1
        esi = (int.d(xmm0_19) + 1) * *(arg1 + 0x18) + var_10
        int16_t x87control
        int80_t st0_1
        st0_1, eax_9, x87control = sub_6b0e80(x87control, xmm0_19)
        
        if (eax_9 u>= arg6)
            break
        
        xmm1_1 = var_8
        eax_9 = arg3 + 1
        xmm2_1 = var_4
        arg3 = eax_9
    while (eax_9 s< edi)

eax_9.b = 1
