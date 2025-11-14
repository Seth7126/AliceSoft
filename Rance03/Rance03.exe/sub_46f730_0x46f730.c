// 函数: sub_46f730
// 地址: 0x46f730
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b962b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CMultiChannelSet::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CMultiChannelSet::VTable** var_10_1 = arg1
*arg1 = &kiwi::CMultiChannelSet::`vftable'
arg1[1] = arg2
arg1[2] = 0
arg1[3].b = 1
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_42f580()
int32_t var_4 = 0
arg1[6] = 0
arg1[7] = 0
arg1[6] = sub_4203c0()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
