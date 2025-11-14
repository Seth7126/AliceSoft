// 函数: sub_570580
// 地址: 0x570580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6639
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CParticleObjectView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CParticleObjectView::VTable** var_10_1 = arg1
*arg1 = &sealengine::CParticleObjectView::`vftable'
int32_t var_4 = 1
sub_5706e0(arg1)
var_4.b = 0
sub_556d10(&arg1[0xc7])
sub_5368b0(&arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
