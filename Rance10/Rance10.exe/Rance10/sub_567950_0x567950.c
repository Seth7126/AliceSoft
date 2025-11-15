// 函数: sub_567950
// 地址: 0x567950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4[4] != 0)
    struct filesystem::CFilePath::VTable* const var_4c = &filesystem::CFilePath::`vftable'
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403590(&var_48, arg2 + 4, 0, 0xffffffff)
    int32_t var_8_1 = 0
    sub_67eaf0(&var_4c)
    sub_4055a0(&var_48, arg4, 0, 0xffffffff)
    struct filesystem::CFilePath::VTable* const var_30 = &filesystem::CFilePath::`vftable'
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403590(&var_2c, arg3 + 4, 0, 0xffffffff)
    var_8_1.b = 1
    sub_67eaf0(&var_30)
    sub_4055a0(&var_2c, arg4, 0, 0xffffffff)
    sub_6812e0(&var_2c, &var_48)
    var_30 = &filesystem::CFilePath::`vftable'
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result = result_1
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    var_4c = &filesystem::CFilePath::`vftable'
    
    if (result u>= 0x10)
        result = sub_403160(var_48.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
