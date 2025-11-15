// 函数: sub_602e40
// 地址: 0x602e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_602c60(arg1)

if (result != 0)
    void* ecx = data_7fcbb4
    
    if (ecx != 0)
        result = sub_621db0(ecx, arg1[2])

*arg1 = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
