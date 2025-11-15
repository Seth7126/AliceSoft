// 函数: sub_4a8890
// 地址: 0x4a8890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4a8970(*(*arg1 + 4))
void* eax_4 = *arg1
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *arg1
*eax_5 = eax_5
void* result = *arg1
*(result + 8) = result
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
