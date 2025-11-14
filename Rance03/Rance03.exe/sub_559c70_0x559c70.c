// 函数: sub_559c70
// 地址: 0x559c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c51ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CParticleBillboardDrawer::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleBillboardDrawer::VTable** var_10_1 = arg1
*arg1 = &sealengine::CParticleBillboardDrawer::`vftable'
int32_t var_4 = 0
int32_t* ecx = arg1[4]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[4] = 0

int32_t result = arg1[1]

if (result != 0)
    result = j__free(result)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
