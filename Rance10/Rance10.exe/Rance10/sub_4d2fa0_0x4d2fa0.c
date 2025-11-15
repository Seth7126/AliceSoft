// 函数: sub_4d2fa0
// 地址: 0x4d2fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_1 = ecx
double xmm5 = 2.3283064370807974e-10
int32_t xmm7 = (zx.o(0)).d
float ebx = arg3
float edi = arg2
int32_t* esi = *(ebx i+ 8)
float xmm1 = *(edi i+ 0xe0)
int32_t xmm4

if (esi != 0)
    *esi += 1
    
    if (*esi s>= 0x209)
        sub_4a7690(esi)
        *esi = 0
    
    int32_t eax_2 = esi[*esi + 1]
    xmm4 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_79aa70))
        * xmm5)
else
    xmm4 = (zx.o(0)).d

int32_t* esi_1 = *(ebx i+ 8)
float xmm4_2 = (xmm4 f- 0.5f) * xmm1
float xmm1_1 = *(edi i+ 0xe8)
int32_t xmm0_5

if (esi_1 != 0)
    *esi_1 += 1
    
    if (*esi_1 s>= 0x209)
        sub_4a7690(esi_1)
        *esi_1 = 0
    
    int32_t eax_5 = esi_1[*esi_1 + 1]
    xmm0_5 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_5)) f+ *((eax_5 u>> 0x1f << 3) + &data_79aa70))
        * xmm5)
else
    xmm0_5 = (zx.o(0)).d

int32_t* esi_2 = *(ebx i+ 8)
float xmm1_2 = *(edi i+ 0xf0)
arg2 = (xmm0_5 f- 0.5f) * xmm1_1
int32_t xmm3

if (esi_2 != 0)
    *esi_2 += 1
    
    if (*esi_2 s>= 0x209)
        sub_4a7690(esi_2)
        *esi_2 = 0
    
    int32_t eax_8 = esi_2[*esi_2 + 1]
    xmm3 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_79aa70))
        * xmm5)
else
    xmm3 = (zx.o(0)).d

int32_t* esi_3 = *(ebx i+ 8)
float xmm3_2 = (xmm3 f- 0.5f) * xmm1_2
float xmm1_3 = *(edi i+ 0xf8)
int32_t xmm0_16

if (esi_3 != 0)
    *esi_3 += 1
    
    if (*esi_3 s>= 0x209)
        sub_4a7690(esi_3)
        *esi_3 = 0
    
    int32_t eax_11 = esi_3[*esi_3 + 1]
    xmm0_16 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_11)) f+
        *((eax_11 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
else
    xmm0_16 = (zx.o(0)).d

int32_t* esi_4 = *(ebx i+ 8)
float xmm6 = *(edi i+ 0x100)
arg3 = (xmm0_16 f- 0.5f) * xmm1_3
int32_t xmm1_4

if (esi_4 != 0)
    *esi_4 += 1
    
    if (*esi_4 s>= 0x209)
        sub_4a7690(esi_4)
        *esi_4 = 0
    
    int32_t eax_14 = esi_4[*esi_4 + 1]
    xmm1_4 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_14)) f+
        *((eax_14 u>> 0x1f << 3) + &data_79aa70)) * xmm5)
else
    xmm1_4 = (zx.o(0)).d

int32_t* esi_5 = *(ebx i+ 8)
float xmm1_6 = (xmm1_4 f- 0.5f) * xmm6
float xmm6_1 = *(edi i+ 0x108)

if (esi_5 != 0)
    *esi_5 += 1
    
    if (*esi_5 s>= 0x209)
        sub_4a7690(esi_5)
        *esi_5 = 0
    
    int32_t eax_17 = esi_5[*esi_5 + 1]
    xmm7 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_17)) f+ *((eax_17 u>> 0x1f << 3) + &data_79aa70))
        * xmm5)

float xmm7_2 = (xmm7 f- 0.5f) * xmm6_1

if (*(edi i+ 0x10c) != 0)
    arg2 = xmm4_2
    xmm7_2 = xmm1_6
    arg3 = xmm3_2

float xmm2_1 = *(edi i+ 0xdc) + xmm4_2
float xmm5_2 = *(edi i+ 0xec) + xmm3_2
float xmm6_3 = *(edi i+ 0xfc) + xmm1_6
float xmm1_8 = *(edi i+ 0x38) * arg1
float xmm0_35 = (*(edi i+ 0xe4) + arg2 - xmm2_1) * xmm1_8 + xmm2_1
float xmm3_7 = (*(edi i+ 0xf4) + arg3 - xmm5_2) * xmm1_8 + xmm5_2
arg4[2] = (*(edi i+ 0x104) + xmm7_2 - xmm6_3) * xmm1_8 + xmm6_3
*arg4 = xmm0_35
arg4[1] = xmm3_7
return arg4
