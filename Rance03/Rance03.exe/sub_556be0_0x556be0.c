// 函数: sub_556be0
// 地址: 0x556be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4fd1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleBillboard::VTable** var_10 = arg1
*arg1 = &sealengine::CParticleBillboard::`vftable'
__builtin_memset(&arg1[1], 0, 0x1c)
arg1[8].b = 1
__builtin_memset(&arg1[9], 0, 0x20)
int32_t var_4 = 0
arg1[0xc] = 0x16
arg1[0xd] = 6
__builtin_memset(&arg1[0xe], 0, 0x18)
var_4.b = 2
int32_t eax_4 = arg1[0xc] * arg1[0xd]
arg1[0x14] = 0xffffffff
arg1[0x15] = 0
arg1[0x16] = 0
int32_t var_14 = 0
sub_420c80(&arg1[9], eax_4, &var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
