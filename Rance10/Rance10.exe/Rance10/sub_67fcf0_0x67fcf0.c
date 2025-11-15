// 函数: sub_67fcf0
// 地址: 0x67fcf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746ba1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg1
int32_t var_38 = 0
int32_t* var_58 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
int32_t var_38_1 = 1
void** i_1
sub_67fac0(&i_1)
int32_t var_8_2 = 1
int32_t var_50

for (void** i = i_1; i != var_50; i = &i[6])
    struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_2.b = 2
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, arg2, 0, 0xffffffff)
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, i, 0, 0xffffffff)
    sub_424db0(arg1, &var_2c)
    sub_67fcf0(eax_2)
    var_8_2.b = 3
    var_34.b = 0
    int32_t var_6c_2 = 0
    void** var_48
    int32_t var_44
    sub_67fe50(arg1, arg1[1], var_48, var_44)
    sub_417070(&var_48)
    var_8_2.b = 1
    var_30 = &filesystem::CFilePath::`vftable'
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

sub_417070(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
