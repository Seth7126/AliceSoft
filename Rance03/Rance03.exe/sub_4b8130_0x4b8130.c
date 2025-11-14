// 函数: sub_4b8130
// 地址: 0x4b8130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdb6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_esi
int32_t var_b0 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = 0xf
int32_t var_7c = 0
char var_8c = 0
sub_402110(&var_8c, 0x6da317, nullptr)
int32_t var_4 = 0
int32_t var_90 = 0xf
int32_t var_94 = 0
char var_a4 = 0
sub_402110(&var_a4, 0x6da357, nullptr)
var_4.b = 1
int32_t var_74 = 0
int32_t var_70 = 1
void var_6c
sub_50b6e0(&var_6c, &var_a4, arg2, arg2, &var_8c)
var_4.b = 2
sub_4bd150(arg1 + 0x1a8, &var_74)
int32_t result = sub_4b7cf0(&var_6c)

if (var_90 u>= 0x10)
    result = j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94_1 = 0
var_a4 = 0

if (var_78 u>= 0x10)
    result = j__free(var_8c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a8)
return result
