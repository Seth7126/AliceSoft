// 函数: sub_450bf0
// 地址: 0x450bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b290
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 != 0)
    if (data_7fd518 == 0)
        int32_t eax_5 = (*(*arg1 + 0x10))(eax_2)
        
        if (eax_5 s<= 0x800)
            result = (*(*arg1 + 0x14))()
        
        if (eax_5 s> 0x800 || result s> 0x800)
            void var_44
            sub_403360(&var_44, 0x75dea0)
            int32_t var_8_2 = 1
            sub_6c56d0(&var_44)
            sub_403320(&var_44)
            data_7fd518 = 1
    
    result.b = 1
else
    int32_t* var_1c_1 = arg1
    char var_2c = arg1.b
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = 0xf
    sub_403490(&var_2c, 0x75ded4, 0x20)
    int32_t* var_8_1 = arg1
    sub_6c56d0(&var_2c)
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
