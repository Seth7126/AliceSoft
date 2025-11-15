// 函数: sub_494e10
// 地址: 0x494e10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fca7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_d0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2[4]
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ebx != 0)
    int32_t esi_1 = 0
    int32_t var_7c = 0
    
    if (ebx s> 0)
        while (true)
            int32_t eax_3 = arg2[5]
            char* ecx
            
            if (eax_3 u< 0x10)
                ecx = arg2
            else
                ecx = *arg2
            
            char var_78
            char var_60
            char var_48
            char var_30
            
            if (ecx[esi_1] != 0x22)
                char* ecx_10
                
                if (eax_3 u< 0x10)
                    ecx_10 = arg2
                else
                    ecx_10 = *arg2
                
                char* ecx_11
                
                if (ecx_10[esi_1] != 0x2d)
                    if (eax_3 u< 0x10)
                        ecx_11 = arg2
                    else
                        ecx_11 = *arg2
                
                if (ecx_10[esi_1] == 0x2d || ecx_11[esi_1] == 0x2f)
                    char* var_90 = nullptr
                    int32_t var_8c_1 = 0
                    int32_t var_88_1 = 0
                    int32_t var_8_5 = 5
                    int32_t* eax_11
                    
                    if (eax_3 u< 0x10)
                        eax_11 = arg2
                    else
                        eax_11 = *arg2
                    
                    sub_4263a0(&var_90, eax_11 + esi_1 + 1)
                    char var_7d = 0
                    sub_4263a0(&var_90, &var_7d)
                    int32_t ecx_25 = arg2[5]
                    var_7c = esi_1 + 3
                    
                    if (ecx_25 u< 0x10)
                        result = arg2
                    else
                        result = *arg2
                    
                    if (*(result + esi_1 + 2) == 0x3d)
                        int32_t* eax_13
                        
                        if (ecx_25 u< 0x10)
                            eax_13 = arg2
                        else
                            eax_13 = *arg2
                        
                        int32_t* ecx_50
                        int32_t* ecx_35
                        char* esi_6
                        
                        if (*(eax_13 + esi_1 + 3) != 0x22)
                            char* var_c0 = nullptr
                            int32_t var_bc_1 = 0
                            int32_t var_b8_1 = 0
                            var_8_5.b = 0xb
                            
                            if (sub_4955c0(arg2, &var_7c, &var_c0) != 0)
                                sub_403360(&var_60, var_c0)
                                var_8_5.b = 0xc
                                esi_6 = var_90
                                sub_403360(&var_78, esi_6)
                                var_8_5.b = 0xd
                                int32_t var_34_4 = 0xf
                                int32_t var_38_4 = 0
                                var_48 = 0
                                sub_403590(&var_48, &var_78, 0, 0xffffffff)
                                var_8_5.b = 0xe
                                int32_t var_1c_4 = 0xf
                                int32_t var_20_4 = 0
                                var_30 = 0
                                sub_403590(&var_30, &var_60, 0, 0xffffffff)
                                var_8_5.b = 0xf
                                sub_495780(arg1 + 4, &var_48)
                                sub_408940(&var_48)
                                sub_403320(&var_78)
                                sub_403320(&var_60)
                                ecx_35 = &var_c0
                            label_49536e:
                                sub_4059a0(ecx_35)
                                int32_t var_8_6 = 0xffffffff
                                
                                if (esi_6 != 0)
                                    sub_403160(esi_6, var_88_1 - esi_6, 1)
                                    var_90 = nullptr
                                    int32_t var_8c_2 = 0
                                    int32_t var_88_2 = 0
                                
                                goto label_4953b0
                            
                            ecx_50 = &var_c0
                        else
                            char* var_b4 = nullptr
                            var_7c = esi_1 + 4
                            int32_t var_b0_1 = 0
                            int32_t var_ac_1 = 0
                            var_8_5.b = 6
                            
                            if (sub_495450(arg2, &var_7c, &var_b4) != 0)
                                sub_403360(&var_60, var_b4)
                                var_8_5.b = 7
                                esi_6 = var_90
                                sub_403360(&var_78, esi_6)
                                var_8_5.b = 8
                                int32_t var_34_3 = 0xf
                                int32_t var_38_3 = 0
                                var_48 = 0
                                sub_403590(&var_48, &var_78, 0, 0xffffffff)
                                var_8_5.b = 9
                                int32_t var_1c_3 = 0xf
                                int32_t var_20_3 = 0
                                var_30 = 0
                                sub_403590(&var_30, &var_60, 0, 0xffffffff)
                                var_8_5.b = 0xa
                                sub_495780(arg1 + 4, &var_48)
                                sub_408940(&var_48)
                                sub_403320(&var_78)
                                sub_403320(&var_60)
                                ecx_35 = &var_b4
                                goto label_49536e
                            
                            ecx_50 = &var_b4
                        sub_4059a0(ecx_50)
                    
                    char* ecx_51 = var_90
                    
                    if (ecx_51 != 0)
                        sub_403160(ecx_51, var_88_1 - ecx_51, 1)
                        result.b = 0
                        goto label_4953c0
                else
                    if (eax_3 u< 0x10)
                        result = arg2
                    else
                        result = *arg2
                    
                    if (*(result + esi_1) == 0x20)
                        esi_1 += 1
                        var_7c = esi_1
                    label_4953b3:
                        
                        if (esi_1 s>= ebx)
                            break
                        
                        continue
                    
                    char* var_a8 = nullptr
                    int32_t var_a4_1 = 0
                    int32_t var_a0_1 = 0
                    int32_t var_8_3 = 0x10
                    
                    if (sub_4955c0(arg2, &var_7c, &var_a8) == 0)
                        sub_4059a0(&var_a8)
                        result.b = 0
                        goto label_4953c0
                    
                    sub_403360(&var_60, var_a8)
                    var_8_3.b = 0x11
                    sub_403360(&var_78, 0x75cebb)
                    var_8_3.b = 0x12
                    int32_t var_34_2 = 0xf
                    int32_t var_38_2 = 0
                    var_48 = 0
                    sub_403590(&var_48, &var_78, 0, 0xffffffff)
                    var_8_3.b = 0x13
                    int32_t var_1c_2 = 0xf
                    int32_t var_20_2 = 0
                    var_30 = 0
                    sub_403590(&var_30, &var_60, 0, 0xffffffff)
                    var_8_3.b = 0x14
                    sub_495780(arg1 + 4, &var_48)
                    sub_408940(&var_48)
                    sub_403320(&var_78)
                    sub_403320(&var_60)
                    int32_t var_8_4 = 0xffffffff
                    sub_4059a0(&var_a8)
                    goto label_4953b0
            else
                char* var_9c = nullptr
                var_7c = esi_1 + 1
                int32_t var_98_1 = 0
                int32_t var_94_1 = 0
                int32_t var_8_1 = 0
                
                if (sub_495450(arg2, &var_7c, &var_9c).b != 0)
                    char* esi_3 = var_9c
                    int32_t var_64_1 = 0xf
                    int32_t var_68_1 = 0
                    var_78 = 0
                    void* ecx_1
                    
                    if (*esi_3 != 0)
                        char* ecx_2 = esi_3
                        
                        do
                            result.b = *ecx_2
                            ecx_2 = &ecx_2[1]
                        while (result.b != 0)
                        
                        ecx_1 = ecx_2 - &ecx_2[1]
                    else
                        ecx_1 = nullptr
                    
                    sub_403490(&var_78, esi_3, ecx_1)
                    var_8_1.b = 1
                    int32_t var_4c_1 = 0xf
                    int32_t var_50_1 = 0
                    var_60 = 0
                    sub_403490(&var_60, 0x75ceba, nullptr)
                    var_8_1.b = 2
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    var_48 = 0
                    sub_403590(&var_48, &var_60, 0, 0xffffffff)
                    var_8_1.b = 3
                    int32_t var_1c_1 = 0xf
                    int32_t var_20_1 = 0
                    var_30 = 0
                    sub_403590(&var_30, &var_78, 0, 0xffffffff)
                    var_8_1.b = 4
                    sub_495780(arg1 + 4, &var_48)
                    sub_408940(&var_48)
                    
                    if (var_4c_1 u>= 0x10)
                        sub_403160(var_60.d, var_4c_1 + 1, 1)
                    
                    int32_t var_4c_2 = 0xf
                    int32_t var_50_2 = 0
                    var_60 = 0
                    
                    if (var_64_1 u>= 0x10)
                        sub_403160(var_78.d, var_64_1 + 1, 1)
                    
                    int32_t var_8_2 = 0xffffffff
                    sub_403160(esi_3, var_94_1 - esi_3, 1)
                    var_9c = nullptr
                    int32_t var_98_2 = 0
                    int32_t var_94_2 = 0
                label_4953b0:
                    esi_1 = var_7c
                    goto label_4953b3
                
                char* ecx_48 = var_9c
                
                if (ecx_48 != 0)
                    sub_403160(ecx_48, var_94_1 - ecx_48, 1)
            result.b = 0
            goto label_4953c0

result.b = 1
label_4953c0:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
