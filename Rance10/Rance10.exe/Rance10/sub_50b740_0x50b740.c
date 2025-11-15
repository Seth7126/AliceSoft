// 函数: sub_50b740
// 地址: 0x50b740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737a98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4cbd50(&arg1[3], arg3, arg2)
float* result = sub_50f440(arg1)

if (result.b == 0)
    int32_t eax_4 = sub_50e5e0(&arg1[0x33])
    int32_t eax_5 = sub_50e5e0(&arg1[0x39])
    int32_t ecx_4 = arg3[1]
    void var_44
    void var_2c
    
    if (ecx_4 != 0x25 || eax_4 s<= 0)
        if (ecx_4 == 0x27 && eax_5 s> 0)
            int32_t var_8_3 = 1
            sub_4055a0(&arg1[0x33], sub_50f730(&var_44, &arg1[0x39]), 0, 0xffffffff)
            int32_t var_8_4 = 0xffffffff
            sub_403320(&var_44)
            goto label_50b8f4
        
        if (ecx_4 == 0x26 && eax_4 s> 0)
            sub_50e630(arg1)
            goto label_50b8f4
        
        if (ecx_4 == 0x28 && eax_5 s> 0)
            sub_50ea70(arg1)
            goto label_50b8f4
        
        if (ecx_4 == 0x24 && eax_4 s> 0)
            if (*(arg1 + 0xb9) == 0)
                sub_50fc00(&arg1[0x33], &arg1[0x39])
            else
                sub_409670(&arg1[0x39], sub_4079d0(eax_5, &arg1[0x33], &var_44, &arg1[0x39]))
                sub_403320(&var_44)
                sub_403450(0x75d293)
            
            goto label_50b8f4
        
        if (ecx_4 == 0x23 && eax_5 s> 0)
            if (*(arg1 + 0xb9) == 0)
                sub_50fd10(ecx_4, &arg1[0x33], &arg1[0x39])
            else
                sub_409670(&arg1[0x33], sub_4079d0(eax_5, &arg1[0x33], &var_44, &arg1[0x39]))
                sub_403320(&var_44)
                sub_403450(0x75d28b)
            
            goto label_50b8f4
        
        if (ecx_4 == 8)
            eax_5.b = arg1[0x55].b
        
        int32_t eax_11
        int32_t edx_5
        
        if (ecx_4 != 8 || eax_5.b != 0)
            if (ecx_4 == 0x2e)
                eax_5.b = arg1[0x55].b
            
            if (ecx_4 == 0x2e && eax_5.b == 0)
                eax_11 = arg1[0x2f]
                
                if (eax_11 != 0xffffffff)
                    goto label_50b9fc
                
                int32_t var_8_6 = 3
                sub_409670(&arg1[0x39], 
                    sub_4079d0(sub_50f730(&var_2c, &arg1[0x39]), &var_2c, &var_44, &arg1[0x39]))
                sub_403320(&var_44)
                edx_5 = eax_4
                int32_t var_80_18 = sub_50e5e0(&var_2c) + edx_5
                goto label_50b9e0
            
            if (ecx_4 == 0xd)
                eax_5.b = arg1[0x55].b
            
            if (ecx_4 == 0xd && eax_5.b == 0)
                void var_5c
                sub_403360(&var_5c, U"\n\n\n")
                int32_t var_8_8 = 4
                sub_50e1e0(arg1, &var_5c)
                int32_t var_8_9 = 0xffffffff
                sub_403320(&var_5c)
                result = sub_50ee10(arg1)
            else if (ecx_4 == 0x43 && *(arg1 + 0xb9) != 0)
                sub_50f1f0(arg1)
                result = sub_50ee10(arg1)
            else if (ecx_4 == 0x58 && *(arg1 + 0xb9) != 0 && arg1[0x55].b == 0)
                sub_50f320(arg1)
                result = sub_50ee10(arg1)
            else if (ecx_4 == 0x56 && *(arg1 + 0xb9) != 0 && arg1[0x55].b == 0)
                sub_50f360(arg1)
                result = sub_50ee10(arg1)
            else if (ecx_4 == 0x41 && *(arg1 + 0xb9) != 0)
                arg1[0x2f] = 0
                sub_4055a0(&arg1[0x33], &arg1[0x39], 0, 0xffffffff)
                sub_403450(0x75d287)
                sub_508ce0(&arg1[0x45], &arg1[0x33])
                result = sub_50ee10(arg1)
            else if (ecx_4 != 1)
                result = sub_50ee10(arg1)
            else
                void* ecx_43 = arg1[0x2b]
                result = ecx_43 + 0xc
                int32_t ecx_44 = neg.d(ecx_43)
                
                if (arg2 != (sbb.d(ecx_44, ecx_44, ecx_43 != 0) & result))
                    void* ecx_47 = arg1[0x2c]
                    result = ecx_47 + 0xc
                    int32_t ecx_48 = neg.d(ecx_47)
                    
                    if (arg2 != (sbb.d(ecx_48, ecx_48, ecx_47 != 0) & result))
                        arg1[0x31] = 0
        else
            eax_11 = arg1[0x2f]
            
            if (eax_11 == 0xffffffff)
                sub_50f580(&var_2c, &arg1[0x33])
                int32_t var_8_5 = 2
                sub_4055a0(&arg1[0x33], &var_2c, 0, 0xffffffff)
                edx_5 = eax_4
                int32_t var_80_13 = edx_5 - sub_50e5e0(&var_2c)
            label_50b9e0:
                int32_t var_84_7 = edx_5
                sub_50dd00(arg1)
                int32_t var_8_7 = 0xffffffff
                sub_403320(&var_2c)
                goto label_50b8fd
            
        label_50b9fc:
            int32_t var_80_19 = eax_4
            int32_t var_84_8 = eax_11
            sub_50dd00(arg1)
        label_50b8fd:
            arg1[0x2f] = 0xffffffff
            arg1[0x30] = 0xffffffff
            result = sub_50ee10(arg1)
    else
        char* eax_6 = sub_50f580(&var_44, &arg1[0x33])
        int32_t var_8_1 = 0
        sub_409670(&arg1[0x39], sub_417750(eax_6, eax_6, &var_2c, &arg1[0x39]))
        sub_403320(&var_2c)
        int32_t var_8_2 = 0xffffffff
        sub_403320(&var_44)
    label_50b8f4:
        
        if (arg1[0x2e].b == 0)
            goto label_50b8fd
        
        result = sub_50ee10(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
