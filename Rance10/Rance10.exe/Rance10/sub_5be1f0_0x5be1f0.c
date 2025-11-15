// 函数: sub_5be1f0
// 地址: 0x5be1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73fb82
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_14 = arg3
int32_t var_18 = 0
char* eax_3 = sub_6e810c(0x80)
char* var_14_1 = eax_3
int32_t var_8_1 = 0
*arg3 = sub_5c3110(eax_3, arg2, *arg4, *arg5, *arg6, *arg7, *arg8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
