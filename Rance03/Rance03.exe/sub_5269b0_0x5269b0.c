// 函数: sub_5269b0
// 地址: 0x5269b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3421
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDXPlugin::sealengine::CApp::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDXPlugin::sealengine::CApp::VTable** var_10_1 = arg1
*arg1 = &sealengine::CApp::`vftable'{for `IDXPlugin'}
arg1[1] = &sealengine::CApp::`vftable'{for `IMarmotModel'}
int32_t var_4 = 2
sub_526a50(arg1)
int32_t eax_3 = arg1[0x14]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x14] = 0
    arg1[0x15] = 0
    arg1[0x16] = 0

arg1[0x12] = &sealengine::CMarmotModelEngine::`vftable'
arg1[0x13] = 0
int32_t var_4_1 = 0xffffffff
int32_t result = sub_5f45f0(&arg1[6])
fsbase->NtTib.ExceptionList = ExceptionList
return result
