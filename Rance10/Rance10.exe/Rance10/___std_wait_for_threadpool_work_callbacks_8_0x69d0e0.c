// 函数: ___std_wait_for_threadpool_work_callbacks@8
// 地址: 0x69d0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 =
    &kiwi::CDirectSound::`vftable'{for `common::SuicideRefCounter<class kiwi::ISoundBufferFactory>'}
int32_t* ecx = arg1[7]

if (ecx != 0)
    result = (*(*ecx + 8))(ecx)
    arg1[7] = 0

int32_t* ecx_1 = arg1[3]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 8))(ecx_1)
    arg1[3] = 0

int32_t var_8_1 = 0
int32_t* ecx_2 = arg1[7]
arg1[5] = &kiwi::CNoizeStepBuf::`vftable'

if (ecx_2 != 0)
    result = (*(*ecx_2 + 8))(ecx_2)
    arg1[7] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
