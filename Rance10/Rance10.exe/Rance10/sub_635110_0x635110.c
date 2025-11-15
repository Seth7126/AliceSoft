// 函数: sub_635110
// 地址: 0x635110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    int32_t eax_3 = arg1[5]
    
    if (eax_3 u>= 8)
        sub_403160(*arg1, eax_3 + 1, 2)
    
    arg1[5] = 7
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = 0
    int32_t* eax_5
    
    if (cond:0_1)
        eax_5 = arg1
    else
        eax_5 = *arg1
    
    *eax_5 = 0
    sub_631d30(arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
