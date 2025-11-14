// 函数: sub_56e7e0
// 地址: 0x56e7e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6598
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t var_b0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_54
float* eax_5 = sub_47c420(arg4, &var_54)
float xmm3_4 = eax_5[4] * 0.75f + *eax_5 * 0f + eax_5[8] * 0f + eax_5[0xc]
float xmm1_4 = eax_5[5] * 0.75f + eax_5[1] * 0f + eax_5[9] * 0f + eax_5[0xd]
float xmm2_4 = eax_5[6] * 0.75f + eax_5[2] * 0f + eax_5[0xa] * 0f + eax_5[0xe]
float xmm5_4 = eax_5[7] * 0.75f + eax_5[3] * 0f + eax_5[0xb] * 0f + eax_5[0xf]
xmm5_4 - 1f
eax_5:1.b =
    (xmm5_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 1f) ? 1 : 0) << 2 | (xmm5_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5_4 f- 0
    eax_5:1.b = (xmm5_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 0f) ? 1 : 0) << 2
        | (xmm5_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_16 = 1f / xmm5_4
        xmm3_4 = xmm3_4 * xmm0_16
        xmm1_4 = xmm1_4 * xmm0_16
        xmm2_4 = xmm2_4 * xmm0_16

int32_t* var_bc = arg4
float var_98 = xmm1_4 f+ *(arg2 + 4)
float var_94 = xmm2_4 f+ arg2[1].d
var_9c = *arg2 + xmm3_4
sub_56df40(arg1, &var_9c, 0.25f, arg3, arg4)
float* eax_6 = sub_47c420(arg4, &var_54)
float xmm5_9 = eax_6[4] * 0.75f + *eax_6 * 0f + eax_6[8] * 0f + eax_6[0xc]
float xmm4_4 = eax_6[5] * 0.75f + eax_6[1] * 0f + eax_6[9] * 0f + eax_6[0xd]
float xmm3_9 = eax_6[6] * 0.75f + eax_6[2] * 0f + eax_6[0xa] * 0f + eax_6[0xe]
float xmm6_4 = eax_6[7] * 0.75f + eax_6[3] * 0f + eax_6[0xb] * 0f + eax_6[0xf]
xmm6_4 - 1f
eax_6:1.b =
    (xmm6_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm6_4, 1f) ? 1 : 0) << 2 | (xmm6_4 < 1f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    xmm6_4 f- 0
    eax_6:1.b = (xmm6_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_4, 0f) ? 1 : 0) << 2
        | (xmm6_4 < 0f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        float xmm0_35 = 1f / xmm6_4
        xmm5_9 = xmm5_9 * xmm0_35
        xmm4_4 = xmm4_4 * xmm0_35
        xmm3_9 = xmm3_9 * xmm0_35

float xmm3_10 = xmm3_9 f+ arg2[1].d
int64_t xmm4_5 = xmm4_4 f+ *(arg2 + 4)
float xmm2_7[0x4] = *arg2 + xmm5_9
int32_t eax_7 = sub_59f850(arg3)
int64_t xmm2_8 = _mm_unpacklo_ps(xmm2_7, xmm4_5)
struct sealengine::CPoint::VTable* const var_7c = &sealengine::CPoint::`vftable'
var_9c.q = xmm2_8
int64_t var_78 = xmm2_8
float var_70 = xmm3_10
int32_t var_6c = eax_7
int32_t var_4 = 0
int64_t xmm0_36 = *arg2
int32_t esi_1 = arg2[1].d
struct sealengine::CPoint::VTable* const var_68 = &sealengine::CPoint::`vftable'
int64_t var_64 = xmm0_36
int32_t var_5c = esi_1
int32_t var_58 = eax_7
int32_t (__fastcall* var_b4_3)(struct sealengine::CPoint::VTable** arg1) = sub_5765a0
var_4.b = 1
var_54 = &sealengine::CLine::`vftable'
void var_50
sub_69b2ba(&var_50, 0x14, 2, sub_576570)
int64_t var_4c = xmm0_36
int32_t var_44 = esi_1
int32_t var_40 = eax_7
int64_t var_38 = var_9c.q
float var_30 = xmm3_10
int32_t var_2c = eax_7
var_4.b = 2
sub_5336c0(arg1, &var_54)
var_4.b = 1
var_54 = &sealengine::CLine::`vftable'
int32_t result = `eh vector vbase constructor iterator'(&var_50, 0x14, 2, sub_5765a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
