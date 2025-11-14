// 函数: sub_5263f0
// 地址: 0x5263f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_10_1 = arg1
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
int32_t var_4 = 0
*(arg1 + 0x18) = &sealengine::CAARData::`vftable'
*(arg1 + 0x1c) = *(arg3 + 4)
*(arg1 + 0x20) = *(arg3 + 8)
*(arg1 + 0x24) = *(arg3 + 0xc)
*(arg1 + 0x3c) = 0xf
*(arg1 + 0x38) = 0
arg1[0x28] = 0
sub_401ff0(&arg1[0x28], arg3 + 0x10, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
