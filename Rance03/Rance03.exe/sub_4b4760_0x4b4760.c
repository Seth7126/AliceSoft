// 函数: sub_4b4760
// 地址: 0x4b4760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bd73b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIMessage::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIMessage::VTable** var_10_1 = arg1
arg1[1] = arg2
arg1[2] = arg3
*arg1 = &partsengine::CGUIMessage::`vftable'
arg1[3] = arg4
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_4 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
sub_402110(&arg1[7], 0x6da29b, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
