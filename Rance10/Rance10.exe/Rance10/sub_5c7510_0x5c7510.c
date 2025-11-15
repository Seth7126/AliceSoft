// 函数: sub_5c7510
// 地址: 0x5c7510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5c75f0(arg1)
sub_568810(&arg1[1], arg3)
int32_t result

if (sub_5c7880(arg1).b == 0)
    result.b = 0
else
    sub_5c7900(arg1)
    __Smtx_lock_shared(&arg1[2])
    int32_t esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    int32_t var_40_3 = esi_1
    
    if (sub_5c9e60(&arg1[3]) != 0)
        *arg1 = arg2
        result.b = 1
    else
        void* var_2c
        sub_403360(&var_2c, 0x76a4c4)
        int32_t var_8_1 = 0
        sub_5e01e0(&var_2c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
