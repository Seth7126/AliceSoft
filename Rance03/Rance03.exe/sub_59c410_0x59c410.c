// 函数: sub_59c410
// 地址: 0x59c410
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c877b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CSurfaceTexture::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CSurfaceTexture::VTable** var_10_1 = arg1
*arg1 = &sealengine::CSurfaceTexture::`vftable'
int32_t var_4 = 0
int32_t* ecx = arg1[4]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[4] = 0

int32_t var_4_1 = 0xffffffff
int32_t* ecx_1 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_1 != 0)
    (**ecx_1)(1)

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
