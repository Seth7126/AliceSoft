// 函数: sub_53b380
// 地址: 0x53b380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4156
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CGameTextureManager::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &sealengine::CGameTextureManager::`vftable'
int32_t var_4 = 1
sub_53b420(arg1)
var_4.b = 0
int32_t* ecx = arg1[4]
arg1[3] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

int32_t** eax_4 = arg1[1]
sub_417e10(&arg1[1], &var_10, *eax_4, eax_4)
j__free(arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
