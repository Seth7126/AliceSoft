// 函数: ??1_Concurrent_queue_iterator_base_v4@details@Concurrency@@IAE@XZ
// 地址: 0x44a610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[1]
*arg1 = &cgmanager::CDCFDecoder::`vftable'

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[1] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
