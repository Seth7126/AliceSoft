// 函数: sub_490090
// 地址: 0x490090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72842f
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
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CAllPassFilterProcess::VTable** 
    eax_3 = sub_6e810c(0x60)
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CAllPassFilterProcess::VTable** 
    var_14_1 = eax_3
int32_t* esi_1 = arg2
int32_t var_8_1 = 0
(*(*esi_1 + 0xc))(&data_795b98, 0, eax_2)
int32_t eax_9
int32_t edx_1
edx_1:eax_9 = mulu.dp.d(0x10624dd3, (*(*esi_1 + 8))("delayTime", 0) * (*(*arg3 + 0x10))())
uint32_t var_34 = edx_1 u>> 6
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CAllPassFilterProcess::VTable** 
    result = sub_48c530(eax_3, fconvert.s(arg1))
fsbase->NtTib.ExceptionList = ExceptionList
return result
