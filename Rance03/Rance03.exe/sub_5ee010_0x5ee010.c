// 函数: sub_5ee010
// 地址: 0x5ee010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b6270
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg4

if (arg3 != 0 && arg5 != 0 && arg2 != 0 && result != 0)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    char var_34 = 0
    int32_t var_c_1 = 0
    int32_t var_38_1 = 0xf
    int32_t var_3c_1 = 0
    char var_4c = 0
    var_c_1.b = 1
    sub_6996f0(result, arg2, &var_34, result, &var_4c)
    char* edx = &var_34
    
    if (var_20_1 u>= 0x10)
        edx = var_34.d
    
    (*(*arg3 + 4))(edx)
    char* edx_1 = &var_4c
    
    if (var_38_1 u>= 0x10)
        edx_1 = var_4c.d
    
    (*(*arg5 + 4))(edx_1)
    sub_401fb0(&var_4c)
    result = sub_401fb0(&var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
