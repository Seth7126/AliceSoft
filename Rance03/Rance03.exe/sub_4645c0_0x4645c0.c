// 函数: sub_4645c0
// 地址: 0x4645c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8d70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (arg3 s>= 0 && arg4 != 0)
    int32_t* esi_1 = nullptr
    var_44 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_c_1 = 0
    int32_t var_34
    sub_401f60(&var_34, arg2)
    var_c_1.b = 1
    void* eax_5 = sub_460d20(arg1 + 8, &var_34)
    
    if (eax_5 != 0)
        sub_468360(eax_5, &var_44)
        esi_1 = var_44
    
    var_c_1.b = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    int32_t* ebx
    
    if ((var_40_1 - esi_1) s/ 0x18 s> arg3)
        int32_t eax_9 = arg3 * 3
        void* ecx_6 = &esi_1[eax_9 * 2]
        
        if (esi_1[eax_9 * 2 + 5] u>= 0x10)
            ecx_6 = *ecx_6
        
        (*(*arg4 + 4))(ecx_6)
        ebx.b = 1
    else
        ebx.b = 0
    
    if (esi_1 != 0)
        sub_4107c0(esi_1, var_40_1)
        j__free(esi_1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
