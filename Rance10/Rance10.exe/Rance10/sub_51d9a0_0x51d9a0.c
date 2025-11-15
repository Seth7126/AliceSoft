// 函数: sub_51d9a0
// 地址: 0x51d9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738fa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4cbd50(&arg1[3], arg3, arg2)
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4b8340()

if (result.b == 0)
    int32_t eax_4 = sub_51fff0(&arg1[0x30])
    result = sub_51fff0(&arg1[0x36])
    int32_t ecx_3 = arg3[1]
    void var_44
    void var_2c
    
    if (ecx_3 == 0x25)
        if (eax_4 s> 0)
            char* eax_5 = sub_520040(&var_2c, &arg1[0x30])
            int32_t var_8_1 = 0
            sub_409670(&arg1[0x36], sub_417750(eax_5, eax_5, &var_44, &arg1[0x36]))
            sub_403320(&var_44)
            result = sub_403320(&var_2c)
        
        goto label_51dae9
    
    if (ecx_3 == 0x27)
        if (result s> 0)
            int32_t var_8_2 = 1
            sub_4055a0(&arg1[0x30], sub_5201f0(&var_2c, &arg1[0x36]), 0, 0xffffffff)
            result = sub_403320(&var_2c)
        
        goto label_51dae9
    
    void* const var_90_9
    
    if (ecx_3 != 0x24)
        if (ecx_3 == 0x23)
            sub_409670(&arg1[0x30], sub_4079d0(result, &arg1[0x30], &var_2c, &arg1[0x36]))
            sub_403320(&var_2c)
            var_90_9 = &data_75d36d
            goto label_51dae4
        
        if (ecx_3 == 8)
            result.b = arg1[0x53].b
        
        int32_t eax_10
        
        if (ecx_3 != 8 || result.b != 0)
            if (ecx_3 == 0x2e)
                result.b = arg1[0x53].b
            
            if (ecx_3 == 0x2e && result.b == 0)
                eax_10 = arg1[0x2c]
                
                if (eax_10 != 0xffffffff)
                    goto label_51dbe8
                
                int32_t var_8_4 = 3
                void var_74
                void var_5c
                sub_409670(&arg1[0x36], 
                    sub_4079d0(sub_5201f0(&var_5c, &arg1[0x36]), &var_5c, &var_74, &arg1[0x36]))
                sub_403320(&var_74)
                int32_t var_90_19 = sub_51fff0(&var_5c) + eax_4
                int32_t var_94_6 = eax_4
                sub_51f5e0(arg1)
                result = sub_403320(&var_5c)
                arg1[0x2c] = 0xffffffff
                arg1[0x2d] = 0xffffffff
            else if (ecx_3 == 0x43 && *(arg1 + 0xad) != 0)
                result = sub_51fe40(arg1)
            else if (ecx_3 == 0x58 && *(arg1 + 0xad) != 0 && arg1[0x53].b == 0)
                result = sub_51fed0(arg1)
            else if (ecx_3 == 0x56 && *(arg1 + 0xad) != 0 && arg1[0x53].b == 0)
                result = sub_51ff10(arg1)
            else if (ecx_3 == 0x41 && *(arg1 + 0xad) != 0)
                arg1[0x2c] = 0
                sub_4055a0(&arg1[0x30], &arg1[0x36], 0, 0xffffffff)
                sub_403450(0x75d353)
                result = sub_51b980(&arg1[0x43], &arg1[0x30])
        else
            eax_10 = arg1[0x2c]
            
            if (eax_10 != 0xffffffff)
            label_51dbe8:
                int32_t var_90_20 = eax_4
                int32_t var_94_7 = eax_10
                result = sub_51f5e0(arg1)
                arg1[0x2c] = 0xffffffff
                arg1[0x2d] = 0xffffffff
            else
                sub_520040(&var_44, &arg1[0x30])
                int32_t var_8_3 = 2
                sub_4055a0(&arg1[0x30], &var_44, 0, 0xffffffff)
                int32_t var_90_14 = eax_4 - sub_51fff0(&var_44)
                int32_t var_94_4 = eax_4
                sub_51f5e0(arg1)
                result = sub_403320(&var_44)
                arg1[0x2c] = 0xffffffff
                arg1[0x2d] = 0xffffffff
    else
        sub_409670(&arg1[0x36], sub_4079d0(result, &arg1[0x30], &var_2c, &arg1[0x36]))
        sub_403320(&var_2c)
        var_90_9 = &data_75d363
    label_51dae4:
        result = sub_403450(var_90_9)
    label_51dae9:
        
        if (arg1[0x2b].b == 0)
            arg1[0x2c] = 0xffffffff
            arg1[0x2d] = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
