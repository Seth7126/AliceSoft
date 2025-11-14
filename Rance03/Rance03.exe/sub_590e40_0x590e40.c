// 函数: sub_590e40
// 地址: 0x590e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8351
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CResourceCacheManager<class sealengine::CMotionData>::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &sealengine::CResourceCacheManager<class sealengine::CMotionData>::`vftable'
int32_t var_4 = 2
sub_590910(arg1)
int32_t** eax_3 = arg1[5]
sub_417e10(&arg1[5], &var_10, *eax_3, eax_3)
j__free(arg1[5])
int32_t** eax_4 = arg1[3]
sub_417e10(&arg1[3], &var_10, *eax_4, eax_4)
int32_t result = j__free(arg1[3])
int32_t var_4_1 = 0xffffffff
int32_t* ecx_2 = arg1[2]
arg1[1] = &thread::CCriticalSection::`vftable'

if (ecx_2 != 0)
    result = (**ecx_2)(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
