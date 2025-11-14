// 函数: sub_529980
// 地址: 0x529980
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c35e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_10_1 = arg1
*arg1 = &sealengine::CBillboard::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** esi = sub_69adc6(0x1c)

if (esi == 0)
    esi = nullptr
else
    *esi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&esi[1])

arg1[3] = esi
int32_t var_4 = 0
arg1[4].b = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
int32_t var_20_2 = sub_52ada0(&arg1[8], 4)
var_4.b = 1
sub_52adf0(&arg1[0xb])
__builtin_memset(&arg1[0xe], 0, 0x21)
arg1[0x1b] = 0xf
arg1[0x1a] = 0
int32_t* eax_4 = arg1[0xb]
arg1[0x1c] = 0
arg1[0x1d] = 0xffffffff
arg1[0x1e] = 0x3f800000
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0
*eax_4 = 0
eax_4[1] = 0
void* eax_5 = arg1[0xb]
*(eax_5 + 8) = 0x3f800000
*(eax_5 + 0xc) = 0
void* eax_6 = arg1[0xb]
*(eax_6 + 0x10) = 0
*(eax_6 + 0x14) = 0x3f800000
void* eax_7 = arg1[0xb]
*(eax_7 + 0x18) = 0x3f800000
*(eax_7 + 0x1c) = 0x3f800000
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
