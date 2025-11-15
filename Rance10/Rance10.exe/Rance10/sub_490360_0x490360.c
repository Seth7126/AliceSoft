// 函数: sub_490360
// 地址: 0x490360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f641
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiTapDelayProcess::VTable** 
    eax_3 = sub_6e810c(0x50)
int32_t* esi = arg4
int32_t var_8_1 = 0
void* var_30
int32_t* eax_4 = sub_48f7c0(eax_3, "tapR", &var_30, arg3, esi)
var_8_1.b = 1
int32_t var_14_1 = 1
void* var_24
int32_t* eax_5 = sub_48f7c0(eax_4, "tapL", &var_24, arg3, esi)
int32_t var_8_2 = 2
int32_t var_14_2 = 3
int32_t var_44 = 0
(*(*arg3 + 0xc))("delaySignalRatio")
(*(*arg3 + 0xc))("inputRatio", 0x3f800000, fconvert.s(arg1))
struct common::SuicideRefCounter<class kiwi::IFilterProcess>::kiwi::CMultiTapDelayProcess::VTable** 
    result = sub_48e190(eax_3, fconvert.s(arg2), eax_5, eax_4)
void* edx_2 = var_24

if (edx_2 != 0)
    int32_t var_1c
    sub_403160(edx_2, (var_1c - edx_2) s>> 2, 4)
    var_24 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0

void* ecx_8 = var_30
int32_t var_28

if (ecx_8 != 0)
    sub_403160(ecx_8, (var_28 - ecx_8) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
