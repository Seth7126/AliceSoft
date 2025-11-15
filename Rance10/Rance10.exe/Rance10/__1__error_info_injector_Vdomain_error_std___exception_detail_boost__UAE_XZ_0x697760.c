// 函数: ??1?$error_info_injector@Vdomain_error@std@@@exception_detail@boost@@UAE@XZ
// 地址: 0x697760
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747fc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_14 = esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = arg1
arg1 = esi_1
int32_t var_8_1 = 0
int32_t __saved_ebp
(*(*esi_1 + 4))(__security_cookie ^ &__saved_ebp)
int32_t result = (**esi_1)(1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
