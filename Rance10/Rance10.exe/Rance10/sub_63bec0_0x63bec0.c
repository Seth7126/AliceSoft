// 函数: sub_63bec0
// 地址: 0x63bec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745ef6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct systemservice::CApp::VTable** var_14 = arg1
*arg1 = &systemservice::CApp::`vftable'
arg1[1].b = 0
int32_t** var_18 = &arg1[0xe]
__builtin_memset(&arg1[0xe], 0, 0x38)
arg1[0xe] = sub_44b8b0(nullptr, nullptr)
int32_t var_8_1 = 0
arg1[0x10].b = 0
sub_44a2f0(&arg1[0x11])
var_8_1.b = 1
sub_44a2f0(&arg1[0x19])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
