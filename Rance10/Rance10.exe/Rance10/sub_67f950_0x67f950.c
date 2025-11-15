// 函数: sub_67f950
// 地址: 0x67f950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746ac1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_38 = arg1
int32_t var_3c = 0
int32_t* var_58 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
int32_t var_3c_1 = 1
void** i_1
sub_67fcf0(&i_1, arg2)
int32_t var_8_2 = 1
sub_424db0(&i_1, arg2)
int32_t var_44

for (void** i = i_1; i != var_44; i = &i[6])
    void** j_1
    sub_67f720(&j_1)
    int32_t var_50
    
    for (void** j = j_1; j != var_50; j = &j[6])
        struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        var_8_2.b = 3
        sub_67eaf0(&var_30)
        sub_4055a0(&var_2c, i, 0, 0xffffffff)
        sub_67eaf0(&var_30)
        sub_4055a0(&var_2c, j, 0, 0xffffffff)
        sub_424db0(arg1, &var_2c)
        var_30 = &filesystem::CFilePath::`vftable'
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    var_8_2.b = 1
    sub_417070(&j_1)

sub_417070(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
