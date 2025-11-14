// 函数: sub_615230
// 地址: 0x615230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdacb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_224
int32_t eax_2 = __security_cookie ^ &var_224
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* var_ec
sub_42f420(&var_ec, 0x40)
int32_t var_4 = 0
float var_54
sub_47b390(&var_54, (**arg3)(eax_4))
int128_t var_94
int32_t* eax_12 = sub_47b390(&var_94, (*(*arg2 + 0xc))())
float xmm2 = var_54
float xmm0 = *eax_12
float xmm7 = eax_12[9]
float xmm5 = eax_12[2]
float xmm4 = eax_12[0xa]
float xmm6 = eax_12[0xe]
float var_50
float var_4c
float var_48
float xmm1_4 = xmm0 * xmm2 + eax_12[4] f* var_50 + eax_12[8] f* var_4c + eax_12[0xc] f* var_48
int32_t xmm0_7 = eax_12[5]
int32_t var_f4 = xmm0_7
var_224 = xmm1_4
float xmm1_9 = xmm0_7 f* var_50 + eax_12[1] f* xmm2 + xmm7 * var_4c + eax_12[0xd] f* var_48
int32_t xmm0_14 = eax_12[6]
int32_t var_114 = xmm0_14
float var_220 = xmm1_9
float xmm2_1 = eax_12[3]
float xmm3_1 = eax_12[0xf]
float xmm1_14 = xmm0_14 * var_50 + xmm5 * xmm2 + xmm4 * var_4c + xmm6 * var_48
int32_t xmm0_21 = eax_12[7]
int32_t var_dc = xmm0_21
float var_21c = xmm1_14
float xmm1_15 = eax_12[0xb]
float xmm7_4 = xmm0_21 f* var_50 + xmm2_1 * var_54 + xmm1_15 * var_4c + xmm3_1 * var_48
float var_218 = xmm7_4
float var_44
float var_40
float var_3c
float var_38
float xmm7_9 = xmm0 * var_44 + eax_12[4] f* var_40 + eax_12[8] f* var_3c + eax_12[0xc] f* var_38
float xmm7_16 = var_f4 f* var_40 + eax_12[1] f* var_44 + eax_12[9] f* var_3c + eax_12[0xd] f* var_38
float var_210 = xmm7_16
float xmm7_21 = var_114 f* var_40 + xmm5 * var_44 + xmm4 * var_3c + xmm6 * var_38
float var_20c = xmm7_21
float xmm7_25 = var_dc f* var_40 + xmm2_1 * var_44 + xmm1_15 * var_3c + xmm3_1 * var_38
float var_208 = xmm7_25
float var_34
float var_30
float var_2c
float var_28
float xmm7_30 = xmm0 * var_34 + eax_12[4] f* var_30 + eax_12[8] f* var_2c + eax_12[0xc] f* var_28
int32_t var_108 = var_f4 f* var_30 + eax_12[1] f* var_34
float xmm7_37 = var_108 f+ eax_12[9] f* var_2c + eax_12[0xd] f* var_28
var_108 = xmm7_37
float var_200 = xmm7_37
float xmm7_42 = var_114 f* var_30 + xmm5 * var_34 + xmm4 * var_2c + xmm6 * var_28
int32_t var_110 = var_dc f* var_30
int32_t var_d8 = xmm7_42
float var_1fc = xmm7_42
float xmm7_46 = var_110 f+ xmm2_1 * var_34 + xmm1_15 * var_2c + xmm3_1 * var_28
var_110 = xmm7_46
float var_1f8 = xmm7_46
float var_24
float var_20
float var_1c
float var_18
float xmm7_51 = xmm0 * var_24 + eax_12[4] f* var_20 + eax_12[8] f* var_1c + eax_12[0xc] f* var_18
var_f4 = var_f4 f* var_20 + eax_12[1] f* var_24
var_f4 = var_f4 f+ eax_12[9] f* var_1c
float xmm7_58 = var_f4 f+ eax_12[0xd] f* var_18
float xmm0_97 = var_114 f* var_20
var_f4 = xmm7_58
float var_1f0 = xmm7_58
int32_t eax_14 = *(*arg2 + 0x18)
float xmm0_100 = xmm0_97 + xmm5 * var_24 + xmm4 * var_1c + xmm6 * var_18
var_114 = xmm0_100
float var_1ec = xmm0_100
float xmm0_105 = var_dc f* var_20 + xmm2_1 * var_24 + xmm1_15 * var_1c + xmm3_1 * var_18
var_dc = xmm0_105
float var_1e8 = xmm0_105
int32_t* eax_16 = sub_47b390(&var_94, eax_14())
float xmm0_106 = eax_16[4]
float xmm7_59 = eax_16[0xa]
float xmm4_6 = xmm0_106 * xmm1_9 + *eax_16 * xmm1_4 + eax_16[8] f* xmm1_14 + eax_16[0xc] f* xmm7_4
float xmm0_113 = eax_16[5]
float xmm0_115 = eax_16[1] f* xmm1_4
float var_19c = xmm4_6
float xmm4_7 = eax_16[0xf]
float xmm5_6 = xmm0_113 * xmm1_9 + xmm0_115 + eax_16[9] f* xmm1_14 + eax_16[0xd] f* xmm7_4
float xmm0_120 = eax_16[6]
float var_198 = xmm5_6
float xmm5_7 = eax_16[2]
float xmm2_4 = eax_16[0xb]
float xmm1_18 = eax_16[3]
float xmm3_7 = xmm0_120 * xmm1_9 + xmm5_7 * xmm1_4 + xmm7_59 * xmm1_14 + xmm7_4 f* eax_16[0xe]
float var_194 = xmm3_7
float xmm3_8 = eax_16[7]
float xmm6_6 = xmm1_4 * xmm1_18 + xmm1_9 * xmm3_8 + xmm1_14 * xmm2_4 + xmm7_4 * xmm4_7
float var_190 = xmm6_6
float xmm6_10 =
    xmm0_106 * xmm7_16 + *eax_16 * xmm7_9 + eax_16[8] f* xmm7_21 + eax_16[0xc] f* xmm7_25
float xmm6_14 =
    xmm0_113 * xmm7_16 + eax_16[1] f* xmm7_9 + eax_16[9] f* xmm7_21 + eax_16[0xd] f* xmm7_25
float var_188 = xmm6_14
float xmm6_17 = xmm0_120 * xmm7_16 + xmm5_7 * xmm7_9 + xmm7_59 * xmm7_21
float var_f8_3 = xmm6_17
float xmm6_18 = xmm6_17 + xmm7_25 f* eax_16[0xe]
float var_184 = xmm6_18
float xmm6_23 = xmm7_9 * xmm1_18 + xmm7_16 * xmm3_8 + xmm7_21 * xmm2_4 + xmm7_25 * xmm4_7
float var_180 = xmm6_23
float xmm6_27 =
    xmm0_106 f* var_108 + *eax_16 * xmm7_30 + eax_16[8] f* var_d8 + eax_16[0xc] f* var_110
float xmm6_32 =
    xmm0_113 f* var_108 + eax_16[1] f* xmm7_30 + eax_16[9] f* var_d8 + eax_16[0xd] f* var_110
float var_178 = xmm6_32
float xmm6_36 = xmm0_120 f* var_108 + xmm5_7 * xmm7_30 + xmm7_59 f* var_d8
float var_fc_2 = xmm6_36
float xmm5_9 = xmm6_36 + var_110 f* eax_16[0xe]
float var_174 = xmm5_9
float xmm5_14 = xmm7_30 * xmm1_18 + var_108 f* xmm3_8 + var_d8 f* xmm2_4 + var_110 f* xmm4_7
float var_170 = xmm5_14
float xmm5_18 =
    xmm0_106 f* var_f4 + *eax_16 * xmm7_51 + eax_16[8] f* var_114 + eax_16[0xc] f* var_dc
float xmm5_23 =
    xmm0_113 f* var_f4 + eax_16[1] f* xmm7_51 + eax_16[9] f* var_114 + eax_16[0xd] f* var_dc
float var_168 = xmm5_23
int32_t xmm5_26 = var_dc
float xmm6_38 =
    xmm0_120 f* var_f4 + eax_16[2] f* xmm7_51 + xmm7_59 f* var_114 + xmm5_26 f* eax_16[0xe]
float var_164 = xmm6_38
float xmm6_43 = xmm7_51 * xmm1_18 + var_f4 * xmm3_8 + var_114 f* xmm2_4 + xmm5_26 f* xmm4_7
float var_160 = xmm6_43
EnumC13Lines::EnumC13Lines(&var_94)

if ((*(*arg4 + 0x1c))() == 0)
    goto label_616413

int32_t* result = (*(*arg2 + 0x20))()
int128_t* esi_1

if (result == 0)
    esi_1 = var_ec
    result.b = 0
else
    void var_d4
    int32_t* eax_25 = sub_47b390(&var_d4, (**result)())
    float xmm2_5 = var_54
    float xmm6_44 = eax_25[6]
    float xmm7_61 = eax_25[0xa]
    int128_t var_1e4
    var_1e4.d = *eax_25 * xmm2_5 + eax_25[4] f* var_50 + eax_25[8] f* var_4c + eax_25[0xc] f* var_48
    float xmm2_6 = eax_25[7]
    var_1e4:4.d =
        eax_25[5] f* var_50 + eax_25[1] f* xmm2_5 + eax_25[9] f* var_4c + eax_25[0xd] f* var_48
    float xmm3_10 = eax_25[0xb]
    float xmm4_9 = eax_25[3]
    float xmm5_29 = eax_25[0xf]
    var_1e4:8.d = xmm6_44 * var_50 + eax_25[2] f* xmm2_5 + xmm7_61 * var_4c + eax_25[0xe] f* var_48
    var_1e4:0xc.d = xmm2_6 * var_50 + xmm4_9 * var_54 + xmm3_10 * var_4c + xmm5_29 * var_48
    int128_t var_1d4
    var_1d4.d =
        var_44 f* *eax_25 + var_40 f* eax_25[4] + var_3c f* eax_25[8] + var_38 f* eax_25[0xc]
    var_1d4:4.d =
        var_40 f* eax_25[5] + var_44 f* eax_25[1] + var_3c f* eax_25[9] + var_38 f* eax_25[0xd]
    var_1d4:8.d = var_40 * xmm6_44 + var_44 f* eax_25[2] + var_3c * xmm7_61 + var_38 f* eax_25[0xe]
    var_1d4:0xc.d = var_40 * xmm2_6 + var_44 * xmm4_9 + var_3c * xmm3_10 + var_38 * xmm5_29
    int128_t var_1c4
    var_1c4.d =
        var_34 f* *eax_25 + var_30 f* eax_25[4] + var_2c f* eax_25[8] + var_28 f* eax_25[0xc]
    var_1c4:4.d =
        var_30 f* eax_25[5] + var_34 f* eax_25[1] + var_2c f* eax_25[9] + var_28 f* eax_25[0xd]
    var_1c4:8.d = var_30 * xmm6_44 + var_34 f* eax_25[2] + var_2c * xmm7_61 + var_28 f* eax_25[0xe]
    var_1c4:0xc.d = var_30 * xmm2_6 + var_34 * xmm4_9 + var_2c * xmm3_10 + var_28 * xmm5_29
    int128_t var_1b4
    var_1b4.d =
        var_24 f* *eax_25 + var_20 f* eax_25[4] + var_1c f* eax_25[8] + var_18 f* eax_25[0xc]
    var_1b4:4.d =
        var_20 f* eax_25[5] + var_24 f* eax_25[1] + var_1c f* eax_25[9] + var_18 f* eax_25[0xd]
    var_1b4:8.d = var_20 * xmm6_44 + var_24 f* eax_25[2] + var_1c * xmm7_61 + var_18 f* eax_25[0xe]
    var_1b4:0xc.d = var_20 * xmm2_6 + var_24 * xmm4_9 + var_1c * xmm3_10 + var_18 * xmm5_29
    var_94 = var_1e4
    int128_t var_84 = var_1d4
    int128_t var_74 = var_1c4
    int128_t var_64 = var_1b4
label_616413:
    sub_610360(&var_54, &var_1e4)
    sub_610360(&var_224, &var_54)
    sub_610360(&var_19c, &var_224)
    sub_610360(&var_94, &var_19c)
    int128_t* eax_26 = var_ec
    *eax_26 = var_1e4
    eax_26[1] = var_1d4
    eax_26[2] = var_1c4
    eax_26[3] = var_1b4
    eax_26[4] = var_54.o
    eax_26[5] = var_44.o
    eax_26[6] = var_34.o
    eax_26[7] = var_24.o
    eax_26[8] = var_224.o
    eax_26[9] = xmm7_9.o
    eax_26[0xa] = xmm7_30.o
    eax_26[0xb] = xmm7_51.o
    eax_26[0xc] = var_19c.o
    eax_26[0xd] = xmm6_10.o
    eax_26[0xe] = xmm6_27.o
    eax_26[0xf] = xmm5_18.o
    int32_t eax_35
    long double x87_r0
    long double x87_r1
    
    if ((*(*arg4 + 0x5c))() == 0)
        (*(*arg3 + 0x1c))()
        var_d8 = fconvert.s(x87_r0)
        sub_4158d0(&var_ec, &var_d8)
        (*(*arg3 + 0x20))()
        var_d8 = fconvert.s(x87_r1)
        sub_4158d0(&var_ec, &var_d8)
        eax_35 = *(*arg3 + 0x24)
    else
        (*(*arg2 + 0x54))()
        var_d8 = fconvert.s(x87_r0)
        sub_4158d0(&var_ec, &var_d8)
        (*(*arg2 + 0x58))()
        var_d8 = fconvert.s(x87_r1)
        sub_4158d0(&var_ec, &var_d8)
        eax_35 = *(*arg2 + 0x5c)
    
    eax_35()
    long double x87_r2
    var_d8 = fconvert.s(x87_r2)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg3 + 0x3c))()
    long double x87_r3
    var_d8 = fconvert.s(x87_r3)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg3 + 0x2c))()
    long double x87_r4
    var_d8 = fconvert.s(x87_r4)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg3 + 0x30))()
    long double x87_r5
    var_d8 = fconvert.s(x87_r5)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg3 + 0x34))()
    long double x87_r6
    var_d8 = fconvert.s(x87_r6)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg3 + 0x38))()
    long double x87_r7
    var_d8 = fconvert.s(x87_r7)
    sub_4158d0(&var_ec, &var_d8)
    (**arg2)()
    var_d8 = fconvert.s(x87_r0)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg2 + 4))()
    var_d8 = fconvert.s(x87_r1)
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg2 + 4))()
    var_d8 = fconvert.s(x87_r2)
    sub_4158d0(&var_ec, &var_d8)
    var_d8 = 0
    sub_4158d0(&var_ec, &var_d8)
    (*(*arg2 + 0x68))(0x17)
    var_d8 = fconvert.s(x87_r3)
    int32_t xmm1_98 = var_d8
    xmm1_98 f- 0
    int32_t eax_59
    eax_59:1.b = (xmm1_98 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_98, 0f) ? 1 : 0) << 2
        | (xmm1_98 f< 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        var_d8 = 0
    else
        var_d8 = 1f f/ xmm1_98
    
    (*(*arg2 + 0x68))(0x18)
    float var_15c_1 = fconvert.s(x87_r4)
    (*(*arg2 + 0x68))(0x19)
    float var_158_1 = fconvert.s(x87_r5)
    (*(*arg2 + 0x68))(0x1a)
    float var_154_1 = fconvert.s(x87_r6)
    float xmm5_30 =
        _mm_sqrt_ss(0, var_158_1 * var_158_1 + var_15c_1 * var_15c_1 + var_154_1 * var_154_1)
    xmm5_30 f- 0
    int32_t eax_66
    eax_66:1.b = (xmm5_30 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_30, 0f) ? 1 : 0) << 2
        | (xmm5_30 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    int64_t var_150
    int32_t var_148
    
    if (not(p_4))
        var_150 = var_15c_1.q
        var_148 = var_154_1
    else
        float xmm1_103 = 1f / xmm5_30
        var_150.d = xmm1_103 * var_15c_1
        var_150:4.d = xmm1_103 * var_158_1
        var_148 = xmm1_103 * var_154_1
    
    (*(*arg2 + 0x68))(0x16)
    void* eax_70 = *arg2
    var_dc = fconvert.s(x87_r7)
    (*(eax_70 + 0x68))(0x14)
    void* eax_72 = *arg2
    var_108 = fconvert.s(x87_r0)
    (*(eax_72 + 0x68))(0x15)
    int32_t xmm2_8 = var_dc
    float xmm0_344 = var_108 f* 3f * 3.14159274f
    float xmm1_105 = 1f f- xmm2_8
    var_110 = fconvert.s(x87_r1)
    var_114 = xmm0_344 * 0.0625f
    var_f4 = xmm2_8 f* -2f
    int32_t xmm2_9 = var_110
    int32_t var_1a0 = xmm2_8 f* xmm2_8 + 1f
    float xmm2_10 = xmm2_9 f+ var_108
    var_110 = xmm2_9 * 0.785398185f * xmm1_105 * xmm1_105
    xmm2_10 f- 0
    int32_t eax_74
    eax_74:1.b = (xmm2_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_10, 0f) ? 1 : 0) << 2
        | (xmm2_10 < 0f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (not(p_6))
        var_108 = 0
    else
        var_108 = 1f / xmm2_10
    
    void* eax_75 = *arg2
    float var_e0 = xmm2_10 ^ (data_7094c0).d
    (*(eax_75 + 0x68))(0x1b)
    var_dc = fconvert.s(x87_r2)
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x1c)
    var_dc = fconvert.s(x87_r3)
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x1d)
    var_dc = fconvert.s(x87_r4)
    sub_4158d0(&var_ec, &var_dc)
    var_dc = 0
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x1e)
    var_dc = fconvert.s(x87_r5)
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x1f)
    var_dc = fconvert.s(x87_r6)
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x20)
    var_dc = fconvert.s(x87_r7)
    sub_4158d0(&var_ec, &var_dc)
    var_dc = 0
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x14)
    var_dc = fconvert.s(x87_r0)
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x15)
    var_dc = fconvert.s(x87_r1)
    sub_4158d0(&var_ec, &var_dc)
    (*(*arg2 + 0x68))(0x16)
    var_dc = fconvert.s(x87_r2)
    sub_4158d0(&var_ec, &var_dc)
    sub_4158d0(&var_ec, &var_d8)
    sub_4158d0(&var_ec, &var_150)
    sub_4158d0(&var_ec, &var_150:4)
    sub_4158d0(&var_ec, &var_148)
    var_d8 = 0
    sub_4158d0(&var_ec, &var_d8)
    sub_4158d0(&var_ec, &var_114)
    sub_4158d0(&var_ec, &var_f4)
    sub_4158d0(&var_ec, &var_1a0)
    sub_4158d0(&var_ec, &var_110)
    sub_4158d0(&var_ec, &var_108)
    sub_4158d0(&var_ec, &var_e0)
    var_e0 = 0f
    sub_4158d0(&var_ec, &var_e0)
    var_e0 = 0f
    sub_4158d0(&var_ec, &var_e0)
    (*(*arg3 + 0x90))()
    var_e0 = fconvert.s(x87_r3)
    sub_4158d0(&var_ec, &var_e0)
    (*(*arg3 + 0x94))()
    var_e0 = fconvert.s(x87_r4)
    sub_4158d0(&var_ec, &var_e0)
    var_e0 = 0f
    sub_4158d0(&var_ec, &var_e0)
    var_e0 = 0f
    sub_4158d0(&var_ec, &var_e0)
    void* eax_97 = *arg2
    var_d8 = 0x3f000000
    var_e0 = 0.5f
    
    if ((*(eax_97 + 0x28))() != 0)
        var_d8 = 0.5f / _mm_cvtepi32_ps(zx.o((*(*arg2 + 0x28))())) + 0.5f
    
    float xmm7_65
    
    if ((*(*arg2 + 0x2c))() == 0)
        xmm7_65 = var_e0
    else
        xmm7_65 = 0.5f / _mm_cvtepi32_ps(zx.o((*(*arg2 + 0x2c))())) + 0.5f
    
    float xmm6_47 = var_d8
    float xmm2_15 = xmm5_6 * 0f
    float xmm3_13 = xmm3_7 * 0f
    float xmm0_362 = xmm4_6 * 0f
    var_19c = xmm4_6 * 0.5f + xmm2_15 + xmm3_13 + xmm6_6 * xmm6_47
    float xmm0_366 = xmm0_362 + xmm2_15
    float var_198_1 = xmm0_362 - xmm5_6 * 0.5f + xmm3_13 + xmm6_6 * xmm7_65
    float var_134_2 = xmm0_366
    float xmm3_15 = xmm6_18 * 0f
    float var_194_1 = xmm0_366 + xmm3_7 + xmm6_6 * 0f
    float var_190_1 = xmm0_366 + xmm3_13 + xmm6_6
    float xmm2_20 = xmm6_14 * 0f
    float xmm0_372 = xmm6_10 * 0f
    float var_18c_1 = xmm6_10 * 0.5f + xmm2_20 + xmm3_15 + xmm6_23 * xmm6_47
    float xmm0_376 = xmm0_372 + xmm2_20
    float var_188_1 = xmm0_372 - xmm6_14 * 0.5f + xmm3_15 + xmm6_23 * xmm7_65
    float var_100_4 = xmm0_376
    float var_184_1 = xmm0_376 + xmm6_18 + xmm6_23 * 0f
    float var_180_1 = xmm0_376 + xmm3_15 + xmm6_23
    float xmm2_25 = xmm6_32 * 0f
    float xmm3_17 = xmm5_9 * 0f
    float xmm0_382 = xmm6_27 * 0f
    float var_17c_1 = xmm6_27 * 0.5f + xmm2_25 + xmm3_17 + xmm5_14 * xmm6_47
    float xmm0_386 = xmm0_382 + xmm2_25
    float var_178_1 = xmm0_382 - xmm6_32 * 0.5f + xmm3_17 + xmm5_14 * xmm7_65
    float var_f0_5 = xmm0_386
    float xmm3_19 = xmm6_38 * 0f
    float var_174_1 = xmm0_386 + xmm5_9 + xmm5_14 * 0f
    float var_170_1 = xmm0_386 + xmm3_17 + xmm5_14
    float xmm2_30 = xmm5_23 * 0f
    float xmm6_49 = xmm5_18 * 0f
    float var_16c_1 = xmm5_18 * 0.5f + xmm2_30 + xmm3_19 + xmm6_43 * xmm6_47
    float xmm6_50 = xmm6_49 + xmm2_30
    float var_168_1 = xmm6_49 - xmm5_23 * 0.5f + xmm3_19 + xmm6_43 * xmm7_65
    float var_164_1 = xmm6_50 + xmm6_38 + xmm6_43 * 0f
    float var_160_1 = xmm6_50 + xmm3_19 + xmm6_43
    sub_610360(&var_19c, &var_94)
    int32_t var_e8
    sub_42f470(&var_ec, ((var_e8 - var_ec) s>> 2) + 0x10)
    int128_t* eax_113 = var_ec
    int32_t ecx_99 = (var_e8 - eax_113) s>> 2
    *(eax_113 + (ecx_99 << 2) - 0x40) = var_94
    *(eax_113 + (ecx_99 << 2) - 0x30) = var_84
    *(eax_113 + (ecx_99 << 2) - 0x20) = var_74
    *(eax_113 + (ecx_99 << 2) - 0x10) = var_64
    (*(*arg2 + 0x4c))()
    var_e0 = fconvert.s(x87_r5)
    sub_4158d0(&var_ec, &var_e0)
    (*(*arg2 + 0x14))()
    var_e0 = fconvert.s(x87_r6)
    sub_4158d0(&var_ec, &var_e0)
    (*(*arg2 + 0x50))()
    var_e0 = fconvert.s(x87_r7)
    sub_4158d0(&var_ec, &var_e0)
    var_e0 = 0f
    sub_4158d0(&var_ec, &var_e0)
    var_e0 = 0f
    sub_420c80(&var_ec, ((var_e8 - var_ec) s>> 2) + 0x400, &var_e0)
    char eax_126 = (*(*arg4 + 0x44))()
    
    if (eax_126 != 0)
        result = sub_617840(&var_ec, arg3)
    
    if (eax_126 != 0 && result.b == 0)
        esi_1 = var_ec
        result.b = 0
    else
        int32_t edx_2 = *(arg1 + 0x9c)
        int32_t* ecx_109 = (*(arg1 + 4))[0xe]
        
        if (edx_2 == 0)
            esi_1 = var_ec
            result.b = 0
        else
            esi_1 = var_ec
            (*(*ecx_109 + 0xc0))(ecx_109, edx_2, 0, 0, esi_1, 0, 0)
            result.b = 1

char var_101 = result.b

if (esi_1 != 0)
    j__free(esi_1)
    result.b = var_101

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_224)
return result
