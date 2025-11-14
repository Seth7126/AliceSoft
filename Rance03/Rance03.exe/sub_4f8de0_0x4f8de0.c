// 函数: sub_4f8de0
// 地址: 0x4f8de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_4a8b80(data_75d4fc + 0x174, arg3)

if (result != 0)
    struct partsengine::CCharSpriteProperty::VTable* var_40
    sub_4ff2c0(&var_40)
    int32_t var_4 = 0
    void* eax_3 = sub_510440(result[0xd], arg13)
    uint128_t xmm1_1 = *(eax_3 + 0x284)
    int32_t ecx_4 = *(eax_3 + 0x27c)
    int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 4)
    uint128_t xmm3_1 = *(eax_3 + 0x29c)
    int32_t edx = *(eax_3 + 0x280)
    int32_t xmm2_1 = *(eax_3 + 0x294)
    int32_t xmm4_1 = *(eax_3 + 0x298)
    *arg2 = ecx_4
    *arg4 = edx
    *arg5 = xmm1_1
    int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 8)
    *arg6 = xmm0_2
    int32_t xmm0_4 = _mm_bsrli_si128(xmm3_1, 4)
    *arg7 = xmm1_2
    *arg8 = xmm2_1
    *arg9 = xmm3_1
    int32_t xmm3_2 = _mm_bsrli_si128(xmm3_1, 8)
    *arg10 = xmm0_4
    *arg11 = xmm3_2
    result = arg12
    *result = xmm4_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
