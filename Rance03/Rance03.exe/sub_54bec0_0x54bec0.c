// 函数: sub_54bec0
// 地址: 0x54bec0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4b83
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CMotionData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CMotionData::VTable** var_10_1 = arg1
*arg1 = &sealengine::CMotionData::`vftable'
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
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_401ff0(&arg1[4], arg2, 0, 0xffffffff)
arg1[0xa] = arg3
__builtin_memset(&arg1[0xb], 0, 0x3c)
var_4.b = 5
arg1[0x18] = sub_458490()
var_4.b = 6
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1a] = sub_458490()
var_4.b = 7
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1c] = sub_458490()
var_4.b = 8
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x1e] = sub_458490()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
