// 函数: sub_6c6430
// 地址: 0x6c6430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_748e10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_78 = arg2
char* result

if (sub_6c6bb0(arg2, 0x783454).b == 0)
label_6c664f:
    result.b = 0
else if (sub_6c6bb0(arg2, 0x7833c4).b == 0)
label_6c664f_1:
    result.b = 0
else
    while (true)
        char* var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_8_1 = 0
        void* eax_13
        
        if (sub_6c6930(&var_2c) != 0)
            char* ecx_3 = &var_2c
            int32_t eax_5 = 1
            
            if (var_18_1 u>= 0x10)
                ecx_3 = var_2c.d
            
            if (var_1c_1 u< 1)
                eax_5 = var_1c_1
            
            if (sub_406ac0(eax_5, 0x7833c0, ecx_3, eax_5) == 0 && var_1c_1 u>= 1 && var_1c_1 u<= 1)
                if (var_18_1 u>= 0x10)
                    eax_13 = &var_18_1[1]
                    goto label_6c669d
                
                result.b = 1
                break
                break
            
            char var_44
            sub_404d80(&var_44, &var_2c)
            var_8_1.b = 1
            int32_t var_30
            
            if (sub_407560(&var_44, 0x7833bc) != 0)
            label_6c6537:
                
                if (sub_6c5b80(arg1, &var_2c) != 0)
                    goto label_6c655e
                
            label_6c6615:
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44.d, var_30 + 1, 1)
                
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, &var_18_1[1], 1)
                
                goto label_6c664f_1
            
            if (sub_407560(&var_44, 0x7833b8) != 0)
                if (sub_5f2400(&var_2c) == 0)
                    goto label_6c655e
                
                goto label_6c6537
            
            sub_424db0(&arg1[0x24], &var_2c)
        label_6c655e:
            
            if (sub_6c6930(&var_2c) != 0)
                if (sub_407560(&var_2c, 0x783408) != 0)
                    sub_403320(&var_44)
                    sub_403320(&var_2c)
                    result.b = 1
                    break
                    break
                
                if (sub_407560(&var_2c, 0x783404) == 0)
                    void** eax_14 = arg3
                    
                    if (eax_14[5] u>= 0x10)
                        eax_14 = *eax_14
                    
                    void** var_80 = eax_14
                    void var_5c
                    sub_403360(&var_5c, 0x7833c8)
                    var_8_1.b = 2
                    char* eax_15 = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        eax_15 = var_2c.d
                    
                    var_8_1.b = 3
                    void var_74
                    sub_6c52e0(sub_461a30(&var_80, &var_5c, &var_74, &var_80, eax_15))
                    sub_403320(&var_74)
                    sub_403320(&var_5c)
                else
                    sub_403320(&var_44)
                    sub_403320(&var_2c)
                    continue
                
                goto label_6c6615
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
            
            int32_t var_30_2 = 0xf
            int32_t var_34_2 = 0
            var_44 = 0
        
        if (var_18_1 u< 0x10)
            result.b = 1
            break
        
        eax_13 = &var_18_1[1]
    label_6c669d:
        sub_403160(var_2c.d, eax_13, 1)
        result.b = 1
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
