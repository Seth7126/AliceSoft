// 函数: sub_586cd0
// 地址: 0x586cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7739
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CReignEngine::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CReignEngine::VTable** var_10_1 = arg1
*arg1 = &sealengine::CReignEngine::`vftable'
int32_t var_4 = 1
sub_586f40(arg1)
arg1[0x89] = &sealengine::CTimer::`vftable'
int32_t var_4_1 = 0xffffffff
sub_5879d0(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
