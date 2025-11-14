// 函数: sub_5f2230
// 地址: 0x5f2230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbf4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CTextSpriteManager::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct chipmunk::CTextSpriteManager::VTable** var_10_1 = arg1
*arg1 = &chipmunk::CTextSpriteManager::`vftable'
arg1[1] = 0
arg1[2] = 0
arg1[1] = sub_5f3270()
int32_t var_4 = 0
arg1[3] = 0
arg1[4] = 0x1000000
arg1[5] = 0x800000
sub_5f11b0(&arg1[6])
arg1[0x5a] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
