// 函数: sub_5ace80
// 地址: 0x5ace80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float eax_46 = arg3
int32_t xmm1

if (eax_46 s> 1)
    xmm1 = _mm_cvtepi32_ps(zx.o(arg2)) / _mm_cvtepi32_ps(zx.o(eax_46 i- 1))
else
    xmm1 = (zx.o(0)).d

sub_5ad740(arg1, xmm1, arg4)
int64_t var_14
float var_c

if (**(arg1 + 0x290) != 0)
    *(arg1 + 0x39c)
    sub_5795c0(&var_14, *(arg1 + 0x24))
else
    float eax_2 = data_7fd4e0
    var_14 = data_7fd4d8.q
    var_c = eax_2
    int32_t var_8_1 = 0
    int32_t var_4_1 = 0

sub_5ad810(arg1, arg4)
uint32_t eax_3
eax_3.b = *(arg1 + 0xac)
double xmm1_3 = 2.3283064370807974e-10
*(arg1 + 0x374) = eax_3.b
eax_3.b = *(arg1 + 0xad)
*(arg1 + 0x375) = eax_3.b
eax_3.b = *(arg1 + 0xae)
*(arg1 + 0x376) = eax_3.b
eax_3.b = *(arg1 + 0xaf)
*(arg1 + 0x377) = eax_3.b
float xmm3 = *(arg1 + 0xb8)
xmm3 f- 0
eax_3:1.b =
    (xmm3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3, 0f) ? 1 : 0) << 2 | (xmm3 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm0_4

if (p_1)
    float xmm4_1 = *(arg1 + 0xb4)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_5 = arg4[*arg4 + 1]
    xmm0_4 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_5)) f+ *((eax_5 u>> 0x1f << 3) + &data_79aa70))
        * xmm1_3) - 0.5f) * xmm3 + xmm4_1
else
    xmm0_4 = *(arg1 + 0xb4)

*(arg1 + 0x378) = xmm0_4
float xmm3_1 = *(arg1 + 0xc4)
xmm3_1 f- 0
eax_3:1.b =
    (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm0_12

if (p_3)
    float xmm4_2 = *(arg1 + 0xc0)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_7 = arg4[*arg4 + 1]
    xmm0_12 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_7)) f+
        *((eax_7 u>> 0x1f << 3) + &data_79aa70)) * xmm1_3) - 0.5f) * xmm3_1 + xmm4_2
else
    xmm0_12 = *(arg1 + 0xc0)

*(arg1 + 0x37c) = xmm0_12
float xmm3_2 = *(arg1 + 0xd0)
xmm3_2 f- 0
eax_3:1.b =
    (xmm3_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2 | (xmm3_2 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
float xmm0_20

if (p_5)
    float xmm4_3 = *(arg1 + 0xcc)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_9 = arg4[*arg4 + 1]
    xmm0_20 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_9)) f+
        *((eax_9 u>> 0x1f << 3) + &data_79aa70)) * xmm1_3) - 0.5f) * xmm3_2 + xmm4_3
else
    xmm0_20 = *(arg1 + 0xcc)

*(arg1 + 0x380) = xmm0_20
sub_5adba0(arg1, &var_14, arg4)
float xmm2_3[0x4] = *(arg1 + 0x390) f+ var_14.d
int64_t xmm1_5 = *(arg1 + 0x394) f+ var_14:4.d
float xmm0_29 = *(arg1 + 0x398) + var_c
*(arg1 + 0x3a8) = 0
*(arg1 + 0x384) = _mm_unpacklo_ps(xmm2_3, xmm1_5)
float xmm2_5 = *(arg1 + 0x39c)
*(arg1 + 0x38c) = xmm0_29
int32_t* eax_12 = sub_579280(arg1 + 4, xmm2_5, &var_14)
*(arg1 + 0x3b8) = *eax_12
*(arg1 + 0x3c0) = eax_12[2]
sub_5add70(arg1, arg4)
*arg4 += 1

if (*arg4 s>= 0x209)
    sub_4a7690(arg4)
    *arg4 = 0

double xmm2_6 = 2.3283064370807974e-10
int32_t eax_15 = arg4[*arg4 + 1]
*(arg1 + 0x3c4) = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_15)) f+
    *((eax_15 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6)
float xmm4_4 = *(arg1 + 0x134)
xmm4_4 f- 0
uint32_t eax_16
eax_16:1.b =
    (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2 | (xmm4_4 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}
float xmm0_36

if (p_7)
    float xmm5_1 = *(arg1 + 0x130)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_18 = arg4[*arg4 + 1]
    xmm0_36 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_18)) f+
        *((eax_18 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_4 + xmm5_1
else
    xmm0_36 = *(arg1 + 0x130)

*(arg1 + 0x3c8) = xmm0_36
float xmm4_5 = *(arg1 + 0x140)
xmm4_5 f- 0
eax_16:1.b =
    (xmm4_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 0f) ? 1 : 0) << 2 | (xmm4_5 < 0f ? 1 : 0)
bool p_9 = unimplemented  {test ah, 0x44}
float xmm0_44

if (p_9)
    float xmm5_2 = *(arg1 + 0x13c)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_20 = arg4[*arg4 + 1]
    xmm0_44 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_20)) f+
        *((eax_20 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_5 + xmm5_2
else
    xmm0_44 = *(arg1 + 0x13c)

*(arg1 + 0x3cc) = xmm0_44
float xmm4_6 = *(arg1 + 0x14c)
xmm4_6 f- 0
eax_16:1.b =
    (xmm4_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_6, 0f) ? 1 : 0) << 2 | (xmm4_6 < 0f ? 1 : 0)
bool p_11 = unimplemented  {test ah, 0x44}
float xmm0_52

if (p_11)
    float xmm5_3 = *(arg1 + 0x148)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_22 = arg4[*arg4 + 1]
    xmm0_52 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_22)) f+
        *((eax_22 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_6 + xmm5_3
else
    xmm0_52 = *(arg1 + 0x148)

*(arg1 + 0x3d0) = xmm0_52
float xmm4_7 = *(arg1 + 0x158)
xmm4_7 f- 0
eax_16:1.b =
    (xmm4_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_7, 0f) ? 1 : 0) << 2 | (xmm4_7 < 0f ? 1 : 0)
bool p_13 = unimplemented  {test ah, 0x44}
float xmm0_60

if (p_13)
    float xmm5_4 = *(arg1 + 0x154)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_24 = arg4[*arg4 + 1]
    xmm0_60 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_24)) f+
        *((eax_24 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_7 + xmm5_4
else
    xmm0_60 = *(arg1 + 0x154)

*(arg1 + 0x3d4) = xmm0_60
float xmm4_8 = *(arg1 + 0x180)
xmm4_8 f- 0
eax_16:1.b =
    (xmm4_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_8, 0f) ? 1 : 0) << 2 | (xmm4_8 < 0f ? 1 : 0)
bool p_15 = unimplemented  {test ah, 0x44}
float xmm0_68

if (p_15)
    float xmm5_5 = *(arg1 + 0x17c)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_26 = arg4[*arg4 + 1]
    xmm0_68 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_26)) f+
        *((eax_26 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_8 + xmm5_5
else
    xmm0_68 = *(arg1 + 0x17c)

*(arg1 + 0x3d8) = xmm0_68
float xmm4_9 = *(arg1 + 0x18c)
xmm4_9 f- 0
eax_16:1.b =
    (xmm4_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_9, 0f) ? 1 : 0) << 2 | (xmm4_9 < 0f ? 1 : 0)
bool p_17 = unimplemented  {test ah, 0x44}
float xmm0_76

if (p_17)
    float xmm5_6 = *(arg1 + 0x188)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_28 = arg4[*arg4 + 1]
    xmm0_76 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_28)) f+
        *((eax_28 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_9 + xmm5_6
else
    xmm0_76 = *(arg1 + 0x188)

*(arg1 + 0x3dc) = xmm0_76
float xmm4_10 = *(arg1 + 0x198)
xmm4_10 f- 0
eax_16:1.b = (xmm4_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_10, 0f) ? 1 : 0) << 2
    | (xmm4_10 < 0f ? 1 : 0)
bool p_19 = unimplemented  {test ah, 0x44}
float xmm0_84

if (p_19)
    float xmm5_7 = *(arg1 + 0x194)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_30 = arg4[*arg4 + 1]
    xmm0_84 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_30)) f+
        *((eax_30 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_10 + xmm5_7
else
    xmm0_84 = *(arg1 + 0x194)

*(arg1 + 0x3e0) = xmm0_84
float xmm4_11 = *(arg1 + 0x1a4)
xmm4_11 f- 0
eax_16:1.b = (xmm4_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_11, 0f) ? 1 : 0) << 2
    | (xmm4_11 < 0f ? 1 : 0)
bool p_21 = unimplemented  {test ah, 0x44}
float xmm0_92

if (p_21)
    float xmm5_8 = *(arg1 + 0x1a0)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_32 = arg4[*arg4 + 1]
    xmm0_92 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_32)) f+
        *((eax_32 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_11 + xmm5_8
else
    xmm0_92 = *(arg1 + 0x1a0)

*(arg1 + 0x3e4) = xmm0_92
float xmm4_12 = *(arg1 + 0x1b0)
xmm4_12 f- 0
eax_16:1.b = (xmm4_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_12, 0f) ? 1 : 0) << 2
    | (xmm4_12 < 0f ? 1 : 0)
bool p_23 = unimplemented  {test ah, 0x44}
float xmm0_100

if (p_23)
    float xmm5_9 = *(arg1 + 0x1ac)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_34 = arg4[*arg4 + 1]
    xmm0_100 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_34)) f+
        *((eax_34 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_12 + xmm5_9
else
    xmm0_100 = *(arg1 + 0x1ac)

*(arg1 + 0x3e8) = xmm0_100
float xmm4_13 = *(arg1 + 0x1bc)
xmm4_13 f- 0
eax_16:1.b = (xmm4_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_13, 0f) ? 1 : 0) << 2
    | (xmm4_13 < 0f ? 1 : 0)
bool p_25 = unimplemented  {test ah, 0x44}
float xmm0_108

if (p_25)
    float xmm5_10 = *(arg1 + 0x1b8)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_36 = arg4[*arg4 + 1]
    xmm0_108 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_36)) f+
        *((eax_36 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_13 + xmm5_10
else
    xmm0_108 = *(arg1 + 0x1b8)

eax_16.b = *(arg1 + 0x1c0)
*(arg1 + 0x3f0) = eax_16.b
eax_16.b = *(arg1 + 0x1c1)
*(arg1 + 0x3f1) = eax_16.b
eax_16.b = *(arg1 + 0x1c2)
*(arg1 + 0x3ec) = xmm0_108
*(arg1 + 0x3f2) = eax_16.b
float xmm4_14 = *(arg1 + 0x1fc)
xmm4_14 f- 0
eax_16:1.b = (xmm4_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_14, 0f) ? 1 : 0) << 2
    | (xmm4_14 < 0f ? 1 : 0)
bool p_27 = unimplemented  {test ah, 0x44}
float xmm0_116

if (p_27)
    float xmm5_11 = *(arg1 + 0x1f8)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_38 = arg4[*arg4 + 1]
    xmm0_116 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_38)) f+
        *((eax_38 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_14 + xmm5_11
else
    xmm0_116 = *(arg1 + 0x1f8)

int32_t* eax_40 = &arg3
arg2 = 0f
arg3 = xmm0_116

if (xmm0_116 <= 0f)
    eax_40 = &arg2

*(arg1 + 0x3f4) = *eax_40
float xmm4_15 = *(arg1 + 0x208)
xmm4_15 f- 0
int32_t eax_41
eax_41:1.b = (xmm4_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_15, 0f) ? 1 : 0) << 2
    | (xmm4_15 < 0f ? 1 : 0)
bool p_29 = unimplemented  {test ah, 0x44}
float xmm0_124

if (p_29)
    float xmm5_12 = *(arg1 + 0x204)
    *arg4 += 1
    
    if (*arg4 s>= 0x209)
        sub_4a7690(arg4)
        *arg4 = 0
    
    int32_t eax_43 = arg4[*arg4 + 1]
    xmm0_124 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_43)) f+
        *((eax_43 u>> 0x1f << 3) + &data_79aa70)) * xmm2_6) - 0.5f) * xmm4_15 + xmm5_12
else
    xmm0_124 = *(arg1 + 0x204)

float* eax_45 = &arg3
arg2 = 0f
arg3 = xmm0_124

if (xmm0_124 <= 0f)
    eax_45 = &arg2

float result = *eax_45
*(arg1 + 0x3f8) = result
return result
