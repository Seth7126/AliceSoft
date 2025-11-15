// 函数: sub_5c5450
// 地址: 0x5c5450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x20c)

if (ecx != 0)
    int32_t var_8_1 = 0
    (**ecx)(1)

int32_t result = sub_5c55c0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
