// 函数: sub_463db0
// 地址: 0x463db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8d30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg2
var_6c = arg3

if (arg5 != 0)
    char var_4c
    sub_401f60(&var_4c, result)
    int32_t var_c_1 = 0
    void* esi_1 = sub_4612f0(arg1 + 8, &var_4c)
    
    if (esi_1 == 0)
        esi_1 = arg1 + 0x94
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c.d)
    
    char* var_80_4 = var_6c
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_64
    sub_401f60(&var_64, var_80_4)
    int32_t var_c_3 = 1
    int32_t var_c_4 = 0xffffffff
    var_6c = sub_457b90(esi_1 + 0x2c, &var_64)
    int32_t var_50
    
    if (var_50 u>= 0x10)
        j__free(var_64)
    
    sub_401f60(&var_64, arg4)
    int32_t var_c_5 = 2
    int32_t eax_7 = sub_45eea0(esi_1 + 0x30, &var_64)
    int32_t var_c_6 = 0xffffffff
    
    if (var_50 u>= 0x10)
        j__free(var_64)
    
    int32_t var_34
    char* ecx_9 = sub_4609d0(esi_1, &var_34, var_6c, eax_7)
    int32_t var_c_7 = 3
    
    if (*(ecx_9 + 0x14) u>= 0x10)
        ecx_9 = *ecx_9
    
    result = (*(*arg5 + 4))(ecx_9)
    int32_t var_20
    
    if (var_20 u>= 0x10)
        result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
