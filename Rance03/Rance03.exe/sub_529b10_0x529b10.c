// 函数: sub_529b10
// 地址: 0x529b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3652
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_10_1 = arg1
*arg1 = &sealengine::CBillboard::`vftable'{for `sealengine::CDrawInstance'}
int32_t var_4 = 5
sub_52a120(arg1)

if (arg1[0x1b] u>= 0x10)
    j__free(arg1[0x16])

arg1[0x1b] = 0xf
arg1[0x1a] = 0
arg1[0x16].b = 0
int32_t eax_3 = arg1[0x13]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x13] = 0
    arg1[0x14] = 0
    arg1[0x15] = 0

int32_t eax_4 = arg1[0x10]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t eax_5 = arg1[0xb]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

int32_t result = arg1[8]

if (result != 0)
    result = j__free(result)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t var_4_1 = 0xffffffff
int32_t* ecx = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    result = (**ecx)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
