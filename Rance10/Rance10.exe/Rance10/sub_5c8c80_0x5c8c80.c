// 函数: sub_5c8c80
// 地址: 0x5c8c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = *arg1 + 0xb4
int32_t* result

if (*(ebx_1 + 8) s< 0 || *(ebx_1 + 0xc) s< 0)
    result.b = 0
else
    __Smtx_lock_shared(&arg1[0xf5])
    int32_t esi_2 = arg1[0xf4]
    __Smtx_unlock_shared(&arg1[0xf5])
    int32_t esi_6
    
    if (esi_2 == 0)
        __Smtx_lock_shared(&arg1[2])
        int32_t* esi_4 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        sub_44cdb0(&arg1[0xf4], (*(*esi_4 + 0x5c))(eax_2))
        __Smtx_lock_shared(&arg1[0xf5])
        esi_6 = arg1[0xf4]
        __Smtx_unlock_shared(&arg1[0xf5])
    
    if (esi_2 == 0 && esi_6 == 0)
        result.b = 0
    else
        __Smtx_lock_shared(&arg1[0xf5])
        int32_t* esi_8 = arg1[0xf4]
        int32_t var_4c_1 = __Smtx_unlock_shared(&arg1[0xf5])
        (*(*esi_8 + 0x28))(*(ebx_1 + 8), *(ebx_1 + 0xc), *(ebx_1 + 0x14), *(ebx_1 + 0x18), 0, 
            0x3f800000)
        __Smtx_lock_shared(&arg1[0xf5])
        int32_t* esi_9 = arg1[0xf4]
        __Smtx_unlock_shared(&arg1[0xf5])
        
        if ((*(*esi_9 + 8))(eax_2).b != 0)
            result.b = 1
        else
            void var_2c
            sub_403360(&var_2c, 0x76a5cc)
            int32_t var_8_1 = 0
            sub_5e01e0(&var_2c)
            sub_403320(&var_2c)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
