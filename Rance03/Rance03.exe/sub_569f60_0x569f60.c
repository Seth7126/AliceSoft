// 函数: sub_569f60
// 地址: 0x569f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5ff2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CParticleEffectView::VTable** var_14 = arg1
*arg1 = &sealengine::CParticleEffectView::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 4
sub_56a400(arg1)
int32_t eax_3 = arg1[0x14]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x14] = 0
    arg1[0x15] = 0
    arg1[0x16] = 0

arg1[0xf] = &sealengine::CParticleBillboardDrawer::`vftable'
void* var_10 = &arg1[0xf]
var_4.b = 5
int32_t* ecx = arg1[0x13]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x13] = 0

int32_t eax_5 = arg1[0x10]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t result = arg1[0xc]

if (result != 0)
    result = j__free(result)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

if (arg1[0xa] u>= 0x10)
    result = j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
