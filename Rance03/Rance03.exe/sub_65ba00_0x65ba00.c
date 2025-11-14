// 函数: sub_65ba00
// 地址: 0x65ba00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf75b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d0
int32_t eax_2 = __security_cookie ^ &var_d0
int32_t __saved_edi
int32_t var_dc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_65b030(&var_d0, arg1)
int32_t var_4 = 0
sub_65dc20(arg1, arg2)
sub_65dc20(arg2, &var_d0)
int32_t result = sub_6589a0(&var_d0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_d0)
return result
