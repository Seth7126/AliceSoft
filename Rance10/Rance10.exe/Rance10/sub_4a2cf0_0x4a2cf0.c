// 函数: sub_4a2cf0
// 地址: 0x4a2cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731158
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CPoint::VTable* const var_1c = &common::CPoint::`vftable'
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
struct common::CPoint::VTable* const var_28 = &common::CPoint::`vftable'
int32_t var_24 = 0
int32_t var_20 = 0
sub_4a54c0(arg1 + 0xc0, &var_28, &var_1c)
int32_t eax_3 = *(arg1 + 0xd8)
float xmm1 = 1f
float xmm2

if (eax_3 s> 0)
    xmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xfc))) / _mm_cvtepi32_ps(zx.o(eax_3))
else
    xmm2 = 1f

int32_t eax_4 = *(arg1 + 0xd4)

if (eax_4 s> 0)
    xmm1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xf8))) / _mm_cvtepi32_ps(zx.o(eax_4))

int32_t result = (*(*(arg1 + 0x158) + 4))(var_18, var_14, xmm1, xmm2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
