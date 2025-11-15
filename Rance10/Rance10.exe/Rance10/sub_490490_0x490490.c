// 函数: sub_490490
// 地址: 0x490490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f6a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CReverbProcess::VTable** 
    eax_3 = sub_6e810c(0x28)
int32_t* esi = arg2
int32_t var_8_1 = 0
int32_t* eax_4 = (*(*esi + 0x24))("earlyReflection", arg3, eax_2)
void* var_30
int32_t* eax_5 = sub_490990(eax_4, eax_4, &var_30)
var_8_1.b = 1
int32_t var_14_1 = 1
int32_t* eax_6 = (*(*esi + 0x24))("reverb")
void* var_24
int32_t* eax_7 = sub_490990(eax_6, eax_6, &var_24, arg3)
int32_t var_8_2 = 2
int32_t var_14_2 = 3
int32_t* ecx_6 = arg2
int32_t eax_10
int32_t edx_6
edx_6:eax_10 = mulu.dp.d(0x10624dd3, (*(*esi + 8))("preDelay", 0) * (*(*arg3 + 0x10))())
int32_t* var_4c = ecx_6
(*(*ecx_6 + 0xc))("reverbSignalRatio", 0, edx_6 u>> 6)
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CReverbProcess::VTable** 
    result = sub_48f180(eax_3, fconvert.s(arg1), eax_7, eax_5)
void* edx_8 = var_24

if (edx_8 != 0)
    int32_t var_1c
    sub_403160(edx_8, (var_1c - edx_8) s>> 2, 4)
    var_24 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0

void* ecx_11 = var_30
int32_t var_28

if (ecx_11 != 0)
    sub_403160(ecx_11, (var_28 - ecx_11) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
