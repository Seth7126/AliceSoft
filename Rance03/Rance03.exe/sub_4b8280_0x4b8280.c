// 函数: sub_4b8280
// 地址: 0x4b8280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bda93
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_cc
int32_t eax_2 = __security_cookie ^ &var_cc
int32_t __saved_ebp
int32_t var_d8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm2
var_cc = xmm2
int32_t xmm1
int32_t var_c8 = xmm1
int32_t xmm3
int32_t var_c4 = xmm3
void var_c0
sub_50b610(&var_c0, arg3, arg4, arg5)
int32_t var_4 = 0
sub_4bd150(arg1 + 0x1c4, &var_c8)
int32_t var_4_1 = 0xffffffff
sub_4b7cf0(&var_c0)
int32_t var_6c = var_cc
int32_t var_68 = arg2
void var_64
sub_50b610(&var_64, arg3, arg4, arg5)
int32_t var_4_2 = 1
sub_4bd150(arg1 + 0x1e0, &var_6c)
int32_t result = sub_4b7cf0(&var_64)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_cc)
return result
