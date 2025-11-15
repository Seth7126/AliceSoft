// 函数: sub_48ffd0
// 地址: 0x48ffd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f57f
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
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CBiquadFilterProcess::VTable** 
    eax_3 = sub_6e810c(0x3c)
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CBiquadFilterProcess::VTable** 
    var_14_1 = eax_3
int32_t var_8_1 = 0
int32_t eax_4
int32_t ecx_2
eax_4, ecx_2 = (*(*arg5 + 0x10))(eax_2)
int32_t var_28 = ecx_2
int32_t var_24_1 = (*(*arg4 + 0xc))("ratio", 0x3f800000, eax_4)
int32_t var_24_2 = (*(*arg4 + 0xc))("qFactor", 0)
(*(*arg4 + 0xc))("freq", 0)
struct kiwi::CBiquadFilterProcess::kiwi::CEqualizerProcess::VTable** result =
    sub_48da20(eax_3, fconvert.s(arg3), fconvert.s(arg2), fconvert.s(arg1))
fsbase->NtTib.ExceptionList = ExceptionList
return result
