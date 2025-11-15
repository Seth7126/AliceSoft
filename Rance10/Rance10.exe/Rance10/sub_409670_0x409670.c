// 函数: sub_409670
// 地址: 0x409670
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
    
    if (eax_3 u>= 0x10)
        sub_403160(*arg1, eax_3 + 1, 1)
    
    arg1[5] = 0xf
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = 0
    int32_t* eax_5
    
    if (cond:0_1)
        eax_5 = arg1
    else
        eax_5 = *arg1
    
    *eax_5 = 0
    sub_4056a0(arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
