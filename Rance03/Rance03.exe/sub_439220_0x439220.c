// 函数: sub_439220
// 地址: 0x439220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6068
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 8)
int32_t var_30 = 0

if (*edx == 0x27)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    void* i = &edx[1]
    int32_t var_4 = 0
    *(arg1 + 8) = i
    
    for (; *(arg1 + 0x10) u> i; i = *(arg1 + 8))
        char eax_5 = *i
        char var_4c_2
        
        if ((eax_5 u< 0x81 || eax_5 u> 0x9f) && (eax_5 u< 0xe0 || eax_5 u> 0xef))
            if (eax_5 == 0xd)
                break
            
            if (eax_5 == 0xa)
                break
            
            if (eax_5 != 0x5c)
                if (eax_5 == 0x27)
                    *(arg1 + 8) = i + 1
                    break
                
                sub_4031c0(&var_2c, 1, eax_5)
            else
                *(arg1 + 8) = i + 1
                
                if (*(arg1 + 0x10) u<= i + 1 || *(i + 1) != 0x27)
                    sub_4031c0(&var_2c, 1, 0x5c)
                    sub_4031c0(&var_2c, 1, **(arg1 + 8))
                    char* ecx_5 = *(arg1 + 8)
                    eax_5 = *ecx_5
                    
                    if (eax_5 u>= 0x81 && eax_5 u<= 0x9f)
                    label_439344:
                        *(arg1 + 8) = &ecx_5[1]
                        
                        if (*(arg1 + 0x10) u> &ecx_5[1])
                            void* eax_9
                            eax_9.b = ecx_5[1]
                            var_4c_2 = eax_9.b
                        else
                            var_4c_2 = 0
                        
                        sub_4031c0(&var_2c, 1, var_4c_2)
                    else if (eax_5 u>= 0xe0 && eax_5 u<= 0xef)
                        goto label_439344
                else
                    sub_4031c0(&var_2c, 1, 0x27)
        else
            sub_4031c0(&var_2c, 1, eax_5)
            *(arg1 + 8) += 1
            char* eax_6 = *(arg1 + 8)
            
            if (*(arg1 + 0x10) u> eax_6)
                eax_6.b = *eax_6
                var_4c_2 = eax_6.b
            else
                var_4c_2 = 0
            
            sub_4031c0(&var_2c, 1, var_4c_2)
        *(arg1 + 8) += 1
    
    *arg2 = &advengine::CToken::`vftable'
    arg2[1] = 5
    arg2[7] = 0xf
    arg2[6] = 0
    arg2[2].b = 0
    sub_401ff0(&arg2[2], &var_2c, 0, 0xffffffff)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
else
    sub_438820(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return arg2
