// 函数: sub_4bf370
// 地址: 0x4bf370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be041
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_10_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], &arg2[2], 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xd] = 0xf
arg1[0xc] = 0
arg1[8].b = 0
sub_401ff0(&arg1[8], &arg2[8], 0, 0xffffffff)
var_4.b = 1
arg1[0xe].b = arg2[0xe].b
sub_4bf430(&arg1[0xf], &arg2[0xf])
var_4.b = 2
sub_453d80(&arg1[0x12], &arg2[0x12])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
