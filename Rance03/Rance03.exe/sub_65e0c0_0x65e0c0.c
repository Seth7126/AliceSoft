// 函数: sub_65e0c0
// 地址: 0x65e0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t var_4 = 0
int32_t arg_8
int32_t var_24 = arg_8
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_28 = arg5
sub_661520(arg5, arg2, arg3, arg4, nullptr)
sub_65afa0(&arg_8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
