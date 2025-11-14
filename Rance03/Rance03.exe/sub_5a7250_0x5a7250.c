// 函数: sub_5a7250
// 地址: 0x5a7250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* var_34
int32_t eax_2 = __security_cookie ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 s< 0)
    result.b = 0
else
    void* esi_1 = data_75d508
    
    if (arg3 s>= (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        result.b = 0
    else
        void* ecx = (*(esi_1 + 0x50))[arg3]
        
        if (ecx == 0 || arg2 s< 0 || arg2 s>= (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            result.b = 0
        else
            void* esi_2 = (*(ecx + 0x1c))[arg2]
            
            if (esi_2 == 0)
                result.b = 0
            else
                void* esi_3 = *(esi_2 + 0x1d8)
                
                if (esi_3 == 0)
                    result.b = 0
                else
                    int32_t __saved_edi
                    sub_401f60(&var_34, (**arg4)(__security_cookie ^ &__saved_edi))
                    int32_t var_c_1 = 0
                    int32_t ebx
                    
                    if (sub_5619a0(esi_3, &var_34).b != 0)
                        if (esi_3 + 0x44 != &var_34)
                            sub_401ff0(esi_3 + 0x44, &var_34, 0, 0xffffffff)
                        
                        ebx.b = 1
                    else
                        ebx.b = 0
                    
                    int32_t var_20
                    
                    if (var_20 u>= 0x10)
                        j__free(var_34)
                    
                    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
