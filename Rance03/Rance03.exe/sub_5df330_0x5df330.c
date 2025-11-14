// 函数: sub_5df330
// 地址: 0x5df330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cab7f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_c4
int32_t eax_2 = __security_cookie ^ &var_c4
int32_t __saved_edi
int32_t var_d8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_78 = ebp
int32_t* result = arg2[4]
int32_t* result_1 = result

if (result != 0)
    int32_t esi_1 = 0
    int32_t var_bc = 0
    
    if (result s> 0)
        do
            int32_t eax_5 = arg2[5]
            char* ecx
            
            if (eax_5 u< 0x10)
                ecx = arg2
            else
                ecx = *arg2
            
            char var_74
            int32_t var_60
            char var_5c
            char var_44
            char var_2c
            int32_t var_18
            
            if (ecx[esi_1] != 0x22)
                char* ecx_9
                
                if (eax_5 u< 0x10)
                    ecx_9 = arg2
                else
                    ecx_9 = *arg2
                
                char* ecx_10
                
                if (ecx_9[esi_1] != 0x2d)
                    if (eax_5 u< 0x10)
                        ecx_10 = arg2
                    else
                        ecx_10 = *arg2
                
                if (ecx_9[esi_1] == 0x2d || ecx_10[esi_1] == 0x2f)
                    char* var_b8 = nullptr
                    char* var_b4_1 = nullptr
                    int32_t var_b0_1 = 0
                    int32_t var_4_4 = 5
                    int32_t* eax_8
                    
                    if (eax_5 u< 0x10)
                        eax_8 = arg2
                    else
                        eax_8 = *arg2
                    
                    sub_403590(&var_b8, 1)
                    
                    if (var_b4_1 != 0)
                        *var_b4_1 = *(eax_8 + esi_1 + 1)
                    
                    char* ebx_2 = var_b8
                    void* ecx_19 = &var_b4_1[1]
                    char var_bd = 0
                    
                    if (&var_bd u>= ecx_19 || ebx_2 u> &var_bd)
                        if (ecx_19 == var_b0_1)
                            sub_403590(&var_b8, 1)
                            ebx_2 = var_b8
                        
                        if (ecx_19 != 0)
                            *ecx_19 = 0
                    else
                        void* ebp_1 = &var_bd - ebx_2
                        
                        if (ecx_19 == var_b0_1)
                            sub_403590(&var_b8, 1)
                            ebx_2 = var_b8
                        
                        if (ecx_19 != 0)
                            *ecx_19 = *(ebx_2 + ebp_1)
                        
                        ebp = var_78
                    
                    result = arg2[5]
                    void* var_b4_3 = ecx_19 + 1
                    var_bc = esi_1 + 3
                    int32_t* ecx_23
                    
                    if (result u< 0x10)
                        ecx_23 = arg2
                    else
                        ecx_23 = *arg2
                    
                    if (*(ecx_23 + esi_1 + 2) != 0x3d)
                        goto label_5dfce5
                    
                    int32_t* eax_11
                    
                    if (result u< 0x10)
                        eax_11 = arg2
                    else
                        eax_11 = *arg2
                    
                    int32_t* ecx_47
                    
                    if (*(eax_11 + esi_1 + 3) == 0x22)
                        char* var_a0 = nullptr
                        var_bc = esi_1 + 4
                        int32_t var_9c_1 = 0
                        int32_t var_98_1 = 0
                        var_4_4.b = 6
                        
                        if (sub_5dfd00(arg2, &var_bc, &var_a0) == 0)
                            ecx_47 = &var_a0
                            goto label_5dfcde
                        
                        char* esi_7 = var_a0
                        var_18 = 0xf
                        int32_t var_1c_3 = 0
                        var_2c = 0
                        void* ecx_24
                        
                        if (*esi_7 != 0)
                            char* ecx_25 = esi_7
                            char i
                            
                            do
                                i = *ecx_25
                                ecx_25 = &ecx_25[1]
                            while (i != 0)
                            ecx_24 = ecx_25 - &ecx_25[1]
                        else
                            ecx_24 = nullptr
                        
                        sub_402110(&var_2c, esi_7, ecx_24)
                        var_4_4.b = 7
                        int32_t var_60_2 = 0xf
                        int32_t var_64_3 = 0
                        var_74 = 0
                        void* ecx_27
                        
                        if (*ebx_2 != 0)
                            char* ecx_28 = ebx_2
                            char i_1
                            
                            do
                                i_1 = *ecx_28
                                ecx_28 = &ecx_28[1]
                            while (i_1 != 0)
                            ecx_27 = ecx_28 - &ecx_28[1]
                        else
                            ecx_27 = nullptr
                        
                        sub_402110(&var_74, ebx_2, ecx_27)
                        var_4_4.b = 8
                        int32_t var_48_3 = 0xf
                        int32_t var_4c_3 = 0
                        var_5c = 0
                        sub_401ff0(&var_5c, &var_74, 0, 0xffffffff)
                        var_4_4.b = 9
                        int32_t var_30_3 = 0xf
                        int32_t var_34_3 = 0
                        var_44 = 0
                        sub_401ff0(&var_44, &var_2c, 0, 0xffffffff)
                        var_4_4.b = 0xa
                        sub_5e0070(ebp + 4, &var_5c)
                        
                        if (var_30_3 u>= 0x10)
                            j__free(var_44.d)
                        
                        int32_t var_30_4 = 0xf
                        int32_t var_34_4 = 0
                        var_44 = 0
                        
                        if (var_48_3 u>= 0x10)
                            j__free(var_5c.d)
                        
                        int32_t var_48_4 = 0xf
                        int32_t var_4c_4 = 0
                        var_5c = 0
                        
                        if (var_60_2 u>= 0x10)
                            j__free(var_74.d)
                        
                        var_60 = 0xf
                        int32_t var_64_4 = 0
                        var_74 = 0
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c.d)
                        
                        j__free(esi_7)
                        var_a0 = nullptr
                        int32_t var_9c_2 = 0
                        int32_t var_98_2 = 0
                        goto label_5dfc54
                    
                    char* var_94 = nullptr
                    int32_t var_90_1 = 0
                    int32_t var_8c_1 = 0
                    var_4_4.b = 0xb
                    
                    if (sub_5dfec0(arg2, &var_bc, &var_94) == 0)
                        ecx_47 = &var_94
                    label_5dfcde:
                        sub_403510(ecx_47)
                    label_5dfce5:
                        
                        if (ebx_2 != 0)
                            j__free(ebx_2)
                        
                        result.b = 0
                        goto label_5dfc97
                    
                    char* esi_8 = var_94
                    var_18 = 0xf
                    int32_t var_1c_4 = 0
                    var_2c = 0
                    void* ecx_33
                    
                    if (*esi_8 != 0)
                        char* ecx_34 = esi_8
                        char i_2
                        
                        do
                            i_2 = *ecx_34
                            ecx_34 = &ecx_34[1]
                        while (i_2 != 0)
                        ecx_33 = ecx_34 - &ecx_34[1]
                    else
                        ecx_33 = nullptr
                    
                    sub_402110(&var_2c, esi_8, ecx_33)
                    var_4_4.b = 0xc
                    int32_t var_60_3 = 0xf
                    int32_t var_64_5 = 0
                    var_74 = 0
                    void* ecx_36
                    
                    if (*ebx_2 != 0)
                        char* ecx_37 = ebx_2
                        char i_3
                        
                        do
                            i_3 = *ecx_37
                            ecx_37 = &ecx_37[1]
                        while (i_3 != 0)
                        ecx_36 = ecx_37 - &ecx_37[1]
                    else
                        ecx_36 = nullptr
                    
                    sub_402110(&var_74, ebx_2, ecx_36)
                    var_4_4.b = 0xd
                    int32_t var_48_5 = 0xf
                    int32_t var_4c_5 = 0
                    var_5c = 0
                    sub_401ff0(&var_5c, &var_74, 0, 0xffffffff)
                    var_4_4.b = 0xe
                    int32_t var_30_5 = 0xf
                    int32_t var_34_5 = 0
                    var_44 = 0
                    sub_401ff0(&var_44, &var_2c, 0, 0xffffffff)
                    var_4_4.b = 0xf
                    sub_5e0070(ebp + 4, &var_5c)
                    
                    if (var_30_5 u>= 0x10)
                        j__free(var_44.d)
                    
                    int32_t var_30_6 = 0xf
                    int32_t var_34_6 = 0
                    var_44 = 0
                    
                    if (var_48_5 u>= 0x10)
                        j__free(var_5c.d)
                    
                    int32_t var_48_6 = 0xf
                    int32_t var_4c_6 = 0
                    var_5c = 0
                    
                    if (var_60_3 u>= 0x10)
                        j__free(var_74.d)
                    
                    var_60 = 0xf
                    int32_t var_64_6 = 0
                    var_74 = 0
                    
                    if (var_18 u>= 0x10)
                        j__free(var_2c.d)
                    
                    j__free(esi_8)
                    var_94 = nullptr
                    int32_t var_90_2 = 0
                    int32_t var_8c_2 = 0
                label_5dfc54:
                    int32_t var_4_5 = 0xffffffff
                    j__free(ebx_2)
                    var_b8 = nullptr
                    int32_t var_b4_4 = 0
                    int32_t var_b0_2 = 0
                    esi_1 = var_bc
                else
                    if (eax_5 u< 0x10)
                        result = arg2
                    else
                        result = *arg2
                    
                    if (*(result + esi_1) != 0x20)
                        char* var_88 = nullptr
                        int32_t var_84_1 = 0
                        int32_t var_80_1 = 0
                        int32_t var_4_2 = 0x10
                        
                        if (sub_5dfec0(arg2, &var_bc, &var_88) == 0)
                            sub_403510(&var_88)
                            result.b = 0
                            goto label_5dfc97
                        
                        char* esi_4 = var_88
                        sub_401f60(&var_74, esi_4)
                        var_4_2.b = 0x11
                        sub_401f60(&var_2c, 0x6da76a)
                        var_4_2.b = 0x12
                        var_4_2.b = 0x13
                        sub_5e0070(ebp + 4, sub_5df1f0(&var_5c, &var_2c, &var_74))
                        sub_470d50(&var_5c)
                        
                        if (var_18 u>= 0x10)
                            j__free(var_2c.d)
                        
                        var_18 = 0xf
                        int32_t var_1c_2 = 0
                        var_2c = 0
                        
                        if (var_60 u>= 0x10)
                            j__free(var_74.d)
                        
                        int32_t var_4_3 = 0xffffffff
                        
                        if (esi_4 != 0)
                            j__free(esi_4)
                            var_88 = nullptr
                            int32_t var_84_2 = 0
                            int32_t var_80_2 = 0
                        
                        esi_1 = var_bc
                    else
                        esi_1 += 1
                        var_bc = esi_1
            else
                char* var_ac = nullptr
                var_bc = esi_1 + 1
                int32_t var_a8_1 = 0
                int32_t var_a4_1 = 0
                int32_t var_4 = 0
                
                if (sub_5dfd00(arg2, &var_bc, &var_ac) == 0)
                    sub_403510(&var_ac)
                    result.b = 0
                    goto label_5dfc97
                
                char* esi_3 = var_ac
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                void* ecx_1
                
                if (*esi_3 != 0)
                    char* ecx_3 = esi_3
                    char i_4
                    
                    do
                        i_4 = *ecx_3
                        ecx_3 = &ecx_3[1]
                    while (i_4 != 0)
                    ecx_1 = ecx_3 - &esi_3[1]
                else
                    ecx_1 = nullptr
                
                sub_402110(&var_2c, esi_3, ecx_1)
                var_4.b = 1
                int32_t var_60_1 = 0xf
                int32_t var_64_1 = 0
                var_74 = 0
                sub_402110(&var_74, 0x6da76b, nullptr)
                var_4.b = 2
                int32_t var_48_1 = 0xf
                int32_t var_4c_1 = 0
                var_5c = 0
                sub_401ff0(&var_5c, &var_74, 0, 0xffffffff)
                var_4.b = 3
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                sub_401ff0(&var_44, &var_2c, 0, 0xffffffff)
                var_4.b = 4
                sub_5e0070(ebp + 4, &var_5c)
                
                if (var_30_1 u>= 0x10)
                    j__free(var_44.d)
                
                int32_t var_30_2 = 0xf
                int32_t var_34_2 = 0
                var_44 = 0
                
                if (var_48_1 u>= 0x10)
                    j__free(var_5c.d)
                
                int32_t var_48_2 = 0xf
                int32_t var_4c_2 = 0
                var_5c = 0
                
                if (var_60_1 u>= 0x10)
                    j__free(var_74.d)
                
                var_60 = 0xf
                int32_t var_64_2 = 0
                var_74 = 0
                
                if (var_18 u>= 0x10)
                    j__free(var_2c.d)
                
                int32_t var_4_1 = 0xffffffff
                j__free(esi_3)
                var_ac = nullptr
                int32_t var_a8_2 = 0
                int32_t var_a4_2 = 0
                esi_1 = var_bc
        while (esi_1 s< result_1)

result.b = 1
label_5dfc97:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c4)
return result
