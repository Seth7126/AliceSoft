// 函数: sub_5a2470
// 地址: 0x5a2470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t* eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_403490(&var_2c, "%f, %f, %f", 0xa)
int32_t var_8_1 = 0
*(arg2 + 4)
int32_t var_40 = ecx_1
sub_507fa0(eax_3, &var_2c, arg1, arg2, *(arg2 + 8))

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
