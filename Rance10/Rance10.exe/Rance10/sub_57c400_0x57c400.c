// 函数: sub_57c400
// 地址: 0x57c400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cd92
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** var_14 = arg1
int32_t var_18 = 0
int32_t* eax_3 = sub_6e810c(0x588)
int32_t* var_14_1 = eax_3
int32_t var_8_1 = 0
*arg1 = sub_5ac3e0(eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
