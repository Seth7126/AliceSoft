// 函数: sub_490820
// 地址: 0x490820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f71f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CClipProcess::VTable** result =
    sub_6e810c(0xc)
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CClipProcess::VTable** 
    result_1 = result
int32_t var_8_1 = 0
int32_t eax_3 = (*(*arg3 + 0x1c))(eax_2)
int32_t* var_24 = arg2
(*(*arg2 + 0xc))("ratio", 0x3f800000)
double xmm0_1 = _mm_cvtepi32_pd(zx.q(eax_3))
result[1] = 1
*result =
    &kiwi::CClipProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
result[2] = fconvert.s((
    sub_40d0b0(0x40000000, _mm_cvtpd_ps(xmm0_1 f+ *((eax_3 u>> 0x1f << 3) + &data_79aa70)) - 1f)
    - fconvert.t(1f)) * fconvert.t(fconvert.s(arg1)))
fsbase->NtTib.ExceptionList = ExceptionList
return result
