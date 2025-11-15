// 函数: ??_G?$basic_ios@GU?$char_traits@G@std@@@std@@UAEPAXI@Z
// 地址: 0x589a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != arg2)
    int32_t eax_3 = *arg2
    *arg2 = 0
    int32_t* ecx_1 = *arg1
    *arg1 = eax_3
    
    if (ecx_1 != 0)
        int32_t var_8_1 = 0
        (*(*ecx_1 + 0x1c))(1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
