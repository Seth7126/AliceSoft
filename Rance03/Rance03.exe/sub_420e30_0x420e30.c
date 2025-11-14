// 函数: sub_420e30
// 地址: 0x420e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b498b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = arg2
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
sub_401ff0(&arg1[1], arg3, 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_401ff0(&arg1[7], arg4, 0, 0xffffffff)
arg1[0xd] = arg5
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
