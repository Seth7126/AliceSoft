// 函数: sub_55a9e0
// 地址: 0x55a9e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c51f1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CParticleEffect::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleEffect::VTable** var_10_1 = arg1
*arg1 = &sealengine::CParticleEffect::`vftable'
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[3] = edi
int32_t var_4 = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
var_4.b = 1
arg1[8] = 0xffffffff
arg1[9] = 0xffffffff
arg1[0xa] = 0
arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0
sub_401ff0(&arg1[0xb], arg2, 0, 0xffffffff)
var_4.b = 2
arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0
sub_401ff0(&arg1[0x11], arg3, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
