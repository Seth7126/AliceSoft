// 函数: sub_5d95b0
// 地址: 0x5d95b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** edx = *(arg2 + 0x14)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg2 + 0xc) s< &edx[1])
    result.b = 0
else
    int32_t eax_5
    
    if (*(arg2 + 0xc) != 0)
        eax_5 = *(arg2 + 8)
    else
        eax_5 = 0
    
    result = *(edx + eax_5)
    *(arg2 + 0x14) = &edx[1]
    
    if (result s>= 0)
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        int32_t var_4 = 0
        void* ebx
        int32_t var_50
        
        if (sub_5d7a10(arg2, &var_44).b == 0)
            ebx.b = 0
        else
            int32_t var_48
            
            if (sub_5d7960(arg2, &var_50).b == 0)
                ebx.b = 0
            else
                int32_t var_4c
                
                if (sub_5d7960(arg2, &var_48).b == 0)
                    ebx.b = 0
                else if (sub_5bd940(arg3 + 0x48, &var_44, &var_4c).b == 0)
                    ebx.b = 0
                else
                    result = sub_5bd900(arg3 + 0x48, var_4c)
                    
                    if (result == 0)
                        ebx.b = 0
                    else
                        int32_t edx_1 = var_48
                        
                        if (result[0xe] == edx_1)
                            ebx.b = 1
                            *arg4 = result[1] + var_50
                        else
                            char* eax_6 = &var_44
                            int32_t var_6c_6 = edx_1
                            
                            if (var_30_1 u>= 0x10)
                                eax_6 = var_44.d
                            
                            *(arg1 + 0x10) = 1
                            int32_t var_70_2 = result[0xe]
                            char* var_74_1 = eax_6
                            void var_2c
                            sub_408340(arg1 + 0x14, sub_4691f0(&var_2c, 0x6ea924))
                            sub_401fb0(&var_2c)
                            ebx.b = 0
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        result.b = ebx.b
    else
        *arg4 = result
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
