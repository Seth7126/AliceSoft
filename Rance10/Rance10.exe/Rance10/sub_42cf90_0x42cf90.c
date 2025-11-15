// 函数: sub_42cf90
// 地址: 0x42cf90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0x14)

if (result == 5)
    int32_t* var_2c
    sub_425ab0(arg1, &var_2c, arg2)
    int32_t var_8_1 = 0
    int32_t var_18
    int32_t result_1
    
    if (arg3 == 0)
    label_42d06b:
        int32_t* ecx_7 = &var_2c
        
        if (var_18 u>= 0x10)
            ecx_7 = var_2c
        
        switch (sub_63a280(ecx_7) - 0xa)
            case 0
                result_1 = 1
            case 1
                result_1 = 2
            case 2
                result_1 = 4
            case 0x25
                result_1 = 3
            default
                result_1 = 0
    else
        int32_t* ecx = &var_2c
        
        if (var_18 u>= 0x10)
            ecx = var_2c
        
        if ((*(*arg3 + 0x30))(ecx) == 0)
            int32_t* ecx_2 = &var_2c
            
            if (var_18 u>= 0x10)
                ecx_2 = var_2c
            
            if ((*(*arg3 + 0x38))(ecx_2) == 0)
                int32_t* ecx_4 = &var_2c
                
                if (var_18 u>= 0x10)
                    ecx_4 = var_2c
                
                if ((*(*arg3 + 0x40))(ecx_4) == 0)
                    int32_t* edx_1 = &var_2c
                    
                    if (var_18 u>= 0x10)
                        edx_1 = var_2c
                    
                    if ((*(*arg3 + 0x48))(edx_1) == 0)
                        goto label_42d06b
                    
                    result_1 = 3
                else
                    result_1 = 4
            else
                result_1 = 2
        else
            result_1 = 1
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
