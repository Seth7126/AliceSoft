// 函数: sub_4b7d90
// 地址: 0x4b7d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdaee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_c8
int32_t eax_2 = __security_cookie ^ &var_c8
int32_t __saved_edi
int32_t var_dc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_c8 = arg2
int32_t var_c4 = arg5
void var_c0
sub_50b610(&var_c0, arg8, arg9, arg10)
int32_t var_4 = 0
sub_4bd150(arg1 + 0x2a4, &var_c8)
int32_t var_4_1 = 0xffffffff
sub_4b7cf0(&var_c0)
var_c8 = arg3
int32_t var_c4_1 = arg6
sub_50b610(&var_c0, arg8, arg9, arg10)
int32_t var_4_2 = 1
sub_4bd150(arg1 + 0x2c0, &var_c8)
int32_t var_4_3 = 0xffffffff
sub_4b7cf0(&var_c0)
int32_t var_6c = arg4
int32_t var_68 = arg7
void var_64
sub_50b610(&var_64, arg8, arg9, arg10)
int32_t var_4_4 = 2
sub_4bd150(arg1 + 0x2dc, &var_6c)
int32_t result = sub_4b7cf0(&var_64)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c8)
return result
