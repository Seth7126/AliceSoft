// 函数: sub_590d90
// 地址: 0x590d90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8306
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CResourceCacheManager<class sealengine::CMotionData>::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CResourceCacheManager<class sealengine::CMotionData>::VTable** var_10_1 = arg1
*arg1 = &sealengine::CResourceCacheManager<class sealengine::CMotionData>::`vftable'
arg1[1] = &thread::CCriticalSection::`vftable'
struct thread::CCriticalSection::CImpl::VTable** edi = sub_69adc6(0x1c)

if (edi == 0)
    edi = nullptr
else
    *edi = &thread::CCriticalSection::CImpl::`vftable'
    InitializeCriticalSection(&edi[1])

arg1[2] = edi
int32_t var_4 = 0
arg1[3] = 0
arg1[4] = 0
arg1[3] = sub_42f580()
var_4.b = 1
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_418350()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
