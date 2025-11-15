// 函数: sub_5c8df0
// 地址: 0x5c8df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(arg1 + 0x3d4)
int32_t esi = *(arg1 + 0x3d0)
__Smtx_unlock_shared(arg1 + 0x3d4)
int32_t result

if (esi == 0)
    result.b = 0
else
    __Smtx_lock_shared(arg1 + 0x3d4)
    int32_t* esi_1 = *(arg1 + 0x3d0)
    __Smtx_unlock_shared(arg1 + 0x3d4)
    
    if ((*(*esi_1 + 0xc))(eax_2).b != 0)
        result.b = 1
    else
        void* var_2c
        sub_403360(&var_2c, 0x76a4e4)
        int32_t var_8_1 = 0
        sub_5e01e0(&var_2c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
