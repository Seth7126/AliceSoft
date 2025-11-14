// 函数: sub_5e0970
// 地址: 0x5e0970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c51ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys40::CDebugPlugin::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys40::CDebugPlugin::VTable** var_10_1 = arg1
*arg1 = &sys40::CDebugPlugin::`vftable'
int32_t var_4 = 0
sub_5e0c70(arg1)
int32_t eax_3 = arg1[1]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
