// 函数: ?CreateVirtualProcessor@ThreadScheduler@details@Concurrency@@UAEPAVVirtualProcessor@23@PAVSchedulingNode@23@PAUIVirtualProcessorRoot@3@@Z
// 地址: 0x49db60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730b60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CPoint::VTable* var_1c = &common::CPoint::`vftable'
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
struct common::CSize::VTable* const var_28 = &common::CSize::`vftable'
int32_t var_24 = 0
int32_t var_20 = 0
var_8_1.b = 1
void* ecx
int32_t result = sub_49dbe0(ecx, arg1, 0, &var_28, &var_1c, 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
