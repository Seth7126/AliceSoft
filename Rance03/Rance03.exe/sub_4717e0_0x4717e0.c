// 函数: sub_4717e0
// 地址: 0x4717e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b98f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg3
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
int32_t var_10 = 0
*arg3 = 0
sub_401ff0(arg3, arg2, 0, 0xffffffff)
int32_t var_4 = 0
*(arg3 + 0x2c) = 0xf
*(arg3 + 0x28) = 0
arg3[0x18] = 0
sub_401ff0(&arg3[0x18], arg4, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
