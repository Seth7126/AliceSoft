// 函数: sub_6f8983
// 地址: 0x6f8983
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 0)
    int32_t i
    
    do
        int32_t* eax_3 = Concurrency::details::Security::EncodePointer(arg1[1])
        arg1[1] = *eax_3
        result = _free(eax_3)
        i = *arg1
        *arg1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
