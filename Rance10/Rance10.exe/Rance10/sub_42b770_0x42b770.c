// 函数: sub_42b770
// 地址: 0x42b770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable** var_30 = arg1
int32_t var_34 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x75cd5a, nullptr)
int32_t var_8_1 = 0
*arg1 = &advengine::CToken::`vftable'
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_403590(&arg1[2], &var_2c, 0, 0xffffffff)
arg1[8] = 0
arg1[9] = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
