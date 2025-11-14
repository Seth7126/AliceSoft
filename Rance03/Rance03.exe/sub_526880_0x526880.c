// 函数: sub_526880
// 地址: 0x526880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c33d8
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
*(arg1 + 0x18) = &sealengine::CAARData::`vftable'
*(arg1 + 0x1c) = arg2[7]
*(arg1 + 0x20) = arg2[8]
*(arg1 + 0x24) = arg2[9]
*(arg1 + 0x3c) = 0xf
*(arg1 + 0x38) = 0
arg1[0x28] = 0
sub_401ff0(&arg1[0x28], &arg2[0xa], 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
