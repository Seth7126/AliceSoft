// 函数: sub_53db30
// 地址: 0x53db30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c44b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CInstance::VTable** var_28 = arg1
*arg1 = &sealengine::CInstance::`vftable'
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
arg1[4] = 0
arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
var_4.b = 1
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_1c = 0
sub_544130(&arg1[0xb], &var_24)
var_4.b = 2
arg1[0x11] = 0x3f800000
__builtin_memset(&arg1[0x12], 0, 0x14)
int32_t var_18
int32_t* var_44_3 = &var_18
arg1[0x17] = 0x3f800000
arg1[0x18] = 0x3f800000
arg1[0x19] = 0x3f800000
var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
int32_t var_44_4 = sub_544410(&arg1[0x1a], &arg1[0x1a])
var_4.b = 3
sub_52adf0(&arg1[0x1d])
var_4.b = 4
arg1[0x20] = 0x3f800000
arg1[0x21] = 0x3f800000
arg1[0x22] = 0x3f800000
arg1[0x23] = 0x3f800000
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 0x3f800000
arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2b] = 0x3f800000
arg1[0x2c] = 0
arg1[0x2d] = 0x3f800000
arg1[0x2e] = 0
arg1[0x2f] = 0x1000001
int32_t var_30 = 1
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
sub_42f4d0(&arg1[0x30], 3, &var_30)
arg1[0x33].b = 1
sub_596c80(&arg1[0x34])
arg1[0x48] = 0
arg1[0x49] = &sealengine::CMotionState::`vftable'
__builtin_memset(&arg1[0x4a], 0, 0x18)
arg1[0x50] = &sealengine::CMotionState::`vftable'
__builtin_memset(&arg1[0x51], 0, 0x1d)
arg1[0x59] = 0
arg1[0x5a].b = 0
arg1[0x60] = 0xf
arg1[0x5f] = 0
arg1[0x5b].b = 0
arg1[0x66] = 0xf
arg1[0x65] = 0
arg1[0x61].b = 0
arg1[0x67].w = 0
__builtin_memset(&arg1[0x68], 0, 0x1c)
var_4.b = 0xb
int32_t var_2c = 0xffffffff
sub_42f4d0(&arg1[0x6c], 0x10, &var_2c)
arg1[0x72] = arg2
arg1[0x6f] = 0x41f00000
arg1[0x70] = 0
arg1[0x71].b = 0
arg1[0x73] = 0
arg1[0x74] = 0
arg1[0x75].b = 0
arg1[0x76] = 0
arg1[0x77].b = 0
arg1[0x78] = 0
arg1[0x79] = 0
arg1[0x7a] = 0
arg1[0x7f] = arg3
int32_t* eax_6 = arg1[0x1d]
arg1[0x7b] = 0x3dcccccd
arg1[0x7c] = 0x3f000000
arg1[0x7d].w = 1
arg1[0x7e] = 0
arg1[0x80] = 0
arg1[0x81] = 0
*eax_6 = 0
eax_6[1] = 0
void* eax_7 = arg1[0x1d]
*(eax_7 + 8) = 0x3f800000
*(eax_7 + 0xc) = 0
void* eax_8 = arg1[0x1d]
*(eax_8 + 0x10) = 0
*(eax_8 + 0x14) = 0x3f800000
void* eax_9 = arg1[0x1d]
*(eax_9 + 0x18) = 0x3f800000
*(eax_9 + 0x1c) = 0x3f800000
arg1[0x30][2].vFunc_0 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
