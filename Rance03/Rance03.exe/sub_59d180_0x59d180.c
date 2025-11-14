// 函数: sub_59d180
// 地址: 0x59d180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_40 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
void var_30
char eax_5 = sub_59ce30(&var_2c, &var_30)
int32_t result

if (eax_5 != 0)
    result = sub_40c250(&var_2c, arg2)

int32_t ebx

if (eax_5 != 0 && result.b != 0)
    ebx.b = 1
else
    ebx.b = 0
    *(arg1 + 4) = *(arg1 + 8)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
