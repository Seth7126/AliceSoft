// 函数: ?Steal@?$StructuredWorkStealingQueue@VInternalContextBase@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEPAVInternalContextBase@23@_N@Z
// 地址: 0x6f88ad
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74adf4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f88b9
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1[5]
int32_t* var_14 = esi
std::function<void __cdecl (uint8_t)>::~function<void __cdecl (uint8_t)>(esi)
int32_t var_8 = 0
int32_t result = sub_6f88f0(arg1, arg2)
int32_t var_8_1 = 1
sub_6eb703(esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f88ed
return result
