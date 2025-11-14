// 函数: sub_455ab0
// 地址: 0x455ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7afb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDrawPluginManager::drawpluginmanager::CApp::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDrawPluginManager::drawpluginmanager::CApp::VTable** var_10_1 = arg1
*arg1 = &drawpluginmanager::CApp::`vftable'{for `IDrawPluginManager'}
arg1[1] = &drawpluginmanager::CFinalizer<class drawpluginmanager::CApp>::`vftable'{for `IInterface'}
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_4 = 0
arg1[7] = 1
arg1[8] = &drawpluginmanager::CGUIDManager::`vftable'
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_456250()
arg1[2] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
