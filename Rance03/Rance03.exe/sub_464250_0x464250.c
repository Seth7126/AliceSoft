// 函数: sub_464250
// 地址: 0x464250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b8c28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg2
var_6c = arg4

if (arg5 != 0)
    char var_64
    sub_401f60(&var_64, result)
    int32_t var_c_1 = 0
    void* edi_1 = sub_4612f0(arg1 + 8, &var_64)
    
    if (edi_1 == 0)
        edi_1 = arg1 + 0x94
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_50
    
    if (var_50 u>= 0x10)
        j__free(var_64.d)
    
    char* var_80_4 = var_6c
    int32_t var_50_1 = 0xf
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_4c
    sub_401f60(&var_4c, var_80_4)
    int32_t var_c_3 = 1
    int32_t eax_6 = sub_45eea0(edi_1 + 0x30, &var_4c)
    int32_t var_c_4 = 0xffffffff
    int32_t var_38
    
    if (var_38 u>= 0x10)
        j__free(var_4c)
    
    int32_t var_34
    char* ecx_7 = sub_4609d0(edi_1, &var_34, arg3, eax_6)
    int32_t var_c_5 = 2
    
    if (*(ecx_7 + 0x14) u>= 0x10)
        ecx_7 = *ecx_7
    
    result = (*(*arg5 + 4))(ecx_7)
    int32_t var_20
    
    if (var_20 u>= 0x10)
        result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
