// 函数: sub_4547f0
// 地址: 0x4547f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b792c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = *arg2
arg1[1] = &debugfile::CObjectType::`vftable'
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_401ff0(&arg1[4], &arg2[4], 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_401ff0(&arg1[0xa], &arg2[0xa], 0, 0xffffffff)
var_4.b = 1
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
int32_t eax_9
eax_9.b = arg2[0x12].b
arg1[0x12].b = eax_9.b
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
sub_401ff0(&arg1[0x15], &arg2[0x15], 0, 0xffffffff)
var_4.b = 2
arg1[0x20] = 0xf
arg1[0x1f] = 0
arg1[0x1b].b = 0
sub_401ff0(&arg1[0x1b], &arg2[0x1b], 0, 0xffffffff)
var_4.b = 3
arg1[0x26] = 0xf
arg1[0x25] = 0
arg1[0x21].b = 0
sub_401ff0(&arg1[0x21], &arg2[0x21], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
