// 函数: sub_475e50
// 地址: 0x475e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9e31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct kiwi::CSactSound::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSactSound::VTable** var_10_1 = arg1
*arg1 = &kiwi::CSactSound::`vftable'
sub_476a90(&arg1[1])
int32_t var_4 = 0
arg1[0x16] = &kiwi::CSoundChannelList::`vftable'
arg1[0x17] = 0
arg1[0x18] = 0
sub_473220(&arg1[0x19])
var_4.b = 1
arg1[0x1e] = &kiwi::CLowLevelChannelList::`vftable'
arg1[0x1f] = 0
sub_46f200(&arg1[0x20])
var_4.b = 2
arg1[0x25] = &kiwi::CHighLevelChannelList::`vftable'
arg1[0x26] = 0
sub_46ed10(&arg1[0x27])
arg1[0x2c] = 0
arg1[0x2d].b = 1
arg1[0x2e] = arg2
arg1[0x2f].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
