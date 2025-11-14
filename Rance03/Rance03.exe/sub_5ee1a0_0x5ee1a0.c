// 函数: sub_5ee1a0
// 地址: 0x5ee1a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34 = 0
    int32_t var_c_1 = 0
    sub_699af0(&var_34)
    char* edx_1 = &var_34
    
    if (var_20_1 u>= 0x10)
        edx_1 = var_34.d
    
    result = (*(*arg1 + 4))(edx_1)
    
    if (var_20_1 u>= 0x10)
        result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
