// 函数: sub_4d9970
// 地址: 0x4d9970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bfa03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_10_1 = arg1
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
int32_t var_4 = 0
*(arg1 + 0x2c) = 0xf
*(arg1 + 0x28) = 0
arg1[0x18] = 0
sub_401ff0(&arg1[0x18], &arg2[6], 0, 0xffffffff)
var_4.b = 1
sub_4bf370(&arg1[0x30], &arg2[0xc])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
