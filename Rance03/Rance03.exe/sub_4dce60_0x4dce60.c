// 函数: sub_4dce60
// 地址: 0x4dce60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bfe60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_485bc0(arg1 + 4, arg2, 0)
int32_t* result = sub_4dfc00()

if (result.b == 0)
    int32_t eax_6 = sub_4c75f0(arg1 + 0xa4)
    result = sub_4c75f0(arg1 + 0xbc)
    char var_7c
    int32_t var_64
    
    if (arg2 != 0x25)
        if (arg2 != 0x27)
            char* var_98_11
            void* ecx_7
            
            if (arg2 != 0x24)
                if (arg2 != 0x23)
                    int32_t eax_12
                    
                    if (arg2 == 8)
                        result.b = *(arg1 + 0x134)
                        
                        if (result.b == 0)
                            eax_12 = *(arg1 + 0x94)
                            
                            if (eax_12 != 0xffffffff)
                            label_4dd137:
                                int32_t var_98_22 = eax_6
                                int32_t var_9c_7 = eax_12
                                result = sub_4df060(arg1 - 4)
                                *(arg1 + 0x94) = 0xffffffff
                                *(arg1 + 0x98) = 0xffffffff
                            else
                                sub_4dfc90(&var_7c, arg1 + 0xa4)
                                int32_t var_c_3 = 2
                                sub_403110(arg1 + 0xa4, &var_7c, nullptr, 0xffffffff)
                                int32_t var_98_16 = eax_6 - sub_4c75f0(&var_7c)
                                int32_t var_9c_4 = eax_6
                                sub_4df060(arg1 - 4)
                                result = sub_401fb0(&var_7c)
                                *(arg1 + 0x94) = 0xffffffff
                                *(arg1 + 0x98) = 0xffffffff
                    else if (arg2 == 0x2e)
                        result.b = *(arg1 + 0x134)
                        
                        if (result.b == 0)
                            eax_12 = *(arg1 + 0x94)
                            
                            if (eax_12 != 0xffffffff)
                                goto label_4dd137
                            
                            int32_t var_c_4 = 3
                            void var_4c
                            void var_34
                            sub_408340(arg1 + 0xbc, 
                                sub_40d1c0(sub_4dfe60(&var_4c, arg1 + 0xbc), &var_4c, &var_34, 
                                    arg1 + 0xbc))
                            sub_401fb0(&var_34)
                            int32_t var_98_21 = sub_4c75f0(&var_4c) + eax_6
                            int32_t var_9c_6 = eax_6
                            sub_4df060(arg1 - 4)
                            result = sub_401fb0(&var_4c)
                            *(arg1 + 0x94) = 0xffffffff
                            *(arg1 + 0x98) = 0xffffffff
                    else if (arg2 != 0x43)
                        if (arg2 != 0x58)
                            if (arg2 != 0x56)
                                if (arg2 == 0x41 && *(arg1 + 0x91) != 0)
                                    *(arg1 + 0x94) = 0
                                    sub_403110(arg1 + 0xa4, arg1 + 0xbc, nullptr, 0xffffffff)
                                    sub_402670(arg1 + 0xbc, 0x6da567)
                                    result = sub_4daf10(arg1 + 0xf0, arg1 + 0xa4)
                            else if (*(arg1 + 0x91) != 0 && *(arg1 + 0x134) == 0)
                                result = sub_4dfb10(arg1 - 4)
                        else if (*(arg1 + 0x91) != 0 && *(arg1 + 0x134) == 0)
                            result = sub_4dfac0(arg1 - 4)
                    else if (*(arg1 + 0x91) != 0)
                        result = sub_4df9f0(arg1 - 4)
                else if (result s> 0)
                    sub_408340(arg1 + 0xa4, sub_40d1c0(result, arg1 + 0xa4, &var_64, arg1 + 0xbc))
                    sub_401fb0(&var_64)
                    var_98_11 = &data_6da56f
                    ecx_7 = arg1 + 0xbc
                    goto label_4dd00e
            else if (eax_6 s> 0)
                sub_408340(arg1 + 0xbc, sub_40d1c0(result, arg1 + 0xa4, &var_64, arg1 + 0xbc))
                sub_401fb0(&var_64)
                var_98_11 = &data_6da581
                ecx_7 = arg1 + 0xa4
            label_4dd00e:
                result = sub_402670(ecx_7, var_98_11)
            label_4dd013:
                
                if (*(arg1 + 0x90) == 0)
                    *(arg1 + 0x94) = 0xffffffff
                    *(arg1 + 0x98) = 0xffffffff
        else if (result s> 0)
            int32_t var_c_2 = 1
            result = sub_403110(arg1 + 0xa4, sub_4dfe60(&var_64, arg1 + 0xbc), nullptr, 0xffffffff)
        label_4dcf74:
            int32_t var_50
            
            if (var_50 u< 0x10)
                goto label_4dd013
            
            result = j__free(var_64)
            goto label_4dd013
    else if (eax_6 s> 0)
        char* eax_7 = sub_4dfc90(&var_64, arg1 + 0xa4)
        int32_t var_c_1 = 0
        result = sub_408340(arg1 + 0xbc, sub_410ad0(eax_7, eax_7, &var_7c, arg1 + 0xbc))
        int32_t var_68
        
        if (var_68 u>= 0x10)
            result = j__free(var_7c.d)
        
        int32_t var_68_1 = 0xf
        int32_t var_6c_1 = 0
        var_7c = 0
        goto label_4dcf74

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
