// 函数: sub_58d4c0
// 地址: 0x58d4c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7cda
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CResourceManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CResourceManager::VTable** var_10_1 = arg1
*arg1 = &sealengine::CResourceManager::`vftable'
arg1[1].b = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4 = 0
arg1[8] = arg2
arg1[9] = arg3
arg1[0xa] = arg4
arg1[0xb] = arg5
sub_525010(&arg1[0xc])
var_4.b = 1
arg1[0x18] = 0
arg1[0x19] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[0x1a] = edi
var_4.b = 2
arg1[0x1b] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_1 = sub_69adc6(0x1c)

if (edi_1 == 0)
    edi_1 = nullptr
else
    *edi_1 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_1[1])

arg1[0x1c] = edi_1
var_4.b = 3
arg1[0x1d] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_2 = sub_69adc6(0x1c)

if (edi_2 == 0)
    edi_2 = nullptr
else
    *edi_2 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_2[1])

arg1[0x1e] = edi_2
var_4.b = 4
arg1[0x1f] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi_3 = sub_69adc6(0x1c)

if (edi_3 == 0)
    edi_3 = nullptr
else
    *edi_3 = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi_3[1])

arg1[0x20] = edi_3
var_4.b = 5
sub_5907b0(&arg1[0x21])
var_4.b = 6
sub_590d90(&arg1[0x28])
var_4.b = 7
sub_5910f0(&arg1[0x2f])
var_4.b = 8
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x36] = sub_42f580()
var_4.b = 9
int32_t* ecx_8 = arg1[8]

if (ecx_8 != 0)
    (**ecx_8)(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
