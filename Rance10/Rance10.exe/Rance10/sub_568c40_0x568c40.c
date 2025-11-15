// 函数: sub_568c40
// 地址: 0x568c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c19b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_14_1 = arg1
*arg1 = &sealengine::CBillboard::`vftable'{for `sealengine::CDrawInstance'}
arg1[1].b = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_24 = sub_562550(&arg1[5], 4)
int32_t var_8_1 = 0
sub_56a100(&arg1[8])
__builtin_memset(&arg1[0xb], 0, 0x25)
arg1[0x19] = 0xf
arg1[0x18] = 0
arg1[0x1f] = arg2
arg1[0x1a] = 0
arg1[0x1b] = 0xffffffff
arg1[0x1c] = 0x3f800000
arg1[0x1d] = 0
arg1[0x1e] = 0
int32_t* eax_4 = arg1[8]
*eax_4 = 0
eax_4[1] = 0
eax_4[2] = 0x3f800000
eax_4[3] = 0
eax_4[4] = 0
eax_4[5] = 0x3f800000
eax_4[6] = 0x3f800000
eax_4[7] = 0x3f800000
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
