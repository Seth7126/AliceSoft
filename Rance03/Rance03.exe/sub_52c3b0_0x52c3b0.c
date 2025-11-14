// 函数: sub_52c3b0
// 地址: 0x52c3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c37eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CBoneCollisionShape::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CBoneCollisionShape::VTable** var_10_1 = arg1
*arg1 = &sealengine::CBoneCollisionShape::`vftable'
arg1[1] = &sealengine::CCollisionShape::`vftable'
arg1[2] = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[5] = *(arg2 + 0x14)
*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[8] = *(arg2 + 0x20)
arg1[9] = *(arg2 + 0x24)
int32_t var_4 = 0
arg1[0xa] = *(arg2 + 0x28)
sub_453d80(&arg1[0xb], arg2 + 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
