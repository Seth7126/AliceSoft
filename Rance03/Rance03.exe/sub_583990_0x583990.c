// 函数: sub_583990
// 地址: 0x583990
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4e66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPolyObject::`vftable'{for `sealengine::CDrawInstance'}
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
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0
EnumC13Lines::EnumC13Lines(&arg1[0x16])
__builtin_memcpy(&arg1[0x26], 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f", 
    0x1c)
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0x3f800000
arg1[0x31] = 0x3f800000
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
EnumC13Lines::EnumC13Lines(&arg1[0x35])
EnumC13Lines::EnumC13Lines(&arg1[0x45])
arg1[0x55] = 0
arg1[0x56].w = 0
*(arg1 + 0x15a) = 0
arg1[0x57] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
