// 函数: sub_40db10
// 地址: 0x40db10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3671
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
sub_401ff0(&arg1[3], &arg2[3], 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0
sub_401ff0(&arg1[9], &arg2[9], 0, 0xffffffff)
var_4.b = 1
arg1[0xf] = arg2[0xf]
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
arg1[0x12] = arg2[0x12]
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
sub_401ff0(&arg1[0x13], &arg2[0x13], 0, 0xffffffff)
var_4.b = 2
sub_4101c0(&arg1[0x19], &arg2[0x19])
arg1[0x1c].b = arg2[0x1c].b
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
