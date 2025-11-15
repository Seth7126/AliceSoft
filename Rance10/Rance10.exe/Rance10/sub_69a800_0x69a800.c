// 函数: sub_69a800
// 地址: 0x69a800
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
int32_t* esi = *arg1

if (esi != 0)
    int32_t var_8_1 = 0
    Concurrency::details::_Release_chore(esi)
    int32_t var_20_1 = 0x14
    result = operator new(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
