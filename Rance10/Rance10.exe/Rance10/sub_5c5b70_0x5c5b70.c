// 函数: sub_5c5b70
// 地址: 0x5c5b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740072
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** var_14 = arg3
int32_t var_18 = 0
int32_t* eax_3 = sub_6e810c(0x5dc)
int32_t* var_14_1 = eax_3
int32_t var_8_1 = 0
*arg3 = sub_5c71f0(eax_3, *arg2, *arg4, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
