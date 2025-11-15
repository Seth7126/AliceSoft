// 函数: sub_568780
// 地址: 0x568780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_14 = arg3
int32_t var_18 = 0
char* eax_3 = sub_6e810c(0xcc)
char* var_14_1 = eax_3
int32_t var_8_1 = 0
*arg3 = sub_5ca990(eax_3, *arg2, *arg4, *arg5, *arg6, *arg7)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
