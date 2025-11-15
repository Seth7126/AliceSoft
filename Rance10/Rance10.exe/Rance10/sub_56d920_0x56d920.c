// 函数: sub_56d920
// 地址: 0x56d920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c54f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::CSize::VTable*** var_14 = arg1
int32_t var_18 = 0
struct common::CSize::VTable** eax_3 = sub_6e810c(0x28)
struct common::CSize::VTable** var_14_1 = eax_3
int32_t var_8_1 = 0
*arg1 = sub_56c4c0(eax_3, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
