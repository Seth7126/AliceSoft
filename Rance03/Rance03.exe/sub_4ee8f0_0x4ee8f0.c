// 函数: sub_4ee8f0
// 地址: 0x4ee8f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_40
int32_t eax_2 = __security_cookie ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg5 != 0)
    int32_t __saved_edi
    char var_28
    sub_401f60(&var_28, (**arg2)(__security_cookie ^ &__saved_edi))
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = sub_4a9b10(&var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0
    
    if (edi_1 == 0)
        result.b = 0
    else
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        var_40 = 0
        int32_t var_4 = 0
        int32_t* ebx
        
        if (sub_4c9b50(edi_1, arg3, &var_40, arg5).b != 0)
            char* edx = &var_40
            
            if (var_2c_1 u>= 0x10)
                edx = var_40.d
            
            (*(*arg4 + 4))(edx)
            ebx.b = 1
        else
            ebx.b = 0
        
        if (var_2c_1 u>= 0x10)
            j__free(var_40.d)
        
        result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
