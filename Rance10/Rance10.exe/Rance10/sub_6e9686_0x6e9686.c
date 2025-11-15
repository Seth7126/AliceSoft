// 函数: sub_6e9686
// 地址: 0x6e9686
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
Concurrency::critical_section::_Flush_current_owner(&arg1[1])
int32_t result = sub_6e9f60(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
