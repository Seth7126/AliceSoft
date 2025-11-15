// 函数: sub_488eb0
// 地址: 0x488eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f058
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb88
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    result = (**ecx)(0x7602d4)

if (ecx == 0 || result == 0)
    result.b = 0
else
    void* var_44
    sub_403360(&var_44, (*result)->__offset(0xc).d(eax_2))
    int32_t var_8_1 = 0
    char var_2c
    sub_409670(arg1, sub_405070(&var_2c, &var_44))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    struct _EXCEPTION_REGISTRATION_RECORD** var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
