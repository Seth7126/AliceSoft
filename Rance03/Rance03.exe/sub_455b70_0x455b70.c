// 函数: sub_455b70
// 地址: 0x455b70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7b36
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDrawPluginManager::drawpluginmanager::CApp::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &drawpluginmanager::CApp::`vftable'{for `IDrawPluginManager'}
int32_t var_4 = 1
sub_455c10(arg1)
arg1[8] = &drawpluginmanager::CGUIDManager::`vftable'
int32_t** eax_3 = arg1[9]
sub_4200d0(&arg1[9], &var_10, *eax_3, eax_3)
j__free(arg1[9])
int32_t result = arg1[4]

if (result != 0)
    result = j__free(result)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
