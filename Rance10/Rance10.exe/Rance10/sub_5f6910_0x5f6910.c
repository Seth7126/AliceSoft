// 函数: sub_5f6910
// 地址: 0x5f6910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e4e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = (*(*arg3 + 0x40))(arg2)

if (result.b == 0)
    int32_t result_2 = 0xf
    int32_t var_20_1 = 0
    char var_30 = result.b
    sub_403490(&var_30, 0x76a978, 0x18)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_30)
    result = result_2
    
    if (result u>= 0x10)
        int32_t var_64_1 = 1
        result = sub_403160(var_30.d, result + 1, 1)
else if (arg4 s>= 0)
    int32_t esi_1 = 0
    
    if (arg2 s> 0)
        while ((*(*arg3 + 0x1c))(esi_1) != 0)
            result = sub_5f6910(arg5, arg6, 0xffffffff, eax_2)
            esi_1 += 1
            
            if (esi_1 s>= arg2)
                goto label_5f6a12
        
        int32_t result_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        sub_403490(&var_48, 0x76a95c, 0x18)
        int32_t var_8_2 = 1
        sub_6c52e0(&var_48)
        result = result_1
        
        if (result u>= 0x10)
            int32_t var_64_3 = 1
            result = sub_403160(var_48.d, result + 1, 1)

label_5f6a12:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
