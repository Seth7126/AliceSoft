// 函数: sub_50b6e0
// 地址: 0x50b6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = arg3
arg1[1] = arg4
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], arg2, 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_401ff0(&arg1[8], arg5, 0, 0xffffffff)
arg1[0xe].b = 0
__builtin_memset(&arg1[0xf], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
