// 函数: sub_4247e0
// 地址: 0x4247e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0xe0)
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t __saved_edi

if (arg2 s< 0)
    result.b = 0
else if (arg2 s>= (*(**(esi + 8) + 0x2c))(__security_cookie ^ &__saved_edi))
    result.b = 0
else
    int32_t eax_9 = (*(**(esi + 8) + 0x30))((*(**(esi + 8) + 0x2c))() - 1 - arg2 - 1)
    int32_t var_20_1 = 0xf
    int32_t var_24_1 = 0
    var_34 = 0
    int32_t var_c_1 = 0
    sub_42d9c0(*(arg1 + 0xe0), arg2, &var_34)
    sub_4057c0(&var_34, 0x6da9b0, 2)
    sub_423ef0(*(arg1 + 0xe4), eax_9, &var_34, 1)
    *(arg1 + 0xec) = arg2
    
    if (var_20_1 u>= 0x10)
        j__free(var_34.d)
    
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
