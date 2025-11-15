// 函数: sub_49a990
// 地址: 0x49a990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7304dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_74
operator new[](&var_74, arg2)
int32_t var_8_1 = 0
int32_t* var_18 = nullptr
var_8_1.b = 1
int32_t var_40
int32_t var_84_1 = var_40
void var_3c
sub_49b5e0(&var_3c, &var_74)
int32_t var_8_2 = 2
int32_t* var_48

if (var_48 != 0)
    void var_6c
    (*(*var_48 + 0x10))(var_48 != &var_6c)
    int32_t var_48_1 = 0

sub_49abd0(&var_3c, arg1)
int32_t var_8_3 = 3

if (var_18 != 0)
    (*(*var_18 + 0x10))(var_18 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
