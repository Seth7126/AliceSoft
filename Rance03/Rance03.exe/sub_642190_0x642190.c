// 函数: sub_642190
// 地址: 0x642190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = *(arg3 + 4)
__alloca_probe_16(arg9 << 2)
int32_t edi = 0
int32_t __saved_edi
int32_t* var_20 = &__saved_edi
int32_t i_1

if (*(eax_2 + 0x1f4) == 0)
    i_1 = arg9
else
    i_1 = *(eax_2 + 0x1f8) - arg8
    
    if (i_1 s> arg9)
        i_1 = arg9

double xmm2 = 0.5
uint128_t xmm3 = -0x8000000000000000
int32_t xmm0 = (zx.o(0)).d
uint128_t xmm7 = 0x4330000000000000
int32_t i_2 = 0
int32_t eax_5 = arg7
int32_t var_18 = 0

if (i_1 s> 0)
    int32_t* eax_6 = eax_5 - arg5
    int32_t* ecx = arg5
    float* eax_8 = arg6 - arg5
    i_2 = i_1
    float* edi_1 = eax_8
    int32_t* eax_12 = arg10 - arg5
    int32_t* esi_2 = eax_6
    eax_5 = arg7
    int32_t i
    
    do
        if (eax_5 == 0 || *(esi_2 + ecx) == 0)
            bool cond:0_1 = 0f f<= *(arg4 - arg5 + ecx)
            uint64_t xmm4_2[0x2] = _mm_sqrt_sd(0, _mm_cvtps_pd(*ecx f/ *(edi_1 + ecx))) + xmm2
            double xmm3_1[0x2] = _mm_and_pd(xmm3, xmm4_2)
            int64_t xmm0_5 = _mm_xor_pd(xmm4_2, xmm3_1)
            double xmm2_1 = xmm4_2[0]
            double xmm1_3 = _mm_or_pd(_mm_and_pd(xmm7, _mm_cmpeq_sd(xmm0_5, xmm7, 1)), xmm3_1)
            double xmm2_3 = xmm2_1 + xmm1_3 - xmm1_3
            xmm3 = -0x8000000000000000
            uint64_t xmm2_4[0x2] =
                xmm2_3 - _mm_and_pd(_mm_cmpeq_sd(xmm2_3 f- xmm4_2, xmm3_1, 6), 0x3ff0000000000000)
            
            if (cond:0_1)
                *(eax_12 + ecx) = int.d(xmm2_4)
                edi_1 = eax_8
            else
                *(eax_12 + ecx) = int.d(__xorpd_xmmxuq_memxuq(xmm2_4, data_7094b0))
                esi_2 = eax_6
            
            eax_5 = arg7
            xmm2 = 0.5
        
        ecx = &ecx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    xmm0 = 0
    edi = 0

if (i_2 s< arg9)
    int32_t* ecx_2 = arg10 + (i_2 << 2)
    void* edx_3 = eax_5 - arg4
    float* esi_6 = arg6 - arg10
    float* var_10_3 = arg4 - arg10
    float* var_14_3 = arg5 - arg10
    int32_t i_3 = i_2
    float* esi_8 = var_10_3
    
    do
        if (eax_5 == 0 || *(edx_3 + esi_8 + ecx_2) == 0)
            int32_t* eax_19 = var_14_3 + ecx_2
            float xmm1_5[0x2] = *eax_19 f/ *(esi_6 + ecx_2)
            esi_8 = var_10_3
            
            if (0.25f f<= xmm1_5 || (arg7 != 0 && i_3 s< arg2 - arg8))
                bool cond:1_1 = 0f f<= *(esi_8 + ecx_2)
                uint64_t xmm4_4[0x2] = _mm_sqrt_sd(0, _mm_cvtps_pd(xmm1_5)) + xmm2
                uint64_t xmm3_2[0x2] = _mm_and_pd(xmm3, xmm4_4)
                int64_t xmm0_13 = _mm_xor_pd(xmm4_4, xmm3_2)
                uint64_t xmm2_6 = xmm4_4[0]
                double xmm1_8 = _mm_or_pd(_mm_and_pd(xmm7, _mm_cmpeq_sd(xmm0_13, xmm7, 1)), xmm3_2)
                double xmm2_8 = xmm2_6 f+ xmm1_8 - xmm1_8
                uint64_t xmm2_9[0x2] = xmm2_8
                    - _mm_and_pd(_mm_cmpeq_sd(xmm2_8 f- xmm4_4, xmm3_2, 6), 0x3ff0000000000000)
                
                if (not(cond:1_1))
                    xmm2_9 = __xorpd_xmmxuq_memxuq(xmm2_9, data_7094b0)
                
                int32_t eax_22 = int.d(xmm2_9)
                *ecx_2 = eax_22
                *(var_14_3 + ecx_2) = _mm_cvtepi32_ps(zx.o(eax_22 * eax_22)) f* *(esi_6 + ecx_2)
                xmm0 = var_18
            else
                xmm0 = xmm0 f+ xmm1_5
                (&__saved_edi)[edi] = eax_19
                edi += 1
                esi_8 = var_10_3
                var_18 = xmm0
        
        xmm2 = 0.5
        i_3 += 1
        xmm3 = -0x8000000000000000
        ecx_2 = &ecx_2[1]
        eax_5 = arg7
    while (i_3 s< arg9)
    
    int32_t* esi_10 = arg5
    
    if (edi != 0)
        eax_5 = sub_69cb60(var_20, edi, 4, sub_6420d0)
        int32_t edx_5 = 0
        
        if (edi s> 0)
            int128_t xmm1_10 = var_18
            int32_t eax_34
            
            do
                int32_t ecx_5 = (var_20[edx_5] - esi_10) s>> 2
                
                if (fconvert.d(xmm1_10) f< *(eax_2 + 0x200))
                    eax_34 = arg10
                    *(eax_34 + (ecx_5 << 2)) = 0
                    esi_10[ecx_5] = 0
                else
                    xmm1_10 = xmm1_10 f- 1f
                    *(arg10 + (ecx_5 << 2)) =
                        int.d(fconvert.t((*(arg4 + (ecx_5 << 2)) & 0xbf800000) | 0x3f800000))
                    esi_10 = arg5
                    eax_34 = *(arg6 + (ecx_5 << 2))
                    esi_10[ecx_5] = eax_34
                
                edx_5 += 1
            while (edx_5 s< edi)
            
            sub_69a5bc(eax_1 ^ &__saved_ebp)
            return eax_34

sub_69a5bc(eax_1 ^ &__saved_ebp)
return eax_5
