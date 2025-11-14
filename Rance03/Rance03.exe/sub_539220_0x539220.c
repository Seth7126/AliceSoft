// 函数: sub_539220
// 地址: 0x539220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c401b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CFacePack::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CFacePack::VTable** var_10_1 = arg1
*arg1 = &sealengine::CFacePack::`vftable'
__builtin_memset(&arg1[1], 0, 0x14)
int32_t var_4 = 0
arg1[4] = sub_4203c0()
arg1[6] = &sealengine::CMatrixIndexList::`vftable'{for `IMatrixIndexList'}
__builtin_memset(&arg1[7], 0, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
