// 函数: sub_6bcba0
// 地址: 0x6bcba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = *(arg3 + 4)
__alloca_probe_16(arg9 << 2)
int32_t __saved_edi
int32_t* var_1c = &__saved_edi
int32_t i_4

if (*(eax_2 + 0x1f4) == 0)
    i_4 = arg9
else
    i_4 = *(eax_2 + 0x1f8) - arg8

double xmm2 = 0.5
uint128_t xmm3 = -0x8000000000000000
int32_t i_1 = arg9

if (i_4 s<= arg9)
    i_1 = i_4

uint128_t xmm7 = 0x4330000000000000
int32_t xmm0 = (zx.o(0)).d
int32_t i_3 = i_1
int32_t i_5 = 0
int32_t var_14 = 0

if (i_1 s> 0)
    int32_t* ecx_1 = arg5
    int32_t* edx_1 = arg7 - arg5
    int32_t* edi_1 = edx_1
    float* edx_3 = arg6 - arg5
    int32_t i_2 = i_1
    float* esi_2 = edx_3
    int32_t* var_28_1 = arg10 - arg5
    int32_t i
    
    do
        if (arg7 == 0 || *(edi_1 + ecx_1) == 0)
            bool cond:1_1 = 0f f<= *(arg4 - arg5 + ecx_1)
            uint32_t xmm4_2[0x4] = _mm_sqrt_sd(0, _mm_cvtps_pd(*ecx_1 f/ *(esi_2 + ecx_1))) + xmm2
            double xmm3_1[0x2] = _mm_and_ps(xmm3, xmm4_2)
            double xmm2_1 = xmm4_2[0].q
            double xmm1_3 =
                _mm_or_ps(_mm_and_ps(xmm7, _mm_cmpeq_sd(xmm4_2[0].q ^ xmm3_1[0], xmm7, 1)), xmm3_1)
            double xmm2_3 = xmm2_1 + xmm1_3 - xmm1_3
            xmm3 = -0x8000000000000000
            double xmm2_4 =
                xmm2_3 - _mm_and_ps(_mm_cmpeq_sd(xmm2_3 f- xmm4_2, xmm3_1, 6), 0x3ff0000000000000)
            
            if (cond:1_1)
                *(var_28_1 + ecx_1) = int.d(xmm2_4)
                esi_2 = edx_3
            else
                *(var_28_1 + ecx_1) = int.d(xmm2_4 ^ (data_79aac0).q)
                edi_1 = edx_1
            
            i_1 = i_3
            xmm2 = 0.5
        
        ecx_1 = &ecx_1[1]
        i = i_1
        i_1 -= 1
        i_3 = i_1
    while (i != 1)
    i_5 = i_2
    xmm0 = (zx.o(0)).d

if (i_5 s< arg9)
    int32_t* ecx_2 = arg10 + (i_5 << 2)
    i_1 = arg7
    void* esi_5 = i_1 - arg4
    float* var_10_3 = arg4 - arg10
    float* esi_7 = arg6 - arg10
    float* var_c_1 = arg5 - arg10
    int32_t edi_6 = 0
    float* esi_9 = var_10_3
    
    do
        if (i_1 == 0 || *(esi_5 + esi_9 + ecx_2) == 0)
            int32_t* eax_11 = var_c_1 + ecx_2
            float xmm1_5[0x2] = *eax_11 f/ *(esi_7 + ecx_2)
            esi_9 = var_10_3
            
            if (0.25f f<= xmm1_5 || (arg7 != 0 && i_5 s< arg2 - arg8))
                bool cond:3_1 = 0f f<= *(esi_9 + ecx_2)
                uint32_t xmm4_4[0x4] = _mm_sqrt_sd(0, _mm_cvtps_pd(xmm1_5)) + xmm2
                uint32_t xmm3_2[0x4] = _mm_and_ps(xmm3, xmm4_4)
                double xmm2_6 = xmm4_4[0].q
                double xmm1_8 = _mm_or_ps(
                    _mm_and_ps(xmm7, _mm_cmpeq_sd(xmm4_4[0].q ^ xmm3_2[0].q, xmm7, 1)), xmm3_2)
                double xmm2_8 = xmm2_6 + xmm1_8 - xmm1_8
                int128_t xmm2_9 = xmm2_8
                    - _mm_and_ps(_mm_cmpeq_sd(xmm2_8 f- xmm4_4, xmm3_2, 6), 0x3ff0000000000000)
                
                if (not(cond:3_1))
                    xmm2_9 ^= data_79aac0
                
                int32_t eax_14 = int.d(xmm2_9)
                *ecx_2 = eax_14
                *(var_c_1 + ecx_2) = _mm_cvtepi32_ps(zx.o(eax_14 * eax_14)) f* *(esi_7 + ecx_2)
                xmm0 = var_14
            else
                xmm0 = xmm0 f+ xmm1_5
                (&__saved_edi)[edi_6] = eax_11
                edi_6 += 1
                esi_9 = var_10_3
                var_14 = xmm0
        
        xmm2 = 0.5
        i_5 += 1
        xmm3 = -0x8000000000000000
        ecx_2 = &ecx_2[1]
        i_1 = arg7
    while (i_5 s< arg9)
    
    int32_t* esi_11 = arg5
    
    if (edi_6 != 0)
        i_1 = _qsort(var_1c, edi_6, 4, sub_6bc8b0)
        int32_t edx_9 = 0
        
        if (edi_6 s> 0)
            int128_t xmm1_10 = var_14
            int32_t eax_26
            
            do
                int32_t ecx_5 = (var_1c[edx_9] - esi_11) s>> 2
                
                if (fconvert.d(xmm1_10) f< *(eax_2 + 0x200))
                    eax_26 = arg10
                    *(eax_26 + (ecx_5 << 2)) = 0
                    esi_11[ecx_5] = 0
                else
                    xmm1_10 = xmm1_10 f- 1f
                    *(arg10 + (ecx_5 << 2)) =
                        int.d(fconvert.t((*(arg4 + (ecx_5 << 2)) & 0xbf800000) | 0x3f800000))
                    esi_11 = arg5
                    eax_26 = *(arg6 + (ecx_5 << 2))
                    esi_11[ecx_5] = eax_26
                
                edx_9 += 1
            while (edx_9 s< edi_6)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_26

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return i_1
