// 函数: sub_408150
// 地址: 0x408150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b31eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx != 0)
    void var_88
    (*(*ecx + 0xc))(&var_88, arg3)
    int32_t var_4 = 0
    char var_18
    int32_t ebx
    
    if (var_18 != 0)
        int32_t var_a0
        char* eax_6 = sub_4220a0(&var_88, &var_a0)
        
        if (arg2 != eax_6)
            if (arg2[5] u>= 0x10)
                j__free(*arg2)
            
            arg2[5] = 0xf
            arg2[4] = 0
            *arg2 = 0
            sub_4030b0(arg2, eax_6)
        
        int32_t var_8c
        
        if (var_8c u>= 0x10)
            j__free(var_a0)
        
        ebx.b = 1
    else
        ebx.b = 0
    
    sub_405be0(&var_88)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return result
