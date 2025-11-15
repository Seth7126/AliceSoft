// 函数: ?Steal@?$StructuredWorkStealingQueue@VInternalContextBase@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEPAVInternalContextBase@23@_N@Z
// 地址: 0x4a3c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = arg2
struct common::CPoint::VTable* const var_1c = &common::CPoint::`vftable'
int32_t var_14 = arg3
int32_t var_8_1 = 0
BOOL result = sub_4a2280(*(arg1 + 4), &var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
