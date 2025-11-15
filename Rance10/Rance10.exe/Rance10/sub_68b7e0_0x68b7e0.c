// 函数: sub_68b7e0
// 地址: 0x68b7e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747371
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFilePath::VTable** var_34 = arg1
int32_t var_30 = 0
*arg1 = &filesystem::CFilePath::`vftable'
arg1[6] = 0xf
arg1[5] = 0
struct filesystem::CFilePath::VTable** var_38 = arg1
char* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
int32_t var_8_1 = 0
int32_t var_30_1 = 1
sub_67e790(arg1)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "Shader", 6)
int32_t var_8_2 = 1
sub_67eaf0(arg1)
sub_4055a0(&arg1[1], &var_2c, 0, 0xffffffff)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
