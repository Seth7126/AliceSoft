// 函数: sub_5c9880
// 地址: 0x5c9880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (*(arg1 + 0x48c) != 0)
    if (sub_5ca770(arg1 + 0x490).b == 0)
        result.b = 0
    else
        __Smtx_lock_shared(arg1 + 8)
        int32_t* edi_1 = *(arg1 + 4)
        __Smtx_unlock_shared(arg1 + 8)
        
        if ((*(*edi_1 + 0x68))(0, 0x3f800000).b == 0)
            result.b = 0
        else
            __Smtx_lock_shared(arg1 + 8)
            int32_t* esi_2 = *(arg1 + 4)
            __Smtx_unlock_shared(arg1 + 8)
            
            if (sub_5761e0(arg2, 3, arg1 + 0xc, esi_2) != 0)
                result.b = sub_5ca7c0(arg1 + 0x490).b != 0
            else
                void var_2c
                sub_403360(&var_2c, 0x76a52c)
                int32_t var_8_1 = 0
                sub_5e01e0(&var_2c)
                sub_403320(&var_2c)
                result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
