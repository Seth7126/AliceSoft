// 函数: sub_4cd7d0
// 地址: 0x4cd7d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bee78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg3
*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
int32_t var_10 = 0
*arg3 = 0
sub_401ff0(arg3, arg2, 0, 0xffffffff)
int32_t var_4 = 0
*(arg3 + 0x18) = &partsengine::CIntentData::`vftable'
sub_43f550(&arg3[0x1c], arg4 + 4)
*(arg3 + 0x28) = *(arg4 + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
