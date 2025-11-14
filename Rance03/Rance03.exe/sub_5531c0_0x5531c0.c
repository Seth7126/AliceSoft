// 函数: sub_5531c0
// 地址: 0x5531c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4e66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** var_10_1 = arg1
*arg1 = &sealengine::CMotionObject::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 1
arg1[2] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[3] = edi
int32_t var_4 = 0
arg1[4].b = 0
arg1[5] = 0
arg1[6] = &sealengine::CMaterialList::`vftable'
arg1[7] = 0
arg1[8] = 0
arg1[7] = sub_4203c0()
var_4.b = 1
sub_549990(&arg1[9])
__builtin_memset(&arg1[0x13], 0, 0x18)
arg1[0x19] = 0x3f800000
arg1[0x1a] = 0x3f800000
arg1[0x1b] = 0x3f800000
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
EnumC13Lines::EnumC13Lines(&arg1[0x1f])
EnumC13Lines::EnumC13Lines(&arg1[0x2f])
arg1[0x3f] = 0xffffffff
arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x46] = &sealengine::CMatrixList::`vftable'{for `IMatrixList'}
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x42] = 0
__builtin_memset(&arg1[0x47], 0, 0x12)
arg1[0x4c] = 0x3f000000
arg1[0x4d].b = 0
arg1[0x4e] = &sealengine::CDebugNormal::`vftable'
arg1[0x4f] = 0
arg1[0x50].b = 0
arg1[0x51] = &sealengine::CSphereVolume::`vftable'
__builtin_memset(&arg1[0x52], 0, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
