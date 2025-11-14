// 函数: sub_676db0
// 地址: 0x676db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x38) = 0
*(arg1 + 0x1d0) = 0
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x701ec0, 0x28)
int32_t var_4 = 0
int32_t result = sub_412d60(arg2, &var_28)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
