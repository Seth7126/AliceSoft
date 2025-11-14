// 函数: sub_4061f0
// 地址: 0x4061f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2f9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_esi
int32_t var_90 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_88 = 0
void var_84
sub_40dc10(&var_84, arg1 + 4, arg3)
int32_t var_4 = 0
sub_40db10(arg2, &var_84)
sub_405be0(&var_84)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_88)
return arg2
