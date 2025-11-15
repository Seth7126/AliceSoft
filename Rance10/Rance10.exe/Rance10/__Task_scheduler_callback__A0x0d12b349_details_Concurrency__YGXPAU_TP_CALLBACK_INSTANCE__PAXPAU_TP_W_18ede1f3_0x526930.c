// 函数: ?_Task_scheduler_callback@?A0x0d12b349@details@Concurrency@@YGXPAU_TP_CALLBACK_INSTANCE@@PAXPAU_TP_WORK@@@Z
// 地址: 0x526930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg1[2]
*arg1 = &partsengine::CPartsModelBlender::SProjection::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}

if (ecx != 0)
    (**ecx)(1)

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0xc
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
