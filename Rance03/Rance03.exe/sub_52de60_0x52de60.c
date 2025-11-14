// 函数: sub_52de60
// 地址: 0x52de60
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
arg1[1] = arg2
arg1[2] = &sealengine::CRect::`vftable'
arg1[3] = *(arg3 + 4)
arg1[4] = *(arg3 + 8)
arg1[5] = *(arg3 + 0xc)
arg1[6] = *(arg3 + 0x10)
int32_t var_4 = 0
(*arg1[1]->vFunc_0)(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
