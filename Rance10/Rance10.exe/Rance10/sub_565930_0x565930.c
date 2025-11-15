// 函数: sub_565930
// 地址: 0x565930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73be16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IGraphPlugin::sealengine::CApp::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IGraphPlugin::sealengine::CApp::VTable** var_14_1 = arg1
arg1[1] = &IMarmotModel::`vftable'
*arg1 = &sealengine::CApp::`vftable'{for `IGraphPlugin'}
arg1[1] = &sealengine::CApp::`vftable'{for `IMarmotModel'}
arg1[2] = 1
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int32_t var_8_1 = 0
arg1[6] = 0
var_8_1.b = 1
sub_406210(&arg1[7])
__builtin_memset(&arg1[0x14], 0, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
