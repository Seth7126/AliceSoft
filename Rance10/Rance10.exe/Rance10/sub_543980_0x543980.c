// 函数: sub_543980
// 地址: 0x543980
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
    sub_555e00(edi_1, 0x16, arg13)
    void* ecx_5 = *(edi_1 + (arg13 << 2) + 0x7c) + 0x278
    uint128_t xmm1_1 = *(ecx_5 + 0xc)
    uint128_t xmm3_1 = *(ecx_5 + 0x24)
    int32_t edx = *(ecx_5 + 8)
    int32_t xmm2_1 = *(ecx_5 + 0x1c)
    int32_t xmm4_1 = *(ecx_5 + 0x20)
    *arg2 = *(ecx_5 + 4)
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
