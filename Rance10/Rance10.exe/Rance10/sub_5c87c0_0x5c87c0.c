// 函数: sub_5c87c0
// 地址: 0x5c87c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *arg1
int32_t var_34 = 0
void** result_1
sub_42eb70(esi + 0x138, &result_1, &var_34)
void** result = result_1

if (result == *(esi + 0x138) || result[5] s<= 0)
    result.b = 1
else
    arg1[0x76].b = 1
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    (*(*esi_1 + 0xd4))(1)
    __Smtx_lock_shared(&arg1[2])
    int32_t* esi_2 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    
    if (sub_5761e0(arg2, 1, &arg1[3], esi_2) != 0)
        __Smtx_lock_shared(&arg1[2])
        int32_t* edi_2 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        (*(*edi_2 + 0xd4))(2)
        arg1[0x76].b = 0
        result.b = 1
    else
        void* var_30
        sub_403360(&var_30, 0x76a5b0)
        int32_t var_8_1 = 0
        sub_5e01e0(&var_30)
        void** var_1c
        
        if (var_1c u>= 0x10)
            sub_403160(var_30, var_1c + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
