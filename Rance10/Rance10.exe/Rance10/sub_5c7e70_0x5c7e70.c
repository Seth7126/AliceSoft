// 函数: sub_5c7e70
// 地址: 0x5c7e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740330
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (*arg1 != 0)
    __Smtx_lock_shared(&arg1[2])
    int32_t esi_1 = arg1[1]
    __Smtx_unlock_shared(&arg1[2])
    
    if (esi_1 == 0)
        result = 1
    else
        __Smtx_lock_shared(&arg1[2])
        int32_t* esi_2 = arg1[1]
        __Smtx_unlock_shared(&arg1[2])
        
        if ((*(*esi_2 + 0x10))(eax_2) == 0)
            result = 1
        else
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_3 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            (*(*esi_3 + 0xc0))(0)
            int32_t* var_54
            sub_5c8020(&var_54)
            int32_t var_8_1 = 0
            sub_58a4b0(&arg1[0x8a], &var_54)
            __Smtx_lock_shared(&arg1[2])
            int32_t* esi_4 = arg1[1]
            __Smtx_unlock_shared(&arg1[2])
            uint32_t var_68_6 = zx.d((*(*esi_4 + 0xb0))())
            sub_575fa0(&var_54)
            int32_t* ecx_6 = var_54
            char var_30 = 0
            char* var_50
            sub_576720(&var_30, var_50, ecx_6, &var_30)
            sub_5c8130(arg1)
            int32_t* ebx
            
            if (sub_5c9540(arg1, &var_54) != 0)
                arg1[0x84] = arg1[0x87]
                arg1[0x85] = *(*arg1 + 0x140)
                
                if (sub_5c9880(arg1, &var_54) == 0)
                    ebx.b = 0
                else if (sub_5c84f0(arg1) == 0)
                    ebx.b = 0
                else if (sub_5c8580(arg1, &var_54) == 0)
                    ebx.b = 0
                else
                    (*(*sub_431af0(&arg1[1]) + 0xb4))()
                    ebx.b = 1
            else
                void var_2c
                sub_403360(&var_2c, 0x76a588)
                var_8_1.b = 1
                sub_5e01e0(&var_2c)
                sub_403320(&var_2c)
                ebx.b = 0
            
            sub_5c8070(&var_54)
            result = ebx.b
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
