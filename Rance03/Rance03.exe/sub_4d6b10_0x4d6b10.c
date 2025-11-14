// 函数: sub_4d6b10
// 地址: 0x4d6b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf926
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_9c = 0xf
int32_t var_a0 = 0
char var_b0 = 0
sub_402110(&var_b0, 0x6da557, nullptr)
int32_t var_4 = 0
var_4.b = 1
char var_98
sub_4d8690(arg1 + 0x94, sub_4d85d0(&var_98, arg2, arg2, arg3, arg3, &var_b0))
void var_68
int32_t result = sub_4b7cf0(&var_68)
int32_t var_6c
char var_80

if (var_6c u>= 0x10)
    result = j__free(var_80.d)
int32_t var_6c_1 = 0xf
int32_t var_70 = 0
char var_80_1 = 0
int32_t var_84

if (var_84 u>= 0x10)
    result = j__free(var_98.d)

int32_t var_84_1 = 0xf
int32_t var_88 = 0
var_98 = 0

if (var_9c u>= 0x10)
    result = j__free(var_b0.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
