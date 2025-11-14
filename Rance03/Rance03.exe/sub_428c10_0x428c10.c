// 函数: sub_428c10
// 地址: 0x428c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b5050
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_6 = zx.d(arg3)
int32_t result

if (eax_6 s> 0x9cd2)
    if (eax_6 == 0x9cd4)
    label_428f3a:
        sub_429010(arg1)
        EndDialog(arg2, 0xffffffff)
        result = 1
    else
        result = 0
else
    PSTR lpText
    PSTR lpCaption
    char var_4c
    int32_t var_38_1
    char var_34
    
    if (eax_6 == 0x9cd2)
        var_38_1 = 0xf
        int32_t var_3c_2 = 0
        var_4c = 0
        int32_t var_c_2 = 2
        sub_427a60(&var_4c)
        
        if (var_3c_2 != 0)
            void* ecx_9 = *(arg1 + 0x10)
            int32_t esi_7 = *(*(arg1 + 0x14) + 0xec) + 1
            
            if (esi_7 s>= (*(ecx_9 + 0x2c) - *(ecx_9 + 0x28)) s>> 2)
            label_428eda:
                int32_t var_68_13 = 0
                lpCaption = 0x6dac7c
                lpText = 0x6dac84
            label_428d75:
                MessageBoxA(arg2, lpText, lpCaption, MB_OK)
            else
                while (true)
                    int32_t var_20_2 = 0xf
                    int32_t var_24_2 = 0
                    var_34 = 0
                    var_c_2.b = 3
                    int32_t edx_1
                    
                    if (esi_7 s< 0 || esi_7 s>= (*(ecx_9 + 0x2c) - *(ecx_9 + 0x28)) s>> 2)
                        edx_1 = 0xffffffff
                    else
                        edx_1 = *(*(ecx_9 + 0x28) + (esi_7 << 2))
                    
                    char* edx_2 = (*(**(ecx_9 + 0xc) + 0x1c))(edx_1)
                    
                    if (edx_2 != 0)
                        void* ecx_11
                        
                        if (*edx_2 != 0)
                            char* ecx_12 = edx_2
                            char* eax_29
                            
                            do
                                eax_29.b = *ecx_12
                                ecx_12 = &ecx_12[1]
                            while (eax_29.b != 0)
                            ecx_11 = ecx_12 - &ecx_12[1]
                        else
                            ecx_11 = nullptr
                        
                        int32_t ecx_14 = sub_402110(&var_34, edx_2, ecx_11)
                        int32_t var_68_11 = var_3c_2
                        char* eax_30 = &var_4c
                        
                        if (var_38_1 u>= 0x10)
                            eax_30 = var_4c.d
                        
                        if (sub_4294e0(&var_34, eax_30, ecx_14) != 0xffffffff)
                            LPARAM eax_35 = &var_4c
                            
                            if (var_38_1 u>= 0x10)
                                eax_35 = var_4c.d
                            
                            sub_428f70(arg1, eax_35, esi_7)
                            
                            if (var_20_2 u>= 0x10)
                                j__free(var_34.d)
                            
                            int32_t var_20_3 = 0xf
                            int32_t var_24_3 = 0
                            var_34 = 0
                            break
                    
                    var_c_2.b = 2
                    
                    if (var_20_2 u>= 0x10)
                        j__free(var_34.d)
                    
                    ecx_9 = *(arg1 + 0x10)
                    esi_7 += 1
                    
                    if (esi_7 s>= (*(ecx_9 + 0x2c) - *(ecx_9 + 0x28)) s>> 2)
                        goto label_428eda
        
        if (var_38_1 u< 0x10)
            result = 1
        else
            j__free(var_4c.d)
            result = 1
    else
        if (eax_6 == 2)
            goto label_428f3a
        
        if (eax_6 != 0x9cd0)
            result = 0
        else
            var_38_1 = 0xf
            var_4c = (eax_6 - 0x9cd0).b
            int32_t var_c_1 = eax_6 - 0x9cd0
            sub_427a60(&var_4c)
            
            if (eax_6 == 0x9cd0)
                sub_401fb0(&var_4c)
                result = 1
            else
                int32_t esi_1 = *(*(arg1 + 0x14) + 0xec)
                int32_t esi_2 = esi_1 - 1
                
                if (esi_1 - 1 s< 0)
                    void* eax_10 = *(arg1 + 0x10)
                    esi_2 = ((*(eax_10 + 0x2c) - *(eax_10 + 0x28)) s>> 2) - 1
                
                if (esi_2 s< 0)
                label_428d68:
                    int32_t var_68_5 = 0
                    lpCaption = 0x6dac2c
                    lpText = 0x6dac34
                    goto label_428d75
                
                while (true)
                    int32_t var_20_1 = 0xf
                    int32_t var_24_1 = 0
                    var_34 = 0
                    var_c_1.b = 1
                    void* ecx_1 = *(arg1 + 0x10)
                    int32_t eax_15
                    
                    if (esi_2 s< 0 || esi_2 s>= (*(ecx_1 + 0x2c) - *(ecx_1 + 0x28)) s>> 2)
                        eax_15 = 0xffffffff
                    else
                        eax_15 = *(*(ecx_1 + 0x28) + (esi_2 << 2))
                    
                    char eax_16
                    int32_t ecx_2
                    eax_16, ecx_2 = sub_42cce0(ecx_1, eax_15, &var_34)
                    
                    if (eax_16 != 0)
                        int32_t var_68_4 = eax_6 - 0x9cd0
                        char* eax_17 = &var_4c
                        
                        if (var_38_1 u>= 0x10)
                            eax_17 = var_4c.d
                        
                        if (sub_4294e0(&var_34, eax_17, ecx_2) != 0xffffffff)
                            LPARAM eax_19 = &var_4c
                            
                            if (var_38_1 u>= 0x10)
                                eax_19 = var_4c.d
                            
                            sub_428f70(arg1, eax_19, esi_2)
                            sub_401fb0(&var_34)
                            break
                        
                        var_c_1.b = 0
                        sub_401fb0(&var_34)
                    else
                        var_c_1.b = eax_16
                        
                        if (var_20_1 u>= 0x10)
                            j__free(var_34.d)
                    
                    int32_t temp4_1 = esi_2
                    esi_2 -= 1
                    
                    if (temp4_1 - 1 s< 0)
                        goto label_428d68
                
                sub_401fb0(&var_4c)
                result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
