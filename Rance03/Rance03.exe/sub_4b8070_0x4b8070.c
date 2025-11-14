// 函数: sub_4b8070
// 地址: 0x4b8070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdb28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_6c = arg3
int32_t var_68 = arg4 + arg3
void var_64
sub_50b6e0(&var_64, arg2, arg5, arg6, arg7)
int32_t var_4 = 0
sub_4bd150(arg1 + 0x1a8, &var_6c)
int32_t result = sub_4b7cf0(&var_64)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
