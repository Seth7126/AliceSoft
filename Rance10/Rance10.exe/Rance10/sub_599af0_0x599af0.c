// 函数: sub_599af0
// 地址: 0x599af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e2a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_599e00(arg1)
int32_t var_68 = arg2
int32_t var_64 = arg2
int32_t var_60 = arg3 + arg2

while (true)
    void* var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44[0x10]
    var_44[0] = 0
    int32_t var_8_1 = 0
    void* var_90_2
    int32_t var_8c_3
    int32_t var_70
    char var_2c
    int32_t var_18_1
    
    if (sub_5de3d0(&var_44, &var_70) == 0)
        void* result
        
        if (var_70 == 1)
            if (var_30_1 u>= 0x10)
                sub_403160(var_44[0].d, var_30_1 + 1, 1)
            
            sub_5a4010(arg1)
            *arg1 += 1
            result.b = 1
            goto label_599dd6
        
        var_18_1 = 0xf
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x768780, 0x12)
        var_8_1.b = 1
    label_599d9e:
        sub_5e01e0(&var_2c)
    label_599da6:
        
        if (var_18_1 u< 0x10)
            goto label_599dc0
        
        int32_t var_88_10 = 1
        var_8c_3 = var_18_1 + 1
        var_90_2 = var_2c.d
    label_599db2:
        sub_403160(var_90_2, var_8c_3, 1)
    label_599dc0:
        
        if (var_30_1 u>= 0x10)
            sub_403160(var_44[0].d, var_30_1 + 1, 1)
        
        result.b = 0
    label_599dd6:
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    char (* ecx)[0x10] = &var_44
    int32_t eax_6 = 0x12
    
    if (var_30_1 u>= 0x10)
        ecx = var_44[0].d
    
    if (var_34_1 u< 0x12)
        eax_6 = var_34_1
    
    if (sub_406ac0(eax_6, 0x76876c, ecx, eax_6) != 0 || var_34_1 u< 0x12 || var_34_1 u> 0x12)
        char (* ecx_3)[0x10] = &var_44
        int32_t eax_9 = 0x12
        
        if (var_30_1 u>= 0x10)
            ecx_3 = var_44[0].d
        
        if (var_34_1 u< 0x12)
            eax_9 = var_34_1
        
        if (sub_406ac0(eax_9, 0x7687f8, ecx_3, eax_9) != 0 || var_34_1 u< 0x12 || var_34_1 u> 0x12)
            char (* ecx_6)[0x10] = &var_44
            int32_t eax_12 = 0xc
            
            if (var_30_1 u>= 0x10)
                ecx_6 = var_44[0].d
            
            if (var_34_1 u< 0xc)
                eax_12 = var_34_1
            
            char var_5c
            int32_t var_48
            
            if (sub_406ac0(eax_12, 0x7687bc, ecx_6, eax_12) != 0 || var_34_1 u< 0xc
                    || var_34_1 u> 0xc)
                var_18_1 = 0xf
                char (* eax_19)[0x10] = &var_44
                int32_t var_1c_3 = 0
                
                if (var_30_1 u>= 0x10)
                    eax_19 = var_44[0].d
                
                char (* var_6c)[0x10] = eax_19
                var_2c = 0
                sub_403490(&var_2c, 0x768818, 0x2a)
                var_8_1.b = 5
                var_8_1.b = 6
                sub_5e01e0(sub_409240(&var_6c, &var_2c, &var_5c, &var_6c))
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c.d, var_48 + 1, 1)
                
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = 0
                var_5c = 0
                goto label_599da6
            
            if (sub_59a080(arg1, &var_68) == 0)
                sub_403360(&var_5c, 0x768794)
                var_8_1.b = 4
                sub_5e01e0(&var_5c)
                
                if (var_48 u< 0x10)
                    goto label_599dc0
                
                int32_t var_88_8 = 1
                var_8c_3 = var_48 + 1
                var_90_2 = var_5c.d
                goto label_599db2
        else
            char eax_11 = sub_599f70(arg1, &var_68)
            
            if (eax_11 == 0)
                var_18_1 = 0xf
                int32_t var_1c_2 = 0
                var_2c = eax_11
                sub_403490(&var_2c, 0x7687cc, 0x2a)
                var_8_1.b = 3
                goto label_599d9e
    else
        char eax_8 = sub_599ea0(arg1, &var_68)
        
        if (eax_8 == 0)
            var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = eax_8
            sub_403490(&var_2c, 0x768740, 0x2a)
            var_8_1.b = 2
            goto label_599d9e
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44[0].d, var_30_1 + 1, 1)
