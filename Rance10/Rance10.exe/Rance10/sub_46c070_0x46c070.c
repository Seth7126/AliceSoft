// 函数: sub_46c070
// 地址: 0x46c070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d250
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = *(arg1 + 4)
int32_t var_84 = 0
sub_46c860(arg1)
int32_t eax_3 = *(arg1 + 4)
void* var_60
int32_t var_4c

if (ebx != eax_3)
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    int32_t ecx_9 = sub_403490(&var_30, ebx, eax_3 - ebx)
    int32_t var_9c_2 = 1
    int32_t var_8_4 = 3
    char var_7c = 0x2e
    
    if (sub_42cb30(&var_30, &var_7c, ecx_9) == 0xffffffff)
        char eax_21
        int32_t ecx_17
        eax_21, ecx_17 = sub_407560(&var_30, "const")
        int32_t var_a0_9
        int32_t var_9c_9
        
        if (eax_21 != 0)
            var_9c_9 = ecx_17
            var_a0_9 = 2
        else
            char eax_22
            eax_22, ecx_17 = sub_407560(&var_30, 0x75f5c8)
            
            if (eax_22 != 0)
                var_9c_9 = ecx_17
                var_a0_9 = 2
            else
                char eax_23
                eax_23, ecx_17 = sub_407560(&var_30, "string")
                
                if (eax_23 != 0)
                    var_9c_9 = ecx_17
                    var_a0_9 = 2
                else
                    char eax_24
                    eax_24, ecx_17 = sub_407560(&var_30, "float")
                    
                    if (eax_24 != 0)
                        var_9c_9 = ecx_17
                        var_a0_9 = 2
                    else
                        char eax_25
                        eax_25, ecx_17 = sub_407560(&var_30, 0x75f670)
                        
                        if (eax_25 != 0)
                            var_9c_9 = ecx_17
                            var_a0_9 = 2
                        else
                            char* eax_26 = &var_30
                            
                            if (var_1c_1 u>= 0x10)
                                eax_26 = var_30.d
                            
                            if (*eax_26 != 0x23)
                            label_46c35f:
                                char eax_32
                                int32_t ecx_29
                                eax_32, ecx_29 = sub_407560(&var_30, "true")
                                char eax_33
                                
                                if (eax_32 == 0)
                                    eax_33, ecx_29 = sub_407560(&var_30, "false")
                                
                                if (eax_32 != 0 || eax_33 != 0)
                                    int32_t var_9c_8 = ecx_29
                                    var_a0_9 = 0x11
                                else
                                    int32_t var_9c_7 = ecx_29
                                    var_a0_9 = 0x13
                            else
                                char eax_27
                                int32_t ecx_23
                                eax_27, ecx_23 = sub_407560(&var_30, 0x75f66c)
                                int32_t var_9c_6
                                
                                if (eax_27 != 0)
                                    var_9c_6 = ecx_23
                                    var_a0_9 = 3
                                else
                                    char eax_28
                                    eax_28, ecx_23 = sub_407560(&var_30, "#define")
                                    
                                    if (eax_28 != 0)
                                        var_9c_6 = ecx_23
                                        var_a0_9 = 3
                                    else
                                        char eax_29
                                        eax_29, ecx_23 = sub_407560(&var_30, "#include")
                                        
                                        if (eax_29 != 0)
                                            var_9c_6 = ecx_23
                                            var_a0_9 = 3
                                        else
                                            char eax_30
                                            eax_30, ecx_23 = sub_407560(&var_30, "#gamename")
                                            
                                            if (eax_30 != 0)
                                                var_9c_6 = ecx_23
                                                var_a0_9 = 3
                                            else
                                                char eax_31
                                                eax_31, ecx_23 = sub_407560(&var_30, "#EOF")
                                                
                                                if (eax_31 == 0)
                                                    goto label_46c35f
                                                
                                                var_9c_6 = ecx_23
                                                var_a0_9 = 3
        sub_471d90(arg2, &var_30, var_a0_9)
        sub_403320(&var_30)
    else
        char* eax_12 = &var_30
        
        if (var_1c_1 u>= 0x10)
            eax_12 = var_30.d
        
        char* var_80 = eax_12
        sub_403360(&var_60, 0x75f60c)
        var_8_4.b = 4
        char var_78
        char* eax_14 = sub_409240(&var_80, &var_60, &var_78, &var_80)
        var_8_4.b = 5
        int32_t ecx_14 = sub_45eb40(*(arg1 + 0x2c), eax_14)
        int32_t var_64
        
        if (var_64 u>= 0x10)
            ecx_14 = sub_403160(var_78.d, var_64 + 1, 1)
        
        var_8_4.b = 3
        int32_t var_64_1 = 0xf
        int32_t var_68_1 = 0
        var_78 = 0
        
        if (var_4c u>= 0x10)
            ecx_14 = sub_403160(var_60, var_4c + 1, 1)
        
        int32_t var_9c_5 = ecx_14
        sub_471d90(arg2, &var_30, 0)
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
else
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    int32_t* eax_4 = sub_403490(&var_48, 0x75f5e4, 0x20)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    sub_4055a0(*(arg1 + 0x2c), sub_4175e0(eax_4, &var_48, &var_60, U"\n"), 0, 0xffffffff)
    
    if (var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, var_34_1 + 1, 1)
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    int32_t var_9c = sub_403490(&var_48, 0x75ce26, nullptr)
    int32_t var_8_3 = 2
    sub_471d90(arg2, &var_48, 0)
    
    if (var_34_2 u>= 0x10)
        sub_403160(var_48.d, var_34_2 + 1, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
