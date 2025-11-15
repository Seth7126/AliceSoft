// 函数: sub_435e90
// 地址: 0x435e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 == 0 || arg2 == 0)
    result.b = 0
else
    int32_t eax_4 = (*(*arg2 + 0x10))(eax_2)
    int32_t eax_5 = (*(*arg2 + 0x14))()
    int32_t eax_6 = (*(*arg1 + 0x10))()
    
    if (eax_6 s>= eax_4)
        result = (*(*arg1 + 0x14))()
    
    if (eax_6 s< eax_4 || result s< eax_5)
        void var_2c
        sub_403360(&var_2c, 0x75dc50)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_2c)
        sub_403320(&var_2c)
        result.b = 0
    else
        int32_t* ecx_5 = data_7fcb5c
        
        if (ecx_5 == 0)
            result.b = 0
        else
            (*(*ecx_5 + 0xc))(arg1, 0, 0, arg2, 0, 0, eax_4, eax_5)
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
