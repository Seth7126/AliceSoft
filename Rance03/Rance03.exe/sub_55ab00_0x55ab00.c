// 函数: sub_55ab00
// 地址: 0x55ab00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c523c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CParticleEffect::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleEffect::VTable** var_10_1 = arg1
*arg1 = &sealengine::CParticleEffect::`vftable'
int32_t var_4 = 3
sub_55aeb0(arg1)

if (arg1[0x16] u>= 0x10)
    j__free(arg1[0x11])

arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0

if (arg1[0x10] u>= 0x10)
    j__free(arg1[0xb])

arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
var_4.b = 0
int32_t result = sub_566160(&arg1[5])
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
