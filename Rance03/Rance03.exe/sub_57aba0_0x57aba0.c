// 函数: sub_57aba0
// 地址: 0x57aba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6ae6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPolyData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CPolyData::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPolyData::`vftable'
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
var_4.b = 1
arg1[0xa] = arg4
arg1[0xb] = 0x70
arg1[0xc] = &sealengine::CPolyMaterialList::`vftable'
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xd] = sub_4203c0()
arg1[0xf] = 0x3e8
__builtin_memset(&arg1[0x10], 0, 0x31)
arg1[0x21] = 0xf
arg1[0x20] = 0
arg1[0x22] = 0
arg1[0x23] = arg3
arg1[0x24] = 0
arg1[0x25] = 0
arg1[0x26] = 0
sub_53bf20(&arg1[0x27])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
