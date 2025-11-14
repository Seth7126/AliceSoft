// 函数: sub_556d10
// 地址: 0x556d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5011
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CParticleBillboard::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleBillboard::VTable** var_10_1 = arg1
*arg1 = &sealengine::CParticleBillboard::`vftable'
int32_t var_4 = 2
sub_5571c0(arg1)
int32_t eax_3 = arg1[0x11]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

int32_t eax_4 = arg1[0xe]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0xe] = 0
    arg1[0xf] = 0
    arg1[0x10] = 0

int32_t result = arg1[9]

if (result != 0)
    result = j__free(result)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
