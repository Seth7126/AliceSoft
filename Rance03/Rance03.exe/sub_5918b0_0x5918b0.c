// 函数: sub_5918b0
// 地址: 0x5918b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c83e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ISurface::sealengine::CResourceSurface::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct ISurface::sealengine::CResourceSurface::VTable** var_10_1 = arg1
*arg1 = &sealengine::CResourceSurface::`vftable'{for `ISurface'}
int32_t var_4 = 1
int32_t* ecx = arg1[5]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[5] = 0

if (arg1[0xb] u>= 0x10)
    result = j__free(arg1[6])

arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
int32_t var_4_1 = 0xffffffff
arg1[1] = &thread::CRefCounter::`vftable'
int32_t* ecx_1 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    result = (**ecx_1)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
