// 函数: sub_64b8d0
// 地址: 0x64b8d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce7d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dplogviewer::CCharSurfaceManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &dplogviewer::CCharSurfaceManager::`vftable'
int32_t var_4 = 2
sub_64b990(arg1)
HGDIOBJ ho = arg1[0x10]
arg1[0xf] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x10] = 0

if (arg1[0x17] u>= 0x10)
    j__free(arg1[0x12])

arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[3])
int32_t** eax_3 = arg1[1]
sub_417e10(&arg1[1], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
