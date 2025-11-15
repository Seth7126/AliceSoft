// 函数: sub_4c6110
// 地址: 0x4c6110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73352f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE hHandle = *(arg1 + 0x30)
enum WAIT_EVENT eax_3

if (hHandle != 0)
    eax_3 = WaitForSingleObject(hHandle, 0)

if ((hHandle == 0 || eax_3 != WAIT_TIMEOUT) && sub_4065e0(arg1 + 4) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct common::SuicideRefCounter<class ISurface>::partsengine::CConstructionThreadSurface::VTable** 
    result = sub_6e810c(0x20)
struct common::SuicideRefCounter<class ISurface>::partsengine::CConstructionThreadSurface::VTable** 
    result_1 = result
int32_t var_8_1 = 0
result[1] = 1
*result = &partsengine::CConstructionThreadSurface::`vftable'{for `common::SuicideRefCounter<class ISurface>'}
result[2] = arg1
void* var_18 = &result[3]
result[3] = &partsengine::CConstructionProcessList::`vftable'
sub_4aa260(&result[4], &arg2[1])
result[7] = 0
int32_t var_8_2 = 0xffffffff
struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class partsengine::CConstructionThreadSurface, bool>::VTable
    ** eax_8 = sub_6e810c(0x14)
arg2 = eax_8
struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class partsengine::CConstructionThreadSurface, bool>::VTable
    ** var_28_1 = sub_4cb1f0(eax_8, result)
sub_406700(arg1 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
