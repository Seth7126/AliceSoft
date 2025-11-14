// 函数: sub_5799b0
// 地址: 0x5799b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c696e
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
*(arg1 + 0x18) = arg2[6]
sub_579a60(&arg1[0x1c], &arg2[7])
var_4.b = 1
sub_4bf430(&arg1[0x28], &arg2[0xa])
var_4.b = 2
sub_579b10(&arg1[0x34], &arg2[0xd])
arg1[0x40] = arg2[0x10].b
arg1[0x41] = *(arg2 + 0x41)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
