// 函数: sub_58d6a0
// 地址: 0x58d6a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7d7a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CResourceManager::VTable** var_14 = arg1
*arg1 = &sealengine::CResourceManager::`vftable'
int32_t var_4 = 9
sub_58d9d0(arg1)
sub_5255b0(&arg1[0xc])
int32_t* ecx_1 = arg1[0xa]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[0xa] = 0

int32_t* ecx_2 = arg1[8]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[8] = 0

int32_t* ecx_3 = arg1[0x18]

if (ecx_3 != 0)
    (**ecx_3)(1)

arg1[0x18] = 0
int32_t** eax_6 = arg1[0x36]
void var_10
sub_417e10(&arg1[0x36], &var_10, *eax_6, eax_6)
j__free(arg1[0x36])
var_4.b = 7
sub_5911a0(&arg1[0x2f])
var_4.b = 6
sub_590e40(&arg1[0x28])
var_4.b = 5
sub_590860(&arg1[0x21])
var_4.b = 4
int32_t* ecx_8 = arg1[0x20]
arg1[0x1f] = &thread::CCriticalSection::`vftable'

if (ecx_8 != 0)
    (**ecx_8)(1)

var_4.b = 3
int32_t* ecx_9 = arg1[0x1e]
arg1[0x1d] = &thread::CCriticalSection::`vftable'

if (ecx_9 != 0)
    (**ecx_9)(1)

var_4.b = 2
int32_t* ecx_10 = arg1[0x1c]
arg1[0x1b] = &thread::CCriticalSection::`vftable'

if (ecx_10 != 0)
    (**ecx_10)(1)

var_4.b = 1
int32_t* ecx_11 = arg1[0x1a]
arg1[0x19] = &thread::CCriticalSection::`vftable'

if (ecx_11 != 0)
    (**ecx_11)(1)

var_4.b = 0
int32_t result = sub_525100(&arg1[0xc])

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
