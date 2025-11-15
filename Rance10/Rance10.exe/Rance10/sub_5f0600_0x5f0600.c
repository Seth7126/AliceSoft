// 函数: sub_5f0600
// 地址: 0x5f0600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741a9f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IGraphPlugin::sealengine::CApp::VTable*** var_14 = arg1
int32_t var_18 = 0
struct IGraphPlugin::sealengine::CApp::VTable** eax_3 = sub_6e810c(0x64)
struct IGraphPlugin::sealengine::CApp::VTable** var_14_1 = eax_3
int32_t var_8_1 = 0
*arg1 = sub_565930(eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
