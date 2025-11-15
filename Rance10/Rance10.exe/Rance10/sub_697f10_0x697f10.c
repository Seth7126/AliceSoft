// 函数: sub_697f10
// 地址: 0x697f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 == 0)
    breakpoint

void* ecx = arg1[4]

if (ecx != 0)
    sub_403160(ecx, (arg1[6] - ecx) s>> 2, 4)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

void* result = __ExceptionPtrDestroy(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
