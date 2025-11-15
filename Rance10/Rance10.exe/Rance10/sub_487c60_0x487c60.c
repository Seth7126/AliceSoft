// 函数: sub_487c60
// 地址: 0x487c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ef91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct kiwi::CSactSound::VTable** var_14 = arg1
*arg1 = &kiwi::CSactSound::`vftable'
sub_487df0(&arg1[1])
int32_t var_8_1 = 0
void* var_18 = &arg1[0xf]
arg1[0xf] = &kiwi::CSoundChannelList::`vftable'
arg1[0x10] = 0
arg1[0x11] = 0
sub_485ae0(&arg1[0x12])
var_8_1.b = 1
void* var_18_1 = &arg1[0x17]
arg1[0x17] = &kiwi::CLowLevelChannelList::`vftable'
arg1[0x18] = 0
sub_480650(&arg1[0x19])
var_8_1.b = 2
void* var_18_2 = &arg1[0x1e]
arg1[0x1e] = &kiwi::CHighLevelChannelList::`vftable'
arg1[0x1f] = 0
sub_47fdf0(&arg1[0x20])
arg1[0x25] = 0
arg1[0x26].b = 1
arg1[0x27] = arg2
arg1[0x28].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
