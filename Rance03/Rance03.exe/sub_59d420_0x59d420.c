// 函数: sub_59d420
// 地址: 0x59d420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c885b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CViewPyramid::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
struct sealengine::CViewPyramid::VTable** var_c8 = arg1
int32_t var_4 = 0
sub_59de10(&arg1[1])
void var_b8
EnumC13Lines::EnumC13Lines(&var_b8)
float var_70
EnumC13Lines::EnumC13Lines(&var_70)
sub_47b8b0(&var_70, *(arg2 i+ 0x14) ^ (data_7094c0).d)
sub_47b7f0(&var_b8, *(arg2 i+ 0x10) ^ (data_7094c0).d)
sub_47b440(&var_70, &var_b8)
double* eax_5
float xmm0_4
int80_t x87_r4
eax_5, xmm0_4 = ___libm_sse2_tanf(*(arg3 i+ 0x54) * 0.5f * 3.14159274f * 0.00555555569f, x87_r4)
float xmm2 = 1f / xmm0_4
float var_28 = 0f
uint128_t xmm5 = zx.o(*(arg3 i+ 0x44))
float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(arg3 i+ 0x48)))
float xmm5_2 = _mm_cvtepi32_ps(xmm5) / xmm0_6
float xmm0_9 = xmm2 * xmm2 + 1f
float xmm0_10 = _mm_sqrt_ss(xmm0_9, xmm0_9)
xmm0_10 f- 0
eax_5:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
    | (xmm0_10 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm1_4
float xmm2_2
float xmm3_1

if (not(p_1))
    int64_t xmm0_11 = xmm2.q
    xmm2_2 = xmm0_11:4.d
    xmm3_1 = xmm0_11.d
    xmm1_4 = 1f
else
    xmm1_4 = 1f / xmm0_10
    xmm3_1 = xmm1_4 * xmm2
    xmm2_2 = xmm1_4 * 0f

float var_60
float var_50
float xmm4_3 = var_60 * xmm2_2 + var_70 * xmm3_1 + var_50 * xmm1_4
float var_6c
float var_5c
float var_4c
float xmm3_5 = var_5c * xmm2_2 + var_6c * xmm3_1 + var_4c * xmm1_4
int64_t var_18
var_18.d = xmm3_5
float var_68
float var_58
float var_48
float xmm2_6 = var_58 * xmm2_2 + var_68 * xmm3_1 + var_48 * xmm1_4
var_18:4.d = xmm2_6
float var_10 =
    ((*(arg2 i+ 4) * xmm4_3) ^ (data_7094c0).d) - *(arg2 i+ 8) * xmm3_5 - xmm2_6 f* *(arg2 i+ 0xc)
var_18:4.d = 0
float xmm1_11 = xmm2 ^ (data_7094c0).d
arg1[1]->vFunc_0 = xmm4_3.o
var_18.d = xmm1_11
float xmm0_29 = xmm1_11 * xmm1_11 + 1f
float xmm0_30 = _mm_sqrt_ss(xmm0_29, xmm0_29)
xmm0_30 f- 0
int128_t* eax_6
eax_6:1.b = (xmm0_30 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_30, 0f) ? 1 : 0) << 2
    | (xmm0_30 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}
float var_2c
float xmm0_32
float xmm1_12
float xmm2_8

if (not(p_3))
    var_2c.q = var_18
    xmm0_32 = var_28
    xmm1_12 = var_2c
    xmm2_8 = 1f
else
    xmm2_8 = 1f / xmm0_30
    xmm1_12 = xmm1_11 * xmm2_8
    xmm0_32 = xmm2_8 * 0f

float xmm5_3 = xmm5_2 * xmm2
float xmm4_7 = var_60 * xmm0_32 + var_70 * xmm1_12 + var_50 * xmm2_8
float xmm3_9 = var_5c * xmm0_32 + var_6c * xmm1_12 + var_4c * xmm2_8
var_18.d = xmm3_9
float xmm2_12 = var_58 * xmm0_32 + var_68 * xmm1_12 + var_48 * xmm2_8
var_18:4.d = xmm2_12
float var_10_1 =
    ((*(arg2 i+ 4) * xmm4_7) ^ (data_7094c0).d) - *(arg2 i+ 8) * xmm3_9 - xmm2_12 f* *(arg2 i+ 0xc)
var_18.d = 0
float xmm1_19 = xmm5_3 ^ (data_7094c0).d
*(arg1[1] + 0x10) = xmm4_7.o
var_18:4.d = xmm1_19
float xmm0_51 = xmm1_19 * xmm1_19 + 1f
float xmm0_52 = _mm_sqrt_ss(xmm0_51, xmm0_51)
xmm0_52 f- 0
void* eax_7
eax_7:1.b = (xmm0_52 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_52, 0f) ? 1 : 0) << 2
    | (xmm0_52 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}
float xmm1_20
float xmm2_15
float xmm7

if (not(p_5))
    var_2c.q = var_18
    xmm1_20 = var_28
    xmm2_15 = var_2c
    xmm7 = 1f
else
    xmm7 = 1f / xmm0_52
    xmm1_20 = xmm1_19 * xmm7
    xmm2_15 = xmm7 * 0f

float xmm4_11 = var_60 * xmm1_20 + var_70 * xmm2_15 + var_50 * xmm7
float xmm3_13 = var_5c * xmm1_20 + var_6c * xmm2_15 + var_4c * xmm7
var_18.d = xmm3_13
float xmm2_19 = var_58 * xmm1_20 + var_68 * xmm2_15 + var_48 * xmm7
var_18:4.d = xmm2_19
float var_10_2 =
    ((*(arg2 i+ 4) * xmm4_11) ^ 0x80000000) - *(arg2 i+ 8) * xmm3_13 - xmm2_19 f* *(arg2 i+ 0xc)
var_18.d = 0
var_18:4.d = xmm5_3
*(arg1[1] + 0x20) = xmm4_11.o
float xmm1_26 = _mm_sqrt_ss(0, xmm5_3 * xmm5_3 + 1f)
xmm1_26 f- 0
void* eax_8
eax_8:1.b = (xmm1_26 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_26, 0f) ? 1 : 0) << 2
    | (xmm1_26 < 0f ? 1 : 0)
bool p_7 = unimplemented  {test ah, 0x44}
float xmm1_28
float xmm5_4
float xmm6

if (not(p_7))
    var_2c.q = var_18
    xmm5_4 = var_28
    xmm1_28 = var_2c
    xmm6 = 1f
else
    xmm6 = 1f / xmm1_26
    xmm5_4 = xmm5_3 * xmm6
    xmm1_28 = xmm6 * 0f

float xmm4_15 = var_60 * xmm5_4 + var_70 * xmm1_28 + var_50 * xmm6
float xmm3_17 = var_5c * xmm5_4 + var_6c * xmm1_28 + var_4c * xmm6
float xmm2_24 = var_58 * xmm5_4 + var_68 * xmm1_28 + var_48 * xmm6
var_18.d = xmm3_17
var_18:4.d = xmm2_24
float var_10_3 =
    ((*(arg2 i+ 4) * xmm4_15) ^ 0x80000000) - *(arg2 i+ 8) * xmm3_17 - xmm2_24 f* *(arg2 i+ 0xc)
float xmm1_35 = var_70 + var_60
*(arg1[1] + 0x30) = xmm4_15.o
float xmm2_28 = (var_68 + var_58) * 0f
float xmm4_18 = (var_6c + var_5c) * 0f
float xmm1_36 = xmm1_35 * 0f
float xmm5_6 = var_48 + xmm2_28
float xmm0_88 = *(arg3 i+ 0x4c)
float xmm6_2 = var_4c + xmm4_18
float xmm7_2 = var_50 + xmm1_36
var_18.d = xmm6_2
var_18:4.d = xmm5_6
float xmm3_24 = (((*(arg2 i+ 4) + var_50 * xmm0_88 + xmm1_36) * xmm7_2) ^ (data_7094c0).d)
    - (*(arg2 i+ 8) + var_4c * xmm0_88 + xmm4_18) * xmm6_2
    - (var_48 * xmm0_88 + xmm2_28 f+ *(arg2 i+ 0xc)) * xmm5_6
float var_10_4 = xmm3_24
*(arg1[1] + 0x40) = xmm7_2.o
float xmm4_25 = xmm1_36 - var_50 * 1f
float xmm3_26 = xmm4_18 - var_4c * 1f
var_18.d = xmm3_26
float xmm2_33 = xmm2_28 - var_48 * 1f
float xmm0_99 = *(arg3 i+ 0x50)
var_18:4.d = xmm2_33
float xmm1_46 = (((*(arg2 i+ 4) + var_50 * xmm0_99 + xmm1_36) * xmm4_25) ^ (data_7094c0).d)
    - (*(arg2 i+ 8) + var_4c * xmm0_99 + xmm4_18) * xmm3_26
    - (var_48 * xmm0_99 + xmm2_28 f+ *(arg2 i+ 0xc)) * xmm2_33
float var_10_5 = xmm1_46
*(arg1[1] + 0x50) = xmm4_25.o
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
