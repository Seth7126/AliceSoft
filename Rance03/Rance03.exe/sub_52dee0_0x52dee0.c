// 函数: sub_52dee0
// 地址: 0x52dee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c38ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CCombineSurface::CRegistedSurface::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CCombineSurface::CRegistedSurface::VTable** var_10_1 = arg1
*arg1 = &sealengine::CCombineSurface::CRegistedSurface::`vftable'
int32_t var_4 = 0
(*(arg1[1]->vFunc_0 + 4))(eax_2)
arg1[2] = &sealengine::CRect::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
