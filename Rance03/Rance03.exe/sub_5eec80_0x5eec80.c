// 函数: sub_5eec80
// 地址: 0x5eec80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbc44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CDashTextSpriteCreater::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CDashTextSpriteCreater::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CDashTextSpriteCreater::`vftable'
int32_t var_4 = 2
sub_5eecf0(arg1)
sub_5f0bd0(&arg1[0x25])
sub_5f0bd0(&arg1[0x13])
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
int32_t result = sub_697220(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
