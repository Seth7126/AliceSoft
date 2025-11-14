// 函数: sub_52df70
// 地址: 0x52df70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c38ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_2c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CCombineSurface::VTable** var_24 = arg1
*arg1 = &sealengine::CCombineSurface::`vftable'
arg1[1] = arg2
arg1[2] = arg3
arg1[3].w = 0
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
int32_t var_4 = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
struct sealengine::CRect::VTable* const var_20 = &sealengine::CRect::`vftable'
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = arg2
int32_t var_10 = arg3
var_4.b = 2
sub_52e6d0(&arg1[4], &var_20)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
