// 函数: sub_570350
// 地址: 0x570350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c65fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CParticleObjectView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleObjectView::VTable** var_10_1 = arg1
*arg1 = &sealengine::CParticleObjectView::`vftable'
arg1[1] = 0
sub_535f80(&arg1[2])
int32_t var_4 = 0
arg1[0x9d].b = 0
__builtin_memset(&arg1[0x9e], 0, 0x94)
arg1[0xc3] = 0xffffffff
arg1[0xc4] = 0
arg1[0xc5] = 0
arg1[0xc6] = 0
sub_556be0(&arg1[0xc7])
arg1[0xde] = 0
arg1[0xdf] = 0
arg1[0xe0] = 0
arg1[0xe1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
