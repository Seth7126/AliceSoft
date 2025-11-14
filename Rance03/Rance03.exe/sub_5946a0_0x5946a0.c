// 函数: sub_5946a0
// 地址: 0x5946a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_184 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm7 = *(arg1 + 0x190)
float xmm5 = *(arg1 + 0x18c)
float xmm2 = *(arg1 + 0x194)
float xmm1_3 = xmm5 * xmm5 + xmm7 * xmm7 + xmm2 * xmm2
float xmm1_4 = _mm_sqrt_ss(xmm1_3, xmm1_3)
xmm1_4 f- 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3:1.b =
    (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2 | (xmm1_4 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float var_170
int64_t var_c8
float xmm5_1
float xmm7_1

if (not(p_1))
    eax_3 = *(arg1 + 0x194)
    var_c8 = *(arg1 + 0x18c)
    xmm7_1 = var_c8:4.d
    xmm5_1 = var_c8.d
    var_170 = eax_3
else
    float xmm0_4 = 1f / xmm1_4
    xmm5_1 = xmm5 * xmm0_4
    xmm7_1 = xmm7 * xmm0_4
    var_170 = xmm2 * xmm0_4

float xmm0_7 = *(arg1 + 0x98)
float xmm2_2 = *(arg1 + 0x9c)
float xmm6 = *(arg1 + 0xa0)
float xmm1_8 = xmm0_7 * xmm0_7 + xmm2_2 * xmm2_2 + xmm6 * xmm6
float xmm1_9 = _mm_sqrt_ss(xmm1_8, xmm1_8)
xmm1_9 f- 0
eax_3:1.b =
    (xmm1_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_9, 0f) ? 1 : 0) << 2 | (xmm1_9 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float xmm2_3
float xmm4_1
struct _EXCEPTION_REGISTRATION_RECORD** xmm6_1

if (not(p_3))
    eax_3 = *(arg1 + 0xa0)
    var_c8 = *(arg1 + 0x98)
    xmm2_3 = var_c8:4.d
    xmm4_1 = var_c8.d
    xmm6_1 = eax_3
else
    float xmm0_12 = 1f / xmm1_9
    xmm4_1 = *(arg1 + 0x98) * xmm0_12
    xmm2_3 = xmm2_2 * xmm0_12
    xmm6_1 = xmm6 * xmm0_12

float xmm2_5 = xmm2_3 * var_170 - xmm6_1 f* xmm7_1
float xmm6_3 = xmm6_1 f* xmm5_1 - var_170 * xmm4_1
float xmm1_12 = xmm7_1 * xmm4_1 - xmm2_3 * xmm5_1
float xmm4_3 = xmm7_1 * xmm1_12 - var_170 * xmm6_3
float xmm4_6 = var_170 * xmm2_5 - xmm5_1 * xmm1_12
float xmm6_5 = xmm5_1 * xmm6_3 - xmm7_1 * xmm2_5
float var_e8 = xmm4_6
float var_ec = xmm4_3
float xmm1_16 = xmm4_3 * xmm4_3 + xmm4_6 * xmm4_6 + xmm6_5 * xmm6_5
float xmm1_17 = _mm_sqrt_ss(xmm1_16, xmm1_16)
xmm1_17 f- 0
eax_3:1.b = (xmm1_17 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_17, 0f) ? 1 : 0) << 2
    | (xmm1_17 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (not(p_5))
    var_c8 = var_ec.q
    float var_c0_4 = xmm6_5
else
    float xmm0_34 = 1f / xmm1_17
    var_c8.d = xmm4_3 * xmm0_34
    var_c8:4.d = xmm4_6 * xmm0_34
    float var_c0_3 = xmm6_5 * xmm0_34

float xmm1_21 = *(arg1 + 0x90) + xmm7_1
float xmm0_37 = *(arg1 + 0x94) + var_170
var_ec = *(arg1 + 0x8c) + xmm5_1
float var_e8_1 = xmm1_21
float var_e4_1 = xmm0_37
float var_130
sub_5b0c00(&var_ec, arg1 + 0x8c, &var_130, &var_ec, &var_c8)
float* result_1
sub_5969c0(arg2, arg3, &result_1)
int32_t var_4 = 0
int64_t* var_68
sub_52ada0(&var_68, 8)
void* eax_6 = arg1 + 0xa4
int32_t i = 0
void* var_b8_1 = eax_6
int64_t* ebx_1 = var_68
float var_12c
float var_128
float var_124
float var_120
float var_11c
float var_118
float var_114
float var_110
float var_10c
float var_108
float var_104
float var_100
float var_fc
float var_f8
float var_f4
float var_dc
float var_a8
void var_50

do
    int32_t* eax_7 = sub_5b0ec0(eax_6, &var_a8)
    int32_t* eax_8 = sub_5b0ec0(arg1 + 0xe8, &var_50)
    float xmm4_7 = eax_8[1]
    float xmm1_22 = *eax_8
    float xmm3_1 = eax_8[2]
    float xmm2_11 = eax_8[3]
    float xmm6_7 = eax_7[0xb]
    float xmm5_6 =
        *eax_7 * xmm1_22 + eax_7[4] f* xmm4_7 + eax_7[8] f* xmm3_1 + eax_7[0xc] f* xmm2_11
    float xmm5_11 =
        eax_7[1] f* xmm1_22 + eax_7[5] f* xmm4_7 + eax_7[9] f* xmm3_1 + eax_7[0xd] f* xmm2_11
    float xmm5_16 =
        eax_7[2] f* xmm1_22 + eax_7[6] f* xmm4_7 + eax_7[0xa] f* xmm3_1 + eax_7[0xe] f* xmm2_11
    float xmm5_17 = eax_7[3]
    float xmm4_8 = eax_7[0xf]
    float xmm3_2 = eax_8[7]
    float xmm2_12 = eax_8[5]
    float xmm1_26 = xmm5_17 * xmm1_22 + eax_7[7] f* xmm4_7 + xmm6_7 * xmm3_1 + xmm4_8 * xmm2_11
    float xmm1_27 = eax_8[6]
    float xmm7_7 =
        eax_8[4] f* *eax_7 + xmm2_12 f* eax_7[4] + xmm1_27 f* eax_7[8] + xmm3_2 f* eax_7[0xc]
    float xmm7_12 =
        eax_8[4] f* eax_7[1] + xmm2_12 f* eax_7[5] + xmm1_27 f* eax_7[9] + xmm3_2 f* eax_7[0xd]
    float xmm7_16 =
        eax_8[4] f* eax_7[2] + xmm2_12 f* eax_7[6] + xmm1_27 f* eax_7[0xa] + xmm3_2 f* eax_7[0xe]
    float xmm2_14 = eax_8[9]
    float xmm1_29 = eax_8[0xa]
    float xmm0_88 = eax_8[4] f* xmm5_17 + xmm2_12 f* eax_7[7] + xmm1_27 * xmm6_7 + xmm3_2 * xmm4_8
    float xmm3_4 = eax_8[0xb]
    float xmm7_21 =
        eax_8[8] f* *eax_7 + xmm2_14 f* eax_7[4] + xmm1_29 f* eax_7[8] + xmm3_4 f* eax_7[0xc]
    float xmm7_26 =
        eax_8[8] f* eax_7[1] + xmm2_14 f* eax_7[5] + xmm1_29 f* eax_7[9] + xmm3_4 f* eax_7[0xd]
    float xmm7_30 =
        eax_8[8] f* eax_7[2] + xmm2_14 f* eax_7[6] + xmm1_29 f* eax_7[0xa] + xmm3_4 f* eax_7[0xe]
    float xmm2_16 = eax_8[0xd]
    float xmm1_31 = eax_8[0xe]
    float xmm0_113 = eax_8[8] f* xmm5_17 + xmm2_14 f* eax_7[7] + xmm1_29 * xmm6_7 + xmm3_4 * xmm4_8
    float xmm3_6 = eax_8[0xf]
    float xmm7_35 =
        eax_8[0xc] f* *eax_7 + xmm2_16 f* eax_7[4] + xmm1_31 f* eax_7[8] + xmm3_6 f* eax_7[0xc]
    float xmm7_40 =
        eax_8[0xc] f* eax_7[1] + xmm2_16 f* eax_7[5] + xmm1_31 f* eax_7[9] + xmm3_6 f* eax_7[0xd]
    float xmm7_44 =
        eax_8[0xc] f* eax_7[2] + xmm2_16 f* eax_7[6] + xmm1_31 f* eax_7[0xa] + xmm3_6 f* eax_7[0xe]
    float xmm0_138 =
        eax_8[0xc] f* xmm5_17 + xmm2_16 f* eax_7[7] + xmm1_31 * xmm6_7 + xmm3_6 * xmm4_8
    float* result_2 = result_1
    float xmm2_22 = *(result_2 + i + 8)
    float xmm1_89 = *(result_2 + i)
    float xmm7_52 = *(result_2 + i + 4)
        * (var_120 * xmm7_12 + var_130 * xmm7_7 + var_110 * xmm7_16 + var_100 * xmm0_88)
        + xmm1_89 * (var_120 * xmm5_11 + var_130 * xmm5_6 + var_110 * xmm5_16 + var_100 * xmm1_26)
    float xmm7_53 = xmm7_52 + xmm2_22
        * (var_120 * xmm7_26 + var_130 * xmm7_21 + var_110 * xmm7_30 + var_100 * xmm0_113)
    float var_174_5 = xmm7_53
    float xmm0_242 =
        xmm7_53 + var_120 * xmm7_40 + var_130 * xmm7_35 + var_110 * xmm7_44 + var_100 * xmm0_138
    float xmm7_55 = *(result_2 + i + 4)
        * (var_11c * xmm7_12 + var_12c * xmm7_7 + var_10c * xmm7_16 + var_fc * xmm0_88)
    float var_174_6 = xmm0_242
    var_dc = xmm0_242
    float xmm7_57 = xmm7_55
        + xmm1_89 * (var_11c * xmm5_11 + var_12c * xmm5_6 + var_10c * xmm5_16 + var_fc * xmm1_26)
        + xmm2_22 * (var_11c * xmm7_26 + var_12c * xmm7_21 + var_10c * xmm7_30 + var_fc * xmm0_113)
    float xmm7_58 =
        xmm7_57 + var_11c * xmm7_40 + var_12c * xmm7_35 + var_10c * xmm7_44 + var_fc * xmm0_138
    float xmm5_28 = *(result_2 + i + 4)
        * (var_118 * xmm7_12 + var_128 * xmm7_7 + var_108 * xmm7_16 + var_f8 * xmm0_88)
        + xmm1_89 * (var_118 * xmm5_11 + var_128 * xmm5_6 + var_108 * xmm5_16 + var_f8 * xmm1_26)
    float var_158_2 = xmm7_58
    float var_d8_1 = xmm7_58
    float xmm5_30 = xmm5_28
        + xmm2_22 * (var_118 * xmm7_26 + var_128 * xmm7_21 + var_108 * xmm7_30 + var_f8 * xmm0_113)
        + var_118 * xmm7_40 + var_128 * xmm7_35 + var_108 * xmm7_44 + var_f8 * xmm0_138
    float xmm4_19 = *(result_2 + i + 4)
        * (var_114 * xmm7_12 + var_124 * xmm7_7 + var_104 * xmm7_16 + var_f4 * xmm0_88)
        + xmm1_89 * (var_114 * xmm5_11 + var_124 * xmm5_6 + var_104 * xmm5_16 + var_f4 * xmm1_26)
    float var_d4_1 = xmm5_30
    float xmm4_21 = xmm4_19
        + xmm2_22 * (var_114 * xmm7_26 + var_124 * xmm7_21 + var_104 * xmm7_30 + var_f4 * xmm0_113)
        + var_114 * xmm7_40 + var_124 * xmm7_35 + var_104 * xmm7_44 + var_f4 * xmm0_138
    xmm4_21 - 1f
    result_2:1.b = (xmm4_21 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_21, 1f) ? 1 : 0) << 2
        | (xmm4_21 < 1f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        xmm4_21 f- 0
        result_2:1.b = (xmm4_21 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_21, 0f) ? 1 : 0) << 2
            | (xmm4_21 < 0f ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        
        if (p_9)
            float xmm0_251 = 1f / xmm4_21
            var_dc = xmm0_242 * xmm0_251
            float var_d8_2 = xmm7_58 * xmm0_251
            var_d4_1 = xmm5_30 * xmm0_251
    
    *(ebx_1 + i) = var_dc.q
    *(ebx_1 + i + 8) = var_d4_1
    i += 0xc
    eax_6 = var_b8_1
while (i s< 0x60)

var_ec = 3.40282347e+38f
float var_e8_2 = 3.40282347e+38f
float var_e4_2 = 3.40282347e+38f
var_dc = -3.40282347e+38f
float var_d8_3 = -3.40282347e+38f
float var_d4_2 = -3.40282347e+38f
sub_5933c0(&var_68, &var_ec, &var_dc)
float xmm0_255 = (var_dc + var_ec) * 0.5f
float xmm2_24 = *(arg1 + 0x284)
float xmm1_95 = var_d8_3 - var_e8_2 + xmm2_24
float xmm1_98 = (xmm2_24 ^ (data_7094c0).d) + var_e8_2
float xmm0_258 = (var_d4_2 + var_e4_2) * 0.5f
int32_t* eax_10 = sub_5b0ec0(&var_130, &var_50)
float xmm5_33 = eax_10[6] f* xmm1_98
float xmm7_60 = eax_10[7] f* xmm1_98
float xmm6_20 = eax_10[4] f* xmm1_98 + *eax_10 * xmm0_255 + eax_10[8] f* xmm0_258 f+ eax_10[0xc]
float xmm4_25 = eax_10[5] f* xmm1_98 + eax_10[1] f* xmm0_255 + eax_10[9] f* xmm0_258
float xmm0_268 = eax_10[2] f* xmm0_255
var_ec = xmm6_20
float xmm4_26 = xmm4_25 f+ eax_10[0xd]
float var_e8_3 = xmm4_26
float xmm5_36 = xmm5_33 + xmm0_268 + eax_10[0xa] f* xmm0_258 f+ eax_10[0xe]
float var_e4_3 = xmm5_36
float xmm7_63 = xmm7_60 + eax_10[3] f* xmm0_255 + eax_10[0xb] f* xmm0_258 f+ eax_10[0xf]
xmm7_63 - 1f
eax_10:1.b = (xmm7_63 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_63, 1f) ? 1 : 0) << 2
    | (xmm7_63 < 1f ? 1 : 0)
bool p_11 = unimplemented  {test ah, 0x44}

if (p_11)
    xmm7_63 f- 0
    eax_10:1.b = (xmm7_63 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_63, 0f) ? 1 : 0) << 2
        | (xmm7_63 < 0f ? 1 : 0)
    bool p_13 = unimplemented  {test ah, 0x44}
    
    if (p_13)
        float xmm0_275 = 1f / xmm7_63
        xmm6_20 = xmm6_20 * xmm0_275
        xmm4_26 = xmm4_26 * xmm0_275
        xmm5_36 = xmm5_36 * xmm0_275
        var_ec = xmm6_20
        float var_e8_4 = xmm4_26
        float var_e4_4 = xmm5_36

float var_d8_4 = xmm4_26 + xmm7_1
var_dc = xmm5_1 + xmm6_20
float var_d4_3 = xmm5_36 + var_170
sub_5b0c00(&var_dc, &var_ec, &var_130, &var_dc, &var_c8)
float var_168_2 = 0f
float var_14c_3 = 0f
void* edi_1 = &result_1[2]
int32_t i_2 = 8
float xmm1_153
float xmm5_97
int32_t i_1

do
    int32_t* eax_12 = sub_5b0ec0(var_b8_1, &var_50)
    int32_t* eax_13 = sub_5b0ec0(arg1 + 0xe8, &var_a8)
    float xmm6_21 = eax_12[0xb]
    float xmm1_100 = *eax_13
    float xmm4_28 = eax_13[1]
    float xmm3_18 = eax_13[2]
    float xmm2_26 = eax_13[3]
    float xmm5_42 =
        xmm1_100 f* *eax_12 + eax_12[4] f* xmm4_28 + eax_12[8] f* xmm3_18 + eax_12[0xc] f* xmm2_26
    float xmm5_47 =
        eax_12[1] f* xmm1_100 + eax_12[5] f* xmm4_28 + eax_12[9] f* xmm3_18 + eax_12[0xd] f* xmm2_26
    float xmm5_52 = eax_12[2] f* xmm1_100 + eax_12[6] f* xmm4_28 + eax_12[0xa] f* xmm3_18
        + eax_12[0xe] f* xmm2_26
    float xmm5_53 = eax_12[3]
    float xmm4_29 = eax_12[0xf]
    float xmm3_19 = eax_13[7]
    float xmm2_27 = eax_13[5]
    float xmm1_104 =
        xmm5_53 * xmm1_100 + eax_12[7] f* xmm4_28 + xmm6_21 * xmm3_18 + xmm4_29 * xmm2_26
    float xmm1_105 = eax_13[6]
    float xmm7_69 =
        eax_13[4] f* *eax_12 + xmm2_27 f* eax_12[4] + xmm1_105 f* eax_12[8] + xmm3_19 f* eax_12[0xc]
    float xmm7_74 = eax_13[4] f* eax_12[1] + xmm2_27 f* eax_12[5] + xmm1_105 f* eax_12[9]
        + xmm3_19 f* eax_12[0xd]
    float xmm7_78 = eax_13[4] f* eax_12[2] + xmm2_27 f* eax_12[6] + xmm1_105 f* eax_12[0xa]
        + xmm3_19 f* eax_12[0xe]
    float xmm2_29 = eax_13[9]
    float xmm1_107 = eax_13[0xa]
    float xmm0_328 =
        eax_13[4] f* xmm5_53 + xmm2_27 f* eax_12[7] + xmm1_105 * xmm6_21 + xmm3_19 * xmm4_29
    float xmm3_21 = eax_13[0xb]
    float xmm7_83 =
        eax_13[8] f* *eax_12 + xmm2_29 f* eax_12[4] + xmm1_107 f* eax_12[8] + xmm3_21 f* eax_12[0xc]
    float xmm7_88 = eax_13[8] f* eax_12[1] + xmm2_29 f* eax_12[5] + xmm1_107 f* eax_12[9]
        + xmm3_21 f* eax_12[0xd]
    float xmm7_92 = eax_13[8] f* eax_12[2] + xmm2_29 f* eax_12[6] + xmm1_107 f* eax_12[0xa]
        + xmm3_21 f* eax_12[0xe]
    float xmm2_31 = eax_13[0xd]
    float xmm1_109 = eax_13[0xe]
    float xmm0_353 =
        eax_13[8] f* xmm5_53 + xmm2_29 f* eax_12[7] + xmm1_107 * xmm6_21 + xmm3_21 * xmm4_29
    float xmm3_23 = eax_13[0xf]
    float xmm7_97 = eax_13[0xc] f* *eax_12 + xmm2_31 f* eax_12[4] + xmm1_109 f* eax_12[8]
        + xmm3_23 f* eax_12[0xc]
    float xmm7_102 = eax_13[0xc] f* eax_12[1] + xmm2_31 f* eax_12[5] + xmm1_109 f* eax_12[9]
        + xmm3_23 f* eax_12[0xd]
    float xmm7_106 = eax_13[0xc] f* eax_12[2] + xmm2_31 f* eax_12[6] + xmm1_109 f* eax_12[0xa]
        + xmm3_23 f* eax_12[0xe]
    float xmm0_378 =
        eax_13[0xc] f* xmm5_53 + xmm2_31 f* eax_12[7] + xmm1_109 * xmm6_21 + xmm3_23 * xmm4_29
    float xmm2_37 = *(edi_1 - 4)
    float xmm1_148 = *edi_1
    float xmm0_475 = *(edi_1 - 8)
    float xmm5_82 =
        (var_120 * xmm5_47 + var_130 * xmm5_42 + var_110 * xmm5_52 + var_100 * xmm1_104) * xmm0_475
        + (var_120 * xmm7_74 + var_130 * xmm7_69 + var_110 * xmm7_78 + var_100 * xmm0_328)
        * xmm2_37
    float xmm5_84 = xmm5_82
        + (var_130 * xmm7_83 + var_120 * xmm7_88 + var_110 * xmm7_92 + var_100 * xmm0_353)
        * xmm1_148 + var_120 * xmm7_102 + var_130 * xmm7_97 + var_110 * xmm7_106 + var_100 * xmm0_378
    float var_170_3 = xmm5_84
    float xmm5_87 =
        (var_11c * xmm5_47 + var_12c * xmm5_42 + var_10c * xmm5_52 + var_fc * xmm1_104) * xmm0_475
        + (var_11c * xmm7_74 + var_12c * xmm7_69 + var_10c * xmm7_78 + var_fc * xmm0_328) * xmm2_37
    float xmm5_88 = xmm5_87
        + (var_11c * xmm7_88 + var_12c * xmm7_83 + var_10c * xmm7_92 + var_fc * xmm0_353)
        * xmm1_148
    float var_16c_5 = xmm5_88
    float xmm6_40 =
        xmm5_88 + var_11c * xmm7_102 + var_12c * xmm7_97 + var_10c * xmm7_106 + var_fc * xmm0_378
    float xmm4_39 =
        (var_118 * xmm5_47 + var_128 * xmm5_42 + var_108 * xmm5_52 + var_f8 * xmm1_104) * xmm0_475
        + (var_118 * xmm7_74 + var_128 * xmm7_69 + var_108 * xmm7_78 + var_f8 * xmm0_328) * xmm2_37
    float xmm4_40 = xmm4_39
        + (var_118 * xmm7_88 + var_128 * xmm7_83 + var_108 * xmm7_92 + var_f8 * xmm0_353)
        * xmm1_148
    float var_174_9 = xmm4_40
    float xmm4_42 =
        (var_114 * xmm5_47 + var_124 * xmm5_42 + var_104 * xmm5_52 + var_f4 * xmm1_104) * xmm0_475
    float var_e0_2 = xmm4_42
    float xmm5_96 =
        xmm4_40 + var_118 * xmm7_102 + var_128 * xmm7_97 + var_108 * xmm7_106 + var_f8 * xmm0_378
    float xmm2_40 = xmm4_42
        + (var_114 * xmm7_74 + var_124 * xmm7_69 + var_104 * xmm7_78 + var_f4 * xmm0_328) * xmm2_37
        + (var_114 * xmm7_88 + var_124 * xmm7_83 + var_104 * xmm7_92 + var_f4 * xmm0_353)
        * xmm1_148
    float xmm2_41 =
        xmm2_40 + var_114 * xmm7_102 + var_124 * xmm7_97 + var_104 * xmm7_106 + var_f4 * xmm0_378
    xmm2_41 - 1f
    eax_13:1.b = (xmm2_41 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_41, 1f) ? 1 : 0) << 2
        | (xmm2_41 < 1f ? 1 : 0)
    bool p_15 = unimplemented  {test ah, 0x44}
    
    if (p_15)
        xmm2_41 f- 0
        eax_13:1.b = (xmm2_41 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_41, 0f) ? 1 : 0) << 2
            | (xmm2_41 < 0f ? 1 : 0)
        bool p_17 = unimplemented  {test ah, 0x44}
        
        if (p_17)
            float xmm0_478 = 1f / xmm2_41
            xmm6_40 = xmm6_40 * xmm0_478
            var_170_3 = var_170_3 * xmm0_478
            xmm5_96 = xmm5_96 * xmm0_478
    
    float xmm0_479 = 1f / xmm6_40
    float xmm0_481 = __andps_xmmxud_memxud(xmm0_479 * xmm5_96, data_709490.o)
    xmm1_153 = __andps_xmmxud_memxud(xmm0_479 * var_170_3, data_709490.o)
    
    if (xmm1_153 <= var_168_2)
        xmm1_153 = var_168_2
    else
        var_168_2 = xmm1_153
    
    xmm5_97 = var_14c_3
    
    if (not(xmm0_481 <= xmm5_97))
        xmm5_97 = xmm0_481
        var_14c_3 = xmm5_97
    
    edi_1 += 0xc
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
float xmm2_42 = 1f / xmm1_153
float xmm0_483 = xmm1_95 f- *(arg1 + 0x284)
var_a8 = xmm2_42
float xmm3_34 = 1f / xmm5_97
float xmm1_154 = 1f / xmm0_483
float xmm2_43 = xmm2_42 * 0f
float xmm0_485 = xmm1_154 * xmm1_95
float var_a4 = xmm2_43
float var_a0 = xmm2_43
float xmm6_44 = (xmm1_95 f* *(arg1 + 0x284) * xmm1_154) ^ (data_7094c0).d
float xmm1_156 = xmm0_485 * 0f
float var_9c = xmm2_43
float var_94 = xmm0_485 * 2f - 1f
float var_90 = xmm1_156 + 0.5f
float xmm0_491 = xmm3_34 * 0f
float var_84 = xmm0_491
float var_7c = xmm0_491
float xmm0_493 = xmm6_44 * 0f
float var_70 = xmm0_493
float var_6c = xmm0_493
float var_8c = xmm1_156 + 1f
*(arg1 + 0x1bc) = var_130.o
float var_80 = xmm3_34 * 0.5f
*(arg1 + 0x1cc) = var_120.o
float var_74 = xmm6_44 * 2f
*(arg1 + 0x1dc) = var_110.o
*(arg1 + 0x1ec) = var_100.o
*(arg1 + 0x1fc) = var_a8.o
*(arg1 + 0x20c) = xmm1_156.o
*(arg1 + 0x21c) = xmm0_491.o
*(arg1 + 0x22c) = xmm0_493.o
float xmm1_158 = *(arg1 + 0x1bc)
float xmm5_98 = *(arg1 + 0x1c0)
float xmm3_36 = *(arg1 + 0x1c4)
float xmm2_44 = *(arg1 + 0x1c8)
float xmm4_47 = xmm1_158 f* *(arg1 + 0x200) + *(arg1 + 0x210) * xmm5_98 + *(arg1 + 0x220) * xmm3_36
    + *(arg1 + 0x230) * xmm2_44
float xmm7_118 = *(arg1 + 0x1fc) * xmm1_158 + *(arg1 + 0x20c) * xmm5_98 + *(arg1 + 0x21c) * xmm3_36
    + *(arg1 + 0x22c) * xmm2_44
float xmm6_50 = *(arg1 + 0x204) * xmm1_158 + *(arg1 + 0x214) * xmm5_98 + *(arg1 + 0x224) * xmm3_36
    + *(arg1 + 0x234) * xmm2_44
float xmm4_52 = *(arg1 + 0x208) * xmm1_158 + *(arg1 + 0x218) * xmm5_98 + *(arg1 + 0x228) * xmm3_36
    + *(arg1 + 0x238) * xmm2_44
float xmm0_533 = *(arg1 + 0x160) * xmm4_47
var_a8 = *(arg1 + 0x14c) * xmm7_118 + *(arg1 + 0x15c) * xmm4_47 + *(arg1 + 0x16c) * xmm6_50
    + *(arg1 + 0x17c) * xmm4_52
float var_a4_1 =
    *(arg1 + 0x150) * xmm7_118 + xmm0_533 + *(arg1 + 0x170) * xmm6_50 + *(arg1 + 0x180) * xmm4_52
float var_a0_1 = *(arg1 + 0x154) * xmm7_118 + *(arg1 + 0x164) * xmm4_47 + *(arg1 + 0x174) * xmm6_50
    + *(arg1 + 0x184) * xmm4_52
float xmm7_119 = *(arg1 + 0x1d0)
float var_9c_1 = *(arg1 + 0x158) * xmm7_118 + *(arg1 + 0x168) * xmm4_47 + *(arg1 + 0x178) * xmm6_50
    + *(arg1 + 0x188) * xmm4_52
float xmm1_179 = *(arg1 + 0x1cc)
float xmm2_47 = *(arg1 + 0x1d4)
float xmm3_37 = *(arg1 + 0x1d8)
float xmm6_55 = xmm1_179 f* *(arg1 + 0x200) + xmm7_119 f* *(arg1 + 0x210)
    + xmm2_47 f* *(arg1 + 0x220) + xmm3_37 f* *(arg1 + 0x230)
float xmm5_103 = xmm1_179 f* *(arg1 + 0x1fc) + xmm7_119 f* *(arg1 + 0x20c)
    + xmm2_47 f* *(arg1 + 0x21c) + xmm3_37 f* *(arg1 + 0x22c)
float xmm4_57 = xmm1_179 f* *(arg1 + 0x204) + xmm7_119 f* *(arg1 + 0x214)
    + xmm2_47 f* *(arg1 + 0x224) + xmm3_37 f* *(arg1 + 0x234)
float xmm7_123 = xmm7_119 f* *(arg1 + 0x218) + xmm1_179 f* *(arg1 + 0x208)
    + xmm2_47 f* *(arg1 + 0x228) + xmm3_37 f* *(arg1 + 0x238)
float xmm1_185 = xmm5_103 f* *(arg1 + 0x14c) + xmm6_55 f* *(arg1 + 0x15c)
    + xmm4_57 f* *(arg1 + 0x16c) + xmm7_123 f* *(arg1 + 0x17c)
float var_94_1 = xmm5_103 f* *(arg1 + 0x150) + xmm6_55 f* *(arg1 + 0x160)
    + xmm4_57 f* *(arg1 + 0x170) + xmm7_123 f* *(arg1 + 0x180)
float var_90_1 = xmm5_103 f* *(arg1 + 0x154) + xmm6_55 f* *(arg1 + 0x164)
    + xmm4_57 f* *(arg1 + 0x174) + xmm7_123 f* *(arg1 + 0x184)
float xmm2_49 = *(arg1 + 0x1e0)
float xmm1_196 = *(arg1 + 0x1e4)
float xmm3_39 = *(arg1 + 0x1e8)
float xmm7_125 = *(arg1 + 0x1dc)
float var_8c_1 = xmm5_103 f* *(arg1 + 0x158) + xmm6_55 f* *(arg1 + 0x168)
    + xmm4_57 f* *(arg1 + 0x178) + xmm7_123 f* *(arg1 + 0x188)
float xmm6_61 = xmm7_125 f* *(arg1 + 0x200) + xmm2_49 f* *(arg1 + 0x210)
    + xmm1_196 f* *(arg1 + 0x220) + xmm3_39 f* *(arg1 + 0x230)
float xmm5_112 = xmm7_125 f* *(arg1 + 0x1fc) + xmm2_49 f* *(arg1 + 0x20c)
    + xmm1_196 f* *(arg1 + 0x21c) + xmm3_39 f* *(arg1 + 0x22c)
float xmm4_63 = xmm7_125 f* *(arg1 + 0x204) + xmm2_49 f* *(arg1 + 0x214)
    + xmm1_196 f* *(arg1 + 0x224) + xmm3_39 f* *(arg1 + 0x234)
float xmm7_129 = xmm7_125 f* *(arg1 + 0x208) + xmm2_49 f* *(arg1 + 0x218)
    + xmm1_196 f* *(arg1 + 0x228) + xmm3_39 f* *(arg1 + 0x238)
float xmm1_202 = xmm6_61 f* *(arg1 + 0x15c) + xmm5_112 f* *(arg1 + 0x14c)
    + xmm4_63 f* *(arg1 + 0x16c) + xmm7_129 f* *(arg1 + 0x17c)
float var_84_1 = xmm5_112 f* *(arg1 + 0x150) + xmm6_61 f* *(arg1 + 0x160)
    + xmm4_63 f* *(arg1 + 0x170) + xmm7_129 f* *(arg1 + 0x180)
float xmm2_51 = *(arg1 + 0x1f0)
float xmm3_41 = *(arg1 + 0x1f8)
float var_80_1 = xmm5_112 f* *(arg1 + 0x154) + xmm6_61 f* *(arg1 + 0x164)
    + xmm4_63 f* *(arg1 + 0x174) + xmm7_129 f* *(arg1 + 0x184)
float xmm1_213 = *(arg1 + 0x1f4)
float xmm7_131 = *(arg1 + 0x1ec)
float var_7c_1 = xmm5_112 f* *(arg1 + 0x158) + xmm6_61 f* *(arg1 + 0x168)
    + xmm4_63 f* *(arg1 + 0x178) + xmm7_129 f* *(arg1 + 0x188)
float xmm6_67 = xmm7_131 f* *(arg1 + 0x200) + xmm2_51 f* *(arg1 + 0x210)
    + xmm1_213 f* *(arg1 + 0x220) + xmm3_41 f* *(arg1 + 0x230)
float xmm5_121 = xmm7_131 f* *(arg1 + 0x1fc) + xmm2_51 f* *(arg1 + 0x20c)
    + xmm1_213 f* *(arg1 + 0x21c) + xmm3_41 f* *(arg1 + 0x22c)
float xmm4_69 = xmm7_131 f* *(arg1 + 0x204) + xmm2_51 f* *(arg1 + 0x214)
    + xmm1_213 f* *(arg1 + 0x224) + xmm3_41 f* *(arg1 + 0x234)
float xmm7_135 = xmm7_131 f* *(arg1 + 0x208) + xmm2_51 f* *(arg1 + 0x218)
    + xmm1_213 f* *(arg1 + 0x228) + xmm3_41 f* *(arg1 + 0x238)
float xmm1_219 = xmm5_121 f* *(arg1 + 0x14c) + xmm6_67 f* *(arg1 + 0x15c)
    + xmm4_69 f* *(arg1 + 0x16c) + xmm7_135 f* *(arg1 + 0x17c)
float var_74_1 = xmm5_121 f* *(arg1 + 0x150) + xmm6_67 f* *(arg1 + 0x160)
    + xmm4_69 f* *(arg1 + 0x170) + xmm7_135 f* *(arg1 + 0x180)
int64_t* eax_14 = var_68
float xmm1_229 = xmm5_121 f* *(arg1 + 0x154) + xmm6_67 f* *(arg1 + 0x164)
    + xmm4_69 f* *(arg1 + 0x174) + xmm7_135 f* *(arg1 + 0x184)
float xmm5_125 = xmm5_121 f* *(arg1 + 0x158) + xmm6_67 f* *(arg1 + 0x168)
    + xmm4_69 f* *(arg1 + 0x178) + xmm7_135 f* *(arg1 + 0x188)
*(arg1 + 0x23c) = var_a8.o
float var_70_1 = xmm1_229
float var_6c_1 = xmm5_125
*(arg1 + 0x24c) = xmm1_185.o
*(arg1 + 0x25c) = xmm1_202.o
*(arg1 + 0x26c) = xmm1_219.o

if (eax_14 != 0)
    j__free(eax_14)

float* result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
