// 函数: sub_46d1d0
// 地址: 0x46d1d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    sub_463eb0(arg1 + 0x18, &var_2c)
    var_8_1.b = 1
    void* var_44
    sub_6c52e0(sub_419600(&var_2c, 0x75f7b8, &var_44, &var_2c))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
