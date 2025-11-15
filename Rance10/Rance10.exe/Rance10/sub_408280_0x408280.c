// 函数: sub_408280
// 地址: 0x408280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727210
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_3c = 0xf
int32_t var_40 = 0
char var_50 = 0
sub_403590(&var_50, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
int32_t var_38 = arg3
char var_34 = 1
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x75cce5, nullptr)
int32_t var_18 = 0
int32_t var_8_2 = 1
sub_408dc0(&arg1[6], &var_50)
int32_t var_8_3 = 0xffffffff
sub_408350(&var_50)
int32_t result = __vcasan::OnAsanReport(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
