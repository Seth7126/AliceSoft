// 函数: sub_4d40c0
// 地址: 0x4d40c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double xmm1_5 = 2.3283064370807974e-10
int32_t* esi = *(arg1 + 8)
int32_t xmm5

if (esi != 0)
    *esi += 1
    
    if (*esi s>= 0x209)
        sub_4a7690(esi)
        *esi = 0
    
    int32_t eax_2 = esi[*esi + 1]
    xmm5 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_79aa70))
        * xmm1_5)
else
    xmm5 = (zx.o(0)).d

int32_t* esi_1 = *(arg1 + 8)
float xmm7

if (esi_1 != 0)
    *esi_1 += 1
    
    if (*esi_1 s>= 0x209)
        sub_4a7690(esi_1)
        *esi_1 = 0
    
    int32_t eax_4 = esi_1[*esi_1 + 1]
    xmm7 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_79aa70))
        * xmm1_5)
else
    xmm7 = (zx.o(0)).d

int32_t* esi_2 = *(arg1 + 8)
int32_t xmm4

if (esi_2 != 0)
    *esi_2 += 1
    
    if (*esi_2 s>= 0x209)
        sub_4a7690(esi_2)
        *esi_2 = 0
    
    int32_t eax_6 = esi_2[*esi_2 + 1]
    xmm4 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_6)) f+ *((eax_6 u>> 0x1f << 3) + &data_79aa70))
        * xmm1_5)
else
    xmm4 = (zx.o(0)).d

int32_t* esi_3 = *(arg1 + 8)
float xmm6

if (esi_3 != 0)
    *esi_3 += 1
    
    if (*esi_3 s>= 0x209)
        sub_4a7690(esi_3)
        *esi_3 = 0
    
    int32_t eax_8 = esi_3[*esi_3 + 1]
    xmm6 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_79aa70))
        * xmm1_5)
else
    xmm6 = (zx.o(0)).d

int32_t* esi_4 = *(arg1 + 8)
int32_t xmm3

if (esi_4 != 0)
    *esi_4 += 1
    
    if (*esi_4 s>= 0x209)
        sub_4a7690(esi_4)
        *esi_4 = 0
    
    int32_t eax_10 = esi_4[*esi_4 + 1]
    xmm3 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_10)) f+ *((eax_10 u>> 0x1f << 3) + &data_79aa70))
        * xmm1_5)
else
    xmm3 = (zx.o(0)).d

int32_t* esi_5 = *(arg1 + 8)
float xmm0_21

if (esi_5 != 0)
    *esi_5 += 1
    
    if (*esi_5 s>= 0x209)
        sub_4a7690(esi_5)
        *esi_5 = 0
    
    int32_t eax_12 = esi_5[*esi_5 + 1]
    xmm0_21 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_12)) f+
        *((eax_12 u>> 0x1f << 3) + &data_79aa70)) * xmm1_5)
else
    xmm0_21 = (zx.o(0)).d

float xmm5_1 = xmm5 f- xmm7
float xmm4_1 = xmm4 f- xmm6
float xmm3_1 = xmm3 f- xmm0_21
*arg2 = xmm5_1
arg2[1] = xmm4_1
arg2[2] = xmm3_1
float xmm0_30 = sub_484cc0(xmm4_1 * xmm4_1 + xmm5_1 * xmm5_1 + xmm3_1 * xmm3_1)
xmm0_30 f- 0
uint32_t eax
eax:1.b = (xmm0_30 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_30, 0f) ? 1 : 0) << 2
    | (xmm0_30 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    int32_t eax_14 = arg2[2]
    *arg2 = *arg2
    arg2[2] = eax_14
    return eax_14

float xmm1_4 = 1f / xmm0_30
float xmm3_2 = xmm3_1 * xmm1_4
float var_8 = xmm4_1 * xmm1_4
*arg2 = (xmm5_1 * xmm1_4).q
arg2[2] = xmm3_2
return xmm3_2
