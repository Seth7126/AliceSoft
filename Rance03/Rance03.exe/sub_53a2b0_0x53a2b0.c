// 函数: sub_53a2b0
// 地址: 0x53a2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c40a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CGameTexture::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CGameTexture::VTable** var_10_1 = arg1
*arg1 = &sealengine::CGameTexture::`vftable'
int32_t var_4 = 1
int32_t* ecx = arg1[5]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[5] = 0

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

if (arg1[0xb] u>= 0x10)
    result = j__free(arg1[6])

arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_2 != 0)
    result = (**ecx_2)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
