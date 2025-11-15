// 函数: sub_44c410
// 地址: 0x44c410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ac9f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcb48

if (*(edi + 0x4c) != 0 && *(edi + 0x48) != 0)
    HANDLE hHandle = *(edi + 0x3c)
    enum WAIT_EVENT eax_4
    
    if (hHandle != 0)
        eax_4 = WaitForSingleObject(hHandle, 0)
    
    char eax_5
    
    if (hHandle == 0 || eax_4 != WAIT_TIMEOUT)
        eax_5 = sub_4065e0(edi + 0x10)
    
    if ((hHandle != 0 && eax_4 == WAIT_TIMEOUT) || eax_5 != 0)
        struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** 
            eax_6 = sub_6e810c(0x28)
        struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** 
            var_14_1 = eax_6
        int32_t var_8_1 = 0
        struct common::SuicideRefCounter<class ISurface>::cgmanager::CThreadSurface::VTable** 
            result = sub_44b100(eax_6, edi, arg1)
        int32_t var_8_2 = 0xffffffff
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class cgmanager::CThreadSurface, bool>::VTable
            ** eax_7 = sub_6e810c(0x14)
        arg1 = eax_7
        struct common::SuicideRefCounter<class IWorkerThread>::thread::CLockedWorkerThread<class cgmanager::CThreadSurface, bool>::VTable
            ** var_24_1 = sub_44ce50(eax_7, result)
        sub_406700(edi + 0x10)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
