// 函数: sub_45fa70
// 地址: 0x45fa70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8930
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx = *(arg1 + 4)
int32_t var_30 = 0
int32_t var_18 = 0xf
char eax_5 = *ecx
int32_t var_1c = 0
char var_2c = 0

if (eax_5 == 0x22)
    void* i = &ecx[1]
    int32_t var_4_1 = 1
    *(arg1 + 4) = i
    
    for (; *(arg1 + 0xc) u> i; i = *(arg1 + 4))
        eax_5 = *i
        char var_4c_2
        
        if ((eax_5 u>= 0x81 && eax_5 u<= 0x9f) || (eax_5 u>= 0xe0 && eax_5 u<= 0xef))
            sub_4031c0(&var_2c, 1, eax_5)
            *(arg1 + 4) += 1
            char* eax_6 = *(arg1 + 4)
            
            if (*(arg1 + 0xc) u> eax_6)
                eax_6.b = *eax_6
                var_4c_2 = eax_6.b
            else
                var_4c_2 = 0
            
            goto label_45fbcd
        
        if (eax_5 == 0xd)
            break
        
        if (eax_5 == 0xa)
            break
        
        if (eax_5 != 0x5c)
            if (eax_5 == 0x22)
                *(arg1 + 4) = i + 1
                break
            
            var_4c_2 = eax_5
            goto label_45fbcd
        
        *(arg1 + 4) = i + 1
        
        if (*(arg1 + 0xc) u<= i + 1 || *(i + 1) != 0x6e)
            char* ecx_4 = &var_2c
            
            if (*(i + 1) == 0x5c)
                sub_4031c0(ecx_4, 1, 0x5c)
            else
                sub_4031c0(ecx_4, 1, 0x5c)
                sub_4031c0(&var_2c, 1, **(arg1 + 4))
                char* ecx_6 = *(arg1 + 4)
                eax_5 = *ecx_6
                
                if (eax_5 u>= 0x81 && eax_5 u<= 0x9f)
                label_45fba9:
                    *(arg1 + 4) = &ecx_6[1]
                    
                    if (*(arg1 + 0xc) u> &ecx_6[1])
                        void* eax_9
                        eax_9.b = ecx_6[1]
                        var_4c_2 = eax_9.b
                    else
                        var_4c_2 = 0
                    
                    goto label_45fbcd
                
                if (eax_5 u>= 0xe0 && eax_5 u<= 0xef)
                    goto label_45fba9
        else
            var_4c_2 = 0xa
        label_45fbcd:
            int32_t var_50_1 = 1
            sub_4031c0(&var_2c, 1, var_4c_2)
        
        *(arg1 + 4) += 1
else
    sub_402110(&var_2c, 0x6da1a5, nullptr)
    int32_t var_4 = 0

*arg2 = &exfile::CToken::`vftable'
arg2[6] = 0xf
arg2[5] = 0
arg2[1].b = 0
sub_401ff0(&arg2[1], &var_2c, 0, 0xffffffff)
arg2[8] = 0
arg2[7] = 0x11

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return arg2
