// 函数: sub_4557c0
// 地址: 0x4557c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 s>= 7)
    char* ecx = *(arg3 + 4)
    
    if (&ecx[4] u> *(arg3 + 8))
        result.b = 0
    else
        int32_t var_80_1 = 0
        int32_t ebx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
        *(arg3 + 4) = &ecx[4]
        void** var_90
        uint32_t var_84
        void* var_4c
        int32_t var_38
        char var_2c
        int32_t var_1c
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_3
        
        if (ebx_7 s> 0)
            while (true)
                var_18_3 = 0xf
                var_1c = 0
                var_2c = 0
                int32_t var_8_1 = 0
                
                if (sub_61ed80(arg3, &var_2c) == 0)
                    break
                
                char* edx_2 = *(arg3 + 4)
                
                if (&edx_2[4] u> *(arg3 + 8))
                    break
                
                uint32_t ecx_8 = ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                    | zx.d(*edx_2)
                *(arg3 + 4) = &edx_2[4]
                var_84 = ecx_8
                var_8_1.b = 1
                int32_t* eax_11
                void* ecx_11
                eax_11, ecx_11 = sub_432530(sub_4322f0(&var_84, &var_2c, &var_4c, &var_84))
                int32_t* var_a8_4 = eax_11
                void* var_ac_1 = &eax_11[4]
                sub_457ec0(arg1 + 0x34, &var_90, ecx_11)
                
                if (var_38 u>= 0x10)
                    sub_403160(var_4c, var_38 + 1, 1)
                
                int32_t var_8_2 = 0xffffffff
                
                if (var_18_3 u>= 0x10)
                    sub_403160(var_2c.d, var_18_3 + 1, 1)
                
                int32_t esi_4 = var_80_1 + 1
                var_80_1 = esi_4
                
                if (esi_4 s>= ebx_7)
                    goto label_45591e
            
            goto label_455c94
        
    label_45591e:
        char* ecx_13 = *(arg3 + 4)
        
        if (&ecx_13[4] u> *(arg3 + 8))
            result.b = 0
        else
            int32_t var_80_2 = 0
            int32_t ebx_14 = ((zx.d(ecx_13[3]) << 8 | zx.d(ecx_13[2])) << 8 | zx.d(ecx_13[1])) << 8
                | zx.d(*ecx_13)
            *(arg3 + 4) = &ecx_13[4]
            
            if (ebx_14 s<= 0)
            label_455a3d:
                char* ecx_26 = *(arg3 + 4)
                
                if (&ecx_26[4] u> *(arg3 + 8))
                    result.b = 0
                else
                    int32_t var_80_3 = 0
                    int32_t ebx_21 =
                        ((zx.d(ecx_26[3]) << 8 | zx.d(ecx_26[2])) << 8 | zx.d(ecx_26[1])) << 8
                        | zx.d(*ecx_26)
                    *(arg3 + 4) = &ecx_26[4]
                    char var_48
                    struct _EXCEPTION_REGISTRATION_RECORD** var_34_1
                    
                    if (ebx_21 s> 0)
                        while (true)
                            var_34_1 = 0xf
                            int32_t var_38_1 = 0
                            var_48 = 0
                            int32_t var_8_5 = 4
                            int32_t var_18_1 = 0xf
                            int32_t var_1c_1 = 0
                            var_2c = 0
                            var_8_5.b = 5
                            
                            if (sub_61ed80(arg3, &var_48) != 0 && sub_61ed80(arg3, &var_2c) != 0)
                                var_8_5.b = 6
                                void var_7c
                                int32_t* eax_35
                                void* ecx_31
                                eax_35, ecx_31 =
                                    sub_4581e0(sub_457d60(&var_2c, &var_48, &var_7c, &var_2c))
                                int32_t* var_a8_13 = eax_35
                                void* var_ac_7 = &eax_35[4]
                                sub_44eda0(arg1 + 0x44, &var_90, ecx_31)
                                sub_408940(&var_7c)
                                
                                if (var_18_1 u>= 0x10)
                                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                                
                                int32_t var_8_6 = 0xffffffff
                                int32_t var_18_2 = 0xf
                                var_1c = 0
                                var_2c = 0
                                
                                if (var_34_1 u>= 0x10)
                                    sub_403160(var_48.d, var_34_1 + 1, 1)
                                
                                int32_t esi_11 = var_80_3 + 1
                                var_80_3 = esi_11
                                
                                if (esi_11 s>= ebx_21)
                                    goto label_455b6d
                                
                                continue
                            
                            if (var_18_1 u>= 0x10)
                                sub_403160(var_2c.d, var_18_1 + 1, 1)
                            
                            int32_t var_18_4 = 0xf
                            int32_t var_1c_2 = 0
                            var_2c = 0
                            break
                        
                        goto label_455cf4
                    
                label_455b6d:
                    char* ecx_34 = *(arg3 + 4)
                    
                    if (&ecx_34[4] u> *(arg3 + 8))
                        result.b = 0
                    else
                        int32_t var_80_4 = 0
                        int32_t ebx_28 =
                            ((zx.d(ecx_34[3]) << 8 | zx.d(ecx_34[2])) << 8 | zx.d(ecx_34[1])) << 8
                            | zx.d(*ecx_34)
                        *(arg3 + 4) = &ecx_34[4]
                        
                        if (ebx_28 s<= 0)
                            result.b = 1
                        else
                            while (true)
                                var_34_1 = 0xf
                                int32_t var_38_2 = 0
                                var_48 = 0
                                int32_t var_8_7 = 7
                                
                                if (sub_61ed80(arg3, &var_48) == 0)
                                    break
                                
                                char* edx_10 = *(arg3 + 4)
                                
                                if (&edx_10[4] u> *(arg3 + 8))
                                    break
                                
                                uint32_t ecx_42 = ((zx.d(edx_10[3]) << 8 | zx.d(edx_10[2])) << 8
                                    | zx.d(edx_10[1])) << 8 | zx.d(*edx_10)
                                *(arg3 + 4) = &edx_10[4]
                                var_84 = ecx_42
                                var_8_7.b = 8
                                void* var_30
                                int32_t* eax_48
                                void* ecx_45
                                eax_48, ecx_45 =
                                    sub_432530(sub_4322f0(&var_84, &var_48, &var_30, &var_84))
                                int32_t* var_a8_17 = eax_48
                                void* var_ac_10 = &eax_48[4]
                                sub_457ec0(arg1 + 0x4c, &var_90, ecx_45)
                                
                                if (var_1c u>= 0x10)
                                    sub_403160(var_30, var_1c + 1, 1)
                                
                                int32_t var_8_8 = 0xffffffff
                                
                                if (var_34_1 u>= 0x10)
                                    sub_403160(var_48.d, var_34_1 + 1, 1)
                                
                                int32_t esi_15 = var_80_4 + 1
                                var_80_4 = esi_15
                                
                                if (esi_15 s>= ebx_28)
                                    result.b = 1
                                    goto label_455cad
                            
                        label_455cf4:
                            
                            if (var_34_1 u< 0x10)
                                result.b = 0
                            else
                                int32_t var_a8_19 = 1
                                sub_403160(var_48.d, var_34_1 + 1, 1)
                                result.b = 0
            else
                while (true)
                    var_18_3 = 0xf
                    var_1c = 0
                    var_2c = 0
                    int32_t var_8_3 = 2
                    
                    if (sub_61ed80(arg3, &var_2c) == 0)
                        break
                    
                    char* edx_5 = *(arg3 + 4)
                    
                    if (&edx_5[4] u> *(arg3 + 8))
                        break
                    
                    uint32_t ecx_21 =
                        ((zx.d(edx_5[3]) << 8 | zx.d(edx_5[2])) << 8 | zx.d(edx_5[1])) << 8
                        | zx.d(*edx_5)
                    *(arg3 + 4) = &edx_5[4]
                    var_84 = ecx_21
                    var_8_3.b = 3
                    int32_t* eax_24
                    void* ecx_24
                    eax_24, ecx_24 = sub_432530(sub_4322f0(&var_84, &var_2c, &var_4c, &var_84))
                    int32_t* var_a8_8 = eax_24
                    void* var_ac_4 = &eax_24[4]
                    sub_458010(arg1 + 0x3c, &var_90, ecx_24)
                    
                    if (var_38 u>= 0x10)
                        sub_403160(var_4c, var_38 + 1, 1)
                    
                    int32_t var_8_4 = 0xffffffff
                    
                    if (var_18_3 u>= 0x10)
                        sub_403160(var_2c.d, var_18_3 + 1, 1)
                    
                    int32_t esi_8 = var_80_2 + 1
                    var_80_2 = esi_8
                    
                    if (esi_8 s>= ebx_14)
                        goto label_455a3d
                
            label_455c94:
                
                if (var_18_3 u< 0x10)
                    result.b = 0
                else
                    int32_t var_a8_18 = 1
                    sub_403160(var_2c.d, var_18_3 + 1, 1)
                    result.b = 0
else
    result.b = 1

label_455cad:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
