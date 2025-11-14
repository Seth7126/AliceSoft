// 函数: sub_456810
// 地址: 0x456810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct drawpluginmanager::CPlugin::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct drawpluginmanager::CPlugin::VTable** var_10_1 = arg1
*arg1 = &drawpluginmanager::CPlugin::`vftable'
int32_t var_4 = 0
int32_t* ecx = arg1[8]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[8] = 0

arg1[1] = 0

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
