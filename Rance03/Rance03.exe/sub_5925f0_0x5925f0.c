// 函数: sub_5925f0
// 地址: 0x5925f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8467
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CShadowMap::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CShadowMap::VTable** var_10_1 = arg1
*arg1 = &sealengine::CShadowMap::`vftable'
int32_t var_4 = 2
sub_5928e0(arg1)
var_4.b = 1
int32_t* ecx = arg1[0xa8]
arg1[0xa7] = &sealengine::CSprite::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0xa8] = 0

arg1[0xb1].b = 0
arg1[0x39] = &sealengine::CProjection::`vftable'
int32_t var_4_1 = 0xffffffff
int32_t result = sub_52af40(&arg1[7])
fsbase->NtTib.ExceptionList = ExceptionList
return result
