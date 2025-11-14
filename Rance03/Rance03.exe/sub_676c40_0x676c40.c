// 函数: sub_676c40
// 地址: 0x676c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = sub_673b90(arg2, arg3)
*(arg1 + 0x38) = 1
*(arg1 + 0x1d0) = eax_5
int32_t var_14 = 0xf
int32_t var_18 = 0
var_28 = 0
sub_402110(&var_28, 0x701e68, 0x30)
int32_t var_4 = 0
int32_t result = sub_412d60(arg4, &var_28)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
