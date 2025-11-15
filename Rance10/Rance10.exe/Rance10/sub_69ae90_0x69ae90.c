// 函数: sub_69ae90
// 地址: 0x69ae90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x75) == 0
*arg1 = &std::_Associated_state<bool>::`vftable'

if (not(cond:0) && arg1[0x1c] == 0)
    __Cnd_unregister_at_thread_exit(&arg1[5])

__Cnd_destroy_in_situ(&arg1[0x11])
__Mtx_destroy_in_situ(&arg1[5])
__ExceptionPtrDestroy(&arg1[3])

if ((arg2 & 1) != 0)
    int32_t var_1c_3 = 0x7c
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
