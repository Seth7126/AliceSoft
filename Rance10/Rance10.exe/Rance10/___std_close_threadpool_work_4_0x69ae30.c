// 函数: ___std_close_threadpool_work@4
// 地址: 0x69ae30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
bool result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x24)

if (ecx != 0)
    result = (*(*ecx + 0x10))(ecx != arg1)
    *(arg1 + 0x24) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
