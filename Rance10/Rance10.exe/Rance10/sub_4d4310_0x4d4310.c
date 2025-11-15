// 函数: sub_4d4310
// 地址: 0x4d4310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float ebx = arg3
int32_t ebp = *(ebx i+ 0x128)

if (ebp == 0)
    float xmm0 = sub_4d4850(arg1, arg2, arg7, ebx)
    int32_t* eax = arg6
    int64_t* ecx = arg9
    float xmm1_2 = eax[2] f* xmm0
    *ecx = _mm_unpacklo_ps(*eax * xmm0, eax[1] f* xmm0)
    ecx[1].d = xmm1_2
    return xmm1_2

int32_t esi = *(ebx i+ 0x34)
void* eax_2 = *(arg1 + 0xc)
float xmm0_1 = *(eax_2 + 0x20)
float xmm3_5 = _mm_cvtepi32_ps(zx.o(esi))
float xmm0_2 = *(eax_2 + 0x24)
int32_t* ecx_1
float xmm0_3
ecx_1, xmm0_3 = sub_4d4850(arg1, arg2, xmm3_5, ebx)
int32_t* eax_3 = arg6
float xmm7[0x4] = *(ebx i+ 0x12c)
arg6 = xmm7
float xmm1_4 = *eax_3 * xmm0_3
float xmm1_6 = eax_3[1] f* xmm0_3
float xmm1_8 = eax_3[2] f* xmm0_3
float var_60 = *(ebx i+ 0x130)
float xmm0_5 = *(ebx i+ 0x134)

if (ebp == 2)
    int32_t* eax_5
    
    if (sub_4dd530(*(arg1 + 0x14), ebx i+ 0x138) == 0)
        eax_5, ecx_1 = sub_4ce060(*(arg1 + 0xc), ebx i+ 0x138)
    else
        eax_5, ecx_1 = sub_4dd5b0(*(arg1 + 0x14), ebx i+ 0x138)
    
    if (eax_5 != 0)
        int32_t eax_7 = (*(*eax_5 + 0x10))()
        int32_t eax_8 = (*(*eax_5 + 0x14))()
        double xmm3_6 = 2.3283064370807974e-10
        int32_t i = 0
        float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_7))
        float xmm5_2 = _mm_cvtepi32_ps(zx.o(eax_8))
        float var_44_1 = xmm4_2
        float var_40_1 = xmm5_2
        
        do
            float edx_2 = arg8
            int32_t* edi_2 = *(edx_2 i+ 8)
            int32_t xmm1_9
            
            if (edi_2 != 0)
                *edi_2 += 1
                
                if (*edi_2 s>= 0x209)
                    sub_4a7690(edi_2)
                    edx_2 = arg8
                    *edi_2 = 0
                
                int32_t eax_10 = edi_2[*edi_2 + 1]
                xmm1_9 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_10)) f+
                    *((eax_10 u>> 0x1f << 3) + &data_79aa70)) * xmm3_6)
            else
                xmm1_9 = (zx.o(0)).d
            
            int32_t* edi_3 = *(edx_2 i+ 8)
            int32_t ecx_8 = int.d(xmm4_2 f* xmm1_9)
            int32_t var_50_1 = ecx_8
            int32_t xmm1_10
            
            if (edi_3 != 0)
                *edi_3 += 1
                
                if (*edi_3 s>= 0x209)
                    sub_4a7690(edi_3)
                    ecx_8 = var_50_1
                    *edi_3 = 0
                
                int32_t eax_13 = edi_3[*edi_3 + 1]
                xmm1_10 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_13)) f+
                    *((eax_13 u>> 0x1f << 3) + &data_79aa70)) * xmm3_6)
            else
                xmm1_10 = (zx.o(0)).d
            
            int32_t edi_4 = int.d(xmm5_2 f* xmm1_10)
            void* eax_16
            eax_16, ecx_1 = (*(*eax_5 + 8))(ecx_8, edi_4)
            
            if (*(eax_16 + 3) != 0)
                ebx = arg3
                float xmm1_15 = _mm_cvtepi32_ps(zx.o(edi_4))
                xmm7 = _mm_cvtepi32_ps(zx.o(var_50_1)) * xmm0_2 + arg6
                var_60 = xmm1_15 * xmm0_2 + var_60
                goto label_4d459d
            
            xmm3_6 = 2.3283064370807974e-10
            i += 1
            xmm4_2 = var_44_1
            xmm5_2 = var_40_1
        while (i s< 0x64)
        
        ebx = arg3
    
    xmm7 = arg6

label_4d459d:
float xmm3_8 = *(ebx i+ 0xb4) * arg2
float xmm5_3 = *(*(arg1 + 0xc) + 0xc)
float xmm4_4 = *(ebx i+ 0x38) * arg7
float xmm1_13 = _mm_cvtepi32_ps(zx.o(esi)) * xmm5_3
float xmm2_3 = xmm1_13 * xmm1_13

if (not(xmm3_8 <= 0f))
    float xmm4_6 = xmm5_3 * arg7
    xmm4_4 = xmm4_6 * xmm4_6 * xmm3_8 * 0.5f / (xmm2_3 * xmm3_8 * 0.5f)
else if (not(0 f<= xmm3_8))
    float xmm1_18 = xmm1_13 - xmm5_3 * arg7
    xmm4_4 = 1f - xmm1_18 * xmm1_18 * xmm3_8 * 0.5f / (xmm2_3 * xmm3_8 * 0.5f)

float var_28 = xmm0_5
float xmm1_24 = *arg4 * xmm0_1
bool cond:1 = *(*(arg1 + 0x10) + 0x88) != 1
float xmm5_6 = arg4[1] f* xmm0_1
float xmm6_2 = arg4[2] f* xmm0_1
int64_t xmm2_15 = var_60
int64_t var_30 = _mm_unpacklo_ps(xmm7, xmm2_15)

if (not(cond:1))
    var_30.d = *arg5 f+ xmm7
    var_30:4.d = arg5[1] f+ xmm2_15
    float var_28_1 = arg5[2] + xmm0_5

float xmm3_10 = *arg5 + xmm1_24
float xmm2_17 = arg5[1] + xmm5_6
float xmm1_26 = arg5[2] + xmm6_2
float var_18 = xmm3_10
float var_24 = xmm3_10 + xmm1_4 * xmm0_1
int32_t var_74_4 = int.d(xmm4_4 * 1024f)
float var_14 = xmm2_17
float var_20 = xmm2_17 + xmm1_6 * xmm0_1
float var_10_2 = xmm1_26
float var_1c = xmm1_26 + xmm1_8 * xmm0_1
void var_c
int32_t* eax_23 = sub_5622f0(&var_24, &var_18, &var_c, &var_24, &var_30, ecx_1)
*arg9 = *eax_23
int32_t eax_24 = eax_23[2]
arg9[2] = eax_24
float xmm2_19 = *arg9 - xmm1_24
float xmm1_28 = arg9[1] f- xmm5_6
float xmm0_36 = arg9[2] f- xmm6_2
*arg9 = xmm2_19
arg9[1] = xmm1_28
arg9[2] = xmm0_36
float xmm2_20 = xmm2_19 - *arg5
*arg9 = xmm2_20
float xmm1_29 = xmm1_28 - arg5[1]
arg9[1] = xmm1_29
float xmm0_37 = xmm0_36 - arg5[2]
*arg9 = xmm2_20 * xmm0_2
arg9[1] = xmm1_29 * xmm0_2
arg9[2] = xmm0_37 * xmm0_2
return eax_24
