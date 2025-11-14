// 函数: sub_462f30
// 地址: 0x462f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg2

if (arg4 != 0)
    int32_t var_34
    sub_401f60(&var_34, result)
    int32_t var_c_1 = 0
    void* eax_5 = sub_4612f0(arg1 + 8, &var_34)
    
    if (eax_5 == 0)
        eax_5 = arg1 + 0x94
    
    char* ecx_3 = sub_460990(eax_5, &var_4c, arg3)
    var_c_1.b = 1
    
    if (*(ecx_3 + 0x14) u>= 0x10)
        ecx_3 = *ecx_3
    
    result = (*(*arg4 + 4))(ecx_3)
    int32_t var_38
    
    if (var_38 u>= 0x10)
        result = j__free(var_4c.d)
    
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 0x10)
        result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
