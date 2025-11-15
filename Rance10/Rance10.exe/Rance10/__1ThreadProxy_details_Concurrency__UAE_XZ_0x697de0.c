// 函数: ??1ThreadProxy@details@Concurrency@@UAE@XZ
// 地址: 0x697de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7480e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
*arg1 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
