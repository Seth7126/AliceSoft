// 函数: sub_44d6f0
// 地址: 0x44d6f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72aeb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** i_1
sub_67f720(&i_1)
int32_t var_8_1 = 0
int32_t var_40

for (void** i = i_1; i != var_40; i = &i[6])
    struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    var_8_1.b = 1
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, arg1, 0, 0xffffffff)
    sub_67eaf0(&var_30)
    int32_t* var_60_1 = arg2
    char* var_64_1 = &var_2c
    void* var_4c
    sub_44e4f0(arg2, &var_4c, sub_4055a0(&var_2c, i, 0, 0xffffffff))
    var_8_1.b = 0
    var_30 = &filesystem::CFilePath::`vftable'
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t result = sub_417070(&i_1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
