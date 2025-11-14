// 函数: sub_4da700
// 地址: 0x4da700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bfb6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_94
int32_t eax_2 = __security_cookie ^ &var_94
int32_t __saved_edi
int32_t var_a8 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4d9970(&var_94, arg1)
int32_t var_4 = 0

if (arg1 != arg2)
    sub_401ff0(arg1, arg2, 0, 0xffffffff)

if (&arg1[6] != &arg2[6])
    sub_401ff0(&arg1[6], &arg2[6], 0, 0xffffffff)

sub_4bf900(&arg1[0xc], &arg2[0xc])

if (arg2 != &var_94)
    sub_401ff0(arg2, &var_94, 0, 0xffffffff)

char var_7c

if (&arg2[6] != &var_7c)
    sub_401ff0(&arg2[6], &var_7c, 0, 0xffffffff)

void var_64
sub_4bf900(&arg2[0xc], &var_64)
int32_t result = sub_4b7cf0(&var_64)
int32_t var_68

if (var_68 u>= 0x10)
    result = j__free(var_7c.d)

int32_t var_68_1 = 0xf
int32_t var_6c = 0
var_7c = 0
int32_t var_80

if (var_80 u>= 0x10)
    result = j__free(var_94)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_94)
return result
