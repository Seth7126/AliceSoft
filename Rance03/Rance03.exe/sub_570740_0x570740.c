// 函数: sub_570740
// 地址: 0x570740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float eax = arg3
int32_t xmm1

if (eax s> 1)
    xmm1 = _mm_cvtepi32_ps(zx.o(arg2)) / _mm_cvtepi32_ps(zx.o(eax i- 1))
else
    xmm1 = (zx.o(0)).d

int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x38e38e39, *(arg1 + 0x1a8) - *(arg1 + 0x1a4))
arg2 = arg1 + 8
int32_t edx_1 = edx s>> 3
int32_t eax_6

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    eax_6 = **(arg1 + 0x1a4)
else
    eax_6 = 0

float xmm0_4 = _mm_cvtepi32_ps(zx.o(eax_6))
float xmm2_4 = (_mm_cvtepi32_ps(zx.o(sub_536e60(arg1 + 8))) - xmm0_4) f* xmm1 + xmm0_4
float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x38)))
*(arg1 + 0x2b4) = xmm2_4
*(arg1 + 0x2b8) = xmm0_6 + xmm2_4
struct sealengine::CEmitterPos::VTable* var_28
sub_537640(arg1 + 8, &var_28)
float xmm4 = *(arg1 + 0x44)
double xmm2_5 = 2.3283064370807974e-10
xmm4 f- 0
struct sealengine::CEmitterPos::VTable** eax_9
eax_9:1.b =
    (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm0_8

if (p_1)
    float xmm5_1 = *(arg1 + 0x40)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_11 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_8 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_11)) f+
        *((eax_11 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4 + xmm5_1
else
    xmm0_8 = *(arg1 + 0x40)

*(arg1 + 0x278) = xmm0_8
float xmm4_1 = *(arg1 + 0x50)
xmm4_1 f- 0
eax_9:1.b =
    (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2 | (xmm4_1 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm0_16

if (p_3)
    float xmm5_2 = *(arg1 + 0x4c)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_13 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_16 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_13)) f+
        *((eax_13 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_1 + xmm5_2
else
    xmm0_16 = *(arg1 + 0x4c)

*(arg1 + 0x27c) = xmm0_16
float xmm4_2 = *(arg1 + 0x5c)
xmm4_2 f- 0
eax_9:1.b =
    (xmm4_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, 0f) ? 1 : 0) << 2 | (xmm4_2 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
float xmm0_24

if (p_5)
    float xmm5_3 = *(arg1 + 0x58)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_15 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_24 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_15)) f+
        *((eax_15 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_2 + xmm5_3
else
    xmm0_24 = *(arg1 + 0x58)

*(arg1 + 0x280) = xmm0_24
float xmm4_3 = *(arg1 + 0x68)
xmm4_3 f- 0
eax_9:1.b =
    (xmm4_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_3, 0f) ? 1 : 0) << 2 | (xmm4_3 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}
float xmm0_32

if (p_7)
    float xmm5_4 = *(arg1 + 0x64)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_17 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_32 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_17)) f+
        *((eax_17 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_3 + xmm5_4
else
    xmm0_32 = *(arg1 + 0x64)

*(arg1 + 0x284) = xmm0_32
float xmm4_4 = *(arg1 + 0x74)
xmm4_4 f- 0
eax_9:1.b =
    (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2 | (xmm4_4 < 0f ? 1 : 0)
bool p_9 = unimplemented  {test ah, 0x44}
float xmm0_40

if (p_9)
    float xmm5_5 = *(arg1 + 0x70)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_19 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_40 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_19)) f+
        *((eax_19 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_4 + xmm5_5
else
    xmm0_40 = *(arg1 + 0x70)

*(arg1 + 0x288) = xmm0_40
float xmm4_5 = *(arg1 + 0x80)
xmm4_5 f- 0
eax_9:1.b =
    (xmm4_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_5, 0f) ? 1 : 0) << 2 | (xmm4_5 < 0f ? 1 : 0)
bool p_11 = unimplemented  {test ah, 0x44}
float xmm0_48

if (p_11)
    float xmm5_6 = *(arg1 + 0x7c)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_21 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_48 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_21)) f+
        *((eax_21 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_5 + xmm5_6
else
    xmm0_48 = *(arg1 + 0x7c)

*(arg1 + 0x28c) = xmm0_48
float xmm4_6 = *(arg1 + 0x8c)
xmm4_6 f- 0
eax_9:1.b =
    (xmm4_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_6, 0f) ? 1 : 0) << 2 | (xmm4_6 < 0f ? 1 : 0)
bool p_13 = unimplemented  {test ah, 0x44}
float xmm0_56

if (p_13)
    float xmm5_7 = *(arg1 + 0x88)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_23 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_56 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_23)) f+
        *((eax_23 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_6 + xmm5_7
else
    xmm0_56 = *(arg1 + 0x88)

*(arg1 + 0x290) = xmm0_56
float xmm4_7 = *(arg1 + 0x98)
xmm4_7 f- 0
eax_9:1.b =
    (xmm4_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_7, 0f) ? 1 : 0) << 2 | (xmm4_7 < 0f ? 1 : 0)
bool p_15 = unimplemented  {test ah, 0x44}
float xmm0_64

if (p_15)
    float xmm5_8 = *(arg1 + 0x94)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_25 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_64 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_25)) f+
        *((eax_25 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_7 + xmm5_8
else
    xmm0_64 = *(arg1 + 0x94)

*(arg1 + 0x294) = xmm0_64
float xmm4_8 = *(arg1 + 0xa4)
xmm4_8 f- 0
eax_9:1.b =
    (xmm4_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_8, 0f) ? 1 : 0) << 2 | (xmm4_8 < 0f ? 1 : 0)
bool p_17 = unimplemented  {test ah, 0x44}
float xmm0_72

if (p_17)
    float xmm1_3 = *(arg1 + 0xa0)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_27 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_72 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_27)) f+
        *((eax_27 u>> 0x1f << 3) + &data_709480)) * xmm2_5) - 0.5f) * xmm4_8 + xmm1_3
else
    xmm0_72 = *(arg1 + 0xa0)

*(arg1 + 0x298) = xmm0_72
float var_68
EnumC13Lines::EnumC13Lines(&var_68)
float var_14
sub_47b7f0(&var_68, var_14)
float var_58
float var_48
float var_38
float var_18
float xmm3_4 = var_68 * var_18 + var_58 * 0f + var_48 * 0f + var_38
float var_c = xmm3_4
float var_64
float var_54
float var_44
float var_34
float xmm4_13 = var_64 * var_18 + var_54 * 0f + var_44 * 0f + var_34
float var_8 = xmm4_13
float var_60
float var_50
float var_40
float var_30
float xmm5_13 = var_60 * var_18 + var_50 * 0f + var_40 * 0f + var_30
float var_4 = xmm5_13
float var_5c
float var_4c
float var_3c
float var_2c
float xmm6_4 = var_5c * var_18 + var_4c * 0f + var_3c * 0f + var_2c
xmm6_4 - 1f
double* eax_29
eax_29:1.b =
    (xmm6_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm6_4, 1f) ? 1 : 0) << 2 | (xmm6_4 < 1f ? 1 : 0)
bool p_19 = unimplemented  {test ah, 0x44}

if (p_19)
    xmm6_4 f- 0
    eax_29:1.b = (xmm6_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_4, 0f) ? 1 : 0) << 2
        | (xmm6_4 < 0f ? 1 : 0)
    bool p_21 = unimplemented  {test ah, 0x44}
    
    if (p_21)
        float xmm0_96 = 1f / xmm6_4
        var_c = xmm3_4 * xmm0_96
        float var_8_1 = xmm4_13 * xmm0_96
        var_4 = xmm5_13 * xmm0_96

float* ecx_15 = arg1 + 0x2a8
*ecx_15 = var_c.q
ecx_15[2] = var_4
int32_t eax_31 = *(arg1 + 0x2c)
float var_74
int32_t* eax_34

if (eax_31 == 1)
    eax_34 = sub_576010(*(arg1 + 0x30), &var_74, arg4)
label_570dba:
    ecx_15 = arg1 + 0x2a8
    *ecx_15 = *eax_34 + *ecx_15
    ecx_15[1] = eax_34[1] f+ ecx_15[1]
    ecx_15[2] = eax_34[2] f+ ecx_15[2]
else if (eax_31 == 2)
    eax_34 = sub_576180(*(arg1 + 0x30), &var_c, arg4)
    goto label_570dba
float var_24
float xmm2_7[0x4] = var_24 + *ecx_15
float var_20
int64_t xmm1_7 = ecx_15[1] + var_20
float var_1c
float xmm0_105 = ecx_15[2] + var_1c
*(arg1 + 0x2bc) = 0
*(arg1 + 0x29c) = _mm_unpacklo_ps(xmm2_7, xmm1_7)
arg3 = *(arg1 + 0x2b4)
*(arg1 + 0x2a4) = xmm0_105
struct sealengine::CEmitterPos::VTable** eax_36 = sub_537640(arg1 + 8, &var_28)
struct sealengine::CEmitterPos::VTable* var_c8
struct sealengine::CEmitterPos::VTable** eax_37 = sub_537640(arg2, &var_c8)
float xmm2_13 = eax_37[1] f- eax_36[1]
float xmm3_9 = eax_37[2] f- eax_36[2]
float xmm4_16 = eax_37[3] f- eax_36[3]
var_c = xmm2_13
float var_8_2 = xmm3_9
float var_4_2 = xmm4_16
float xmm1_11 = xmm3_9 * xmm3_9 + xmm2_13 * xmm2_13 + xmm4_16 * xmm4_16
float xmm1_12 = _mm_sqrt_ss(xmm1_11, xmm1_11)
xmm1_12 f- 0
eax_37:1.b = (xmm1_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_12, 0f) ? 1 : 0) << 2
    | (xmm1_12 < 0f ? 1 : 0)
bool p_23 = unimplemented  {test ah, 0x44}

if (p_23)
    float xmm0_112 = 1f / xmm1_12
    var_c = xmm2_13 * xmm0_112
    float var_8_3 = xmm3_9 * xmm0_112
    var_4_2 = xmm4_16 * xmm0_112

*(arg1 + 0x2cc) = var_c.q
*(arg1 + 0x2d4) = var_4_2
int32_t ecx_19 = *(arg1 + 0xa8)
int64_t* eax_41
void var_f8
float var_ec
float var_a4
float var_8c
void var_bc

if (ecx_19 u> 6)
    eax_41 = sub_575ea0(&var_bc, arg4)
else
    switch (ecx_19)
        case 0
            eax_41 = sub_575ea0(&var_74, arg4)
        case 1
            float var_d4
            float* eax_40 = sub_59f780(arg1 + 0xac, &var_d4)
            void var_e0
            eax_41 = sub_5762a0(*(arg1 + 0xb8), &var_e0, eax_40, arg4)
        case 2
            eax_41 = sub_5762a0(*(arg1 + 0xb8), &var_f8, arg1 + 0x2cc, arg4)
        case 3
            float xmm3_13 = *(arg1 + 0xb8)
            var_c = *(arg1 + 0x2cc) ^ 0x80000000
            int32_t var_8_4 = *(arg1 + 0x2d0) ^ 0x80000000
            int32_t var_4_3 = *(arg1 + 0x2d4) ^ 0x80000000
            void var_98
            eax_41 = sub_5762a0(xmm3_13, &var_98, &var_c, arg4)
        case 4
            *(arg1 + 0x2b4)
            int32_t var_108_7 = ecx_19
            float* eax_43 = sub_47c420(sub_56ecf0(&var_20, *(arg1 + 0x28)), &var_68)
            float var_b0
            float var_80
            eax_41 = sub_47b190(sub_59f780(arg1 + 0xac, &var_b0), &var_80, eax_43)
        case 5
            eax_41 = sub_576370(&var_8c, sub_59f780(arg1 + 0xac, &var_ec), arg4)
        case 6
            eax_41 = sub_59f780(arg1 + 0x2a8, &var_a4)
*(arg1 + 0x2c0) = *eax_41
*(arg1 + 0x2c8) = eax_41[1].d
*(arg4 i+ 4) += 1

if (*(arg4 i+ 4) s>= 0x209)
    sub_47cac0(arg4)
    *(arg4 i+ 4) = 0

double xmm1_13 = 2.3283064370807974e-10
int32_t eax_48 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
*(arg1 + 0x2d8) = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_48)) f+
    *((eax_48 u>> 0x1f << 3) + &data_709480)) * xmm1_13)
float xmm3_14 = *(arg1 + 0xe4)
xmm3_14 f- 0
uint32_t eax_49
eax_49:1.b = (xmm3_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_14, 0f) ? 1 : 0) << 2
    | (xmm3_14 < 0f ? 1 : 0)
bool p_25 = unimplemented  {test ah, 0x44}
float xmm0_126

if (p_25)
    float xmm4_18 = *(arg1 + 0xe0)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_51 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_126 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_51)) f+
        *((eax_51 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_14 + xmm4_18
else
    xmm0_126 = *(arg1 + 0xe0)

*(arg1 + 0x2dc) = xmm0_126
float xmm3_15 = *(arg1 + 0xf0)
xmm3_15 f- 0
eax_49:1.b = (xmm3_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_15, 0f) ? 1 : 0) << 2
    | (xmm3_15 < 0f ? 1 : 0)
bool p_27 = unimplemented  {test ah, 0x44}
float xmm0_134

if (p_27)
    float xmm4_19 = *(arg1 + 0xec)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_53 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_134 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_53)) f+
        *((eax_53 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_15 + xmm4_19
else
    xmm0_134 = *(arg1 + 0xec)

*(arg1 + 0x2e0) = xmm0_134
float xmm3_16 = *(arg1 + 0xfc)
xmm3_16 f- 0
eax_49:1.b = (xmm3_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_16, 0f) ? 1 : 0) << 2
    | (xmm3_16 < 0f ? 1 : 0)
bool p_29 = unimplemented  {test ah, 0x44}
float xmm0_142

if (p_29)
    float xmm4_20 = *(arg1 + 0xf8)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_55 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_142 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_55)) f+
        *((eax_55 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_16 + xmm4_20
else
    xmm0_142 = *(arg1 + 0xf8)

*(arg1 + 0x2e4) = xmm0_142
float xmm3_17 = *(arg1 + 0x108)
xmm3_17 f- 0
eax_49:1.b = (xmm3_17 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_17, 0f) ? 1 : 0) << 2
    | (xmm3_17 < 0f ? 1 : 0)
bool p_31 = unimplemented  {test ah, 0x44}
float xmm0_150

if (p_31)
    float xmm4_21 = *(arg1 + 0x104)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_57 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_150 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_57)) f+
        *((eax_57 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_17 + xmm4_21
else
    xmm0_150 = *(arg1 + 0x104)

*(arg1 + 0x2e8) = xmm0_150
float xmm3_18 = *(arg1 + 0x120)
xmm3_18 f- 0
eax_49:1.b = (xmm3_18 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_18, 0f) ? 1 : 0) << 2
    | (xmm3_18 < 0f ? 1 : 0)
bool p_33 = unimplemented  {test ah, 0x44}
float xmm0_158

if (p_33)
    float xmm4_22 = *(arg1 + 0x11c)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_59 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_158 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_59)) f+
        *((eax_59 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_18 + xmm4_22
else
    xmm0_158 = *(arg1 + 0x11c)

*(arg1 + 0x2ec) = xmm0_158
float xmm3_19 = *(arg1 + 0x12c)
xmm3_19 f- 0
eax_49:1.b = (xmm3_19 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_19, 0f) ? 1 : 0) << 2
    | (xmm3_19 < 0f ? 1 : 0)
bool p_35 = unimplemented  {test ah, 0x44}
float xmm0_166

if (p_35)
    float xmm4_23 = *(arg1 + 0x128)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_61 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_166 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_61)) f+
        *((eax_61 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_19 + xmm4_23
else
    xmm0_166 = *(arg1 + 0x128)

*(arg1 + 0x2f0) = xmm0_166
float xmm3_20 = *(arg1 + 0x138)
xmm3_20 f- 0
eax_49:1.b = (xmm3_20 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_20, 0f) ? 1 : 0) << 2
    | (xmm3_20 < 0f ? 1 : 0)
bool p_37 = unimplemented  {test ah, 0x44}
float xmm0_174

if (p_37)
    float xmm4_24 = *(arg1 + 0x134)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_63 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_174 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_63)) f+
        *((eax_63 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_20 + xmm4_24
else
    xmm0_174 = *(arg1 + 0x134)

*(arg1 + 0x2f4) = xmm0_174
float xmm3_21 = *(arg1 + 0x144)
xmm3_21 f- 0
eax_49:1.b = (xmm3_21 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_21, 0f) ? 1 : 0) << 2
    | (xmm3_21 < 0f ? 1 : 0)
bool p_39 = unimplemented  {test ah, 0x44}
float xmm0_182

if (p_39)
    float xmm4_25 = *(arg1 + 0x140)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_65 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_182 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_65)) f+
        *((eax_65 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_21 + xmm4_25
else
    xmm0_182 = *(arg1 + 0x140)

*(arg1 + 0x2f8) = xmm0_182
float xmm3_22 = *(arg1 + 0x150)
xmm3_22 f- 0
eax_49:1.b = (xmm3_22 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_22, 0f) ? 1 : 0) << 2
    | (xmm3_22 < 0f ? 1 : 0)
bool p_41 = unimplemented  {test ah, 0x44}
float xmm0_190

if (p_41)
    float xmm4_26 = *(arg1 + 0x14c)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_67 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_190 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_67)) f+
        *((eax_67 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_22 + xmm4_26
else
    xmm0_190 = *(arg1 + 0x14c)

*(arg1 + 0x2fc) = xmm0_190
float xmm3_23 = *(arg1 + 0x15c)
xmm3_23 f- 0
eax_49:1.b = (xmm3_23 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_23, 0f) ? 1 : 0) << 2
    | (xmm3_23 < 0f ? 1 : 0)
bool p_43 = unimplemented  {test ah, 0x44}
float xmm0_198

if (p_43)
    float xmm4_27 = *(arg1 + 0x158)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_69 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_198 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_69)) f+
        *((eax_69 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_23 + xmm4_27
else
    xmm0_198 = *(arg1 + 0x158)

*(arg1 + 0x300) = xmm0_198
float xmm3_24 = *(arg1 + 0x168)
xmm3_24 f- 0
eax_49:1.b = (xmm3_24 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_24, 0f) ? 1 : 0) << 2
    | (xmm3_24 < 0f ? 1 : 0)
bool p_45 = unimplemented  {test ah, 0x44}
float xmm0_206

if (p_45)
    float xmm4_28 = *(arg1 + 0x164)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_71 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_206 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_71)) f+
        *((eax_71 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_24 + xmm4_28
else
    xmm0_206 = *(arg1 + 0x164)

float* eax_73 = &arg3
arg2 = nullptr
arg3 = xmm0_206

if (xmm0_206 <= 0f)
    eax_73 = &arg2

*(arg1 + 0x304) = *eax_73
float xmm3_25 = *(arg1 + 0x174)
xmm3_25 f- 0
float eax_74
eax_74:1.b = (xmm3_25 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_25, 0f) ? 1 : 0) << 2
    | (xmm3_25 < 0f ? 1 : 0)
bool p_47 = unimplemented  {test ah, 0x44}
float xmm0_214

if (p_47)
    float xmm4_29 = *(arg1 + 0x170)
    *(arg4 i+ 4) += 1
    
    if (*(arg4 i+ 4) s>= 0x209)
        sub_47cac0(arg4)
        *(arg4 i+ 4) = 0
    
    int32_t eax_76 = *(arg4 i+ (*(arg4 i+ 4) << 2) + 8)
    xmm0_214 = (_mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_76)) f+
        *((eax_76 u>> 0x1f << 3) + &data_709480)) * xmm1_13) - 0.5f) * xmm3_25 + xmm4_29
else
    xmm0_214 = *(arg1 + 0x170)

void** eax_78 = &arg3
arg2 = nullptr
arg3 = xmm0_214

if (xmm0_214 <= 0f)
    eax_78 = &arg2

void* result = *eax_78
*(arg1 + 0x308) = result
return result
