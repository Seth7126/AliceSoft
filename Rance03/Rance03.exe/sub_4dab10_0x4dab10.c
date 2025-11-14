// 函数: sub_4dab10
// 地址: 0x4dab10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bfbab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_a4_1 = sub_4d9970(&var_94, arg2 - 0x84)
int32_t var_4 = 0
sub_4dacc0(&var_94, arg2 - 0x84, arg3, arg2 - 0x84, &var_94, arg4)
void var_64
int32_t result = sub_4b7cf0(&var_64)
int32_t var_68
char var_7c

if (var_68 u>= 0x10)
    result = j__free(var_7c.d)
int32_t var_68_1 = 0xf
int32_t var_6c = 0
char var_7c_1 = 0
int32_t var_80

if (var_80 u>= 0x10)
    result = j__free(var_94)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
