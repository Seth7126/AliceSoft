// 函数: sub_6f5e13
// 地址: 0x6f5e13
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_1c = arg1[4]
void* ecx = arg1[3]
*arg1 = &Concurrency::details::SchedulerProxy::`vftable'{for `Concurrency::ISchedulerProxy'}
Concurrency::details::ResourceManager::DestroyAllocatedNodeData(ecx, var_1c)
_free(arg1[5])
Concurrency::details::ResourceManager::Release(arg1[3])
int32_t result = sub_6ea7d7(&arg1[8])
fsbase->NtTib.ExceptionList = ExceptionList
return result
