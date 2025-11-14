// 函数: sub_64b7b0
// 地址: 0x64b7b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce786
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dplogviewer::CCharSurfaceManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dplogviewer::CCharSurfaceManager::VTable** var_10_1 = arg1
*arg1 = &dplogviewer::CCharSurfaceManager::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_4717b0()
int32_t var_4 = 0
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
arg1[4].b = 0
__builtin_memset(&arg1[5], 0, 0x28)
var_4.b = 1
arg1[0xf] = &win32only::CFont::`vftable'
arg1[0x10] = 0
arg1[0x11] = 0x10
arg1[0x17] = 0xf
arg1[0x16] = 0
arg1[0x12].b = 0
sub_402110(&arg1[0x12], 0x703bb8, 0xd)
arg1[0x18] = 0x190
arg1[0x19].w = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
