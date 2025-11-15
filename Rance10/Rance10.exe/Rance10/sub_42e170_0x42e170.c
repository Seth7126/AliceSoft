// 函数: sub_42e170
// 地址: 0x42e170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729f78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (sub_41ac20(0x75daa4, 0x75daa4) == 0)
    result = 0
else
    int32_t* esi_1 = data_7fcb40
    
    if (esi_1 == 0)
        result = 0
    else
        int32_t* ecx = data_7fcb88
        
        if (ecx == 0)
            result = 0
        else
            int32_t* eax_5 = (**ecx)(0x75dab4)
            
            if (eax_5 == 0)
                result = 0
            else
                void var_44
                sub_403360(&var_44, (*(*eax_5 + 0xc))(eax_2))
                int32_t var_8_1 = 0
                void var_5c
                char* eax_8 = sub_405070(&var_5c, &var_44)
                var_8_1.b = 1
                int32_t* var_2c
                sub_417750(eax_8, eax_8, &var_2c, arg2)
                sub_403320(&var_5c)
                var_8_1.b = 4
                sub_403320(&var_44)
                char eax_9 = sub_5f2400(&var_2c)
                char eax_12
                
                if (eax_9 != 0)
                    int32_t* ecx_8 = &var_2c
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        ecx_8 = var_2c
                    
                    eax_12 = (*(*esi_1 + 0xc))(arg1, ecx_8)
                
                if (eax_9 == 0 || eax_12 != 0)
                    int32_t result_1 = (*(*esi_1 + 0x10))(arg1)
                    sub_403320(&var_2c)
                    result = result_1
                else
                    sub_403320(&var_2c)
                    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
