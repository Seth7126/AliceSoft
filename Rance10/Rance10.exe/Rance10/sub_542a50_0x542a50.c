// 函数: sub_542a50
// 地址: 0x542a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_4f4e40(data_7fcba4 + 0x124, arg3)

if (result != 0)
    struct textsurface::CTextSurfaceProperty::VTable* var_44
    sub_6437f0(&var_44)
    int32_t var_8_1 = 0
    void* edi_1 = result[0x11]
    sub_555e00(edi_1, 0x13, arg13)
    void* ecx_4 = *(edi_1 + (arg13 << 2) + 0x7c)
    uint128_t xmm1_1 = *(ecx_4 + 0x18)
    uint128_t xmm3_1 = *(ecx_4 + 0x30)
    int32_t edx = *(ecx_4 + 0x14)
    int32_t xmm2_1 = *(ecx_4 + 0x28)
    int32_t xmm4_1 = *(ecx_4 + 0x2c)
    *arg2 = *(ecx_4 + 0x10)
    int32_t xmm0_2 = _mm_bsrli_si128(xmm1_1, 4)
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
