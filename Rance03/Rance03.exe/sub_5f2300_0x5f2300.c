// 函数: sub_5f2300
// 地址: 0x5f2300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbf86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct chipmunk::CTextSpriteManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &chipmunk::CTextSpriteManager::`vftable'
int32_t var_4 = 1
sub_5f2390(arg1)
sub_5f14b0(&arg1[6])
arg1[0x5a] = 0
var_4.b = 0
sub_5f13a0(&arg1[6])
int32_t* eax_3 = arg1[1]
sub_5f2f80(&arg1[1], &var_10, *eax_3, eax_3)
int32_t result = j__free(arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
