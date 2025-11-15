// 函数: sub_490720
// 地址: 0x490720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729f0f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CLimitProcess::VTable** 
    result = sub_6e810c(0x10)
int32_t* ebx_1 = arg2
int32_t var_8_1 = 0
int32_t* edi_1 = arg3
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = mulu.dp.d(0x10624dd3, (*(*ebx_1 + 8))("returnTime", 0, eax_2) * (*(*edi_1 + 0x10))())
int32_t eax_9
int32_t ecx_4
eax_9, ecx_4 = (*(*edi_1 + 0x1c))()
int32_t var_30 = ecx_4
(*(*ebx_1 + 0xc))("ratio", 0x3f800000)
double xmm0_1 = _mm_cvtepi32_pd(zx.q(eax_9))
result[1] = 1
*result =
    &kiwi::CLimitProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
long double x87_r0_1 =
    sub_40d0b0(0x40000000, _mm_cvtpd_ps(xmm0_1 f+ *((eax_9 u>> 0x1f << 3) + &data_79aa70)) - 1f)
    - fconvert.t(1f)
result[3] = edx_2 u>> 6
result[2] = fconvert.s(x87_r0_1 * fconvert.t(fconvert.s(arg1)))
fsbase->NtTib.ExceptionList = ExceptionList
return result
