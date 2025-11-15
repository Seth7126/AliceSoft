// 函数: sub_490130
// 地址: 0x490130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729fef
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
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CCombFilterProcess::VTable** 
    result = sub_6e810c(0x2c)
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CCombFilterProcess::VTable** 
    result_1 = result
int32_t* edi_1 = arg3
int32_t var_8_1 = 0
int32_t eax_3 = (*(*edi_1 + 8))("delayTime", 0, eax_2)
int32_t eax_4
int32_t ecx_3
eax_4, ecx_3 = (*(*arg4 + 0x10))()
int32_t var_30 = ecx_3
int32_t var_38 = (*(*edi_1 + 0xc))("inputRatio", 0x3f800000)
(*(*edi_1 + 0xc))("feedbackRatio", 0)
result[1] = 1
result[3] = fconvert.s(arg1)
*result = &
    kiwi::CCombFilterProcess::`vftable'{for `common::SuicideRefCounter<class kiwi::IFilterProcess>'}
result[2] = eax_3 * eax_4 u/ 0x3e8
result[4] = fconvert.s(arg2)
__builtin_memset(&result[5], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
