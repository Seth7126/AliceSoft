// 函数: ??1_Init_atexit@@QAE@XZ
// 地址: 0x6e6f5f
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

while (true)
    int32_t ecx_3 = data_7e1008
    
    if (ecx_3 u>= 0xa)
        break
    
    int32_t eax_3 = *((ecx_3 << 2) + &data_7fbe24)
    data_7e1008 = ecx_3 + 1
    result = DecodePointer(eax_3)
    
    if (result != 0)
        j_sub_4033e0()
        result = result(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
